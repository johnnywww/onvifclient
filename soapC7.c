#include "soapH.h"

#ifdef __cplusplus
extern "C" {
#endif


SOAP_FMAC3 struct tt__IPv6NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, struct tt__IPv6NetworkInterfaceSetConfiguration *a, const char *type)
{
	size_t soap_flag_Enabled = 1;
	size_t soap_flag_AcceptRouterAdvert = 1;
	struct soap_blist *soap_blist_Manual = NULL;
	size_t soap_flag_DHCP = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv6NetworkInterfaceSetConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration, sizeof(struct tt__IPv6NetworkInterfaceSetConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv6NetworkInterfaceSetConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap_flag_AcceptRouterAdvert && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:AcceptRouterAdvert", &a->AcceptRouterAdvert, "xsd:boolean"))
				{	soap_flag_AcceptRouterAdvert--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->Manual == NULL)
				{	if (soap_blist_Manual == NULL)
						soap_blist_Manual = soap_new_block(soap);
					a->Manual = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_Manual, sizeof(struct tt__PrefixedIPv6Address));
					if (a->Manual == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->Manual);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:Manual", a->Manual, "tt:PrefixedIPv6Address"))
				{	a->__sizeManual++;
					a->Manual = NULL;
					continue;
				}
			}
			if (soap_flag_DHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6DHCPConfiguration(soap, "tt:DHCP", &a->DHCP, "tt:IPv6DHCPConfiguration"))
				{	soap_flag_DHCP--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Manual)
			soap_pop_block(soap, soap_blist_Manual);
		if (a->__sizeManual)
			a->Manual = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_Manual, NULL, 1);
		else
		{	a->Manual = NULL;
			if (soap_blist_Manual)
				soap_end_block(soap, soap_blist_Manual);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IPv6NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration, 0, sizeof(struct tt__IPv6NetworkInterfaceSetConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__IPv6NetworkInterfaceSetConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration);
	if (soap_out_tt__IPv6NetworkInterfaceSetConfiguration(soap, tag?tag:"tt:IPv6NetworkInterfaceSetConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv6NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__IPv6NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__IPv4NetworkInterfaceSetConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Enabled = NULL;
	a->__sizeManual = 0;
	a->Manual = NULL;
	a->DHCP = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__IPv4NetworkInterfaceSetConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->Enabled);
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
		{
			soap_embedded(soap, a->Manual + i, SOAP_TYPE_tt__PrefixedIPv4Address);
			soap_serialize_tt__PrefixedIPv4Address(soap, a->Manual + i);
		}
	}
	soap_serialize_PointerToxsd__boolean(soap, &a->DHCP);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const struct tt__IPv4NetworkInterfaceSetConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
			if (soap_out_tt__PrefixedIPv4Address(soap, "tt:Manual", -1, a->Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:DHCP", -1, &a->DHCP, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv4NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, struct tt__IPv4NetworkInterfaceSetConfiguration *a, const char *type)
{
	size_t soap_flag_Enabled = 1;
	struct soap_blist *soap_blist_Manual = NULL;
	size_t soap_flag_DHCP = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv4NetworkInterfaceSetConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration, sizeof(struct tt__IPv4NetworkInterfaceSetConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv4NetworkInterfaceSetConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->Manual == NULL)
				{	if (soap_blist_Manual == NULL)
						soap_blist_Manual = soap_new_block(soap);
					a->Manual = (struct tt__PrefixedIPv4Address *)soap_push_block(soap, soap_blist_Manual, sizeof(struct tt__PrefixedIPv4Address));
					if (a->Manual == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv4Address(soap, a->Manual);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv4Address(soap, "tt:Manual", a->Manual, "tt:PrefixedIPv4Address"))
				{	a->__sizeManual++;
					a->Manual = NULL;
					continue;
				}
			}
			if (soap_flag_DHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:DHCP", &a->DHCP, "xsd:boolean"))
				{	soap_flag_DHCP--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Manual)
			soap_pop_block(soap, soap_blist_Manual);
		if (a->__sizeManual)
			a->Manual = (struct tt__PrefixedIPv4Address *)soap_save_block(soap, soap_blist_Manual, NULL, 1);
		else
		{	a->Manual = NULL;
			if (soap_blist_Manual)
				soap_end_block(soap, soap_blist_Manual);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IPv4NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration, 0, sizeof(struct tt__IPv4NetworkInterfaceSetConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__IPv4NetworkInterfaceSetConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration);
	if (soap_out_tt__IPv4NetworkInterfaceSetConfiguration(soap, tag?tag:"tt:IPv4NetworkInterfaceSetConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv4NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__IPv4NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__NetworkInterfaceSetConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Enabled = NULL;
	a->Link = NULL;
	a->MTU = NULL;
	a->IPv4 = NULL;
	a->IPv6 = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__NetworkInterfaceSetConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->Enabled);
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &a->Link);
	soap_serialize_PointerToint(soap, &a->MTU);
	soap_serialize_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, &a->IPv4);
	soap_serialize_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, &a->IPv6);
	soap_serialize_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceSetConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:Link", -1, &a->Link, ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:MTU", -1, &a->MTU, ""))
		return soap->error;
	if (soap_out_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, "tt:IPv4", -1, &a->IPv4, ""))
		return soap->error;
	if (soap_out_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, "tt:IPv6", -1, &a->IPv6, ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, struct tt__NetworkInterfaceSetConfiguration *a, const char *type)
{
	size_t soap_flag_Enabled = 1;
	size_t soap_flag_Link = 1;
	size_t soap_flag_MTU = 1;
	size_t soap_flag_IPv4 = 1;
	size_t soap_flag_IPv6 = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceSetConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration, sizeof(struct tt__NetworkInterfaceSetConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceSetConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap_flag_Link && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:Link", &a->Link, "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_Link--;
					continue;
				}
			if (soap_flag_MTU && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:MTU", &a->MTU, "xsd:int"))
				{	soap_flag_MTU--;
					continue;
				}
			if (soap_flag_IPv4 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, "tt:IPv4", &a->IPv4, "tt:IPv4NetworkInterfaceSetConfiguration"))
				{	soap_flag_IPv4--;
					continue;
				}
			if (soap_flag_IPv6 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, "tt:IPv6", &a->IPv6, "tt:IPv6NetworkInterfaceSetConfiguration"))
				{	soap_flag_IPv6--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkInterfaceSetConfigurationExtension"))
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
	{	a = (struct tt__NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration, 0, sizeof(struct tt__NetworkInterfaceSetConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__NetworkInterfaceSetConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration);
	if (soap_out_tt__NetworkInterfaceSetConfiguration(soap, tag?tag:"tt:NetworkInterfaceSetConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DynamicDNSInformationExtension(struct soap *soap, struct tt__DynamicDNSInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DynamicDNSInformationExtension(struct soap *soap, const struct tt__DynamicDNSInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__DynamicDNSInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DynamicDNSInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DynamicDNSInformationExtension * SOAP_FMAC4 soap_in_tt__DynamicDNSInformationExtension(struct soap *soap, const char *tag, struct tt__DynamicDNSInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DynamicDNSInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSInformationExtension, sizeof(struct tt__DynamicDNSInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DynamicDNSInformationExtension(soap, a);
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
	{	a = (struct tt__DynamicDNSInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DynamicDNSInformationExtension, 0, sizeof(struct tt__DynamicDNSInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DynamicDNSInformationExtension(struct soap *soap, const struct tt__DynamicDNSInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSInformationExtension);
	if (soap_out_tt__DynamicDNSInformationExtension(soap, tag?tag:"tt:DynamicDNSInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DynamicDNSInformationExtension * SOAP_FMAC4 soap_get_tt__DynamicDNSInformationExtension(struct soap *soap, struct tt__DynamicDNSInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DynamicDNSInformation(struct soap *soap, struct tt__DynamicDNSInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__DynamicDNSType(soap, &a->Type);
	soap_default_tt__DNSName(soap, &a->Name);
	a->TTL = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DynamicDNSInformation(struct soap *soap, const struct tt__DynamicDNSInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__DNSName(soap, &a->Name);
	soap_serialize_PointerToxsd__duration(soap, &a->TTL);
	soap_serialize_PointerTott__DynamicDNSInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSInformation(struct soap *soap, const char *tag, int id, const struct tt__DynamicDNSInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DynamicDNSInformation), type))
		return soap->error;
	if (soap_out_tt__DynamicDNSType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (soap_out_tt__DNSName(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:TTL", -1, &a->TTL, ""))
		return soap->error;
	if (soap_out_PointerTott__DynamicDNSInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DynamicDNSInformation * SOAP_FMAC4 soap_in_tt__DynamicDNSInformation(struct soap *soap, const char *tag, struct tt__DynamicDNSInformation *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_Name = 1;
	size_t soap_flag_TTL = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DynamicDNSInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSInformation, sizeof(struct tt__DynamicDNSInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DynamicDNSInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DynamicDNSType(soap, "tt:Type", &a->Type, "tt:DynamicDNSType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__DNSName(soap, "tt:Name", &a->Name, "tt:DNSName"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_TTL && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:TTL", &a->TTL, "xsd:duration"))
				{	soap_flag_TTL--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DynamicDNSInformationExtension(soap, "tt:Extension", &a->Extension, "tt:DynamicDNSInformationExtension"))
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
	{	a = (struct tt__DynamicDNSInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DynamicDNSInformation, 0, sizeof(struct tt__DynamicDNSInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DynamicDNSInformation(struct soap *soap, const struct tt__DynamicDNSInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSInformation);
	if (soap_out_tt__DynamicDNSInformation(soap, tag?tag:"tt:DynamicDNSInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DynamicDNSInformation * SOAP_FMAC4 soap_get_tt__DynamicDNSInformation(struct soap *soap, struct tt__DynamicDNSInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NTPInformationExtension(struct soap *soap, struct tt__NTPInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NTPInformationExtension(struct soap *soap, const struct tt__NTPInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NTPInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__NTPInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NTPInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NTPInformationExtension * SOAP_FMAC4 soap_in_tt__NTPInformationExtension(struct soap *soap, const char *tag, struct tt__NTPInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NTPInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NTPInformationExtension, sizeof(struct tt__NTPInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NTPInformationExtension(soap, a);
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
	{	a = (struct tt__NTPInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NTPInformationExtension, 0, sizeof(struct tt__NTPInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NTPInformationExtension(struct soap *soap, const struct tt__NTPInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NTPInformationExtension);
	if (soap_out_tt__NTPInformationExtension(soap, tag?tag:"tt:NTPInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NTPInformationExtension * SOAP_FMAC4 soap_get_tt__NTPInformationExtension(struct soap *soap, struct tt__NTPInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NTPInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NTPInformation(struct soap *soap, struct tt__NTPInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->FromDHCP);
	a->__sizeNTPFromDHCP = 0;
	a->NTPFromDHCP = NULL;
	a->__sizeNTPManual = 0;
	a->NTPManual = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NTPInformation(struct soap *soap, const struct tt__NTPInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->FromDHCP, SOAP_TYPE_xsd__boolean);
	if (a->NTPFromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeNTPFromDHCP; i++)
		{
			soap_embedded(soap, a->NTPFromDHCP + i, SOAP_TYPE_tt__NetworkHost);
			soap_serialize_tt__NetworkHost(soap, a->NTPFromDHCP + i);
		}
	}
	if (a->NTPManual)
	{	int i;
		for (i = 0; i < a->__sizeNTPManual; i++)
		{
			soap_embedded(soap, a->NTPManual + i, SOAP_TYPE_tt__NetworkHost);
			soap_serialize_tt__NetworkHost(soap, a->NTPManual + i);
		}
	}
	soap_serialize_PointerTott__NTPInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NTPInformation(struct soap *soap, const char *tag, int id, const struct tt__NTPInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NTPInformation), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:FromDHCP", -1, &a->FromDHCP, ""))
		return soap->error;
	if (a->NTPFromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeNTPFromDHCP; i++)
			if (soap_out_tt__NetworkHost(soap, "tt:NTPFromDHCP", -1, a->NTPFromDHCP + i, ""))
				return soap->error;
	}
	if (a->NTPManual)
	{	int i;
		for (i = 0; i < a->__sizeNTPManual; i++)
			if (soap_out_tt__NetworkHost(soap, "tt:NTPManual", -1, a->NTPManual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NTPInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NTPInformation * SOAP_FMAC4 soap_in_tt__NTPInformation(struct soap *soap, const char *tag, struct tt__NTPInformation *a, const char *type)
{
	size_t soap_flag_FromDHCP = 1;
	struct soap_blist *soap_blist_NTPFromDHCP = NULL;
	struct soap_blist *soap_blist_NTPManual = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NTPInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NTPInformation, sizeof(struct tt__NTPInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NTPInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FromDHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:FromDHCP", &a->FromDHCP, "xsd:boolean"))
				{	soap_flag_FromDHCP--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:NTPFromDHCP", 1, NULL))
			{	if (a->NTPFromDHCP == NULL)
				{	if (soap_blist_NTPFromDHCP == NULL)
						soap_blist_NTPFromDHCP = soap_new_block(soap);
					a->NTPFromDHCP = (struct tt__NetworkHost *)soap_push_block(soap, soap_blist_NTPFromDHCP, sizeof(struct tt__NetworkHost));
					if (a->NTPFromDHCP == NULL)
						return NULL;
					soap_default_tt__NetworkHost(soap, a->NTPFromDHCP);
				}
				soap_revert(soap);
				if (soap_in_tt__NetworkHost(soap, "tt:NTPFromDHCP", a->NTPFromDHCP, "tt:NetworkHost"))
				{	a->__sizeNTPFromDHCP++;
					a->NTPFromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:NTPManual", 1, NULL))
			{	if (a->NTPManual == NULL)
				{	if (soap_blist_NTPManual == NULL)
						soap_blist_NTPManual = soap_new_block(soap);
					a->NTPManual = (struct tt__NetworkHost *)soap_push_block(soap, soap_blist_NTPManual, sizeof(struct tt__NetworkHost));
					if (a->NTPManual == NULL)
						return NULL;
					soap_default_tt__NetworkHost(soap, a->NTPManual);
				}
				soap_revert(soap);
				if (soap_in_tt__NetworkHost(soap, "tt:NTPManual", a->NTPManual, "tt:NetworkHost"))
				{	a->__sizeNTPManual++;
					a->NTPManual = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NTPInformationExtension(soap, "tt:Extension", &a->Extension, "tt:NTPInformationExtension"))
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
		if (a->NTPFromDHCP)
			soap_pop_block(soap, soap_blist_NTPFromDHCP);
		if (a->__sizeNTPFromDHCP)
			a->NTPFromDHCP = (struct tt__NetworkHost *)soap_save_block(soap, soap_blist_NTPFromDHCP, NULL, 1);
		else
		{	a->NTPFromDHCP = NULL;
			if (soap_blist_NTPFromDHCP)
				soap_end_block(soap, soap_blist_NTPFromDHCP);
		}
		if (a->NTPManual)
			soap_pop_block(soap, soap_blist_NTPManual);
		if (a->__sizeNTPManual)
			a->NTPManual = (struct tt__NetworkHost *)soap_save_block(soap, soap_blist_NTPManual, NULL, 1);
		else
		{	a->NTPManual = NULL;
			if (soap_blist_NTPManual)
				soap_end_block(soap, soap_blist_NTPManual);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NTPInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NTPInformation, 0, sizeof(struct tt__NTPInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NTPInformation(struct soap *soap, const struct tt__NTPInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NTPInformation);
	if (soap_out_tt__NTPInformation(soap, tag?tag:"tt:NTPInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NTPInformation * SOAP_FMAC4 soap_get_tt__NTPInformation(struct soap *soap, struct tt__NTPInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NTPInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DNSInformationExtension(struct soap *soap, struct tt__DNSInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DNSInformationExtension(struct soap *soap, const struct tt__DNSInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DNSInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__DNSInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DNSInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DNSInformationExtension * SOAP_FMAC4 soap_in_tt__DNSInformationExtension(struct soap *soap, const char *tag, struct tt__DNSInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DNSInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DNSInformationExtension, sizeof(struct tt__DNSInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DNSInformationExtension(soap, a);
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
	{	a = (struct tt__DNSInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DNSInformationExtension, 0, sizeof(struct tt__DNSInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DNSInformationExtension(struct soap *soap, const struct tt__DNSInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DNSInformationExtension);
	if (soap_out_tt__DNSInformationExtension(soap, tag?tag:"tt:DNSInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DNSInformationExtension * SOAP_FMAC4 soap_get_tt__DNSInformationExtension(struct soap *soap, struct tt__DNSInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DNSInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DNSInformation(struct soap *soap, struct tt__DNSInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->FromDHCP);
	a->__sizeSearchDomain = 0;
	a->SearchDomain = NULL;
	a->__sizeDNSFromDHCP = 0;
	a->DNSFromDHCP = NULL;
	a->__sizeDNSManual = 0;
	a->DNSManual = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DNSInformation(struct soap *soap, const struct tt__DNSInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->FromDHCP, SOAP_TYPE_xsd__boolean);
	if (a->SearchDomain)
	{	int i;
		for (i = 0; i < a->__sizeSearchDomain; i++)
		{
			soap_serialize_xsd__token(soap, a->SearchDomain + i);
		}
	}
	if (a->DNSFromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeDNSFromDHCP; i++)
		{
			soap_embedded(soap, a->DNSFromDHCP + i, SOAP_TYPE_tt__IPAddress);
			soap_serialize_tt__IPAddress(soap, a->DNSFromDHCP + i);
		}
	}
	if (a->DNSManual)
	{	int i;
		for (i = 0; i < a->__sizeDNSManual; i++)
		{
			soap_embedded(soap, a->DNSManual + i, SOAP_TYPE_tt__IPAddress);
			soap_serialize_tt__IPAddress(soap, a->DNSManual + i);
		}
	}
	soap_serialize_PointerTott__DNSInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DNSInformation(struct soap *soap, const char *tag, int id, const struct tt__DNSInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DNSInformation), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:FromDHCP", -1, &a->FromDHCP, ""))
		return soap->error;
	if (a->SearchDomain)
	{	int i;
		for (i = 0; i < a->__sizeSearchDomain; i++)
			if (soap_out_xsd__token(soap, "tt:SearchDomain", -1, a->SearchDomain + i, ""))
				return soap->error;
	}
	if (a->DNSFromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeDNSFromDHCP; i++)
			if (soap_out_tt__IPAddress(soap, "tt:DNSFromDHCP", -1, a->DNSFromDHCP + i, ""))
				return soap->error;
	}
	if (a->DNSManual)
	{	int i;
		for (i = 0; i < a->__sizeDNSManual; i++)
			if (soap_out_tt__IPAddress(soap, "tt:DNSManual", -1, a->DNSManual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__DNSInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DNSInformation * SOAP_FMAC4 soap_in_tt__DNSInformation(struct soap *soap, const char *tag, struct tt__DNSInformation *a, const char *type)
{
	size_t soap_flag_FromDHCP = 1;
	struct soap_blist *soap_blist_SearchDomain = NULL;
	struct soap_blist *soap_blist_DNSFromDHCP = NULL;
	struct soap_blist *soap_blist_DNSManual = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DNSInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DNSInformation, sizeof(struct tt__DNSInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DNSInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FromDHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:FromDHCP", &a->FromDHCP, "xsd:boolean"))
				{	soap_flag_FromDHCP--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SearchDomain", 1, NULL))
			{	if (a->SearchDomain == NULL)
				{	if (soap_blist_SearchDomain == NULL)
						soap_blist_SearchDomain = soap_new_block(soap);
					a->SearchDomain = (char **)soap_push_block(soap, soap_blist_SearchDomain, sizeof(char *));
					if (a->SearchDomain == NULL)
						return NULL;
					*a->SearchDomain = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__token(soap, "tt:SearchDomain", a->SearchDomain, "xsd:token"))
				{	a->__sizeSearchDomain++;
					a->SearchDomain = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:DNSFromDHCP", 1, NULL))
			{	if (a->DNSFromDHCP == NULL)
				{	if (soap_blist_DNSFromDHCP == NULL)
						soap_blist_DNSFromDHCP = soap_new_block(soap);
					a->DNSFromDHCP = (struct tt__IPAddress *)soap_push_block(soap, soap_blist_DNSFromDHCP, sizeof(struct tt__IPAddress));
					if (a->DNSFromDHCP == NULL)
						return NULL;
					soap_default_tt__IPAddress(soap, a->DNSFromDHCP);
				}
				soap_revert(soap);
				if (soap_in_tt__IPAddress(soap, "tt:DNSFromDHCP", a->DNSFromDHCP, "tt:IPAddress"))
				{	a->__sizeDNSFromDHCP++;
					a->DNSFromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:DNSManual", 1, NULL))
			{	if (a->DNSManual == NULL)
				{	if (soap_blist_DNSManual == NULL)
						soap_blist_DNSManual = soap_new_block(soap);
					a->DNSManual = (struct tt__IPAddress *)soap_push_block(soap, soap_blist_DNSManual, sizeof(struct tt__IPAddress));
					if (a->DNSManual == NULL)
						return NULL;
					soap_default_tt__IPAddress(soap, a->DNSManual);
				}
				soap_revert(soap);
				if (soap_in_tt__IPAddress(soap, "tt:DNSManual", a->DNSManual, "tt:IPAddress"))
				{	a->__sizeDNSManual++;
					a->DNSManual = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DNSInformationExtension(soap, "tt:Extension", &a->Extension, "tt:DNSInformationExtension"))
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
		if (a->SearchDomain)
			soap_pop_block(soap, soap_blist_SearchDomain);
		if (a->__sizeSearchDomain)
			a->SearchDomain = (char **)soap_save_block(soap, soap_blist_SearchDomain, NULL, 1);
		else
		{	a->SearchDomain = NULL;
			if (soap_blist_SearchDomain)
				soap_end_block(soap, soap_blist_SearchDomain);
		}
		if (a->DNSFromDHCP)
			soap_pop_block(soap, soap_blist_DNSFromDHCP);
		if (a->__sizeDNSFromDHCP)
			a->DNSFromDHCP = (struct tt__IPAddress *)soap_save_block(soap, soap_blist_DNSFromDHCP, NULL, 1);
		else
		{	a->DNSFromDHCP = NULL;
			if (soap_blist_DNSFromDHCP)
				soap_end_block(soap, soap_blist_DNSFromDHCP);
		}
		if (a->DNSManual)
			soap_pop_block(soap, soap_blist_DNSManual);
		if (a->__sizeDNSManual)
			a->DNSManual = (struct tt__IPAddress *)soap_save_block(soap, soap_blist_DNSManual, NULL, 1);
		else
		{	a->DNSManual = NULL;
			if (soap_blist_DNSManual)
				soap_end_block(soap, soap_blist_DNSManual);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__DNSInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DNSInformation, 0, sizeof(struct tt__DNSInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DNSInformation(struct soap *soap, const struct tt__DNSInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DNSInformation);
	if (soap_out_tt__DNSInformation(soap, tag?tag:"tt:DNSInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DNSInformation * SOAP_FMAC4 soap_get_tt__DNSInformation(struct soap *soap, struct tt__DNSInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DNSInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__HostnameInformationExtension(struct soap *soap, struct tt__HostnameInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__HostnameInformationExtension(struct soap *soap, const struct tt__HostnameInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__HostnameInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__HostnameInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__HostnameInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__HostnameInformationExtension * SOAP_FMAC4 soap_in_tt__HostnameInformationExtension(struct soap *soap, const char *tag, struct tt__HostnameInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__HostnameInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__HostnameInformationExtension, sizeof(struct tt__HostnameInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__HostnameInformationExtension(soap, a);
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
	{	a = (struct tt__HostnameInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__HostnameInformationExtension, 0, sizeof(struct tt__HostnameInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__HostnameInformationExtension(struct soap *soap, const struct tt__HostnameInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__HostnameInformationExtension);
	if (soap_out_tt__HostnameInformationExtension(soap, tag?tag:"tt:HostnameInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__HostnameInformationExtension * SOAP_FMAC4 soap_get_tt__HostnameInformationExtension(struct soap *soap, struct tt__HostnameInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__HostnameInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__HostnameInformation(struct soap *soap, struct tt__HostnameInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->FromDHCP);
	soap_default_xsd__token(soap, &a->Name);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__HostnameInformation(struct soap *soap, const struct tt__HostnameInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->FromDHCP, SOAP_TYPE_xsd__boolean);
	soap_serialize_xsd__token(soap, &a->Name);
	soap_serialize_PointerTott__HostnameInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__HostnameInformation(struct soap *soap, const char *tag, int id, const struct tt__HostnameInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__HostnameInformation), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:FromDHCP", -1, &a->FromDHCP, ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (soap_out_PointerTott__HostnameInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__HostnameInformation * SOAP_FMAC4 soap_in_tt__HostnameInformation(struct soap *soap, const char *tag, struct tt__HostnameInformation *a, const char *type)
{
	size_t soap_flag_FromDHCP = 1;
	size_t soap_flag_Name = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__HostnameInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__HostnameInformation, sizeof(struct tt__HostnameInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__HostnameInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FromDHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:FromDHCP", &a->FromDHCP, "xsd:boolean"))
				{	soap_flag_FromDHCP--;
					continue;
				}
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:Name", &a->Name, "xsd:token"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__HostnameInformationExtension(soap, "tt:Extension", &a->Extension, "tt:HostnameInformationExtension"))
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
	{	a = (struct tt__HostnameInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__HostnameInformation, 0, sizeof(struct tt__HostnameInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__HostnameInformation(struct soap *soap, const struct tt__HostnameInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__HostnameInformation);
	if (soap_out_tt__HostnameInformation(soap, tag?tag:"tt:HostnameInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__HostnameInformation * SOAP_FMAC4 soap_get_tt__HostnameInformation(struct soap *soap, struct tt__HostnameInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__HostnameInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkHostExtension(struct soap *soap, struct tt__NetworkHostExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkHostExtension(struct soap *soap, const struct tt__NetworkHostExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHostExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkHostExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkHostExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkHostExtension * SOAP_FMAC4 soap_in_tt__NetworkHostExtension(struct soap *soap, const char *tag, struct tt__NetworkHostExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkHostExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHostExtension, sizeof(struct tt__NetworkHostExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkHostExtension(soap, a);
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
	{	a = (struct tt__NetworkHostExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkHostExtension, 0, sizeof(struct tt__NetworkHostExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkHostExtension(struct soap *soap, const struct tt__NetworkHostExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkHostExtension);
	if (soap_out_tt__NetworkHostExtension(soap, tag?tag:"tt:NetworkHostExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkHostExtension * SOAP_FMAC4 soap_get_tt__NetworkHostExtension(struct soap *soap, struct tt__NetworkHostExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHostExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkHost(struct soap *soap, struct tt__NetworkHost *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__NetworkHostType(soap, &a->Type);
	soap_default_tt__IPv4Address(soap, &a->IPv4Address);
	soap_default_tt__IPv6Address(soap, &a->IPv6Address);
	soap_default_tt__DNSName(soap, &a->DNSname);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkHost(struct soap *soap, const struct tt__NetworkHost *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &a->IPv4Address);
	soap_serialize_tt__IPv6Address(soap, &a->IPv6Address);
	soap_serialize_tt__DNSName(soap, &a->DNSname);
	soap_serialize_PointerTott__NetworkHostExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHost(struct soap *soap, const char *tag, int id, const struct tt__NetworkHost *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkHost), type))
		return soap->error;
	if (soap_out_tt__NetworkHostType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, &a->IPv4Address, ""))
		return soap->error;
	if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, &a->IPv6Address, ""))
		return soap->error;
	if (soap_out_tt__DNSName(soap, "tt:DNSname", -1, &a->DNSname, ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkHostExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkHost * SOAP_FMAC4 soap_in_tt__NetworkHost(struct soap *soap, const char *tag, struct tt__NetworkHost *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_IPv4Address = 1;
	size_t soap_flag_IPv6Address = 1;
	size_t soap_flag_DNSname = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkHost *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHost, sizeof(struct tt__NetworkHost), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkHost(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__NetworkHostType(soap, "tt:Type", &a->Type, "tt:NetworkHostType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_IPv4Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", &a->IPv4Address, "tt:IPv4Address"))
				{	soap_flag_IPv4Address--;
					continue;
				}
			if (soap_flag_IPv6Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", &a->IPv6Address, "tt:IPv6Address"))
				{	soap_flag_IPv6Address--;
					continue;
				}
			if (soap_flag_DNSname && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__DNSName(soap, "tt:DNSname", &a->DNSname, "tt:DNSName"))
				{	soap_flag_DNSname--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkHostExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkHostExtension"))
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
	{	a = (struct tt__NetworkHost *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkHost, 0, sizeof(struct tt__NetworkHost), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkHost(struct soap *soap, const struct tt__NetworkHost *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkHost);
	if (soap_out_tt__NetworkHost(soap, tag?tag:"tt:NetworkHost", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkHost * SOAP_FMAC4 soap_get_tt__NetworkHost(struct soap *soap, struct tt__NetworkHost *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHost(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkProtocolExtension(struct soap *soap, struct tt__NetworkProtocolExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkProtocolExtension(struct soap *soap, const struct tt__NetworkProtocolExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocolExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkProtocolExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkProtocolExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkProtocolExtension * SOAP_FMAC4 soap_in_tt__NetworkProtocolExtension(struct soap *soap, const char *tag, struct tt__NetworkProtocolExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkProtocolExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocolExtension, sizeof(struct tt__NetworkProtocolExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkProtocolExtension(soap, a);
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
	{	a = (struct tt__NetworkProtocolExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkProtocolExtension, 0, sizeof(struct tt__NetworkProtocolExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkProtocolExtension(struct soap *soap, const struct tt__NetworkProtocolExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocolExtension);
	if (soap_out_tt__NetworkProtocolExtension(soap, tag?tag:"tt:NetworkProtocolExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkProtocolExtension * SOAP_FMAC4 soap_get_tt__NetworkProtocolExtension(struct soap *soap, struct tt__NetworkProtocolExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocolExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkProtocol(struct soap *soap, struct tt__NetworkProtocol *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__NetworkProtocolType(soap, &a->Name);
	soap_default_xsd__boolean(soap, &a->Enabled);
	a->__sizePort = 0;
	a->Port = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkProtocol(struct soap *soap, const struct tt__NetworkProtocol *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Enabled, SOAP_TYPE_xsd__boolean);
	if (a->Port)
	{	int i;
		for (i = 0; i < a->__sizePort; i++)
		{
			soap_embedded(soap, a->Port + i, SOAP_TYPE_int);
		}
	}
	soap_serialize_PointerTott__NetworkProtocolExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocol(struct soap *soap, const char *tag, int id, const struct tt__NetworkProtocol *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkProtocol), type))
		return soap->error;
	if (soap_out_tt__NetworkProtocolType(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (a->Port)
	{	int i;
		for (i = 0; i < a->__sizePort; i++)
			if (soap_out_int(soap, "tt:Port", -1, a->Port + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkProtocolExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkProtocol * SOAP_FMAC4 soap_in_tt__NetworkProtocol(struct soap *soap, const char *tag, struct tt__NetworkProtocol *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_Enabled = 1;
	struct soap_blist *soap_blist_Port = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkProtocol *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocol, sizeof(struct tt__NetworkProtocol), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkProtocol(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__NetworkProtocolType(soap, "tt:Name", &a->Name, "tt:NetworkProtocolType"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Port", 1, NULL))
			{	if (a->Port == NULL)
				{	if (soap_blist_Port == NULL)
						soap_blist_Port = soap_new_block(soap);
					a->Port = (int *)soap_push_block(soap, soap_blist_Port, sizeof(int));
					if (a->Port == NULL)
						return NULL;
					soap_default_int(soap, a->Port);
				}
				soap_revert(soap);
				if (soap_in_int(soap, "tt:Port", a->Port, "xsd:int"))
				{	a->__sizePort++;
					a->Port = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkProtocolExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkProtocolExtension"))
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
		if (a->Port)
			soap_pop_block(soap, soap_blist_Port);
		if (a->__sizePort)
			a->Port = (int *)soap_save_block(soap, soap_blist_Port, NULL, 1);
		else
		{	a->Port = NULL;
			if (soap_blist_Port)
				soap_end_block(soap, soap_blist_Port);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NetworkProtocol *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkProtocol, 0, sizeof(struct tt__NetworkProtocol), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_Enabled > 0 || a->__sizePort < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkProtocol(struct soap *soap, const struct tt__NetworkProtocol *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocol);
	if (soap_out_tt__NetworkProtocol(soap, tag?tag:"tt:NetworkProtocol", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkProtocol * SOAP_FMAC4 soap_get_tt__NetworkProtocol(struct soap *soap, struct tt__NetworkProtocol *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocol(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv6ConfigurationExtension(struct soap *soap, struct tt__IPv6ConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv6ConfigurationExtension(struct soap *soap, const struct tt__IPv6ConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6ConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__IPv6ConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6ConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv6ConfigurationExtension * SOAP_FMAC4 soap_in_tt__IPv6ConfigurationExtension(struct soap *soap, const char *tag, struct tt__IPv6ConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv6ConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6ConfigurationExtension, sizeof(struct tt__IPv6ConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv6ConfigurationExtension(soap, a);
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
	{	a = (struct tt__IPv6ConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6ConfigurationExtension, 0, sizeof(struct tt__IPv6ConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv6ConfigurationExtension(struct soap *soap, const struct tt__IPv6ConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv6ConfigurationExtension);
	if (soap_out_tt__IPv6ConfigurationExtension(soap, tag?tag:"tt:IPv6ConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv6ConfigurationExtension * SOAP_FMAC4 soap_get_tt__IPv6ConfigurationExtension(struct soap *soap, struct tt__IPv6ConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6ConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PrefixedIPv6Address(struct soap *soap, struct tt__PrefixedIPv6Address *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__IPv6Address(soap, &a->Address);
	soap_default_int(soap, &a->PrefixLength);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PrefixedIPv6Address(struct soap *soap, const struct tt__PrefixedIPv6Address *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__IPv6Address(soap, &a->Address);
	soap_embedded(soap, &a->PrefixLength, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PrefixedIPv6Address(struct soap *soap, const char *tag, int id, const struct tt__PrefixedIPv6Address *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PrefixedIPv6Address), type))
		return soap->error;
	if (a->Address)
	{	if (soap_out_tt__IPv6Address(soap, "tt:Address", -1, &a->Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:PrefixLength", -1, &a->PrefixLength, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PrefixedIPv6Address * SOAP_FMAC4 soap_in_tt__PrefixedIPv6Address(struct soap *soap, const char *tag, struct tt__PrefixedIPv6Address *a, const char *type)
{
	size_t soap_flag_Address = 1;
	size_t soap_flag_PrefixLength = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PrefixedIPv6Address *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PrefixedIPv6Address, sizeof(struct tt__PrefixedIPv6Address), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PrefixedIPv6Address(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:Address", &a->Address, "tt:IPv6Address"))
				{	soap_flag_Address--;
					continue;
				}
			if (soap_flag_PrefixLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:PrefixLength", &a->PrefixLength, "xsd:int"))
				{	soap_flag_PrefixLength--;
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
	{	a = (struct tt__PrefixedIPv6Address *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PrefixedIPv6Address, 0, sizeof(struct tt__PrefixedIPv6Address), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address > 0 || soap_flag_PrefixLength > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PrefixedIPv6Address(struct soap *soap, const struct tt__PrefixedIPv6Address *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PrefixedIPv6Address);
	if (soap_out_tt__PrefixedIPv6Address(soap, tag?tag:"tt:PrefixedIPv6Address", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PrefixedIPv6Address * SOAP_FMAC4 soap_get_tt__PrefixedIPv6Address(struct soap *soap, struct tt__PrefixedIPv6Address *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PrefixedIPv6Address(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PrefixedIPv4Address(struct soap *soap, struct tt__PrefixedIPv4Address *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__IPv4Address(soap, &a->Address);
	soap_default_int(soap, &a->PrefixLength);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PrefixedIPv4Address(struct soap *soap, const struct tt__PrefixedIPv4Address *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &a->Address);
	soap_embedded(soap, &a->PrefixLength, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PrefixedIPv4Address(struct soap *soap, const char *tag, int id, const struct tt__PrefixedIPv4Address *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PrefixedIPv4Address), type))
		return soap->error;
	if (a->Address)
	{	if (soap_out_tt__IPv4Address(soap, "tt:Address", -1, &a->Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:PrefixLength", -1, &a->PrefixLength, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PrefixedIPv4Address * SOAP_FMAC4 soap_in_tt__PrefixedIPv4Address(struct soap *soap, const char *tag, struct tt__PrefixedIPv4Address *a, const char *type)
{
	size_t soap_flag_Address = 1;
	size_t soap_flag_PrefixLength = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PrefixedIPv4Address *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PrefixedIPv4Address, sizeof(struct tt__PrefixedIPv4Address), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PrefixedIPv4Address(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:Address", &a->Address, "tt:IPv4Address"))
				{	soap_flag_Address--;
					continue;
				}
			if (soap_flag_PrefixLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:PrefixLength", &a->PrefixLength, "xsd:int"))
				{	soap_flag_PrefixLength--;
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
	{	a = (struct tt__PrefixedIPv4Address *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PrefixedIPv4Address, 0, sizeof(struct tt__PrefixedIPv4Address), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address > 0 || soap_flag_PrefixLength > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PrefixedIPv4Address(struct soap *soap, const struct tt__PrefixedIPv4Address *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PrefixedIPv4Address);
	if (soap_out_tt__PrefixedIPv4Address(soap, tag?tag:"tt:PrefixedIPv4Address", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PrefixedIPv4Address * SOAP_FMAC4 soap_get_tt__PrefixedIPv4Address(struct soap *soap, struct tt__PrefixedIPv4Address *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PrefixedIPv4Address(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv4Configuration(struct soap *soap, struct tt__IPv4Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeManual = 0;
	a->Manual = NULL;
	a->LinkLocal = NULL;
	a->FromDHCP = NULL;
	soap_default_xsd__boolean(soap, &a->DHCP);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv4Configuration(struct soap *soap, const struct tt__IPv4Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
		{
			soap_embedded(soap, a->Manual + i, SOAP_TYPE_tt__PrefixedIPv4Address);
			soap_serialize_tt__PrefixedIPv4Address(soap, a->Manual + i);
		}
	}
	soap_serialize_PointerTott__PrefixedIPv4Address(soap, &a->LinkLocal);
	soap_serialize_PointerTott__PrefixedIPv4Address(soap, &a->FromDHCP);
	soap_embedded(soap, &a->DHCP, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4Configuration(struct soap *soap, const char *tag, int id, const struct tt__IPv4Configuration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4Configuration), type))
		return soap->error;
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
			if (soap_out_tt__PrefixedIPv4Address(soap, "tt:Manual", -1, a->Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:LinkLocal", -1, &a->LinkLocal, ""))
		return soap->error;
	if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:FromDHCP", -1, &a->FromDHCP, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DHCP", -1, &a->DHCP, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv4Configuration * SOAP_FMAC4 soap_in_tt__IPv4Configuration(struct soap *soap, const char *tag, struct tt__IPv4Configuration *a, const char *type)
{
	struct soap_blist *soap_blist_Manual = NULL;
	size_t soap_flag_LinkLocal = 1;
	size_t soap_flag_FromDHCP = 1;
	size_t soap_flag_DHCP = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv4Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4Configuration, sizeof(struct tt__IPv4Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv4Configuration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->Manual == NULL)
				{	if (soap_blist_Manual == NULL)
						soap_blist_Manual = soap_new_block(soap);
					a->Manual = (struct tt__PrefixedIPv4Address *)soap_push_block(soap, soap_blist_Manual, sizeof(struct tt__PrefixedIPv4Address));
					if (a->Manual == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv4Address(soap, a->Manual);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv4Address(soap, "tt:Manual", a->Manual, "tt:PrefixedIPv4Address"))
				{	a->__sizeManual++;
					a->Manual = NULL;
					continue;
				}
			}
			if (soap_flag_LinkLocal && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:LinkLocal", &a->LinkLocal, "tt:PrefixedIPv4Address"))
				{	soap_flag_LinkLocal--;
					continue;
				}
			if (soap_flag_FromDHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:FromDHCP", &a->FromDHCP, "tt:PrefixedIPv4Address"))
				{	soap_flag_FromDHCP--;
					continue;
				}
			if (soap_flag_DHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DHCP", &a->DHCP, "xsd:boolean"))
				{	soap_flag_DHCP--;
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
		if (a->Manual)
			soap_pop_block(soap, soap_blist_Manual);
		if (a->__sizeManual)
			a->Manual = (struct tt__PrefixedIPv4Address *)soap_save_block(soap, soap_blist_Manual, NULL, 1);
		else
		{	a->Manual = NULL;
			if (soap_blist_Manual)
				soap_end_block(soap, soap_blist_Manual);
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
	{	a = (struct tt__IPv4Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4Configuration, 0, sizeof(struct tt__IPv4Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DHCP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv4Configuration(struct soap *soap, const struct tt__IPv4Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv4Configuration);
	if (soap_out_tt__IPv4Configuration(soap, tag?tag:"tt:IPv4Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv4Configuration * SOAP_FMAC4 soap_get_tt__IPv4Configuration(struct soap *soap, struct tt__IPv4Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv4NetworkInterface(struct soap *soap, struct tt__IPv4NetworkInterface *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->Enabled);
	a->Config = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv4NetworkInterface(struct soap *soap, const struct tt__IPv4NetworkInterface *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Enabled, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__IPv4Configuration(soap, &a->Config);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4NetworkInterface(struct soap *soap, const char *tag, int id, const struct tt__IPv4NetworkInterface *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4NetworkInterface), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (a->Config)
	{	if (soap_out_PointerTott__IPv4Configuration(soap, "tt:Config", -1, &a->Config, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Config"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv4NetworkInterface * SOAP_FMAC4 soap_in_tt__IPv4NetworkInterface(struct soap *soap, const char *tag, struct tt__IPv4NetworkInterface *a, const char *type)
{
	size_t soap_flag_Enabled = 1;
	size_t soap_flag_Config = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv4NetworkInterface *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4NetworkInterface, sizeof(struct tt__IPv4NetworkInterface), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv4NetworkInterface(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap_flag_Config && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv4Configuration(soap, "tt:Config", &a->Config, "tt:IPv4Configuration"))
				{	soap_flag_Config--;
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
	{	a = (struct tt__IPv4NetworkInterface *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4NetworkInterface, 0, sizeof(struct tt__IPv4NetworkInterface), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Enabled > 0 || soap_flag_Config > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv4NetworkInterface(struct soap *soap, const struct tt__IPv4NetworkInterface *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv4NetworkInterface);
	if (soap_out_tt__IPv4NetworkInterface(soap, tag?tag:"tt:IPv4NetworkInterface", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv4NetworkInterface * SOAP_FMAC4 soap_get_tt__IPv4NetworkInterface(struct soap *soap, struct tt__IPv4NetworkInterface *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4NetworkInterface(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv6Configuration(struct soap *soap, struct tt__IPv6Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AcceptRouterAdvert = NULL;
	soap_default_tt__IPv6DHCPConfiguration(soap, &a->DHCP);
	a->__sizeManual = 0;
	a->Manual = NULL;
	a->__sizeLinkLocal = 0;
	a->LinkLocal = NULL;
	a->__sizeFromDHCP = 0;
	a->FromDHCP = NULL;
	a->__sizeFromRA = 0;
	a->FromRA = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv6Configuration(struct soap *soap, const struct tt__IPv6Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->AcceptRouterAdvert);
	soap_embedded(soap, &a->DHCP, SOAP_TYPE_tt__IPv6DHCPConfiguration);
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
		{
			soap_embedded(soap, a->Manual + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->Manual + i);
		}
	}
	if (a->LinkLocal)
	{	int i;
		for (i = 0; i < a->__sizeLinkLocal; i++)
		{
			soap_embedded(soap, a->LinkLocal + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->LinkLocal + i);
		}
	}
	if (a->FromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeFromDHCP; i++)
		{
			soap_embedded(soap, a->FromDHCP + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->FromDHCP + i);
		}
	}
	if (a->FromRA)
	{	int i;
		for (i = 0; i < a->__sizeFromRA; i++)
		{
			soap_embedded(soap, a->FromRA + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->FromRA + i);
		}
	}
	soap_serialize_PointerTott__IPv6ConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6Configuration(struct soap *soap, const char *tag, int id, const struct tt__IPv6Configuration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6Configuration), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:AcceptRouterAdvert", -1, &a->AcceptRouterAdvert, ""))
		return soap->error;
	if (soap_out_tt__IPv6DHCPConfiguration(soap, "tt:DHCP", -1, &a->DHCP, ""))
		return soap->error;
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:Manual", -1, a->Manual + i, ""))
				return soap->error;
	}
	if (a->LinkLocal)
	{	int i;
		for (i = 0; i < a->__sizeLinkLocal; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:LinkLocal", -1, a->LinkLocal + i, ""))
				return soap->error;
	}
	if (a->FromDHCP)
	{	int i;
		for (i = 0; i < a->__sizeFromDHCP; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:FromDHCP", -1, a->FromDHCP + i, ""))
				return soap->error;
	}
	if (a->FromRA)
	{	int i;
		for (i = 0; i < a->__sizeFromRA; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:FromRA", -1, a->FromRA + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPv6ConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv6Configuration * SOAP_FMAC4 soap_in_tt__IPv6Configuration(struct soap *soap, const char *tag, struct tt__IPv6Configuration *a, const char *type)
{
	size_t soap_flag_AcceptRouterAdvert = 1;
	size_t soap_flag_DHCP = 1;
	struct soap_blist *soap_blist_Manual = NULL;
	struct soap_blist *soap_blist_LinkLocal = NULL;
	struct soap_blist *soap_blist_FromDHCP = NULL;
	struct soap_blist *soap_blist_FromRA = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv6Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6Configuration, sizeof(struct tt__IPv6Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv6Configuration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AcceptRouterAdvert && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:AcceptRouterAdvert", &a->AcceptRouterAdvert, "xsd:boolean"))
				{	soap_flag_AcceptRouterAdvert--;
					continue;
				}
			if (soap_flag_DHCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPv6DHCPConfiguration(soap, "tt:DHCP", &a->DHCP, "tt:IPv6DHCPConfiguration"))
				{	soap_flag_DHCP--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->Manual == NULL)
				{	if (soap_blist_Manual == NULL)
						soap_blist_Manual = soap_new_block(soap);
					a->Manual = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_Manual, sizeof(struct tt__PrefixedIPv6Address));
					if (a->Manual == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->Manual);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:Manual", a->Manual, "tt:PrefixedIPv6Address"))
				{	a->__sizeManual++;
					a->Manual = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:LinkLocal", 1, NULL))
			{	if (a->LinkLocal == NULL)
				{	if (soap_blist_LinkLocal == NULL)
						soap_blist_LinkLocal = soap_new_block(soap);
					a->LinkLocal = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_LinkLocal, sizeof(struct tt__PrefixedIPv6Address));
					if (a->LinkLocal == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->LinkLocal);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:LinkLocal", a->LinkLocal, "tt:PrefixedIPv6Address"))
				{	a->__sizeLinkLocal++;
					a->LinkLocal = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:FromDHCP", 1, NULL))
			{	if (a->FromDHCP == NULL)
				{	if (soap_blist_FromDHCP == NULL)
						soap_blist_FromDHCP = soap_new_block(soap);
					a->FromDHCP = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_FromDHCP, sizeof(struct tt__PrefixedIPv6Address));
					if (a->FromDHCP == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->FromDHCP);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:FromDHCP", a->FromDHCP, "tt:PrefixedIPv6Address"))
				{	a->__sizeFromDHCP++;
					a->FromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:FromRA", 1, NULL))
			{	if (a->FromRA == NULL)
				{	if (soap_blist_FromRA == NULL)
						soap_blist_FromRA = soap_new_block(soap);
					a->FromRA = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_FromRA, sizeof(struct tt__PrefixedIPv6Address));
					if (a->FromRA == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->FromRA);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:FromRA", a->FromRA, "tt:PrefixedIPv6Address"))
				{	a->__sizeFromRA++;
					a->FromRA = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6ConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:IPv6ConfigurationExtension"))
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
		if (a->Manual)
			soap_pop_block(soap, soap_blist_Manual);
		if (a->__sizeManual)
			a->Manual = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_Manual, NULL, 1);
		else
		{	a->Manual = NULL;
			if (soap_blist_Manual)
				soap_end_block(soap, soap_blist_Manual);
		}
		if (a->LinkLocal)
			soap_pop_block(soap, soap_blist_LinkLocal);
		if (a->__sizeLinkLocal)
			a->LinkLocal = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_LinkLocal, NULL, 1);
		else
		{	a->LinkLocal = NULL;
			if (soap_blist_LinkLocal)
				soap_end_block(soap, soap_blist_LinkLocal);
		}
		if (a->FromDHCP)
			soap_pop_block(soap, soap_blist_FromDHCP);
		if (a->__sizeFromDHCP)
			a->FromDHCP = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_FromDHCP, NULL, 1);
		else
		{	a->FromDHCP = NULL;
			if (soap_blist_FromDHCP)
				soap_end_block(soap, soap_blist_FromDHCP);
		}
		if (a->FromRA)
			soap_pop_block(soap, soap_blist_FromRA);
		if (a->__sizeFromRA)
			a->FromRA = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_FromRA, NULL, 1);
		else
		{	a->FromRA = NULL;
			if (soap_blist_FromRA)
				soap_end_block(soap, soap_blist_FromRA);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IPv6Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6Configuration, 0, sizeof(struct tt__IPv6Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DHCP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv6Configuration(struct soap *soap, const struct tt__IPv6Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv6Configuration);
	if (soap_out_tt__IPv6Configuration(soap, tag?tag:"tt:IPv6Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv6Configuration * SOAP_FMAC4 soap_get_tt__IPv6Configuration(struct soap *soap, struct tt__IPv6Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv6NetworkInterface(struct soap *soap, struct tt__IPv6NetworkInterface *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->Enabled);
	a->Config = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv6NetworkInterface(struct soap *soap, const struct tt__IPv6NetworkInterface *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Enabled, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__IPv6Configuration(soap, &a->Config);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6NetworkInterface(struct soap *soap, const char *tag, int id, const struct tt__IPv6NetworkInterface *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6NetworkInterface), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (soap_out_PointerTott__IPv6Configuration(soap, "tt:Config", -1, &a->Config, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPv6NetworkInterface * SOAP_FMAC4 soap_in_tt__IPv6NetworkInterface(struct soap *soap, const char *tag, struct tt__IPv6NetworkInterface *a, const char *type)
{
	size_t soap_flag_Enabled = 1;
	size_t soap_flag_Config = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPv6NetworkInterface *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6NetworkInterface, sizeof(struct tt__IPv6NetworkInterface), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPv6NetworkInterface(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap_flag_Config && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6Configuration(soap, "tt:Config", &a->Config, "tt:IPv6Configuration"))
				{	soap_flag_Config--;
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
	{	a = (struct tt__IPv6NetworkInterface *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6NetworkInterface, 0, sizeof(struct tt__IPv6NetworkInterface), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Enabled > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv6NetworkInterface(struct soap *soap, const struct tt__IPv6NetworkInterface *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv6NetworkInterface);
	if (soap_out_tt__IPv6NetworkInterface(soap, tag?tag:"tt:IPv6NetworkInterface", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPv6NetworkInterface * SOAP_FMAC4 soap_get_tt__IPv6NetworkInterface(struct soap *soap, struct tt__IPv6NetworkInterface *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6NetworkInterface(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceInfo(struct soap *soap, struct tt__NetworkInterfaceInfo *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	soap_default_tt__HwAddress(soap, &a->HwAddress);
	a->MTU = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceInfo(struct soap *soap, const struct tt__NetworkInterfaceInfo *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Name);
	soap_serialize_tt__HwAddress(soap, &a->HwAddress);
	soap_serialize_PointerToint(soap, &a->MTU);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceInfo(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceInfo *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceInfo), type))
		return soap->error;
	if (soap_out_string(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (a->HwAddress)
	{	if (soap_out_tt__HwAddress(soap, "tt:HwAddress", -1, &a->HwAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:HwAddress"))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:MTU", -1, &a->MTU, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceInfo * SOAP_FMAC4 soap_in_tt__NetworkInterfaceInfo(struct soap *soap, const char *tag, struct tt__NetworkInterfaceInfo *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_HwAddress = 1;
	size_t soap_flag_MTU = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceInfo *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceInfo, sizeof(struct tt__NetworkInterfaceInfo), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceInfo(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &a->Name, "xsd:string"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_HwAddress && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__HwAddress(soap, "tt:HwAddress", &a->HwAddress, "tt:HwAddress"))
				{	soap_flag_HwAddress--;
					continue;
				}
			if (soap_flag_MTU && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:MTU", &a->MTU, "xsd:int"))
				{	soap_flag_MTU--;
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
	{	a = (struct tt__NetworkInterfaceInfo *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceInfo, 0, sizeof(struct tt__NetworkInterfaceInfo), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HwAddress > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceInfo(struct soap *soap, const struct tt__NetworkInterfaceInfo *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceInfo);
	if (soap_out_tt__NetworkInterfaceInfo(soap, tag?tag:"tt:NetworkInterfaceInfo", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceInfo * SOAP_FMAC4 soap_get_tt__NetworkInterfaceInfo(struct soap *soap, struct tt__NetworkInterfaceInfo *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceInfo(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceConnectionSetting(struct soap *soap, struct tt__NetworkInterfaceConnectionSetting *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->AutoNegotiation);
	soap_default_int(soap, &a->Speed);
	soap_default_tt__Duplex(soap, &a->Duplex);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const struct tt__NetworkInterfaceConnectionSetting *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->AutoNegotiation, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->Speed, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceConnectionSetting *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AutoNegotiation", -1, &a->AutoNegotiation, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	if (soap_out_tt__Duplex(soap, "tt:Duplex", -1, &a->Duplex, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceConnectionSetting * SOAP_FMAC4 soap_in_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const char *tag, struct tt__NetworkInterfaceConnectionSetting *a, const char *type)
{
	size_t soap_flag_AutoNegotiation = 1;
	size_t soap_flag_Speed = 1;
	size_t soap_flag_Duplex = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceConnectionSetting *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting, sizeof(struct tt__NetworkInterfaceConnectionSetting), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceConnectionSetting(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AutoNegotiation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AutoNegotiation", &a->AutoNegotiation, "xsd:boolean"))
				{	soap_flag_AutoNegotiation--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Speed", &a->Speed, "xsd:int"))
				{	soap_flag_Speed--;
					continue;
				}
			if (soap_flag_Duplex && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Duplex(soap, "tt:Duplex", &a->Duplex, "tt:Duplex"))
				{	soap_flag_Duplex--;
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
	{	a = (struct tt__NetworkInterfaceConnectionSetting *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting, 0, sizeof(struct tt__NetworkInterfaceConnectionSetting), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoNegotiation > 0 || soap_flag_Speed > 0 || soap_flag_Duplex > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const struct tt__NetworkInterfaceConnectionSetting *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting);
	if (soap_out_tt__NetworkInterfaceConnectionSetting(soap, tag?tag:"tt:NetworkInterfaceConnectionSetting", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceConnectionSetting * SOAP_FMAC4 soap_get_tt__NetworkInterfaceConnectionSetting(struct soap *soap, struct tt__NetworkInterfaceConnectionSetting *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceConnectionSetting(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceLink(struct soap *soap, struct tt__NetworkInterfaceLink *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AdminSettings = NULL;
	a->OperSettings = NULL;
	soap_default_tt__IANA_IfTypes(soap, &a->InterfaceType);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceLink(struct soap *soap, const struct tt__NetworkInterfaceLink *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &a->AdminSettings);
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &a->OperSettings);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceLink(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceLink *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceLink), type))
		return soap->error;
	if (a->AdminSettings)
	{	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:AdminSettings", -1, &a->AdminSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AdminSettings"))
		return soap->error;
	if (a->OperSettings)
	{	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:OperSettings", -1, &a->OperSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OperSettings"))
		return soap->error;
	if (soap_out_tt__IANA_IfTypes(soap, "tt:InterfaceType", -1, &a->InterfaceType, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceLink * SOAP_FMAC4 soap_in_tt__NetworkInterfaceLink(struct soap *soap, const char *tag, struct tt__NetworkInterfaceLink *a, const char *type)
{
	size_t soap_flag_AdminSettings = 1;
	size_t soap_flag_OperSettings = 1;
	size_t soap_flag_InterfaceType = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceLink *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceLink, sizeof(struct tt__NetworkInterfaceLink), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceLink(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AdminSettings && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:AdminSettings", &a->AdminSettings, "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_AdminSettings--;
					continue;
				}
			if (soap_flag_OperSettings && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:OperSettings", &a->OperSettings, "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_OperSettings--;
					continue;
				}
			if (soap_flag_InterfaceType && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IANA_IfTypes(soap, "tt:InterfaceType", &a->InterfaceType, "tt:IANA-IfTypes"))
				{	soap_flag_InterfaceType--;
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
	{	a = (struct tt__NetworkInterfaceLink *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceLink, 0, sizeof(struct tt__NetworkInterfaceLink), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AdminSettings > 0 || soap_flag_OperSettings > 0 || soap_flag_InterfaceType > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceLink(struct soap *soap, const struct tt__NetworkInterfaceLink *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceLink);
	if (soap_out_tt__NetworkInterfaceLink(soap, tag?tag:"tt:NetworkInterfaceLink", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceLink * SOAP_FMAC4 soap_get_tt__NetworkInterfaceLink(struct soap *soap, struct tt__NetworkInterfaceLink *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceLink(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceExtension2(struct soap *soap, struct tt__NetworkInterfaceExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceExtension2(struct soap *soap, const struct tt__NetworkInterfaceExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceExtension2(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceExtension2 * SOAP_FMAC4 soap_in_tt__NetworkInterfaceExtension2(struct soap *soap, const char *tag, struct tt__NetworkInterfaceExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceExtension2, sizeof(struct tt__NetworkInterfaceExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceExtension2(soap, a);
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
	{	a = (struct tt__NetworkInterfaceExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceExtension2, 0, sizeof(struct tt__NetworkInterfaceExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceExtension2(struct soap *soap, const struct tt__NetworkInterfaceExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceExtension2);
	if (soap_out_tt__NetworkInterfaceExtension2(soap, tag?tag:"tt:NetworkInterfaceExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceExtension2 * SOAP_FMAC4 soap_get_tt__NetworkInterfaceExtension2(struct soap *soap, struct tt__NetworkInterfaceExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11Configuration(struct soap *soap, struct tt__Dot11Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Dot11SSIDType(soap, &a->SSID);
	soap_default_tt__Dot11StationMode(soap, &a->Mode);
	soap_default_tt__Name(soap, &a->Alias);
	soap_default_tt__NetworkInterfaceConfigPriority(soap, &a->Priority);
	a->Security = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11Configuration(struct soap *soap, const struct tt__Dot11Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &a->SSID);
	soap_serialize_tt__Name(soap, &a->Alias);
	soap_serialize_tt__NetworkInterfaceConfigPriority(soap, &a->Priority);
	soap_serialize_PointerTott__Dot11SecurityConfiguration(soap, &a->Security);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Configuration(struct soap *soap, const char *tag, int id, const struct tt__Dot11Configuration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Configuration), type))
		return soap->error;
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &a->SSID, ""))
		return soap->error;
	if (soap_out_tt__Dot11StationMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (a->Alias)
	{	if (soap_out_tt__Name(soap, "tt:Alias", -1, &a->Alias, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Alias"))
		return soap->error;
	if (a->Priority)
	{	if (soap_out_tt__NetworkInterfaceConfigPriority(soap, "tt:Priority", -1, &a->Priority, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Priority"))
		return soap->error;
	if (a->Security)
	{	if (soap_out_PointerTott__Dot11SecurityConfiguration(soap, "tt:Security", -1, &a->Security, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Security"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11Configuration * SOAP_FMAC4 soap_in_tt__Dot11Configuration(struct soap *soap, const char *tag, struct tt__Dot11Configuration *a, const char *type)
{
	size_t soap_flag_SSID = 1;
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Alias = 1;
	size_t soap_flag_Priority = 1;
	size_t soap_flag_Security = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Configuration, sizeof(struct tt__Dot11Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11Configuration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SSID && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SSIDType(soap, "tt:SSID", &a->SSID, "tt:Dot11SSIDType"))
				{	soap_flag_SSID--;
					continue;
				}
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11StationMode(soap, "tt:Mode", &a->Mode, "tt:Dot11StationMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Alias && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Alias", &a->Alias, "tt:Name"))
				{	soap_flag_Alias--;
					continue;
				}
			if (soap_flag_Priority && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__NetworkInterfaceConfigPriority(soap, "tt:Priority", &a->Priority, "tt:NetworkInterfaceConfigPriority"))
				{	soap_flag_Priority--;
					continue;
				}
			if (soap_flag_Security && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SecurityConfiguration(soap, "tt:Security", &a->Security, "tt:Dot11SecurityConfiguration"))
				{	soap_flag_Security--;
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
	{	a = (struct tt__Dot11Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Configuration, 0, sizeof(struct tt__Dot11Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID > 0 || soap_flag_Mode > 0 || soap_flag_Alias > 0 || soap_flag_Priority > 0 || soap_flag_Security > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11Configuration(struct soap *soap, const struct tt__Dot11Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11Configuration);
	if (soap_out_tt__Dot11Configuration(soap, tag?tag:"tt:Dot11Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11Configuration * SOAP_FMAC4 soap_get_tt__Dot11Configuration(struct soap *soap, struct tt__Dot11Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot3Configuration(struct soap *soap, struct tt__Dot3Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot3Configuration(struct soap *soap, const struct tt__Dot3Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot3Configuration(struct soap *soap, const char *tag, int id, const struct tt__Dot3Configuration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot3Configuration), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot3Configuration * SOAP_FMAC4 soap_in_tt__Dot3Configuration(struct soap *soap, const char *tag, struct tt__Dot3Configuration *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot3Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot3Configuration, sizeof(struct tt__Dot3Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot3Configuration(soap, a);
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
	{	a = (struct tt__Dot3Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot3Configuration, 0, sizeof(struct tt__Dot3Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot3Configuration(struct soap *soap, const struct tt__Dot3Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot3Configuration);
	if (soap_out_tt__Dot3Configuration(soap, tag?tag:"tt:Dot3Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot3Configuration * SOAP_FMAC4 soap_get_tt__Dot3Configuration(struct soap *soap, struct tt__Dot3Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot3Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceExtension(struct soap *soap, struct tt__NetworkInterfaceExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default_tt__IANA_IfTypes(soap, &a->InterfaceType);
	a->__sizeDot3 = 0;
	a->Dot3 = NULL;
	a->__sizeDot11 = 0;
	a->Dot11 = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceExtension(struct soap *soap, const struct tt__NetworkInterfaceExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Dot3)
	{	int i;
		for (i = 0; i < a->__sizeDot3; i++)
		{
			soap_embedded(soap, a->Dot3 + i, SOAP_TYPE_tt__Dot3Configuration);
			soap_serialize_tt__Dot3Configuration(soap, a->Dot3 + i);
		}
	}
	if (a->Dot11)
	{	int i;
		for (i = 0; i < a->__sizeDot11; i++)
		{
			soap_embedded(soap, a->Dot11 + i, SOAP_TYPE_tt__Dot11Configuration);
			soap_serialize_tt__Dot11Configuration(soap, a->Dot11 + i);
		}
	}
	soap_serialize_PointerTott__NetworkInterfaceExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_tt__IANA_IfTypes(soap, "tt:InterfaceType", -1, &a->InterfaceType, ""))
		return soap->error;
	if (a->Dot3)
	{	int i;
		for (i = 0; i < a->__sizeDot3; i++)
			if (soap_out_tt__Dot3Configuration(soap, "tt:Dot3", -1, a->Dot3 + i, ""))
				return soap->error;
	}
	if (a->Dot11)
	{	int i;
		for (i = 0; i < a->__sizeDot11; i++)
			if (soap_out_tt__Dot11Configuration(soap, "tt:Dot11", -1, a->Dot11 + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkInterfaceExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceExtension * SOAP_FMAC4 soap_in_tt__NetworkInterfaceExtension(struct soap *soap, const char *tag, struct tt__NetworkInterfaceExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_InterfaceType = 1;
	struct soap_blist *soap_blist_Dot3 = NULL;
	struct soap_blist *soap_blist_Dot11 = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceExtension, sizeof(struct tt__NetworkInterfaceExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_InterfaceType && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IANA_IfTypes(soap, "tt:InterfaceType", &a->InterfaceType, "tt:IANA-IfTypes"))
				{	soap_flag_InterfaceType--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot3", 1, NULL))
			{	if (a->Dot3 == NULL)
				{	if (soap_blist_Dot3 == NULL)
						soap_blist_Dot3 = soap_new_block(soap);
					a->Dot3 = (struct tt__Dot3Configuration *)soap_push_block(soap, soap_blist_Dot3, sizeof(struct tt__Dot3Configuration));
					if (a->Dot3 == NULL)
						return NULL;
					soap_default_tt__Dot3Configuration(soap, a->Dot3);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot3Configuration(soap, "tt:Dot3", a->Dot3, "tt:Dot3Configuration"))
				{	a->__sizeDot3++;
					a->Dot3 = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot11", 1, NULL))
			{	if (a->Dot11 == NULL)
				{	if (soap_blist_Dot11 == NULL)
						soap_blist_Dot11 = soap_new_block(soap);
					a->Dot11 = (struct tt__Dot11Configuration *)soap_push_block(soap, soap_blist_Dot11, sizeof(struct tt__Dot11Configuration));
					if (a->Dot11 == NULL)
						return NULL;
					soap_default_tt__Dot11Configuration(soap, a->Dot11);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11Configuration(soap, "tt:Dot11", a->Dot11, "tt:Dot11Configuration"))
				{	a->__sizeDot11++;
					a->Dot11 = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceExtension2(soap, "tt:Extension", &a->Extension, "tt:NetworkInterfaceExtension2"))
				{	soap_flag_Extension--;
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
		if (a->Dot3)
			soap_pop_block(soap, soap_blist_Dot3);
		if (a->__sizeDot3)
			a->Dot3 = (struct tt__Dot3Configuration *)soap_save_block(soap, soap_blist_Dot3, NULL, 1);
		else
		{	a->Dot3 = NULL;
			if (soap_blist_Dot3)
				soap_end_block(soap, soap_blist_Dot3);
		}
		if (a->Dot11)
			soap_pop_block(soap, soap_blist_Dot11);
		if (a->__sizeDot11)
			a->Dot11 = (struct tt__Dot11Configuration *)soap_save_block(soap, soap_blist_Dot11, NULL, 1);
		else
		{	a->Dot11 = NULL;
			if (soap_blist_Dot11)
				soap_end_block(soap, soap_blist_Dot11);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NetworkInterfaceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceExtension, 0, sizeof(struct tt__NetworkInterfaceExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_InterfaceType > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceExtension(struct soap *soap, const struct tt__NetworkInterfaceExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceExtension);
	if (soap_out_tt__NetworkInterfaceExtension(soap, tag?tag:"tt:NetworkInterfaceExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceExtension * SOAP_FMAC4 soap_get_tt__NetworkInterfaceExtension(struct soap *soap, struct tt__NetworkInterfaceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Scope(struct soap *soap, struct tt__Scope *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ScopeDefinition(soap, &a->ScopeDef);
	soap_default_xsd__anyURI(soap, &a->ScopeItem);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Scope(struct soap *soap, const struct tt__Scope *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->ScopeItem);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Scope(struct soap *soap, const char *tag, int id, const struct tt__Scope *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Scope), type))
		return soap->error;
	if (soap_out_tt__ScopeDefinition(soap, "tt:ScopeDef", -1, &a->ScopeDef, ""))
		return soap->error;
	if (a->ScopeItem)
	{	if (soap_out_xsd__anyURI(soap, "tt:ScopeItem", -1, &a->ScopeItem, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ScopeItem"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Scope * SOAP_FMAC4 soap_in_tt__Scope(struct soap *soap, const char *tag, struct tt__Scope *a, const char *type)
{
	size_t soap_flag_ScopeDef = 1;
	size_t soap_flag_ScopeItem = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Scope *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Scope, sizeof(struct tt__Scope), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Scope(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ScopeDef && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ScopeDefinition(soap, "tt:ScopeDef", &a->ScopeDef, "tt:ScopeDefinition"))
				{	soap_flag_ScopeDef--;
					continue;
				}
			if (soap_flag_ScopeItem && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:ScopeItem", &a->ScopeItem, "xsd:anyURI"))
				{	soap_flag_ScopeItem--;
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
	{	a = (struct tt__Scope *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Scope, 0, sizeof(struct tt__Scope), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ScopeDef > 0 || soap_flag_ScopeItem > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Scope(struct soap *soap, const struct tt__Scope *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Scope);
	if (soap_out_tt__Scope(soap, tag?tag:"tt:Scope", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Scope * SOAP_FMAC4 soap_get_tt__Scope(struct soap *soap, struct tt__Scope *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Scope(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaUri(struct soap *soap, struct tt__MediaUri *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->Uri);
	soap_default_xsd__boolean(soap, &a->InvalidAfterConnect);
	soap_default_xsd__boolean(soap, &a->InvalidAfterReboot);
	soap_default_xsd__duration(soap, &a->Timeout);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaUri(struct soap *soap, const struct tt__MediaUri *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->Uri);
	soap_embedded(soap, &a->InvalidAfterConnect, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->InvalidAfterReboot, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->Timeout, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaUri(struct soap *soap, const char *tag, int id, const struct tt__MediaUri *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaUri), type))
		return soap->error;
	if (a->Uri)
	{	if (soap_out_xsd__anyURI(soap, "tt:Uri", -1, &a->Uri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Uri"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:InvalidAfterConnect", -1, &a->InvalidAfterConnect, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:InvalidAfterReboot", -1, &a->InvalidAfterReboot, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:Timeout", -1, &a->Timeout, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaUri * SOAP_FMAC4 soap_in_tt__MediaUri(struct soap *soap, const char *tag, struct tt__MediaUri *a, const char *type)
{
	size_t soap_flag_Uri = 1;
	size_t soap_flag_InvalidAfterConnect = 1;
	size_t soap_flag_InvalidAfterReboot = 1;
	size_t soap_flag_Timeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MediaUri *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaUri, sizeof(struct tt__MediaUri), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MediaUri(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Uri && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Uri", &a->Uri, "xsd:anyURI"))
				{	soap_flag_Uri--;
					continue;
				}
			if (soap_flag_InvalidAfterConnect && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:InvalidAfterConnect", &a->InvalidAfterConnect, "xsd:boolean"))
				{	soap_flag_InvalidAfterConnect--;
					continue;
				}
			if (soap_flag_InvalidAfterReboot && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:InvalidAfterReboot", &a->InvalidAfterReboot, "xsd:boolean"))
				{	soap_flag_InvalidAfterReboot--;
					continue;
				}
			if (soap_flag_Timeout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:Timeout", &a->Timeout, "xsd:duration"))
				{	soap_flag_Timeout--;
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
	{	a = (struct tt__MediaUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaUri, 0, sizeof(struct tt__MediaUri), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Uri > 0 || soap_flag_InvalidAfterConnect > 0 || soap_flag_InvalidAfterReboot > 0 || soap_flag_Timeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaUri(struct soap *soap, const struct tt__MediaUri *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaUri);
	if (soap_out_tt__MediaUri(soap, tag?tag:"tt:MediaUri", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaUri * SOAP_FMAC4 soap_get_tt__MediaUri(struct soap *soap, struct tt__MediaUri *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Transport(struct soap *soap, struct tt__Transport *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__TransportProtocol(soap, &a->Protocol);
	a->Tunnel = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Transport(struct soap *soap, const struct tt__Transport *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transport(soap, &a->Tunnel);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Transport(struct soap *soap, const char *tag, int id, const struct tt__Transport *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Transport), type))
		return soap->error;
	if (soap_out_tt__TransportProtocol(soap, "tt:Protocol", -1, &a->Protocol, ""))
		return soap->error;
	if (soap_out_PointerTott__Transport(soap, "tt:Tunnel", -1, &a->Tunnel, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Transport * SOAP_FMAC4 soap_in_tt__Transport(struct soap *soap, const char *tag, struct tt__Transport *a, const char *type)
{
	size_t soap_flag_Protocol = 1;
	size_t soap_flag_Tunnel = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Transport *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Transport, sizeof(struct tt__Transport), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Transport(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Protocol && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TransportProtocol(soap, "tt:Protocol", &a->Protocol, "tt:TransportProtocol"))
				{	soap_flag_Protocol--;
					continue;
				}
			if (soap_flag_Tunnel && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transport(soap, "tt:Tunnel", &a->Tunnel, "tt:Transport"))
				{	soap_flag_Tunnel--;
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
	{	a = (struct tt__Transport *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Transport, 0, sizeof(struct tt__Transport), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Protocol > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Transport(struct soap *soap, const struct tt__Transport *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Transport);
	if (soap_out_tt__Transport(soap, tag?tag:"tt:Transport", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Transport * SOAP_FMAC4 soap_get_tt__Transport(struct soap *soap, struct tt__Transport *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Transport(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__StreamSetup(struct soap *soap, struct tt__StreamSetup *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__StreamType(soap, &a->Stream);
	a->Transport = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__StreamSetup(struct soap *soap, const struct tt__StreamSetup *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transport(soap, &a->Transport);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__StreamSetup(struct soap *soap, const char *tag, int id, const struct tt__StreamSetup *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__StreamSetup), type))
		return soap->error;
	if (soap_out_tt__StreamType(soap, "tt:Stream", -1, &a->Stream, ""))
		return soap->error;
	if (a->Transport)
	{	if (soap_out_PointerTott__Transport(soap, "tt:Transport", -1, &a->Transport, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Transport"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__StreamSetup * SOAP_FMAC4 soap_in_tt__StreamSetup(struct soap *soap, const char *tag, struct tt__StreamSetup *a, const char *type)
{
	size_t soap_flag_Stream = 1;
	size_t soap_flag_Transport = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__StreamSetup *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__StreamSetup, sizeof(struct tt__StreamSetup), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__StreamSetup(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Stream && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__StreamType(soap, "tt:Stream", &a->Stream, "tt:StreamType"))
				{	soap_flag_Stream--;
					continue;
				}
			if (soap_flag_Transport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transport(soap, "tt:Transport", &a->Transport, "tt:Transport"))
				{	soap_flag_Transport--;
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
	{	a = (struct tt__StreamSetup *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__StreamSetup, 0, sizeof(struct tt__StreamSetup), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Stream > 0 || soap_flag_Transport > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__StreamSetup(struct soap *soap, const struct tt__StreamSetup *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__StreamSetup);
	if (soap_out_tt__StreamSetup(soap, tag?tag:"tt:StreamSetup", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__StreamSetup * SOAP_FMAC4 soap_get_tt__StreamSetup(struct soap *soap, struct tt__StreamSetup *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__StreamSetup(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPAddress(struct soap *soap, struct tt__IPAddress *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__IPType(soap, &a->Type);
	soap_default_tt__IPv4Address(soap, &a->IPv4Address);
	soap_default_tt__IPv6Address(soap, &a->IPv6Address);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPAddress(struct soap *soap, const struct tt__IPAddress *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &a->IPv4Address);
	soap_serialize_tt__IPv6Address(soap, &a->IPv6Address);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddress(struct soap *soap, const char *tag, int id, const struct tt__IPAddress *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddress), type))
		return soap->error;
	if (soap_out_tt__IPType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, &a->IPv4Address, ""))
		return soap->error;
	if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, &a->IPv6Address, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPAddress * SOAP_FMAC4 soap_in_tt__IPAddress(struct soap *soap, const char *tag, struct tt__IPAddress *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_IPv4Address = 1;
	size_t soap_flag_IPv6Address = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPAddress *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddress, sizeof(struct tt__IPAddress), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPAddress(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPType(soap, "tt:Type", &a->Type, "tt:IPType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_IPv4Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", &a->IPv4Address, "tt:IPv4Address"))
				{	soap_flag_IPv4Address--;
					continue;
				}
			if (soap_flag_IPv6Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", &a->IPv6Address, "tt:IPv6Address"))
				{	soap_flag_IPv6Address--;
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
	{	a = (struct tt__IPAddress *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddress, 0, sizeof(struct tt__IPAddress), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPAddress(struct soap *soap, const struct tt__IPAddress *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPAddress);
	if (soap_out_tt__IPAddress(soap, tag?tag:"tt:IPAddress", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPAddress * SOAP_FMAC4 soap_get_tt__IPAddress(struct soap *soap, struct tt__IPAddress *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddress(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MulticastConfiguration(struct soap *soap, struct tt__MulticastConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Address = NULL;
	soap_default_int(soap, &a->Port);
	soap_default_int(soap, &a->TTL);
	soap_default_xsd__boolean(soap, &a->AutoStart);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MulticastConfiguration(struct soap *soap, const struct tt__MulticastConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IPAddress(soap, &a->Address);
	soap_embedded(soap, &a->Port, SOAP_TYPE_int);
	soap_embedded(soap, &a->TTL, SOAP_TYPE_int);
	soap_embedded(soap, &a->AutoStart, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MulticastConfiguration(struct soap *soap, const char *tag, int id, const struct tt__MulticastConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MulticastConfiguration), type))
		return soap->error;
	if (a->Address)
	{	if (soap_out_PointerTott__IPAddress(soap, "tt:Address", -1, &a->Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:Port", -1, &a->Port, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:TTL", -1, &a->TTL, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AutoStart", -1, &a->AutoStart, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MulticastConfiguration * SOAP_FMAC4 soap_in_tt__MulticastConfiguration(struct soap *soap, const char *tag, struct tt__MulticastConfiguration *a, const char *type)
{
	size_t soap_flag_Address = 1;
	size_t soap_flag_Port = 1;
	size_t soap_flag_TTL = 1;
	size_t soap_flag_AutoStart = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MulticastConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MulticastConfiguration, sizeof(struct tt__MulticastConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MulticastConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Address && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPAddress(soap, "tt:Address", &a->Address, "tt:IPAddress"))
				{	soap_flag_Address--;
					continue;
				}
			if (soap_flag_Port && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Port", &a->Port, "xsd:int"))
				{	soap_flag_Port--;
					continue;
				}
			if (soap_flag_TTL && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:TTL", &a->TTL, "xsd:int"))
				{	soap_flag_TTL--;
					continue;
				}
			if (soap_flag_AutoStart && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AutoStart", &a->AutoStart, "xsd:boolean"))
				{	soap_flag_AutoStart--;
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
	{	a = (struct tt__MulticastConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MulticastConfiguration, 0, sizeof(struct tt__MulticastConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address > 0 || soap_flag_Port > 0 || soap_flag_TTL > 0 || soap_flag_AutoStart > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MulticastConfiguration(struct soap *soap, const struct tt__MulticastConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MulticastConfiguration);
	if (soap_out_tt__MulticastConfiguration(soap, tag?tag:"tt:MulticastConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MulticastConfiguration * SOAP_FMAC4 soap_get_tt__MulticastConfiguration(struct soap *soap, struct tt__MulticastConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MulticastConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, struct tt__AudioDecoderConfigurationOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const struct tt__AudioDecoderConfigurationOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__AudioDecoderConfigurationOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_in_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, struct tt__AudioDecoderConfigurationOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioDecoderConfigurationOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension, sizeof(struct tt__AudioDecoderConfigurationOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioDecoderConfigurationOptionsExtension(soap, a);
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
	{	a = (struct tt__AudioDecoderConfigurationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension, 0, sizeof(struct tt__AudioDecoderConfigurationOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const struct tt__AudioDecoderConfigurationOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension);
	if (soap_out_tt__AudioDecoderConfigurationOptionsExtension(soap, tag?tag:"tt:AudioDecoderConfigurationOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_get_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, struct tt__AudioDecoderConfigurationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfigurationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__G726DecOptions(struct soap *soap, struct tt__G726DecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Bitrate = NULL;
	a->SampleRateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__G726DecOptions(struct soap *soap, const struct tt__G726DecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &a->Bitrate);
	soap_serialize_PointerTott__IntList(soap, &a->SampleRateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__G726DecOptions(struct soap *soap, const char *tag, int id, const struct tt__G726DecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__G726DecOptions), type))
		return soap->error;
	if (a->Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__G726DecOptions * SOAP_FMAC4 soap_in_tt__G726DecOptions(struct soap *soap, const char *tag, struct tt__G726DecOptions *a, const char *type)
{
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_SampleRateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__G726DecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__G726DecOptions, sizeof(struct tt__G726DecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__G726DecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &a->Bitrate, "tt:IntList"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_SampleRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &a->SampleRateRange, "tt:IntList"))
				{	soap_flag_SampleRateRange--;
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
	{	a = (struct tt__G726DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__G726DecOptions, 0, sizeof(struct tt__G726DecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate > 0 || soap_flag_SampleRateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__G726DecOptions(struct soap *soap, const struct tt__G726DecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__G726DecOptions);
	if (soap_out_tt__G726DecOptions(soap, tag?tag:"tt:G726DecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__G726DecOptions * SOAP_FMAC4 soap_get_tt__G726DecOptions(struct soap *soap, struct tt__G726DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__G726DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__G711DecOptions(struct soap *soap, struct tt__G711DecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Bitrate = NULL;
	a->SampleRateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__G711DecOptions(struct soap *soap, const struct tt__G711DecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &a->Bitrate);
	soap_serialize_PointerTott__IntList(soap, &a->SampleRateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__G711DecOptions(struct soap *soap, const char *tag, int id, const struct tt__G711DecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__G711DecOptions), type))
		return soap->error;
	if (a->Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__G711DecOptions * SOAP_FMAC4 soap_in_tt__G711DecOptions(struct soap *soap, const char *tag, struct tt__G711DecOptions *a, const char *type)
{
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_SampleRateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__G711DecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__G711DecOptions, sizeof(struct tt__G711DecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__G711DecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &a->Bitrate, "tt:IntList"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_SampleRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &a->SampleRateRange, "tt:IntList"))
				{	soap_flag_SampleRateRange--;
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
	{	a = (struct tt__G711DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__G711DecOptions, 0, sizeof(struct tt__G711DecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate > 0 || soap_flag_SampleRateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__G711DecOptions(struct soap *soap, const struct tt__G711DecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__G711DecOptions);
	if (soap_out_tt__G711DecOptions(soap, tag?tag:"tt:G711DecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__G711DecOptions * SOAP_FMAC4 soap_get_tt__G711DecOptions(struct soap *soap, struct tt__G711DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__G711DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AACDecOptions(struct soap *soap, struct tt__AACDecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Bitrate = NULL;
	a->SampleRateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AACDecOptions(struct soap *soap, const struct tt__AACDecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &a->Bitrate);
	soap_serialize_PointerTott__IntList(soap, &a->SampleRateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AACDecOptions(struct soap *soap, const char *tag, int id, const struct tt__AACDecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AACDecOptions), type))
		return soap->error;
	if (a->Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AACDecOptions * SOAP_FMAC4 soap_in_tt__AACDecOptions(struct soap *soap, const char *tag, struct tt__AACDecOptions *a, const char *type)
{
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_SampleRateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AACDecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AACDecOptions, sizeof(struct tt__AACDecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AACDecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &a->Bitrate, "tt:IntList"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_SampleRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &a->SampleRateRange, "tt:IntList"))
				{	soap_flag_SampleRateRange--;
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
	{	a = (struct tt__AACDecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AACDecOptions, 0, sizeof(struct tt__AACDecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate > 0 || soap_flag_SampleRateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AACDecOptions(struct soap *soap, const struct tt__AACDecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AACDecOptions);
	if (soap_out_tt__AACDecOptions(soap, tag?tag:"tt:AACDecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AACDecOptions * SOAP_FMAC4 soap_get_tt__AACDecOptions(struct soap *soap, struct tt__AACDecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AACDecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioDecoderConfigurationOptions(struct soap *soap, struct tt__AudioDecoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AACDecOptions = NULL;
	a->G711DecOptions = NULL;
	a->G726DecOptions = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioDecoderConfigurationOptions(struct soap *soap, const struct tt__AudioDecoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AACDecOptions(soap, &a->AACDecOptions);
	soap_serialize_PointerTott__G711DecOptions(soap, &a->G711DecOptions);
	soap_serialize_PointerTott__G726DecOptions(soap, &a->G726DecOptions);
	soap_serialize_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__AudioDecoderConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptions), type))
		return soap->error;
	if (soap_out_PointerTott__AACDecOptions(soap, "tt:AACDecOptions", -1, &a->AACDecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__G711DecOptions(soap, "tt:G711DecOptions", -1, &a->G711DecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__G726DecOptions(soap, "tt:G726DecOptions", -1, &a->G726DecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioDecoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioDecoderConfigurationOptions(struct soap *soap, const char *tag, struct tt__AudioDecoderConfigurationOptions *a, const char *type)
{
	size_t soap_flag_AACDecOptions = 1;
	size_t soap_flag_G711DecOptions = 1;
	size_t soap_flag_G726DecOptions = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioDecoderConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptions, sizeof(struct tt__AudioDecoderConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioDecoderConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AACDecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AACDecOptions(soap, "tt:AACDecOptions", &a->AACDecOptions, "tt:AACDecOptions"))
				{	soap_flag_AACDecOptions--;
					continue;
				}
			if (soap_flag_G711DecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__G711DecOptions(soap, "tt:G711DecOptions", &a->G711DecOptions, "tt:G711DecOptions"))
				{	soap_flag_G711DecOptions--;
					continue;
				}
			if (soap_flag_G726DecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__G726DecOptions(soap, "tt:G726DecOptions", &a->G726DecOptions, "tt:G726DecOptions"))
				{	soap_flag_G726DecOptions--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:AudioDecoderConfigurationOptionsExtension"))
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
	{	a = (struct tt__AudioDecoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfigurationOptions, 0, sizeof(struct tt__AudioDecoderConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioDecoderConfigurationOptions(struct soap *soap, const struct tt__AudioDecoderConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfigurationOptions);
	if (soap_out_tt__AudioDecoderConfigurationOptions(soap, tag?tag:"tt:AudioDecoderConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioDecoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioDecoderConfigurationOptions(struct soap *soap, struct tt__AudioDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioOutputConfigurationOptions(struct soap *soap, struct tt__AudioOutputConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeOutputTokensAvailable = 0;
	a->OutputTokensAvailable = NULL;
	a->__sizeSendPrimacyOptions = 0;
	a->SendPrimacyOptions = NULL;
	a->OutputLevelRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioOutputConfigurationOptions(struct soap *soap, const struct tt__AudioOutputConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->OutputTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeOutputTokensAvailable; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->OutputTokensAvailable + i);
		}
	}
	if (a->SendPrimacyOptions)
	{	int i;
		for (i = 0; i < a->__sizeSendPrimacyOptions; i++)
		{
			soap_serialize_xsd__anyURI(soap, a->SendPrimacyOptions + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->OutputLevelRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__AudioOutputConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioOutputConfigurationOptions), type))
		return soap->error;
	if (a->OutputTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeOutputTokensAvailable; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:OutputTokensAvailable", -1, a->OutputTokensAvailable + i, ""))
				return soap->error;
	}
	if (a->SendPrimacyOptions)
	{	int i;
		for (i = 0; i < a->__sizeSendPrimacyOptions; i++)
			if (soap_out_xsd__anyURI(soap, "tt:SendPrimacyOptions", -1, a->SendPrimacyOptions + i, ""))
				return soap->error;
	}
	if (a->OutputLevelRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:OutputLevelRange", -1, &a->OutputLevelRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OutputLevelRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioOutputConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioOutputConfigurationOptions(struct soap *soap, const char *tag, struct tt__AudioOutputConfigurationOptions *a, const char *type)
{
	struct soap_blist *soap_blist_OutputTokensAvailable = NULL;
	struct soap_blist *soap_blist_SendPrimacyOptions = NULL;
	size_t soap_flag_OutputLevelRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioOutputConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioOutputConfigurationOptions, sizeof(struct tt__AudioOutputConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioOutputConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:OutputTokensAvailable", 1, NULL))
			{	if (a->OutputTokensAvailable == NULL)
				{	if (soap_blist_OutputTokensAvailable == NULL)
						soap_blist_OutputTokensAvailable = soap_new_block(soap);
					a->OutputTokensAvailable = (char **)soap_push_block(soap, soap_blist_OutputTokensAvailable, sizeof(char *));
					if (a->OutputTokensAvailable == NULL)
						return NULL;
					*a->OutputTokensAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:OutputTokensAvailable", a->OutputTokensAvailable, "tt:ReferenceToken"))
				{	a->__sizeOutputTokensAvailable++;
					a->OutputTokensAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SendPrimacyOptions", 1, NULL))
			{	if (a->SendPrimacyOptions == NULL)
				{	if (soap_blist_SendPrimacyOptions == NULL)
						soap_blist_SendPrimacyOptions = soap_new_block(soap);
					a->SendPrimacyOptions = (char **)soap_push_block(soap, soap_blist_SendPrimacyOptions, sizeof(char *));
					if (a->SendPrimacyOptions == NULL)
						return NULL;
					*a->SendPrimacyOptions = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:SendPrimacyOptions", a->SendPrimacyOptions, "xsd:anyURI"))
				{	a->__sizeSendPrimacyOptions++;
					a->SendPrimacyOptions = NULL;
					continue;
				}
			}
			if (soap_flag_OutputLevelRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:OutputLevelRange", &a->OutputLevelRange, "tt:IntRange"))
				{	soap_flag_OutputLevelRange--;
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
		if (a->OutputTokensAvailable)
			soap_pop_block(soap, soap_blist_OutputTokensAvailable);
		if (a->__sizeOutputTokensAvailable)
			a->OutputTokensAvailable = (char **)soap_save_block(soap, soap_blist_OutputTokensAvailable, NULL, 1);
		else
		{	a->OutputTokensAvailable = NULL;
			if (soap_blist_OutputTokensAvailable)
				soap_end_block(soap, soap_blist_OutputTokensAvailable);
		}
		if (a->SendPrimacyOptions)
			soap_pop_block(soap, soap_blist_SendPrimacyOptions);
		if (a->__sizeSendPrimacyOptions)
			a->SendPrimacyOptions = (char **)soap_save_block(soap, soap_blist_SendPrimacyOptions, NULL, 1);
		else
		{	a->SendPrimacyOptions = NULL;
			if (soap_blist_SendPrimacyOptions)
				soap_end_block(soap, soap_blist_SendPrimacyOptions);
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
	{	a = (struct tt__AudioOutputConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioOutputConfigurationOptions, 0, sizeof(struct tt__AudioOutputConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeOutputTokensAvailable < 1 || soap_flag_OutputLevelRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioOutputConfigurationOptions(struct soap *soap, const struct tt__AudioOutputConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioOutputConfigurationOptions);
	if (soap_out_tt__AudioOutputConfigurationOptions(soap, tag?tag:"tt:AudioOutputConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioOutputConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioOutputConfigurationOptions(struct soap *soap, struct tt__AudioOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, struct tt__VideoDecoderConfigurationOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const struct tt__VideoDecoderConfigurationOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoDecoderConfigurationOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_in_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, struct tt__VideoDecoderConfigurationOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoDecoderConfigurationOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension, sizeof(struct tt__VideoDecoderConfigurationOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoDecoderConfigurationOptionsExtension(soap, a);
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
	{	a = (struct tt__VideoDecoderConfigurationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension, 0, sizeof(struct tt__VideoDecoderConfigurationOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const struct tt__VideoDecoderConfigurationOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension);
	if (soap_out_tt__VideoDecoderConfigurationOptionsExtension(soap, tag?tag:"tt:VideoDecoderConfigurationOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_get_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, struct tt__VideoDecoderConfigurationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoDecoderConfigurationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Mpeg4DecOptions(struct soap *soap, struct tt__Mpeg4DecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->__sizeSupportedMpeg4Profiles = 0;
	a->SupportedMpeg4Profiles = NULL;
	a->SupportedInputBitrate = NULL;
	a->SupportedFrameRate = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Mpeg4DecOptions(struct soap *soap, const struct tt__Mpeg4DecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	if (a->SupportedMpeg4Profiles)
	{	int i;
		for (i = 0; i < a->__sizeSupportedMpeg4Profiles; i++)
		{
			soap_embedded(soap, a->SupportedMpeg4Profiles + i, SOAP_TYPE_tt__Mpeg4Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedFrameRate);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4DecOptions(struct soap *soap, const char *tag, int id, const struct tt__Mpeg4DecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4DecOptions), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->SupportedMpeg4Profiles)
	{	int i;
		for (i = 0; i < a->__sizeSupportedMpeg4Profiles; i++)
			if (soap_out_tt__Mpeg4Profile(soap, "tt:SupportedMpeg4Profiles", -1, a->SupportedMpeg4Profiles + i, ""))
				return soap->error;
	}
	if (a->SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Mpeg4DecOptions * SOAP_FMAC4 soap_in_tt__Mpeg4DecOptions(struct soap *soap, const char *tag, struct tt__Mpeg4DecOptions *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	struct soap_blist *soap_blist_SupportedMpeg4Profiles = NULL;
	size_t soap_flag_SupportedInputBitrate = 1;
	size_t soap_flag_SupportedFrameRate = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Mpeg4DecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4DecOptions, sizeof(struct tt__Mpeg4DecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Mpeg4DecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedMpeg4Profiles", 1, NULL))
			{	if (a->SupportedMpeg4Profiles == NULL)
				{	if (soap_blist_SupportedMpeg4Profiles == NULL)
						soap_blist_SupportedMpeg4Profiles = soap_new_block(soap);
					a->SupportedMpeg4Profiles = (enum tt__Mpeg4Profile *)soap_push_block(soap, soap_blist_SupportedMpeg4Profiles, sizeof(enum tt__Mpeg4Profile));
					if (a->SupportedMpeg4Profiles == NULL)
						return NULL;
					soap_default_tt__Mpeg4Profile(soap, a->SupportedMpeg4Profiles);
				}
				soap_revert(soap);
				if (soap_in_tt__Mpeg4Profile(soap, "tt:SupportedMpeg4Profiles", a->SupportedMpeg4Profiles, "tt:Mpeg4Profile"))
				{	a->__sizeSupportedMpeg4Profiles++;
					a->SupportedMpeg4Profiles = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &a->SupportedInputBitrate, "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate--;
					continue;
				}
			if (soap_flag_SupportedFrameRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &a->SupportedFrameRate, "tt:IntRange"))
				{	soap_flag_SupportedFrameRate--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->SupportedMpeg4Profiles)
			soap_pop_block(soap, soap_blist_SupportedMpeg4Profiles);
		if (a->__sizeSupportedMpeg4Profiles)
			a->SupportedMpeg4Profiles = (enum tt__Mpeg4Profile *)soap_save_block(soap, soap_blist_SupportedMpeg4Profiles, NULL, 1);
		else
		{	a->SupportedMpeg4Profiles = NULL;
			if (soap_blist_SupportedMpeg4Profiles)
				soap_end_block(soap, soap_blist_SupportedMpeg4Profiles);
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
	{	a = (struct tt__Mpeg4DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4DecOptions, 0, sizeof(struct tt__Mpeg4DecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || a->__sizeSupportedMpeg4Profiles < 1 || soap_flag_SupportedInputBitrate > 0 || soap_flag_SupportedFrameRate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Mpeg4DecOptions(struct soap *soap, const struct tt__Mpeg4DecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4DecOptions);
	if (soap_out_tt__Mpeg4DecOptions(soap, tag?tag:"tt:Mpeg4DecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Mpeg4DecOptions * SOAP_FMAC4 soap_get_tt__Mpeg4DecOptions(struct soap *soap, struct tt__Mpeg4DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__H264DecOptions(struct soap *soap, struct tt__H264DecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->__sizeSupportedH264Profiles = 0;
	a->SupportedH264Profiles = NULL;
	a->SupportedInputBitrate = NULL;
	a->SupportedFrameRate = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__H264DecOptions(struct soap *soap, const struct tt__H264DecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	if (a->SupportedH264Profiles)
	{	int i;
		for (i = 0; i < a->__sizeSupportedH264Profiles; i++)
		{
			soap_embedded(soap, a->SupportedH264Profiles + i, SOAP_TYPE_tt__H264Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedFrameRate);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264DecOptions(struct soap *soap, const char *tag, int id, const struct tt__H264DecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264DecOptions), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->SupportedH264Profiles)
	{	int i;
		for (i = 0; i < a->__sizeSupportedH264Profiles; i++)
			if (soap_out_tt__H264Profile(soap, "tt:SupportedH264Profiles", -1, a->SupportedH264Profiles + i, ""))
				return soap->error;
	}
	if (a->SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__H264DecOptions * SOAP_FMAC4 soap_in_tt__H264DecOptions(struct soap *soap, const char *tag, struct tt__H264DecOptions *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	struct soap_blist *soap_blist_SupportedH264Profiles = NULL;
	size_t soap_flag_SupportedInputBitrate = 1;
	size_t soap_flag_SupportedFrameRate = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__H264DecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264DecOptions, sizeof(struct tt__H264DecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__H264DecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedH264Profiles", 1, NULL))
			{	if (a->SupportedH264Profiles == NULL)
				{	if (soap_blist_SupportedH264Profiles == NULL)
						soap_blist_SupportedH264Profiles = soap_new_block(soap);
					a->SupportedH264Profiles = (enum tt__H264Profile *)soap_push_block(soap, soap_blist_SupportedH264Profiles, sizeof(enum tt__H264Profile));
					if (a->SupportedH264Profiles == NULL)
						return NULL;
					soap_default_tt__H264Profile(soap, a->SupportedH264Profiles);
				}
				soap_revert(soap);
				if (soap_in_tt__H264Profile(soap, "tt:SupportedH264Profiles", a->SupportedH264Profiles, "tt:H264Profile"))
				{	a->__sizeSupportedH264Profiles++;
					a->SupportedH264Profiles = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &a->SupportedInputBitrate, "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate--;
					continue;
				}
			if (soap_flag_SupportedFrameRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &a->SupportedFrameRate, "tt:IntRange"))
				{	soap_flag_SupportedFrameRate--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->SupportedH264Profiles)
			soap_pop_block(soap, soap_blist_SupportedH264Profiles);
		if (a->__sizeSupportedH264Profiles)
			a->SupportedH264Profiles = (enum tt__H264Profile *)soap_save_block(soap, soap_blist_SupportedH264Profiles, NULL, 1);
		else
		{	a->SupportedH264Profiles = NULL;
			if (soap_blist_SupportedH264Profiles)
				soap_end_block(soap, soap_blist_SupportedH264Profiles);
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
	{	a = (struct tt__H264DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264DecOptions, 0, sizeof(struct tt__H264DecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || a->__sizeSupportedH264Profiles < 1 || soap_flag_SupportedInputBitrate > 0 || soap_flag_SupportedFrameRate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__H264DecOptions(struct soap *soap, const struct tt__H264DecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__H264DecOptions);
	if (soap_out_tt__H264DecOptions(soap, tag?tag:"tt:H264DecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__H264DecOptions * SOAP_FMAC4 soap_get_tt__H264DecOptions(struct soap *soap, struct tt__H264DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__JpegDecOptions(struct soap *soap, struct tt__JpegDecOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->SupportedInputBitrate = NULL;
	a->SupportedFrameRate = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__JpegDecOptions(struct soap *soap, const struct tt__JpegDecOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &a->SupportedFrameRate);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__JpegDecOptions(struct soap *soap, const char *tag, int id, const struct tt__JpegDecOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__JpegDecOptions), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__JpegDecOptions * SOAP_FMAC4 soap_in_tt__JpegDecOptions(struct soap *soap, const char *tag, struct tt__JpegDecOptions *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_SupportedInputBitrate = 1;
	size_t soap_flag_SupportedFrameRate = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__JpegDecOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__JpegDecOptions, sizeof(struct tt__JpegDecOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__JpegDecOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &a->SupportedInputBitrate, "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate--;
					continue;
				}
			if (soap_flag_SupportedFrameRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &a->SupportedFrameRate, "tt:IntRange"))
				{	soap_flag_SupportedFrameRate--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
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
	{	a = (struct tt__JpegDecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__JpegDecOptions, 0, sizeof(struct tt__JpegDecOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_SupportedInputBitrate > 0 || soap_flag_SupportedFrameRate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__JpegDecOptions(struct soap *soap, const struct tt__JpegDecOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__JpegDecOptions);
	if (soap_out_tt__JpegDecOptions(soap, tag?tag:"tt:JpegDecOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__JpegDecOptions * SOAP_FMAC4 soap_get_tt__JpegDecOptions(struct soap *soap, struct tt__JpegDecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__JpegDecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoDecoderConfigurationOptions(struct soap *soap, struct tt__VideoDecoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->JpegDecOptions = NULL;
	a->H264DecOptions = NULL;
	a->Mpeg4DecOptions = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoDecoderConfigurationOptions(struct soap *soap, const struct tt__VideoDecoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__JpegDecOptions(soap, &a->JpegDecOptions);
	soap_serialize_PointerTott__H264DecOptions(soap, &a->H264DecOptions);
	soap_serialize_PointerTott__Mpeg4DecOptions(soap, &a->Mpeg4DecOptions);
	soap_serialize_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__VideoDecoderConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptions), type))
		return soap->error;
	if (soap_out_PointerTott__JpegDecOptions(soap, "tt:JpegDecOptions", -1, &a->JpegDecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__H264DecOptions(soap, "tt:H264DecOptions", -1, &a->H264DecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__Mpeg4DecOptions(soap, "tt:Mpeg4DecOptions", -1, &a->Mpeg4DecOptions, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoDecoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoDecoderConfigurationOptions(struct soap *soap, const char *tag, struct tt__VideoDecoderConfigurationOptions *a, const char *type)
{
	size_t soap_flag_JpegDecOptions = 1;
	size_t soap_flag_H264DecOptions = 1;
	size_t soap_flag_Mpeg4DecOptions = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoDecoderConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptions, sizeof(struct tt__VideoDecoderConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoDecoderConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_JpegDecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__JpegDecOptions(soap, "tt:JpegDecOptions", &a->JpegDecOptions, "tt:JpegDecOptions"))
				{	soap_flag_JpegDecOptions--;
					continue;
				}
			if (soap_flag_H264DecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__H264DecOptions(soap, "tt:H264DecOptions", &a->H264DecOptions, "tt:H264DecOptions"))
				{	soap_flag_H264DecOptions--;
					continue;
				}
			if (soap_flag_Mpeg4DecOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Mpeg4DecOptions(soap, "tt:Mpeg4DecOptions", &a->Mpeg4DecOptions, "tt:Mpeg4DecOptions"))
				{	soap_flag_Mpeg4DecOptions--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:VideoDecoderConfigurationOptionsExtension"))
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
	{	a = (struct tt__VideoDecoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoDecoderConfigurationOptions, 0, sizeof(struct tt__VideoDecoderConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoDecoderConfigurationOptions(struct soap *soap, const struct tt__VideoDecoderConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoDecoderConfigurationOptions);
	if (soap_out_tt__VideoDecoderConfigurationOptions(soap, tag?tag:"tt:VideoDecoderConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoDecoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoDecoderConfigurationOptions(struct soap *soap, struct tt__VideoDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoOutputConfigurationOptions(struct soap *soap, struct tt__VideoOutputConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoOutputConfigurationOptions(struct soap *soap, const struct tt__VideoOutputConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__VideoOutputConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutputConfigurationOptions), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoOutputConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoOutputConfigurationOptions(struct soap *soap, const char *tag, struct tt__VideoOutputConfigurationOptions *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoOutputConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutputConfigurationOptions, sizeof(struct tt__VideoOutputConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoOutputConfigurationOptions(soap, a);
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
	{	a = (struct tt__VideoOutputConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutputConfigurationOptions, 0, sizeof(struct tt__VideoOutputConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoOutputConfigurationOptions(struct soap *soap, const struct tt__VideoOutputConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoOutputConfigurationOptions);
	if (soap_out_tt__VideoOutputConfigurationOptions(soap, tag?tag:"tt:VideoOutputConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoOutputConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoOutputConfigurationOptions(struct soap *soap, struct tt__VideoOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoOutputExtension(struct soap *soap, struct tt__VideoOutputExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoOutputExtension(struct soap *soap, const struct tt__VideoOutputExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutputExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoOutputExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutputExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoOutputExtension * SOAP_FMAC4 soap_in_tt__VideoOutputExtension(struct soap *soap, const char *tag, struct tt__VideoOutputExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoOutputExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutputExtension, sizeof(struct tt__VideoOutputExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoOutputExtension(soap, a);
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
	{	a = (struct tt__VideoOutputExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutputExtension, 0, sizeof(struct tt__VideoOutputExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoOutputExtension(struct soap *soap, const struct tt__VideoOutputExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoOutputExtension);
	if (soap_out_tt__VideoOutputExtension(soap, tag?tag:"tt:VideoOutputExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoOutputExtension * SOAP_FMAC4 soap_get_tt__VideoOutputExtension(struct soap *soap, struct tt__VideoOutputExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutputExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZStatusFilterOptionsExtension(struct soap *soap, struct tt__PTZStatusFilterOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const struct tt__PTZStatusFilterOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZStatusFilterOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZStatusFilterOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const char *tag, struct tt__PTZStatusFilterOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZStatusFilterOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension, sizeof(struct tt__PTZStatusFilterOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZStatusFilterOptionsExtension(soap, a);
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
	{	a = (struct tt__PTZStatusFilterOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension, 0, sizeof(struct tt__PTZStatusFilterOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const struct tt__PTZStatusFilterOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension);
	if (soap_out_tt__PTZStatusFilterOptionsExtension(soap, tag?tag:"tt:PTZStatusFilterOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZStatusFilterOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZStatusFilterOptionsExtension(struct soap *soap, struct tt__PTZStatusFilterOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatusFilterOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZStatusFilterOptions(struct soap *soap, struct tt__PTZStatusFilterOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->PanTiltStatusSupported);
	soap_default_xsd__boolean(soap, &a->ZoomStatusSupported);
	a->__size = 0;
	a->__any = NULL;
	a->PanTiltPositionSupported = NULL;
	a->ZoomPositionSupported = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZStatusFilterOptions(struct soap *soap, const struct tt__PTZStatusFilterOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->PanTiltStatusSupported, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->ZoomStatusSupported, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerToxsd__boolean(soap, &a->PanTiltPositionSupported);
	soap_serialize_PointerToxsd__boolean(soap, &a->ZoomPositionSupported);
	soap_serialize_PointerTott__PTZStatusFilterOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatusFilterOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZStatusFilterOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatusFilterOptions), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:PanTiltStatusSupported", -1, &a->PanTiltStatusSupported, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:ZoomStatusSupported", -1, &a->ZoomStatusSupported, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:PanTiltPositionSupported", -1, &a->PanTiltPositionSupported, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:ZoomPositionSupported", -1, &a->ZoomPositionSupported, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZStatusFilterOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZStatusFilterOptions * SOAP_FMAC4 soap_in_tt__PTZStatusFilterOptions(struct soap *soap, const char *tag, struct tt__PTZStatusFilterOptions *a, const char *type)
{
	size_t soap_flag_PanTiltStatusSupported = 1;
	size_t soap_flag_ZoomStatusSupported = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_PanTiltPositionSupported = 1;
	size_t soap_flag_ZoomPositionSupported = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZStatusFilterOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatusFilterOptions, sizeof(struct tt__PTZStatusFilterOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZStatusFilterOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PanTiltStatusSupported && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:PanTiltStatusSupported", &a->PanTiltStatusSupported, "xsd:boolean"))
				{	soap_flag_PanTiltStatusSupported--;
					continue;
				}
			if (soap_flag_ZoomStatusSupported && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:ZoomStatusSupported", &a->ZoomStatusSupported, "xsd:boolean"))
				{	soap_flag_ZoomStatusSupported--;
					continue;
				}
			if (soap_flag_PanTiltPositionSupported && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:PanTiltPositionSupported", &a->PanTiltPositionSupported, "xsd:boolean"))
				{	soap_flag_PanTiltPositionSupported--;
					continue;
				}
			if (soap_flag_ZoomPositionSupported && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:ZoomPositionSupported", &a->ZoomPositionSupported, "xsd:boolean"))
				{	soap_flag_ZoomPositionSupported--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatusFilterOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:PTZStatusFilterOptionsExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__PTZStatusFilterOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatusFilterOptions, 0, sizeof(struct tt__PTZStatusFilterOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PanTiltStatusSupported > 0 || soap_flag_ZoomStatusSupported > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZStatusFilterOptions(struct soap *soap, const struct tt__PTZStatusFilterOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZStatusFilterOptions);
	if (soap_out_tt__PTZStatusFilterOptions(soap, tag?tag:"tt:PTZStatusFilterOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZStatusFilterOptions * SOAP_FMAC4 soap_get_tt__PTZStatusFilterOptions(struct soap *soap, struct tt__PTZStatusFilterOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatusFilterOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataConfigurationOptions(struct soap *soap, struct tt__MetadataConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PTZStatusFilterOptions = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataConfigurationOptions(struct soap *soap, const struct tt__MetadataConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZStatusFilterOptions(soap, &a->PTZStatusFilterOptions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__MetadataConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfigurationOptions), type))
		return soap->error;
	if (a->PTZStatusFilterOptions)
	{	if (soap_out_PointerTott__PTZStatusFilterOptions(soap, "tt:PTZStatusFilterOptions", -1, &a->PTZStatusFilterOptions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PTZStatusFilterOptions"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataConfigurationOptions * SOAP_FMAC4 soap_in_tt__MetadataConfigurationOptions(struct soap *soap, const char *tag, struct tt__MetadataConfigurationOptions *a, const char *type)
{
	size_t soap_flag_PTZStatusFilterOptions = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfigurationOptions, sizeof(struct tt__MetadataConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZStatusFilterOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatusFilterOptions(soap, "tt:PTZStatusFilterOptions", &a->PTZStatusFilterOptions, "tt:PTZStatusFilterOptions"))
				{	soap_flag_PTZStatusFilterOptions--;
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
	{	a = (struct tt__MetadataConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfigurationOptions, 0, sizeof(struct tt__MetadataConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZStatusFilterOptions > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataConfigurationOptions(struct soap *soap, const struct tt__MetadataConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfigurationOptions);
	if (soap_out_tt__MetadataConfigurationOptions(soap, tag?tag:"tt:MetadataConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataConfigurationOptions * SOAP_FMAC4 soap_get_tt__MetadataConfigurationOptions(struct soap *soap, struct tt__MetadataConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, struct _tt__EventSubscription_SubscriptionPolicy *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const struct _tt__EventSubscription_SubscriptionPolicy *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const char *tag, int id, const struct _tt__EventSubscription_SubscriptionPolicy *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__EventSubscription_SubscriptionPolicy * SOAP_FMAC4 soap_in__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const char *tag, struct _tt__EventSubscription_SubscriptionPolicy *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__EventSubscription_SubscriptionPolicy *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy, sizeof(struct _tt__EventSubscription_SubscriptionPolicy), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__EventSubscription_SubscriptionPolicy(soap, a);
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
	{	a = (struct _tt__EventSubscription_SubscriptionPolicy *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy, 0, sizeof(struct _tt__EventSubscription_SubscriptionPolicy), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const struct _tt__EventSubscription_SubscriptionPolicy *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy);
	if (soap_out__tt__EventSubscription_SubscriptionPolicy(soap, tag?tag:"tt:EventSubscription-SubscriptionPolicy", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__EventSubscription_SubscriptionPolicy * SOAP_FMAC4 soap_get__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, struct _tt__EventSubscription_SubscriptionPolicy *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__EventSubscription_SubscriptionPolicy(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsnt__FilterType(struct soap *soap, struct wsnt__FilterType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsnt__FilterType(struct soap *soap, const struct wsnt__FilterType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__FilterType(struct soap *soap, const char *tag, int id, const struct wsnt__FilterType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__FilterType), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsnt__FilterType * SOAP_FMAC4 soap_in_wsnt__FilterType(struct soap *soap, const char *tag, struct wsnt__FilterType *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsnt__FilterType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__FilterType, sizeof(struct wsnt__FilterType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsnt__FilterType(soap, a);
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
	{	a = (struct wsnt__FilterType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__FilterType, 0, sizeof(struct wsnt__FilterType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsnt__FilterType(struct soap *soap, const struct wsnt__FilterType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsnt__FilterType);
	if (soap_out_wsnt__FilterType(soap, tag?tag:"wsnt:FilterType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsnt__FilterType * SOAP_FMAC4 soap_get_wsnt__FilterType(struct soap *soap, struct wsnt__FilterType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__FilterType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EventSubscription(struct soap *soap, struct tt__EventSubscription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Filter = NULL;
	a->SubscriptionPolicy = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EventSubscription(struct soap *soap, const struct tt__EventSubscription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsnt__FilterType(soap, &a->Filter);
	soap_serialize_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, &a->SubscriptionPolicy);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventSubscription(struct soap *soap, const char *tag, int id, const struct tt__EventSubscription *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventSubscription), type))
		return soap->error;
	if (soap_out_PointerTowsnt__FilterType(soap, "tt:Filter", -1, &a->Filter, ""))
		return soap->error;
	if (soap_out_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, "tt:SubscriptionPolicy", -1, &a->SubscriptionPolicy, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EventSubscription * SOAP_FMAC4 soap_in_tt__EventSubscription(struct soap *soap, const char *tag, struct tt__EventSubscription *a, const char *type)
{
	size_t soap_flag_Filter = 1;
	size_t soap_flag_SubscriptionPolicy = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EventSubscription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventSubscription, sizeof(struct tt__EventSubscription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EventSubscription(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Filter && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "tt:Filter", &a->Filter, "wsnt:FilterType"))
				{	soap_flag_Filter--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, "tt:SubscriptionPolicy", &a->SubscriptionPolicy, ""))
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
	{	a = (struct tt__EventSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventSubscription, 0, sizeof(struct tt__EventSubscription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EventSubscription(struct soap *soap, const struct tt__EventSubscription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EventSubscription);
	if (soap_out_tt__EventSubscription(soap, tag?tag:"tt:EventSubscription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventSubscription * SOAP_FMAC4 soap_get_tt__EventSubscription(struct soap *soap, struct tt__EventSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZFilter(struct soap *soap, struct tt__PTZFilter *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->Status);
	soap_default_xsd__boolean(soap, &a->Position);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZFilter(struct soap *soap, const struct tt__PTZFilter *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Status, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->Position, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZFilter(struct soap *soap, const char *tag, int id, const struct tt__PTZFilter *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZFilter), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Status", -1, &a->Status, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Position", -1, &a->Position, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZFilter * SOAP_FMAC4 soap_in_tt__PTZFilter(struct soap *soap, const char *tag, struct tt__PTZFilter *a, const char *type)
{
	size_t soap_flag_Status = 1;
	size_t soap_flag_Position = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZFilter *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZFilter, sizeof(struct tt__PTZFilter), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZFilter(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Status && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Status", &a->Status, "xsd:boolean"))
				{	soap_flag_Status--;
					continue;
				}
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Position", &a->Position, "xsd:boolean"))
				{	soap_flag_Position--;
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
	{	a = (struct tt__PTZFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZFilter, 0, sizeof(struct tt__PTZFilter), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Status > 0 || soap_flag_Position > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZFilter(struct soap *soap, const struct tt__PTZFilter *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZFilter);
	if (soap_out_tt__PTZFilter(soap, tag?tag:"tt:PTZFilter", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZFilter * SOAP_FMAC4 soap_get_tt__PTZFilter(struct soap *soap, struct tt__PTZFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataConfigurationExtension(struct soap *soap, struct tt__MetadataConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataConfigurationExtension(struct soap *soap, const struct tt__MetadataConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__MetadataConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataConfigurationExtension * SOAP_FMAC4 soap_in_tt__MetadataConfigurationExtension(struct soap *soap, const char *tag, struct tt__MetadataConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfigurationExtension, sizeof(struct tt__MetadataConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataConfigurationExtension(soap, a);
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
	{	a = (struct tt__MetadataConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfigurationExtension, 0, sizeof(struct tt__MetadataConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataConfigurationExtension(struct soap *soap, const struct tt__MetadataConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfigurationExtension);
	if (soap_out_tt__MetadataConfigurationExtension(soap, tag?tag:"tt:MetadataConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataConfigurationExtension * SOAP_FMAC4 soap_get_tt__MetadataConfigurationExtension(struct soap *soap, struct tt__MetadataConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioEncoderConfigurationOption(struct soap *soap, struct tt__AudioEncoderConfigurationOption *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__AudioEncoding(soap, &a->Encoding);
	a->BitrateList = NULL;
	a->SampleRateList = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioEncoderConfigurationOption(struct soap *soap, const struct tt__AudioEncoderConfigurationOption *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &a->BitrateList);
	soap_serialize_PointerTott__IntList(soap, &a->SampleRateList);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioEncoderConfigurationOption(struct soap *soap, const char *tag, int id, const struct tt__AudioEncoderConfigurationOption *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioEncoderConfigurationOption), type))
		return soap->error;
	if (soap_out_tt__AudioEncoding(soap, "tt:Encoding", -1, &a->Encoding, ""))
		return soap->error;
	if (a->BitrateList)
	{	if (soap_out_PointerTott__IntList(soap, "tt:BitrateList", -1, &a->BitrateList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BitrateList"))
		return soap->error;
	if (a->SampleRateList)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateList", -1, &a->SampleRateList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateList"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioEncoderConfigurationOption * SOAP_FMAC4 soap_in_tt__AudioEncoderConfigurationOption(struct soap *soap, const char *tag, struct tt__AudioEncoderConfigurationOption *a, const char *type)
{
	size_t soap_flag_Encoding = 1;
	size_t soap_flag_BitrateList = 1;
	size_t soap_flag_SampleRateList = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioEncoderConfigurationOption *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioEncoderConfigurationOption, sizeof(struct tt__AudioEncoderConfigurationOption), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioEncoderConfigurationOption(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Encoding && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AudioEncoding(soap, "tt:Encoding", &a->Encoding, "tt:AudioEncoding"))
				{	soap_flag_Encoding--;
					continue;
				}
			if (soap_flag_BitrateList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:BitrateList", &a->BitrateList, "tt:IntList"))
				{	soap_flag_BitrateList--;
					continue;
				}
			if (soap_flag_SampleRateList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateList", &a->SampleRateList, "tt:IntList"))
				{	soap_flag_SampleRateList--;
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
	{	a = (struct tt__AudioEncoderConfigurationOption *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioEncoderConfigurationOption, 0, sizeof(struct tt__AudioEncoderConfigurationOption), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Encoding > 0 || soap_flag_BitrateList > 0 || soap_flag_SampleRateList > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioEncoderConfigurationOption(struct soap *soap, const struct tt__AudioEncoderConfigurationOption *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioEncoderConfigurationOption);
	if (soap_out_tt__AudioEncoderConfigurationOption(soap, tag?tag:"tt:AudioEncoderConfigurationOption", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioEncoderConfigurationOption * SOAP_FMAC4 soap_get_tt__AudioEncoderConfigurationOption(struct soap *soap, struct tt__AudioEncoderConfigurationOption *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioEncoderConfigurationOption(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioEncoderConfigurationOptions(struct soap *soap, struct tt__AudioEncoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeOptions = 0;
	a->Options = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioEncoderConfigurationOptions(struct soap *soap, const struct tt__AudioEncoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Options)
	{	int i;
		for (i = 0; i < a->__sizeOptions; i++)
		{
			soap_embedded(soap, a->Options + i, SOAP_TYPE_tt__AudioEncoderConfigurationOption);
			soap_serialize_tt__AudioEncoderConfigurationOption(soap, a->Options + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioEncoderConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__AudioEncoderConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioEncoderConfigurationOptions), type))
		return soap->error;
	if (a->Options)
	{	int i;
		for (i = 0; i < a->__sizeOptions; i++)
			if (soap_out_tt__AudioEncoderConfigurationOption(soap, "tt:Options", -1, a->Options + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioEncoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioEncoderConfigurationOptions(struct soap *soap, const char *tag, struct tt__AudioEncoderConfigurationOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Options = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioEncoderConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioEncoderConfigurationOptions, sizeof(struct tt__AudioEncoderConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioEncoderConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Options", 1, NULL))
			{	if (a->Options == NULL)
				{	if (soap_blist_Options == NULL)
						soap_blist_Options = soap_new_block(soap);
					a->Options = (struct tt__AudioEncoderConfigurationOption *)soap_push_block(soap, soap_blist_Options, sizeof(struct tt__AudioEncoderConfigurationOption));
					if (a->Options == NULL)
						return NULL;
					soap_default_tt__AudioEncoderConfigurationOption(soap, a->Options);
				}
				soap_revert(soap);
				if (soap_in_tt__AudioEncoderConfigurationOption(soap, "tt:Options", a->Options, "tt:AudioEncoderConfigurationOption"))
				{	a->__sizeOptions++;
					a->Options = NULL;
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
		if (a->Options)
			soap_pop_block(soap, soap_blist_Options);
		if (a->__sizeOptions)
			a->Options = (struct tt__AudioEncoderConfigurationOption *)soap_save_block(soap, soap_blist_Options, NULL, 1);
		else
		{	a->Options = NULL;
			if (soap_blist_Options)
				soap_end_block(soap, soap_blist_Options);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AudioEncoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioEncoderConfigurationOptions, 0, sizeof(struct tt__AudioEncoderConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioEncoderConfigurationOptions(struct soap *soap, const struct tt__AudioEncoderConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioEncoderConfigurationOptions);
	if (soap_out_tt__AudioEncoderConfigurationOptions(soap, tag?tag:"tt:AudioEncoderConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioEncoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioEncoderConfigurationOptions(struct soap *soap, struct tt__AudioEncoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioEncoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioSourceOptionsExtension(struct soap *soap, struct tt__AudioSourceOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioSourceOptionsExtension(struct soap *soap, const struct tt__AudioSourceOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioSourceOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__AudioSourceOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioSourceOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioSourceOptionsExtension * SOAP_FMAC4 soap_in_tt__AudioSourceOptionsExtension(struct soap *soap, const char *tag, struct tt__AudioSourceOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioSourceOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioSourceOptionsExtension, sizeof(struct tt__AudioSourceOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioSourceOptionsExtension(soap, a);
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
	{	a = (struct tt__AudioSourceOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioSourceOptionsExtension, 0, sizeof(struct tt__AudioSourceOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioSourceOptionsExtension(struct soap *soap, const struct tt__AudioSourceOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioSourceOptionsExtension);
	if (soap_out_tt__AudioSourceOptionsExtension(soap, tag?tag:"tt:AudioSourceOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioSourceOptionsExtension * SOAP_FMAC4 soap_get_tt__AudioSourceOptionsExtension(struct soap *soap, struct tt__AudioSourceOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioSourceOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioSourceConfigurationOptions(struct soap *soap, struct tt__AudioSourceConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeInputTokensAvailable = 0;
	a->InputTokensAvailable = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioSourceConfigurationOptions(struct soap *soap, const struct tt__AudioSourceConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->InputTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeInputTokensAvailable; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->InputTokensAvailable + i);
		}
	}
	soap_serialize_PointerTott__AudioSourceOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioSourceConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__AudioSourceConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioSourceConfigurationOptions), type))
		return soap->error;
	if (a->InputTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeInputTokensAvailable; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:InputTokensAvailable", -1, a->InputTokensAvailable + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AudioSourceOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioSourceConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioSourceConfigurationOptions(struct soap *soap, const char *tag, struct tt__AudioSourceConfigurationOptions *a, const char *type)
{
	struct soap_blist *soap_blist_InputTokensAvailable = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioSourceConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioSourceConfigurationOptions, sizeof(struct tt__AudioSourceConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioSourceConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:InputTokensAvailable", 1, NULL))
			{	if (a->InputTokensAvailable == NULL)
				{	if (soap_blist_InputTokensAvailable == NULL)
						soap_blist_InputTokensAvailable = soap_new_block(soap);
					a->InputTokensAvailable = (char **)soap_push_block(soap, soap_blist_InputTokensAvailable, sizeof(char *));
					if (a->InputTokensAvailable == NULL)
						return NULL;
					*a->InputTokensAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:InputTokensAvailable", a->InputTokensAvailable, "tt:ReferenceToken"))
				{	a->__sizeInputTokensAvailable++;
					a->InputTokensAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:AudioSourceOptionsExtension"))
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
		if (a->InputTokensAvailable)
			soap_pop_block(soap, soap_blist_InputTokensAvailable);
		if (a->__sizeInputTokensAvailable)
			a->InputTokensAvailable = (char **)soap_save_block(soap, soap_blist_InputTokensAvailable, NULL, 1);
		else
		{	a->InputTokensAvailable = NULL;
			if (soap_blist_InputTokensAvailable)
				soap_end_block(soap, soap_blist_InputTokensAvailable);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AudioSourceConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioSourceConfigurationOptions, 0, sizeof(struct tt__AudioSourceConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeInputTokensAvailable < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioSourceConfigurationOptions(struct soap *soap, const struct tt__AudioSourceConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioSourceConfigurationOptions);
	if (soap_out_tt__AudioSourceConfigurationOptions(soap, tag?tag:"tt:AudioSourceConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioSourceConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioSourceConfigurationOptions(struct soap *soap, struct tt__AudioSourceConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioSourceConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoEncoderOptionsExtension2(struct soap *soap, struct tt__VideoEncoderOptionsExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoEncoderOptionsExtension2(struct soap *soap, const struct tt__VideoEncoderOptionsExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoderOptionsExtension2(struct soap *soap, const char *tag, int id, const struct tt__VideoEncoderOptionsExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoEncoderOptionsExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoEncoderOptionsExtension2 * SOAP_FMAC4 soap_in_tt__VideoEncoderOptionsExtension2(struct soap *soap, const char *tag, struct tt__VideoEncoderOptionsExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoEncoderOptionsExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoderOptionsExtension2, sizeof(struct tt__VideoEncoderOptionsExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoEncoderOptionsExtension2(soap, a);
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
	{	a = (struct tt__VideoEncoderOptionsExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoEncoderOptionsExtension2, 0, sizeof(struct tt__VideoEncoderOptionsExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoEncoderOptionsExtension2(struct soap *soap, const struct tt__VideoEncoderOptionsExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoderOptionsExtension2);
	if (soap_out_tt__VideoEncoderOptionsExtension2(soap, tag?tag:"tt:VideoEncoderOptionsExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoEncoderOptionsExtension2 * SOAP_FMAC4 soap_get_tt__VideoEncoderOptionsExtension2(struct soap *soap, struct tt__VideoEncoderOptionsExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoderOptionsExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__H264Options2(struct soap *soap, struct tt__H264Options2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->GovLengthRange = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
	a->__sizeH264ProfilesSupported = 0;
	a->H264ProfilesSupported = NULL;
	a->BitrateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__H264Options2(struct soap *soap, const struct tt__H264Options2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->GovLengthRange);
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
	if (a->H264ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeH264ProfilesSupported; i++)
		{
			soap_embedded(soap, a->H264ProfilesSupported + i, SOAP_TYPE_tt__H264Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->BitrateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264Options2(struct soap *soap, const char *tag, int id, const struct tt__H264Options2 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264Options2), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->GovLengthRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:GovLengthRange", -1, &a->GovLengthRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:GovLengthRange"))
		return soap->error;
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	if (a->H264ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeH264ProfilesSupported; i++)
			if (soap_out_tt__H264Profile(soap, "tt:H264ProfilesSupported", -1, a->H264ProfilesSupported + i, ""))
				return soap->error;
	}
	if (a->BitrateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:BitrateRange", -1, &a->BitrateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BitrateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__H264Options2 * SOAP_FMAC4 soap_in_tt__H264Options2(struct soap *soap, const char *tag, struct tt__H264Options2 *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_GovLengthRange = 1;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	struct soap_blist *soap_blist_H264ProfilesSupported = NULL;
	size_t soap_flag_BitrateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__H264Options2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264Options2, sizeof(struct tt__H264Options2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__H264Options2(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_GovLengthRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:GovLengthRange", &a->GovLengthRange, "tt:IntRange"))
				{	soap_flag_GovLengthRange--;
					continue;
				}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:H264ProfilesSupported", 1, NULL))
			{	if (a->H264ProfilesSupported == NULL)
				{	if (soap_blist_H264ProfilesSupported == NULL)
						soap_blist_H264ProfilesSupported = soap_new_block(soap);
					a->H264ProfilesSupported = (enum tt__H264Profile *)soap_push_block(soap, soap_blist_H264ProfilesSupported, sizeof(enum tt__H264Profile));
					if (a->H264ProfilesSupported == NULL)
						return NULL;
					soap_default_tt__H264Profile(soap, a->H264ProfilesSupported);
				}
				soap_revert(soap);
				if (soap_in_tt__H264Profile(soap, "tt:H264ProfilesSupported", a->H264ProfilesSupported, "tt:H264Profile"))
				{	a->__sizeH264ProfilesSupported++;
					a->H264ProfilesSupported = NULL;
					continue;
				}
			}
			if (soap_flag_BitrateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:BitrateRange", &a->BitrateRange, "tt:IntRange"))
				{	soap_flag_BitrateRange--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->H264ProfilesSupported)
			soap_pop_block(soap, soap_blist_H264ProfilesSupported);
		if (a->__sizeH264ProfilesSupported)
			a->H264ProfilesSupported = (enum tt__H264Profile *)soap_save_block(soap, soap_blist_H264ProfilesSupported, NULL, 1);
		else
		{	a->H264ProfilesSupported = NULL;
			if (soap_blist_H264ProfilesSupported)
				soap_end_block(soap, soap_blist_H264ProfilesSupported);
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
	{	a = (struct tt__H264Options2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264Options2, 0, sizeof(struct tt__H264Options2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_GovLengthRange > 0 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0 || a->__sizeH264ProfilesSupported < 1 || soap_flag_BitrateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__H264Options2(struct soap *soap, const struct tt__H264Options2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__H264Options2);
	if (soap_out_tt__H264Options2(soap, tag?tag:"tt:H264Options2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__H264Options2 * SOAP_FMAC4 soap_get_tt__H264Options2(struct soap *soap, struct tt__H264Options2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264Options2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Mpeg4Options2(struct soap *soap, struct tt__Mpeg4Options2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->GovLengthRange = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
	a->__sizeMpeg4ProfilesSupported = 0;
	a->Mpeg4ProfilesSupported = NULL;
	a->BitrateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Mpeg4Options2(struct soap *soap, const struct tt__Mpeg4Options2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->GovLengthRange);
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
	if (a->Mpeg4ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeMpeg4ProfilesSupported; i++)
		{
			soap_embedded(soap, a->Mpeg4ProfilesSupported + i, SOAP_TYPE_tt__Mpeg4Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->BitrateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4Options2(struct soap *soap, const char *tag, int id, const struct tt__Mpeg4Options2 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4Options2), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->GovLengthRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:GovLengthRange", -1, &a->GovLengthRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:GovLengthRange"))
		return soap->error;
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	if (a->Mpeg4ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeMpeg4ProfilesSupported; i++)
			if (soap_out_tt__Mpeg4Profile(soap, "tt:Mpeg4ProfilesSupported", -1, a->Mpeg4ProfilesSupported + i, ""))
				return soap->error;
	}
	if (a->BitrateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:BitrateRange", -1, &a->BitrateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BitrateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Mpeg4Options2 * SOAP_FMAC4 soap_in_tt__Mpeg4Options2(struct soap *soap, const char *tag, struct tt__Mpeg4Options2 *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_GovLengthRange = 1;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	struct soap_blist *soap_blist_Mpeg4ProfilesSupported = NULL;
	size_t soap_flag_BitrateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Mpeg4Options2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4Options2, sizeof(struct tt__Mpeg4Options2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Mpeg4Options2(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_GovLengthRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:GovLengthRange", &a->GovLengthRange, "tt:IntRange"))
				{	soap_flag_GovLengthRange--;
					continue;
				}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mpeg4ProfilesSupported", 1, NULL))
			{	if (a->Mpeg4ProfilesSupported == NULL)
				{	if (soap_blist_Mpeg4ProfilesSupported == NULL)
						soap_blist_Mpeg4ProfilesSupported = soap_new_block(soap);
					a->Mpeg4ProfilesSupported = (enum tt__Mpeg4Profile *)soap_push_block(soap, soap_blist_Mpeg4ProfilesSupported, sizeof(enum tt__Mpeg4Profile));
					if (a->Mpeg4ProfilesSupported == NULL)
						return NULL;
					soap_default_tt__Mpeg4Profile(soap, a->Mpeg4ProfilesSupported);
				}
				soap_revert(soap);
				if (soap_in_tt__Mpeg4Profile(soap, "tt:Mpeg4ProfilesSupported", a->Mpeg4ProfilesSupported, "tt:Mpeg4Profile"))
				{	a->__sizeMpeg4ProfilesSupported++;
					a->Mpeg4ProfilesSupported = NULL;
					continue;
				}
			}
			if (soap_flag_BitrateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:BitrateRange", &a->BitrateRange, "tt:IntRange"))
				{	soap_flag_BitrateRange--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->Mpeg4ProfilesSupported)
			soap_pop_block(soap, soap_blist_Mpeg4ProfilesSupported);
		if (a->__sizeMpeg4ProfilesSupported)
			a->Mpeg4ProfilesSupported = (enum tt__Mpeg4Profile *)soap_save_block(soap, soap_blist_Mpeg4ProfilesSupported, NULL, 1);
		else
		{	a->Mpeg4ProfilesSupported = NULL;
			if (soap_blist_Mpeg4ProfilesSupported)
				soap_end_block(soap, soap_blist_Mpeg4ProfilesSupported);
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
	{	a = (struct tt__Mpeg4Options2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4Options2, 0, sizeof(struct tt__Mpeg4Options2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_GovLengthRange > 0 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0 || a->__sizeMpeg4ProfilesSupported < 1 || soap_flag_BitrateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Mpeg4Options2(struct soap *soap, const struct tt__Mpeg4Options2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4Options2);
	if (soap_out_tt__Mpeg4Options2(soap, tag?tag:"tt:Mpeg4Options2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Mpeg4Options2 * SOAP_FMAC4 soap_get_tt__Mpeg4Options2(struct soap *soap, struct tt__Mpeg4Options2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4Options2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__JpegOptions2(struct soap *soap, struct tt__JpegOptions2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
	a->BitrateRange = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__JpegOptions2(struct soap *soap, const struct tt__JpegOptions2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
	soap_serialize_PointerTott__IntRange(soap, &a->BitrateRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__JpegOptions2(struct soap *soap, const char *tag, int id, const struct tt__JpegOptions2 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__JpegOptions2), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	if (a->BitrateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:BitrateRange", -1, &a->BitrateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BitrateRange"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__JpegOptions2 * SOAP_FMAC4 soap_in_tt__JpegOptions2(struct soap *soap, const char *tag, struct tt__JpegOptions2 *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	size_t soap_flag_BitrateRange = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__JpegOptions2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__JpegOptions2, sizeof(struct tt__JpegOptions2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__JpegOptions2(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap_flag_BitrateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:BitrateRange", &a->BitrateRange, "tt:IntRange"))
				{	soap_flag_BitrateRange--;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
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
	{	a = (struct tt__JpegOptions2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__JpegOptions2, 0, sizeof(struct tt__JpegOptions2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0 || soap_flag_BitrateRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__JpegOptions2(struct soap *soap, const struct tt__JpegOptions2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__JpegOptions2);
	if (soap_out_tt__JpegOptions2(soap, tag?tag:"tt:JpegOptions2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__JpegOptions2 * SOAP_FMAC4 soap_get_tt__JpegOptions2(struct soap *soap, struct tt__JpegOptions2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__JpegOptions2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoEncoderOptionsExtension(struct soap *soap, struct tt__VideoEncoderOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->JPEG = NULL;
	a->MPEG4 = NULL;
	a->H264 = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoEncoderOptionsExtension(struct soap *soap, const struct tt__VideoEncoderOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__JpegOptions2(soap, &a->JPEG);
	soap_serialize_PointerTott__Mpeg4Options2(soap, &a->MPEG4);
	soap_serialize_PointerTott__H264Options2(soap, &a->H264);
	soap_serialize_PointerTott__VideoEncoderOptionsExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoderOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoEncoderOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoEncoderOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__JpegOptions2(soap, "tt:JPEG", -1, &a->JPEG, ""))
		return soap->error;
	if (soap_out_PointerTott__Mpeg4Options2(soap, "tt:MPEG4", -1, &a->MPEG4, ""))
		return soap->error;
	if (soap_out_PointerTott__H264Options2(soap, "tt:H264", -1, &a->H264, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoEncoderOptionsExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoEncoderOptionsExtension * SOAP_FMAC4 soap_in_tt__VideoEncoderOptionsExtension(struct soap *soap, const char *tag, struct tt__VideoEncoderOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_JPEG = 1;
	size_t soap_flag_MPEG4 = 1;
	size_t soap_flag_H264 = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoEncoderOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoderOptionsExtension, sizeof(struct tt__VideoEncoderOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoEncoderOptionsExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_JPEG && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__JpegOptions2(soap, "tt:JPEG", &a->JPEG, "tt:JpegOptions2"))
				{	soap_flag_JPEG--;
					continue;
				}
			if (soap_flag_MPEG4 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Mpeg4Options2(soap, "tt:MPEG4", &a->MPEG4, "tt:Mpeg4Options2"))
				{	soap_flag_MPEG4--;
					continue;
				}
			if (soap_flag_H264 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__H264Options2(soap, "tt:H264", &a->H264, "tt:H264Options2"))
				{	soap_flag_H264--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderOptionsExtension2(soap, "tt:Extension", &a->Extension, "tt:VideoEncoderOptionsExtension2"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__VideoEncoderOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoEncoderOptionsExtension, 0, sizeof(struct tt__VideoEncoderOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoEncoderOptionsExtension(struct soap *soap, const struct tt__VideoEncoderOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoderOptionsExtension);
	if (soap_out_tt__VideoEncoderOptionsExtension(soap, tag?tag:"tt:VideoEncoderOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoEncoderOptionsExtension * SOAP_FMAC4 soap_get_tt__VideoEncoderOptionsExtension(struct soap *soap, struct tt__VideoEncoderOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoderOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__H264Options(struct soap *soap, struct tt__H264Options *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->GovLengthRange = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
	a->__sizeH264ProfilesSupported = 0;
	a->H264ProfilesSupported = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__H264Options(struct soap *soap, const struct tt__H264Options *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->GovLengthRange);
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
	if (a->H264ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeH264ProfilesSupported; i++)
		{
			soap_embedded(soap, a->H264ProfilesSupported + i, SOAP_TYPE_tt__H264Profile);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264Options(struct soap *soap, const char *tag, int id, const struct tt__H264Options *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264Options), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->GovLengthRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:GovLengthRange", -1, &a->GovLengthRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:GovLengthRange"))
		return soap->error;
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	if (a->H264ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeH264ProfilesSupported; i++)
			if (soap_out_tt__H264Profile(soap, "tt:H264ProfilesSupported", -1, a->H264ProfilesSupported + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__H264Options * SOAP_FMAC4 soap_in_tt__H264Options(struct soap *soap, const char *tag, struct tt__H264Options *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_GovLengthRange = 1;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	struct soap_blist *soap_blist_H264ProfilesSupported = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__H264Options *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264Options, sizeof(struct tt__H264Options), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__H264Options(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_GovLengthRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:GovLengthRange", &a->GovLengthRange, "tt:IntRange"))
				{	soap_flag_GovLengthRange--;
					continue;
				}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:H264ProfilesSupported", 1, NULL))
			{	if (a->H264ProfilesSupported == NULL)
				{	if (soap_blist_H264ProfilesSupported == NULL)
						soap_blist_H264ProfilesSupported = soap_new_block(soap);
					a->H264ProfilesSupported = (enum tt__H264Profile *)soap_push_block(soap, soap_blist_H264ProfilesSupported, sizeof(enum tt__H264Profile));
					if (a->H264ProfilesSupported == NULL)
						return NULL;
					soap_default_tt__H264Profile(soap, a->H264ProfilesSupported);
				}
				soap_revert(soap);
				if (soap_in_tt__H264Profile(soap, "tt:H264ProfilesSupported", a->H264ProfilesSupported, "tt:H264Profile"))
				{	a->__sizeH264ProfilesSupported++;
					a->H264ProfilesSupported = NULL;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->H264ProfilesSupported)
			soap_pop_block(soap, soap_blist_H264ProfilesSupported);
		if (a->__sizeH264ProfilesSupported)
			a->H264ProfilesSupported = (enum tt__H264Profile *)soap_save_block(soap, soap_blist_H264ProfilesSupported, NULL, 1);
		else
		{	a->H264ProfilesSupported = NULL;
			if (soap_blist_H264ProfilesSupported)
				soap_end_block(soap, soap_blist_H264ProfilesSupported);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__H264Options *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264Options, 0, sizeof(struct tt__H264Options), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_GovLengthRange > 0 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0 || a->__sizeH264ProfilesSupported < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__H264Options(struct soap *soap, const struct tt__H264Options *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__H264Options);
	if (soap_out_tt__H264Options(soap, tag?tag:"tt:H264Options", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__H264Options * SOAP_FMAC4 soap_get_tt__H264Options(struct soap *soap, struct tt__H264Options *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264Options(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Mpeg4Options(struct soap *soap, struct tt__Mpeg4Options *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->GovLengthRange = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
	a->__sizeMpeg4ProfilesSupported = 0;
	a->Mpeg4ProfilesSupported = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Mpeg4Options(struct soap *soap, const struct tt__Mpeg4Options *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->GovLengthRange);
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
	if (a->Mpeg4ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeMpeg4ProfilesSupported; i++)
		{
			soap_embedded(soap, a->Mpeg4ProfilesSupported + i, SOAP_TYPE_tt__Mpeg4Profile);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4Options(struct soap *soap, const char *tag, int id, const struct tt__Mpeg4Options *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4Options), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->GovLengthRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:GovLengthRange", -1, &a->GovLengthRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:GovLengthRange"))
		return soap->error;
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	if (a->Mpeg4ProfilesSupported)
	{	int i;
		for (i = 0; i < a->__sizeMpeg4ProfilesSupported; i++)
			if (soap_out_tt__Mpeg4Profile(soap, "tt:Mpeg4ProfilesSupported", -1, a->Mpeg4ProfilesSupported + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Mpeg4Options * SOAP_FMAC4 soap_in_tt__Mpeg4Options(struct soap *soap, const char *tag, struct tt__Mpeg4Options *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_GovLengthRange = 1;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	struct soap_blist *soap_blist_Mpeg4ProfilesSupported = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Mpeg4Options *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4Options, sizeof(struct tt__Mpeg4Options), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Mpeg4Options(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_GovLengthRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:GovLengthRange", &a->GovLengthRange, "tt:IntRange"))
				{	soap_flag_GovLengthRange--;
					continue;
				}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mpeg4ProfilesSupported", 1, NULL))
			{	if (a->Mpeg4ProfilesSupported == NULL)
				{	if (soap_blist_Mpeg4ProfilesSupported == NULL)
						soap_blist_Mpeg4ProfilesSupported = soap_new_block(soap);
					a->Mpeg4ProfilesSupported = (enum tt__Mpeg4Profile *)soap_push_block(soap, soap_blist_Mpeg4ProfilesSupported, sizeof(enum tt__Mpeg4Profile));
					if (a->Mpeg4ProfilesSupported == NULL)
						return NULL;
					soap_default_tt__Mpeg4Profile(soap, a->Mpeg4ProfilesSupported);
				}
				soap_revert(soap);
				if (soap_in_tt__Mpeg4Profile(soap, "tt:Mpeg4ProfilesSupported", a->Mpeg4ProfilesSupported, "tt:Mpeg4Profile"))
				{	a->__sizeMpeg4ProfilesSupported++;
					a->Mpeg4ProfilesSupported = NULL;
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
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (a->Mpeg4ProfilesSupported)
			soap_pop_block(soap, soap_blist_Mpeg4ProfilesSupported);
		if (a->__sizeMpeg4ProfilesSupported)
			a->Mpeg4ProfilesSupported = (enum tt__Mpeg4Profile *)soap_save_block(soap, soap_blist_Mpeg4ProfilesSupported, NULL, 1);
		else
		{	a->Mpeg4ProfilesSupported = NULL;
			if (soap_blist_Mpeg4ProfilesSupported)
				soap_end_block(soap, soap_blist_Mpeg4ProfilesSupported);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Mpeg4Options *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4Options, 0, sizeof(struct tt__Mpeg4Options), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_GovLengthRange > 0 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0 || a->__sizeMpeg4ProfilesSupported < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Mpeg4Options(struct soap *soap, const struct tt__Mpeg4Options *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4Options);
	if (soap_out_tt__Mpeg4Options(soap, tag?tag:"tt:Mpeg4Options", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Mpeg4Options * SOAP_FMAC4 soap_get_tt__Mpeg4Options(struct soap *soap, struct tt__Mpeg4Options *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4Options(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__JpegOptions(struct soap *soap, struct tt__JpegOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeResolutionsAvailable = 0;
	a->ResolutionsAvailable = NULL;
	a->FrameRateRange = NULL;
	a->EncodingIntervalRange = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__JpegOptions(struct soap *soap, const struct tt__JpegOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
		{
			soap_embedded(soap, a->ResolutionsAvailable + i, SOAP_TYPE_tt__VideoResolution);
			soap_serialize_tt__VideoResolution(soap, a->ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &a->FrameRateRange);
	soap_serialize_PointerTott__IntRange(soap, &a->EncodingIntervalRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__JpegOptions(struct soap *soap, const char *tag, int id, const struct tt__JpegOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__JpegOptions), type))
		return soap->error;
	if (a->ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->__sizeResolutionsAvailable; i++)
			if (soap_out_tt__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->FrameRateRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:FrameRateRange", -1, &a->FrameRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FrameRateRange"))
		return soap->error;
	if (a->EncodingIntervalRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", -1, &a->EncodingIntervalRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EncodingIntervalRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__JpegOptions * SOAP_FMAC4 soap_in_tt__JpegOptions(struct soap *soap, const char *tag, struct tt__JpegOptions *a, const char *type)
{
	struct soap_blist *soap_blist_ResolutionsAvailable = NULL;
	size_t soap_flag_FrameRateRange = 1;
	size_t soap_flag_EncodingIntervalRange = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__JpegOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__JpegOptions, sizeof(struct tt__JpegOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__JpegOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable == NULL)
						soap_blist_ResolutionsAvailable = soap_new_block(soap);
					a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_push_block(soap, soap_blist_ResolutionsAvailable, sizeof(struct tt__VideoResolution));
					if (a->ResolutionsAvailable == NULL)
						return NULL;
					soap_default_tt__VideoResolution(soap, a->ResolutionsAvailable);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoResolution(soap, "tt:ResolutionsAvailable", a->ResolutionsAvailable, "tt:VideoResolution"))
				{	a->__sizeResolutionsAvailable++;
					a->ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_FrameRateRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:FrameRateRange", &a->FrameRateRange, "tt:IntRange"))
				{	soap_flag_FrameRateRange--;
					continue;
				}
			if (soap_flag_EncodingIntervalRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:EncodingIntervalRange", &a->EncodingIntervalRange, "tt:IntRange"))
				{	soap_flag_EncodingIntervalRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable);
		if (a->__sizeResolutionsAvailable)
			a->ResolutionsAvailable = (struct tt__VideoResolution *)soap_save_block(soap, soap_blist_ResolutionsAvailable, NULL, 1);
		else
		{	a->ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable)
				soap_end_block(soap, soap_blist_ResolutionsAvailable);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__JpegOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__JpegOptions, 0, sizeof(struct tt__JpegOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeResolutionsAvailable < 1 || soap_flag_FrameRateRange > 0 || soap_flag_EncodingIntervalRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__JpegOptions(struct soap *soap, const struct tt__JpegOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__JpegOptions);
	if (soap_out_tt__JpegOptions(soap, tag?tag:"tt:JpegOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__JpegOptions * SOAP_FMAC4 soap_get_tt__JpegOptions(struct soap *soap, struct tt__JpegOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__JpegOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoEncoderConfigurationOptions(struct soap *soap, struct tt__VideoEncoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->QualityRange = NULL;
	a->JPEG = NULL;
	a->MPEG4 = NULL;
	a->H264 = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoEncoderConfigurationOptions(struct soap *soap, const struct tt__VideoEncoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntRange(soap, &a->QualityRange);
	soap_serialize_PointerTott__JpegOptions(soap, &a->JPEG);
	soap_serialize_PointerTott__Mpeg4Options(soap, &a->MPEG4);
	soap_serialize_PointerTott__H264Options(soap, &a->H264);
	soap_serialize_PointerTott__VideoEncoderOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoderConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__VideoEncoderConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoEncoderConfigurationOptions), type))
		return soap->error;
	if (a->QualityRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:QualityRange", -1, &a->QualityRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:QualityRange"))
		return soap->error;
	if (soap_out_PointerTott__JpegOptions(soap, "tt:JPEG", -1, &a->JPEG, ""))
		return soap->error;
	if (soap_out_PointerTott__Mpeg4Options(soap, "tt:MPEG4", -1, &a->MPEG4, ""))
		return soap->error;
	if (soap_out_PointerTott__H264Options(soap, "tt:H264", -1, &a->H264, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoEncoderOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoEncoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoEncoderConfigurationOptions(struct soap *soap, const char *tag, struct tt__VideoEncoderConfigurationOptions *a, const char *type)
{
	size_t soap_flag_QualityRange = 1;
	size_t soap_flag_JPEG = 1;
	size_t soap_flag_MPEG4 = 1;
	size_t soap_flag_H264 = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoEncoderConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoderConfigurationOptions, sizeof(struct tt__VideoEncoderConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoEncoderConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_QualityRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:QualityRange", &a->QualityRange, "tt:IntRange"))
				{	soap_flag_QualityRange--;
					continue;
				}
			if (soap_flag_JPEG && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__JpegOptions(soap, "tt:JPEG", &a->JPEG, "tt:JpegOptions"))
				{	soap_flag_JPEG--;
					continue;
				}
			if (soap_flag_MPEG4 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Mpeg4Options(soap, "tt:MPEG4", &a->MPEG4, "tt:Mpeg4Options"))
				{	soap_flag_MPEG4--;
					continue;
				}
			if (soap_flag_H264 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__H264Options(soap, "tt:H264", &a->H264, "tt:H264Options"))
				{	soap_flag_H264--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:VideoEncoderOptionsExtension"))
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
	{	a = (struct tt__VideoEncoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoEncoderConfigurationOptions, 0, sizeof(struct tt__VideoEncoderConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_QualityRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoEncoderConfigurationOptions(struct soap *soap, const struct tt__VideoEncoderConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoderConfigurationOptions);
	if (soap_out_tt__VideoEncoderConfigurationOptions(soap, tag?tag:"tt:VideoEncoderConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoEncoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoEncoderConfigurationOptions(struct soap *soap, struct tt__VideoEncoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__H264Configuration(struct soap *soap, struct tt__H264Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->GovLength);
	soap_default_tt__H264Profile(soap, &a->H264Profile);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__H264Configuration(struct soap *soap, const struct tt__H264Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->GovLength, SOAP_TYPE_int);
	soap_embedded(soap, &a->H264Profile, SOAP_TYPE_tt__H264Profile);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264Configuration(struct soap *soap, const char *tag, int id, const struct tt__H264Configuration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264Configuration), type))
		return soap->error;
	if (soap_out_int(soap, "tt:GovLength", -1, &a->GovLength, ""))
		return soap->error;
	if (soap_out_tt__H264Profile(soap, "tt:H264Profile", -1, &a->H264Profile, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__H264Configuration * SOAP_FMAC4 soap_in_tt__H264Configuration(struct soap *soap, const char *tag, struct tt__H264Configuration *a, const char *type)
{
	size_t soap_flag_GovLength = 1;
	size_t soap_flag_H264Profile = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__H264Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264Configuration, sizeof(struct tt__H264Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__H264Configuration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_GovLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:GovLength", &a->GovLength, "xsd:int"))
				{	soap_flag_GovLength--;
					continue;
				}
			if (soap_flag_H264Profile && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__H264Profile(soap, "tt:H264Profile", &a->H264Profile, "tt:H264Profile"))
				{	soap_flag_H264Profile--;
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
	{	a = (struct tt__H264Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264Configuration, 0, sizeof(struct tt__H264Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_GovLength > 0 || soap_flag_H264Profile > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__H264Configuration(struct soap *soap, const struct tt__H264Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__H264Configuration);
	if (soap_out_tt__H264Configuration(soap, tag?tag:"tt:H264Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__H264Configuration * SOAP_FMAC4 soap_get_tt__H264Configuration(struct soap *soap, struct tt__H264Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Mpeg4Configuration(struct soap *soap, struct tt__Mpeg4Configuration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->GovLength);
	soap_default_tt__Mpeg4Profile(soap, &a->Mpeg4Profile);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Mpeg4Configuration(struct soap *soap, const struct tt__Mpeg4Configuration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->GovLength, SOAP_TYPE_int);
	soap_embedded(soap, &a->Mpeg4Profile, SOAP_TYPE_tt__Mpeg4Profile);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4Configuration(struct soap *soap, const char *tag, int id, const struct tt__Mpeg4Configuration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4Configuration), type))
		return soap->error;
	if (soap_out_int(soap, "tt:GovLength", -1, &a->GovLength, ""))
		return soap->error;
	if (soap_out_tt__Mpeg4Profile(soap, "tt:Mpeg4Profile", -1, &a->Mpeg4Profile, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Mpeg4Configuration * SOAP_FMAC4 soap_in_tt__Mpeg4Configuration(struct soap *soap, const char *tag, struct tt__Mpeg4Configuration *a, const char *type)
{
	size_t soap_flag_GovLength = 1;
	size_t soap_flag_Mpeg4Profile = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Mpeg4Configuration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4Configuration, sizeof(struct tt__Mpeg4Configuration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Mpeg4Configuration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_GovLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:GovLength", &a->GovLength, "xsd:int"))
				{	soap_flag_GovLength--;
					continue;
				}
			if (soap_flag_Mpeg4Profile && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Mpeg4Profile(soap, "tt:Mpeg4Profile", &a->Mpeg4Profile, "tt:Mpeg4Profile"))
				{	soap_flag_Mpeg4Profile--;
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
	{	a = (struct tt__Mpeg4Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4Configuration, 0, sizeof(struct tt__Mpeg4Configuration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_GovLength > 0 || soap_flag_Mpeg4Profile > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Mpeg4Configuration(struct soap *soap, const struct tt__Mpeg4Configuration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4Configuration);
	if (soap_out_tt__Mpeg4Configuration(soap, tag?tag:"tt:Mpeg4Configuration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Mpeg4Configuration * SOAP_FMAC4 soap_get_tt__Mpeg4Configuration(struct soap *soap, struct tt__Mpeg4Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoRateControl(struct soap *soap, struct tt__VideoRateControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->FrameRateLimit);
	soap_default_int(soap, &a->EncodingInterval);
	soap_default_int(soap, &a->BitrateLimit);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoRateControl(struct soap *soap, const struct tt__VideoRateControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->FrameRateLimit, SOAP_TYPE_int);
	soap_embedded(soap, &a->EncodingInterval, SOAP_TYPE_int);
	soap_embedded(soap, &a->BitrateLimit, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoRateControl(struct soap *soap, const char *tag, int id, const struct tt__VideoRateControl *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoRateControl), type))
		return soap->error;
	if (soap_out_int(soap, "tt:FrameRateLimit", -1, &a->FrameRateLimit, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:EncodingInterval", -1, &a->EncodingInterval, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:BitrateLimit", -1, &a->BitrateLimit, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoRateControl * SOAP_FMAC4 soap_in_tt__VideoRateControl(struct soap *soap, const char *tag, struct tt__VideoRateControl *a, const char *type)
{
	size_t soap_flag_FrameRateLimit = 1;
	size_t soap_flag_EncodingInterval = 1;
	size_t soap_flag_BitrateLimit = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoRateControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoRateControl, sizeof(struct tt__VideoRateControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoRateControl(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FrameRateLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:FrameRateLimit", &a->FrameRateLimit, "xsd:int"))
				{	soap_flag_FrameRateLimit--;
					continue;
				}
			if (soap_flag_EncodingInterval && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:EncodingInterval", &a->EncodingInterval, "xsd:int"))
				{	soap_flag_EncodingInterval--;
					continue;
				}
			if (soap_flag_BitrateLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:BitrateLimit", &a->BitrateLimit, "xsd:int"))
				{	soap_flag_BitrateLimit--;
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
	{	a = (struct tt__VideoRateControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoRateControl, 0, sizeof(struct tt__VideoRateControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FrameRateLimit > 0 || soap_flag_EncodingInterval > 0 || soap_flag_BitrateLimit > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoRateControl(struct soap *soap, const struct tt__VideoRateControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoRateControl);
	if (soap_out_tt__VideoRateControl(soap, tag?tag:"tt:VideoRateControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoRateControl * SOAP_FMAC4 soap_get_tt__VideoRateControl(struct soap *soap, struct tt__VideoRateControl *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoRateControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoResolution(struct soap *soap, struct tt__VideoResolution *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->Width);
	soap_default_int(soap, &a->Height);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoResolution(struct soap *soap, const struct tt__VideoResolution *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Width, SOAP_TYPE_int);
	soap_embedded(soap, &a->Height, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoResolution(struct soap *soap, const char *tag, int id, const struct tt__VideoResolution *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoResolution), type))
		return soap->error;
	if (soap_out_int(soap, "tt:Width", -1, &a->Width, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Height", -1, &a->Height, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoResolution * SOAP_FMAC4 soap_in_tt__VideoResolution(struct soap *soap, const char *tag, struct tt__VideoResolution *a, const char *type)
{
	size_t soap_flag_Width = 1;
	size_t soap_flag_Height = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoResolution *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoResolution, sizeof(struct tt__VideoResolution), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoResolution(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
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
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__VideoResolution *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoResolution, 0, sizeof(struct tt__VideoResolution), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Width > 0 || soap_flag_Height > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoResolution(struct soap *soap, const struct tt__VideoResolution *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoResolution);
	if (soap_out_tt__VideoResolution(soap, tag?tag:"tt:VideoResolution", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoResolution * SOAP_FMAC4 soap_get_tt__VideoResolution(struct soap *soap, struct tt__VideoResolution *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoResolution(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RotateOptionsExtension(struct soap *soap, struct tt__RotateOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RotateOptionsExtension(struct soap *soap, const struct tt__RotateOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RotateOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__RotateOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RotateOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RotateOptionsExtension * SOAP_FMAC4 soap_in_tt__RotateOptionsExtension(struct soap *soap, const char *tag, struct tt__RotateOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RotateOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RotateOptionsExtension, sizeof(struct tt__RotateOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RotateOptionsExtension(soap, a);
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
	{	a = (struct tt__RotateOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RotateOptionsExtension, 0, sizeof(struct tt__RotateOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RotateOptionsExtension(struct soap *soap, const struct tt__RotateOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RotateOptionsExtension);
	if (soap_out_tt__RotateOptionsExtension(soap, tag?tag:"tt:RotateOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RotateOptionsExtension * SOAP_FMAC4 soap_get_tt__RotateOptionsExtension(struct soap *soap, struct tt__RotateOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RotateOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, struct tt__VideoSourceConfigurationOptionsExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, const struct tt__VideoSourceConfigurationOptionsExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfigurationOptionsExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptionsExtension2 * SOAP_FMAC4 soap_in_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, const char *tag, struct tt__VideoSourceConfigurationOptionsExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfigurationOptionsExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2, sizeof(struct tt__VideoSourceConfigurationOptionsExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfigurationOptionsExtension2(soap, a);
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
	{	a = (struct tt__VideoSourceConfigurationOptionsExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2, 0, sizeof(struct tt__VideoSourceConfigurationOptionsExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, const struct tt__VideoSourceConfigurationOptionsExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2);
	if (soap_out_tt__VideoSourceConfigurationOptionsExtension2(soap, tag?tag:"tt:VideoSourceConfigurationOptionsExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptionsExtension2 * SOAP_FMAC4 soap_get_tt__VideoSourceConfigurationOptionsExtension2(struct soap *soap, struct tt__VideoSourceConfigurationOptionsExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfigurationOptionsExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RotateOptions(struct soap *soap, struct tt__RotateOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->DegreeList = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RotateOptions(struct soap *soap, const struct tt__RotateOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__RotateMode);
		}
	}
	soap_serialize_PointerTott__IntList(soap, &a->DegreeList);
	soap_serialize_PointerTott__RotateOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RotateOptions(struct soap *soap, const char *tag, int id, const struct tt__RotateOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RotateOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__RotateMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IntList(soap, "tt:DegreeList", -1, &a->DegreeList, ""))
		return soap->error;
	if (soap_out_PointerTott__RotateOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RotateOptions * SOAP_FMAC4 soap_in_tt__RotateOptions(struct soap *soap, const char *tag, struct tt__RotateOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_DegreeList = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RotateOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RotateOptions, sizeof(struct tt__RotateOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RotateOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__RotateMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__RotateMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__RotateMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__RotateMode(soap, "tt:Mode", a->Mode, "tt:RotateMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_DegreeList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:DegreeList", &a->DegreeList, "tt:IntList"))
				{	soap_flag_DegreeList--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RotateOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:RotateOptionsExtension"))
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
			a->Mode = (enum tt__RotateMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RotateOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RotateOptions, 0, sizeof(struct tt__RotateOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RotateOptions(struct soap *soap, const struct tt__RotateOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RotateOptions);
	if (soap_out_tt__RotateOptions(soap, tag?tag:"tt:RotateOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RotateOptions * SOAP_FMAC4 soap_get_tt__RotateOptions(struct soap *soap, struct tt__RotateOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RotateOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, struct tt__VideoSourceConfigurationOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->Rotate = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, const struct tt__VideoSourceConfigurationOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RotateOptions(soap, &a->Rotate);
	soap_serialize_PointerTott__VideoSourceConfigurationOptionsExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfigurationOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RotateOptions(soap, "tt:Rotate", -1, &a->Rotate, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoSourceConfigurationOptionsExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptionsExtension * SOAP_FMAC4 soap_in_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, const char *tag, struct tt__VideoSourceConfigurationOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Rotate = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfigurationOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension, sizeof(struct tt__VideoSourceConfigurationOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfigurationOptionsExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Rotate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RotateOptions(soap, "tt:Rotate", &a->Rotate, "tt:RotateOptions"))
				{	soap_flag_Rotate--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfigurationOptionsExtension2(soap, "tt:Extension", &a->Extension, "tt:VideoSourceConfigurationOptionsExtension2"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__VideoSourceConfigurationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension, 0, sizeof(struct tt__VideoSourceConfigurationOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, const struct tt__VideoSourceConfigurationOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension);
	if (soap_out_tt__VideoSourceConfigurationOptionsExtension(soap, tag?tag:"tt:VideoSourceConfigurationOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptionsExtension * SOAP_FMAC4 soap_get_tt__VideoSourceConfigurationOptionsExtension(struct soap *soap, struct tt__VideoSourceConfigurationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfigurationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfigurationOptions(struct soap *soap, struct tt__VideoSourceConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BoundsRange = NULL;
	a->__sizeVideoSourceTokensAvailable = 0;
	a->VideoSourceTokensAvailable = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfigurationOptions(struct soap *soap, const struct tt__VideoSourceConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntRectangleRange(soap, &a->BoundsRange);
	if (a->VideoSourceTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeVideoSourceTokensAvailable; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->VideoSourceTokensAvailable + i);
		}
	}
	soap_serialize_PointerTott__VideoSourceConfigurationOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptions), type))
		return soap->error;
	if (a->BoundsRange)
	{	if (soap_out_PointerTott__IntRectangleRange(soap, "tt:BoundsRange", -1, &a->BoundsRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BoundsRange"))
		return soap->error;
	if (a->VideoSourceTokensAvailable)
	{	int i;
		for (i = 0; i < a->__sizeVideoSourceTokensAvailable; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:VideoSourceTokensAvailable", -1, a->VideoSourceTokensAvailable + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__VideoSourceConfigurationOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoSourceConfigurationOptions(struct soap *soap, const char *tag, struct tt__VideoSourceConfigurationOptions *a, const char *type)
{
	size_t soap_flag_BoundsRange = 1;
	struct soap_blist *soap_blist_VideoSourceTokensAvailable = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfigurationOptions, sizeof(struct tt__VideoSourceConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BoundsRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRectangleRange(soap, "tt:BoundsRange", &a->BoundsRange, "tt:IntRectangleRange"))
				{	soap_flag_BoundsRange--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:VideoSourceTokensAvailable", 1, NULL))
			{	if (a->VideoSourceTokensAvailable == NULL)
				{	if (soap_blist_VideoSourceTokensAvailable == NULL)
						soap_blist_VideoSourceTokensAvailable = soap_new_block(soap);
					a->VideoSourceTokensAvailable = (char **)soap_push_block(soap, soap_blist_VideoSourceTokensAvailable, sizeof(char *));
					if (a->VideoSourceTokensAvailable == NULL)
						return NULL;
					*a->VideoSourceTokensAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:VideoSourceTokensAvailable", a->VideoSourceTokensAvailable, "tt:ReferenceToken"))
				{	a->__sizeVideoSourceTokensAvailable++;
					a->VideoSourceTokensAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfigurationOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:VideoSourceConfigurationOptionsExtension"))
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
		if (a->VideoSourceTokensAvailable)
			soap_pop_block(soap, soap_blist_VideoSourceTokensAvailable);
		if (a->__sizeVideoSourceTokensAvailable)
			a->VideoSourceTokensAvailable = (char **)soap_save_block(soap, soap_blist_VideoSourceTokensAvailable, NULL, 1);
		else
		{	a->VideoSourceTokensAvailable = NULL;
			if (soap_blist_VideoSourceTokensAvailable)
				soap_end_block(soap, soap_blist_VideoSourceTokensAvailable);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__VideoSourceConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfigurationOptions, 0, sizeof(struct tt__VideoSourceConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BoundsRange > 0 || a->__sizeVideoSourceTokensAvailable < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfigurationOptions(struct soap *soap, const struct tt__VideoSourceConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfigurationOptions);
	if (soap_out_tt__VideoSourceConfigurationOptions(soap, tag?tag:"tt:VideoSourceConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoSourceConfigurationOptions(struct soap *soap, struct tt__VideoSourceConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RotateExtension(struct soap *soap, struct tt__RotateExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RotateExtension(struct soap *soap, const struct tt__RotateExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RotateExtension(struct soap *soap, const char *tag, int id, const struct tt__RotateExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RotateExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RotateExtension * SOAP_FMAC4 soap_in_tt__RotateExtension(struct soap *soap, const char *tag, struct tt__RotateExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RotateExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RotateExtension, sizeof(struct tt__RotateExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RotateExtension(soap, a);
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
	{	a = (struct tt__RotateExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RotateExtension, 0, sizeof(struct tt__RotateExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RotateExtension(struct soap *soap, const struct tt__RotateExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RotateExtension);
	if (soap_out_tt__RotateExtension(soap, tag?tag:"tt:RotateExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RotateExtension * SOAP_FMAC4 soap_get_tt__RotateExtension(struct soap *soap, struct tt__RotateExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RotateExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfigurationExtension2(struct soap *soap, struct tt__VideoSourceConfigurationExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfigurationExtension2(struct soap *soap, const struct tt__VideoSourceConfigurationExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfigurationExtension2(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfigurationExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfigurationExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__VideoSourceConfigurationExtension2(struct soap *soap, const char *tag, struct tt__VideoSourceConfigurationExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfigurationExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfigurationExtension2, sizeof(struct tt__VideoSourceConfigurationExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfigurationExtension2(soap, a);
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
	{	a = (struct tt__VideoSourceConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfigurationExtension2, 0, sizeof(struct tt__VideoSourceConfigurationExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfigurationExtension2(struct soap *soap, const struct tt__VideoSourceConfigurationExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfigurationExtension2);
	if (soap_out_tt__VideoSourceConfigurationExtension2(soap, tag?tag:"tt:VideoSourceConfigurationExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__VideoSourceConfigurationExtension2(struct soap *soap, struct tt__VideoSourceConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Rotate(struct soap *soap, struct tt__Rotate *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RotateMode(soap, &a->Mode);
	a->Degree = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Rotate(struct soap *soap, const struct tt__Rotate *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__RotateMode);
	soap_serialize_PointerToint(soap, &a->Degree);
	soap_serialize_PointerTott__RotateExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Rotate(struct soap *soap, const char *tag, int id, const struct tt__Rotate *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Rotate), type))
		return soap->error;
	if (soap_out_tt__RotateMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:Degree", -1, &a->Degree, ""))
		return soap->error;
	if (soap_out_PointerTott__RotateExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Rotate * SOAP_FMAC4 soap_in_tt__Rotate(struct soap *soap, const char *tag, struct tt__Rotate *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Degree = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Rotate *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Rotate, sizeof(struct tt__Rotate), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Rotate(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RotateMode(soap, "tt:Mode", &a->Mode, "tt:RotateMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Degree && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:Degree", &a->Degree, "xsd:int"))
				{	soap_flag_Degree--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RotateExtension(soap, "tt:Extension", &a->Extension, "tt:RotateExtension"))
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
	{	a = (struct tt__Rotate *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Rotate, 0, sizeof(struct tt__Rotate), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Rotate(struct soap *soap, const struct tt__Rotate *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Rotate);
	if (soap_out_tt__Rotate(soap, tag?tag:"tt:Rotate", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Rotate * SOAP_FMAC4 soap_get_tt__Rotate(struct soap *soap, struct tt__Rotate *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Rotate(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfigurationExtension(struct soap *soap, struct tt__VideoSourceConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Rotate = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfigurationExtension(struct soap *soap, const struct tt__VideoSourceConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Rotate(soap, &a->Rotate);
	soap_serialize_PointerTott__VideoSourceConfigurationExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfigurationExtension), type))
		return soap->error;
	if (soap_out_PointerTott__Rotate(soap, "tt:Rotate", -1, &a->Rotate, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoSourceConfigurationExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationExtension * SOAP_FMAC4 soap_in_tt__VideoSourceConfigurationExtension(struct soap *soap, const char *tag, struct tt__VideoSourceConfigurationExtension *a, const char *type)
{
	size_t soap_flag_Rotate = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfigurationExtension, sizeof(struct tt__VideoSourceConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Rotate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rotate(soap, "tt:Rotate", &a->Rotate, "tt:Rotate"))
				{	soap_flag_Rotate--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfigurationExtension2(soap, "tt:Extension", &a->Extension, "tt:VideoSourceConfigurationExtension2"))
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
	{	a = (struct tt__VideoSourceConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfigurationExtension, 0, sizeof(struct tt__VideoSourceConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfigurationExtension(struct soap *soap, const struct tt__VideoSourceConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfigurationExtension);
	if (soap_out_tt__VideoSourceConfigurationExtension(soap, tag?tag:"tt:VideoSourceConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfigurationExtension * SOAP_FMAC4 soap_get_tt__VideoSourceConfigurationExtension(struct soap *soap, struct tt__VideoSourceConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ConfigurationEntity(struct soap *soap, struct tt__ConfigurationEntity *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ConfigurationEntity(struct soap *soap, const struct tt__ConfigurationEntity *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ConfigurationEntity(struct soap *soap, const char *tag, int id, const struct tt__ConfigurationEntity *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ConfigurationEntity), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ConfigurationEntity * SOAP_FMAC4 soap_in_tt__ConfigurationEntity(struct soap *soap, const char *tag, struct tt__ConfigurationEntity *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ConfigurationEntity *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ConfigurationEntity, sizeof(struct tt__ConfigurationEntity), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ConfigurationEntity(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
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
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ConfigurationEntity *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ConfigurationEntity, 0, sizeof(struct tt__ConfigurationEntity), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ConfigurationEntity(struct soap *soap, const struct tt__ConfigurationEntity *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ConfigurationEntity);
	if (soap_out_tt__ConfigurationEntity(soap, tag?tag:"tt:ConfigurationEntity", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ConfigurationEntity * SOAP_FMAC4 soap_get_tt__ConfigurationEntity(struct soap *soap, struct tt__ConfigurationEntity *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ConfigurationEntity(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ProfileExtension2(struct soap *soap, struct tt__ProfileExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ProfileExtension2(struct soap *soap, const struct tt__ProfileExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ProfileExtension2(struct soap *soap, const char *tag, int id, const struct tt__ProfileExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ProfileExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ProfileExtension2 * SOAP_FMAC4 soap_in_tt__ProfileExtension2(struct soap *soap, const char *tag, struct tt__ProfileExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ProfileExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ProfileExtension2, sizeof(struct tt__ProfileExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ProfileExtension2(soap, a);
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
	{	a = (struct tt__ProfileExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ProfileExtension2, 0, sizeof(struct tt__ProfileExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ProfileExtension2(struct soap *soap, const struct tt__ProfileExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ProfileExtension2);
	if (soap_out_tt__ProfileExtension2(soap, tag?tag:"tt:ProfileExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ProfileExtension2 * SOAP_FMAC4 soap_get_tt__ProfileExtension2(struct soap *soap, struct tt__ProfileExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ProfileExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioDecoderConfiguration(struct soap *soap, struct tt__AudioDecoderConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioDecoderConfiguration(struct soap *soap, const struct tt__AudioDecoderConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AudioDecoderConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioDecoderConfiguration * SOAP_FMAC4 soap_in_tt__AudioDecoderConfiguration(struct soap *soap, const char *tag, struct tt__AudioDecoderConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioDecoderConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfiguration, sizeof(struct tt__AudioDecoderConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioDecoderConfiguration(soap, a);
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
	{	a = (struct tt__AudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfiguration, 0, sizeof(struct tt__AudioDecoderConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioDecoderConfiguration(struct soap *soap, const struct tt__AudioDecoderConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfiguration);
	if (soap_out_tt__AudioDecoderConfiguration(soap, tag?tag:"tt:AudioDecoderConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioDecoderConfiguration * SOAP_FMAC4 soap_get_tt__AudioDecoderConfiguration(struct soap *soap, struct tt__AudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioOutputConfiguration(struct soap *soap, struct tt__AudioOutputConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__ReferenceToken(soap, &a->OutputToken);
	soap_default_xsd__anyURI(soap, &a->SendPrimacy);
	soap_default_int(soap, &a->OutputLevel);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioOutputConfiguration(struct soap *soap, const struct tt__AudioOutputConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_tt__ReferenceToken(soap, &a->OutputToken);
	soap_serialize_xsd__anyURI(soap, &a->SendPrimacy);
	soap_embedded(soap, &a->OutputLevel, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioOutputConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AudioOutputConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioOutputConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->OutputToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:OutputToken", -1, &a->OutputToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OutputToken"))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:SendPrimacy", -1, &a->SendPrimacy, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:OutputLevel", -1, &a->OutputLevel, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioOutputConfiguration * SOAP_FMAC4 soap_in_tt__AudioOutputConfiguration(struct soap *soap, const char *tag, struct tt__AudioOutputConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_OutputToken = 1;
	size_t soap_flag_SendPrimacy = 1;
	size_t soap_flag_OutputLevel = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioOutputConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioOutputConfiguration, sizeof(struct tt__AudioOutputConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioOutputConfiguration(soap, a);
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
			if (soap_flag_OutputToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:OutputToken", &a->OutputToken, "tt:ReferenceToken"))
				{	soap_flag_OutputToken--;
					continue;
				}
			if (soap_flag_SendPrimacy && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:SendPrimacy", &a->SendPrimacy, "xsd:anyURI"))
				{	soap_flag_SendPrimacy--;
					continue;
				}
			if (soap_flag_OutputLevel && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:OutputLevel", &a->OutputLevel, "xsd:int"))
				{	soap_flag_OutputLevel--;
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
	{	a = (struct tt__AudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioOutputConfiguration, 0, sizeof(struct tt__AudioOutputConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_OutputToken > 0 || soap_flag_OutputLevel > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioOutputConfiguration(struct soap *soap, const struct tt__AudioOutputConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioOutputConfiguration);
	if (soap_out_tt__AudioOutputConfiguration(soap, tag?tag:"tt:AudioOutputConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioOutputConfiguration * SOAP_FMAC4 soap_get_tt__AudioOutputConfiguration(struct soap *soap, struct tt__AudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ProfileExtension(struct soap *soap, struct tt__ProfileExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->AudioOutputConfiguration = NULL;
	a->AudioDecoderConfiguration = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ProfileExtension(struct soap *soap, const struct tt__ProfileExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioOutputConfiguration(soap, &a->AudioOutputConfiguration);
	soap_serialize_PointerTott__AudioDecoderConfiguration(soap, &a->AudioDecoderConfiguration);
	soap_serialize_PointerTott__ProfileExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ProfileExtension(struct soap *soap, const char *tag, int id, const struct tt__ProfileExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ProfileExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AudioOutputConfiguration(soap, "tt:AudioOutputConfiguration", -1, &a->AudioOutputConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioDecoderConfiguration(soap, "tt:AudioDecoderConfiguration", -1, &a->AudioDecoderConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__ProfileExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ProfileExtension * SOAP_FMAC4 soap_in_tt__ProfileExtension(struct soap *soap, const char *tag, struct tt__ProfileExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_AudioOutputConfiguration = 1;
	size_t soap_flag_AudioDecoderConfiguration = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ProfileExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ProfileExtension, sizeof(struct tt__ProfileExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ProfileExtension(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioOutputConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "tt:AudioOutputConfiguration", &a->AudioOutputConfiguration, "tt:AudioOutputConfiguration"))
				{	soap_flag_AudioOutputConfiguration--;
					continue;
				}
			if (soap_flag_AudioDecoderConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfiguration(soap, "tt:AudioDecoderConfiguration", &a->AudioDecoderConfiguration, "tt:AudioDecoderConfiguration"))
				{	soap_flag_AudioDecoderConfiguration--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ProfileExtension2(soap, "tt:Extension", &a->Extension, "tt:ProfileExtension2"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__ProfileExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ProfileExtension, 0, sizeof(struct tt__ProfileExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ProfileExtension(struct soap *soap, const struct tt__ProfileExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ProfileExtension);
	if (soap_out_tt__ProfileExtension(soap, tag?tag:"tt:ProfileExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ProfileExtension * SOAP_FMAC4 soap_get_tt__ProfileExtension(struct soap *soap, struct tt__ProfileExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ProfileExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataConfiguration(struct soap *soap, struct tt__MetadataConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->PTZStatus = NULL;
	a->Events = NULL;
	a->Analytics = NULL;
	a->Multicast = NULL;
	soap_default_xsd__duration(soap, &a->SessionTimeout);
	a->__size = 0;
	a->__any = NULL;
	a->AnalyticsEngineConfiguration = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataConfiguration(struct soap *soap, const struct tt__MetadataConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_PointerTott__PTZFilter(soap, &a->PTZStatus);
	soap_serialize_PointerTott__EventSubscription(soap, &a->Events);
	soap_serialize_PointerToxsd__boolean(soap, &a->Analytics);
	soap_serialize_PointerTott__MulticastConfiguration(soap, &a->Multicast);
	soap_embedded(soap, &a->SessionTimeout, SOAP_TYPE_xsd__duration);
	soap_serialize_PointerTott__AnalyticsEngineConfiguration(soap, &a->AnalyticsEngineConfiguration);
	soap_serialize_PointerTott__MetadataConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfiguration(struct soap *soap, const char *tag, int id, const struct tt__MetadataConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZFilter(soap, "tt:PTZStatus", -1, &a->PTZStatus, ""))
		return soap->error;
	if (soap_out_PointerTott__EventSubscription(soap, "tt:Events", -1, &a->Events, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:Analytics", -1, &a->Analytics, ""))
		return soap->error;
	if (a->Multicast)
	{	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &a->Multicast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Multicast"))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:SessionTimeout", -1, &a->SessionTimeout, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &a->AnalyticsEngineConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__MetadataConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataConfiguration * SOAP_FMAC4 soap_in_tt__MetadataConfiguration(struct soap *soap, const char *tag, struct tt__MetadataConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_PTZStatus = 1;
	size_t soap_flag_Events = 1;
	size_t soap_flag_Analytics = 1;
	size_t soap_flag_Multicast = 1;
	size_t soap_flag_SessionTimeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_AnalyticsEngineConfiguration = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfiguration, sizeof(struct tt__MetadataConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataConfiguration(soap, a);
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
			if (soap_flag_PTZStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZFilter(soap, "tt:PTZStatus", &a->PTZStatus, "tt:PTZFilter"))
				{	soap_flag_PTZStatus--;
					continue;
				}
			if (soap_flag_Events && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EventSubscription(soap, "tt:Events", &a->Events, "tt:EventSubscription"))
				{	soap_flag_Events--;
					continue;
				}
			if (soap_flag_Analytics && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Analytics", &a->Analytics, "xsd:boolean"))
				{	soap_flag_Analytics--;
					continue;
				}
			if (soap_flag_Multicast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &a->Multicast, "tt:MulticastConfiguration"))
				{	soap_flag_Multicast--;
					continue;
				}
			if (soap_flag_SessionTimeout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:SessionTimeout", &a->SessionTimeout, "xsd:duration"))
				{	soap_flag_SessionTimeout--;
					continue;
				}
			if (soap_flag_AnalyticsEngineConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &a->AnalyticsEngineConfiguration, "tt:AnalyticsEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:MetadataConfigurationExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__MetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfiguration, 0, sizeof(struct tt__MetadataConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_Multicast > 0 || soap_flag_SessionTimeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataConfiguration(struct soap *soap, const struct tt__MetadataConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfiguration);
	if (soap_out_tt__MetadataConfiguration(soap, tag?tag:"tt:MetadataConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataConfiguration * SOAP_FMAC4 soap_get_tt__MetadataConfiguration(struct soap *soap, struct tt__MetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZConfiguration(struct soap *soap, struct tt__PTZConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__ReferenceToken(soap, &a->NodeToken);
	soap_default_xsd__anyURI(soap, &a->DefaultAbsolutePantTiltPositionSpace);
	soap_default_xsd__anyURI(soap, &a->DefaultAbsoluteZoomPositionSpace);
	soap_default_xsd__anyURI(soap, &a->DefaultRelativePanTiltTranslationSpace);
	soap_default_xsd__anyURI(soap, &a->DefaultRelativeZoomTranslationSpace);
	soap_default_xsd__anyURI(soap, &a->DefaultContinuousPanTiltVelocitySpace);
	soap_default_xsd__anyURI(soap, &a->DefaultContinuousZoomVelocitySpace);
	a->DefaultPTZSpeed = NULL;
	a->DefaultPTZTimeout = NULL;
	a->PanTiltLimits = NULL;
	a->ZoomLimits = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZConfiguration(struct soap *soap, const struct tt__PTZConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_tt__ReferenceToken(soap, &a->NodeToken);
	soap_serialize_xsd__anyURI(soap, &a->DefaultAbsolutePantTiltPositionSpace);
	soap_serialize_xsd__anyURI(soap, &a->DefaultAbsoluteZoomPositionSpace);
	soap_serialize_xsd__anyURI(soap, &a->DefaultRelativePanTiltTranslationSpace);
	soap_serialize_xsd__anyURI(soap, &a->DefaultRelativeZoomTranslationSpace);
	soap_serialize_xsd__anyURI(soap, &a->DefaultContinuousPanTiltVelocitySpace);
	soap_serialize_xsd__anyURI(soap, &a->DefaultContinuousZoomVelocitySpace);
	soap_serialize_PointerTott__PTZSpeed(soap, &a->DefaultPTZSpeed);
	soap_serialize_PointerToxsd__duration(soap, &a->DefaultPTZTimeout);
	soap_serialize_PointerTott__PanTiltLimits(soap, &a->PanTiltLimits);
	soap_serialize_PointerTott__ZoomLimits(soap, &a->ZoomLimits);
	soap_serialize_PointerTott__PTZConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfiguration(struct soap *soap, const char *tag, int id, const struct tt__PTZConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->NodeToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:NodeToken", -1, &a->NodeToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:NodeToken"))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultAbsolutePantTiltPositionSpace", -1, &a->DefaultAbsolutePantTiltPositionSpace, ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultAbsoluteZoomPositionSpace", -1, &a->DefaultAbsoluteZoomPositionSpace, ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultRelativePanTiltTranslationSpace", -1, &a->DefaultRelativePanTiltTranslationSpace, ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultRelativeZoomTranslationSpace", -1, &a->DefaultRelativeZoomTranslationSpace, ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultContinuousPanTiltVelocitySpace", -1, &a->DefaultContinuousPanTiltVelocitySpace, ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultContinuousZoomVelocitySpace", -1, &a->DefaultContinuousZoomVelocitySpace, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tt:DefaultPTZSpeed", -1, &a->DefaultPTZSpeed, ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:DefaultPTZTimeout", -1, &a->DefaultPTZTimeout, ""))
		return soap->error;
	if (soap_out_PointerTott__PanTiltLimits(soap, "tt:PanTiltLimits", -1, &a->PanTiltLimits, ""))
		return soap->error;
	if (soap_out_PointerTott__ZoomLimits(soap, "tt:ZoomLimits", -1, &a->ZoomLimits, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZConfiguration * SOAP_FMAC4 soap_in_tt__PTZConfiguration(struct soap *soap, const char *tag, struct tt__PTZConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_NodeToken = 1;
	size_t soap_flag_DefaultAbsolutePantTiltPositionSpace = 1;
	size_t soap_flag_DefaultAbsoluteZoomPositionSpace = 1;
	size_t soap_flag_DefaultRelativePanTiltTranslationSpace = 1;
	size_t soap_flag_DefaultRelativeZoomTranslationSpace = 1;
	size_t soap_flag_DefaultContinuousPanTiltVelocitySpace = 1;
	size_t soap_flag_DefaultContinuousZoomVelocitySpace = 1;
	size_t soap_flag_DefaultPTZSpeed = 1;
	size_t soap_flag_DefaultPTZTimeout = 1;
	size_t soap_flag_PanTiltLimits = 1;
	size_t soap_flag_ZoomLimits = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfiguration, sizeof(struct tt__PTZConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZConfiguration(soap, a);
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
			if (soap_flag_NodeToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:NodeToken", &a->NodeToken, "tt:ReferenceToken"))
				{	soap_flag_NodeToken--;
					continue;
				}
			if (soap_flag_DefaultAbsolutePantTiltPositionSpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultAbsolutePantTiltPositionSpace", &a->DefaultAbsolutePantTiltPositionSpace, "xsd:anyURI"))
				{	soap_flag_DefaultAbsolutePantTiltPositionSpace--;
					continue;
				}
			if (soap_flag_DefaultAbsoluteZoomPositionSpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultAbsoluteZoomPositionSpace", &a->DefaultAbsoluteZoomPositionSpace, "xsd:anyURI"))
				{	soap_flag_DefaultAbsoluteZoomPositionSpace--;
					continue;
				}
			if (soap_flag_DefaultRelativePanTiltTranslationSpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultRelativePanTiltTranslationSpace", &a->DefaultRelativePanTiltTranslationSpace, "xsd:anyURI"))
				{	soap_flag_DefaultRelativePanTiltTranslationSpace--;
					continue;
				}
			if (soap_flag_DefaultRelativeZoomTranslationSpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultRelativeZoomTranslationSpace", &a->DefaultRelativeZoomTranslationSpace, "xsd:anyURI"))
				{	soap_flag_DefaultRelativeZoomTranslationSpace--;
					continue;
				}
			if (soap_flag_DefaultContinuousPanTiltVelocitySpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultContinuousPanTiltVelocitySpace", &a->DefaultContinuousPanTiltVelocitySpace, "xsd:anyURI"))
				{	soap_flag_DefaultContinuousPanTiltVelocitySpace--;
					continue;
				}
			if (soap_flag_DefaultContinuousZoomVelocitySpace && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultContinuousZoomVelocitySpace", &a->DefaultContinuousZoomVelocitySpace, "xsd:anyURI"))
				{	soap_flag_DefaultContinuousZoomVelocitySpace--;
					continue;
				}
			if (soap_flag_DefaultPTZSpeed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tt:DefaultPTZSpeed", &a->DefaultPTZSpeed, "tt:PTZSpeed"))
				{	soap_flag_DefaultPTZSpeed--;
					continue;
				}
			if (soap_flag_DefaultPTZTimeout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:DefaultPTZTimeout", &a->DefaultPTZTimeout, "xsd:duration"))
				{	soap_flag_DefaultPTZTimeout--;
					continue;
				}
			if (soap_flag_PanTiltLimits && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PanTiltLimits(soap, "tt:PanTiltLimits", &a->PanTiltLimits, "tt:PanTiltLimits"))
				{	soap_flag_PanTiltLimits--;
					continue;
				}
			if (soap_flag_ZoomLimits && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ZoomLimits(soap, "tt:ZoomLimits", &a->ZoomLimits, "tt:ZoomLimits"))
				{	soap_flag_ZoomLimits--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:PTZConfigurationExtension"))
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
	{	a = (struct tt__PTZConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfiguration, 0, sizeof(struct tt__PTZConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_NodeToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZConfiguration(struct soap *soap, const struct tt__PTZConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZConfiguration);
	if (soap_out_tt__PTZConfiguration(soap, tag?tag:"tt:PTZConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZConfiguration * SOAP_FMAC4 soap_get_tt__PTZConfiguration(struct soap *soap, struct tt__PTZConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoAnalyticsConfiguration(struct soap *soap, struct tt__VideoAnalyticsConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->AnalyticsEngineConfiguration = NULL;
	a->RuleEngineConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoAnalyticsConfiguration(struct soap *soap, const struct tt__VideoAnalyticsConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_PointerTott__AnalyticsEngineConfiguration(soap, &a->AnalyticsEngineConfiguration);
	soap_serialize_PointerTott__RuleEngineConfiguration(soap, &a->RuleEngineConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const struct tt__VideoAnalyticsConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsConfiguration), type))
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
	{	if (soap_out_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &a->AnalyticsEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineConfiguration"))
		return soap->error;
	if (a->RuleEngineConfiguration)
	{	if (soap_out_PointerTott__RuleEngineConfiguration(soap, "tt:RuleEngineConfiguration", -1, &a->RuleEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RuleEngineConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoAnalyticsConfiguration * SOAP_FMAC4 soap_in_tt__VideoAnalyticsConfiguration(struct soap *soap, const char *tag, struct tt__VideoAnalyticsConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_AnalyticsEngineConfiguration = 1;
	size_t soap_flag_RuleEngineConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoAnalyticsConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsConfiguration, sizeof(struct tt__VideoAnalyticsConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoAnalyticsConfiguration(soap, a);
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
				if (soap_in_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &a->AnalyticsEngineConfiguration, "tt:AnalyticsEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration--;
					continue;
				}
			if (soap_flag_RuleEngineConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RuleEngineConfiguration(soap, "tt:RuleEngineConfiguration", &a->RuleEngineConfiguration, "tt:RuleEngineConfiguration"))
				{	soap_flag_RuleEngineConfiguration--;
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
	{	a = (struct tt__VideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsConfiguration, 0, sizeof(struct tt__VideoAnalyticsConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_AnalyticsEngineConfiguration > 0 || soap_flag_RuleEngineConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoAnalyticsConfiguration(struct soap *soap, const struct tt__VideoAnalyticsConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsConfiguration);
	if (soap_out_tt__VideoAnalyticsConfiguration(soap, tag?tag:"tt:VideoAnalyticsConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoAnalyticsConfiguration * SOAP_FMAC4 soap_get_tt__VideoAnalyticsConfiguration(struct soap *soap, struct tt__VideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioEncoderConfiguration(struct soap *soap, struct tt__AudioEncoderConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__AudioEncoding(soap, &a->Encoding);
	soap_default_int(soap, &a->Bitrate);
	soap_default_int(soap, &a->SampleRate);
	a->Multicast = NULL;
	soap_default_xsd__duration(soap, &a->SessionTimeout);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioEncoderConfiguration(struct soap *soap, const struct tt__AudioEncoderConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_embedded(soap, &a->Bitrate, SOAP_TYPE_int);
	soap_embedded(soap, &a->SampleRate, SOAP_TYPE_int);
	soap_serialize_PointerTott__MulticastConfiguration(soap, &a->Multicast);
	soap_embedded(soap, &a->SessionTimeout, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioEncoderConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AudioEncoderConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioEncoderConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (soap_out_tt__AudioEncoding(soap, "tt:Encoding", -1, &a->Encoding, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:SampleRate", -1, &a->SampleRate, ""))
		return soap->error;
	if (a->Multicast)
	{	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &a->Multicast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Multicast"))
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

SOAP_FMAC3 struct tt__AudioEncoderConfiguration * SOAP_FMAC4 soap_in_tt__AudioEncoderConfiguration(struct soap *soap, const char *tag, struct tt__AudioEncoderConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_Encoding = 1;
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_SampleRate = 1;
	size_t soap_flag_Multicast = 1;
	size_t soap_flag_SessionTimeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioEncoderConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioEncoderConfiguration, sizeof(struct tt__AudioEncoderConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioEncoderConfiguration(soap, a);
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
			if (soap_flag_Encoding && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AudioEncoding(soap, "tt:Encoding", &a->Encoding, "tt:AudioEncoding"))
				{	soap_flag_Encoding--;
					continue;
				}
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Bitrate", &a->Bitrate, "xsd:int"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_SampleRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:SampleRate", &a->SampleRate, "xsd:int"))
				{	soap_flag_SampleRate--;
					continue;
				}
			if (soap_flag_Multicast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &a->Multicast, "tt:MulticastConfiguration"))
				{	soap_flag_Multicast--;
					continue;
				}
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
	{	a = (struct tt__AudioEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioEncoderConfiguration, 0, sizeof(struct tt__AudioEncoderConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_Encoding > 0 || soap_flag_Bitrate > 0 || soap_flag_SampleRate > 0 || soap_flag_Multicast > 0 || soap_flag_SessionTimeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioEncoderConfiguration(struct soap *soap, const struct tt__AudioEncoderConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioEncoderConfiguration);
	if (soap_out_tt__AudioEncoderConfiguration(soap, tag?tag:"tt:AudioEncoderConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioEncoderConfiguration * SOAP_FMAC4 soap_get_tt__AudioEncoderConfiguration(struct soap *soap, struct tt__AudioEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoEncoderConfiguration(struct soap *soap, struct tt__VideoEncoderConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__VideoEncoding(soap, &a->Encoding);
	a->Resolution = NULL;
	soap_default_float(soap, &a->Quality);
	a->RateControl = NULL;
	a->MPEG4 = NULL;
	a->H264 = NULL;
	a->Multicast = NULL;
	soap_default_xsd__duration(soap, &a->SessionTimeout);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoEncoderConfiguration(struct soap *soap, const struct tt__VideoEncoderConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_PointerTott__VideoResolution(soap, &a->Resolution);
	soap_embedded(soap, &a->Quality, SOAP_TYPE_float);
	soap_serialize_PointerTott__VideoRateControl(soap, &a->RateControl);
	soap_serialize_PointerTott__Mpeg4Configuration(soap, &a->MPEG4);
	soap_serialize_PointerTott__H264Configuration(soap, &a->H264);
	soap_serialize_PointerTott__MulticastConfiguration(soap, &a->Multicast);
	soap_embedded(soap, &a->SessionTimeout, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoderConfiguration(struct soap *soap, const char *tag, int id, const struct tt__VideoEncoderConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoEncoderConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (soap_out_tt__VideoEncoding(soap, "tt:Encoding", -1, &a->Encoding, ""))
		return soap->error;
	if (a->Resolution)
	{	if (soap_out_PointerTott__VideoResolution(soap, "tt:Resolution", -1, &a->Resolution, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Resolution"))
		return soap->error;
	if (soap_out_float(soap, "tt:Quality", -1, &a->Quality, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoRateControl(soap, "tt:RateControl", -1, &a->RateControl, ""))
		return soap->error;
	if (soap_out_PointerTott__Mpeg4Configuration(soap, "tt:MPEG4", -1, &a->MPEG4, ""))
		return soap->error;
	if (soap_out_PointerTott__H264Configuration(soap, "tt:H264", -1, &a->H264, ""))
		return soap->error;
	if (a->Multicast)
	{	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &a->Multicast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Multicast"))
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

SOAP_FMAC3 struct tt__VideoEncoderConfiguration * SOAP_FMAC4 soap_in_tt__VideoEncoderConfiguration(struct soap *soap, const char *tag, struct tt__VideoEncoderConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_Encoding = 1;
	size_t soap_flag_Resolution = 1;
	size_t soap_flag_Quality = 1;
	size_t soap_flag_RateControl = 1;
	size_t soap_flag_MPEG4 = 1;
	size_t soap_flag_H264 = 1;
	size_t soap_flag_Multicast = 1;
	size_t soap_flag_SessionTimeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoEncoderConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoderConfiguration, sizeof(struct tt__VideoEncoderConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoEncoderConfiguration(soap, a);
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
			if (soap_flag_Encoding && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__VideoEncoding(soap, "tt:Encoding", &a->Encoding, "tt:VideoEncoding"))
				{	soap_flag_Encoding--;
					continue;
				}
			if (soap_flag_Resolution && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoResolution(soap, "tt:Resolution", &a->Resolution, "tt:VideoResolution"))
				{	soap_flag_Resolution--;
					continue;
				}
			if (soap_flag_Quality && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Quality", &a->Quality, "xsd:float"))
				{	soap_flag_Quality--;
					continue;
				}
			if (soap_flag_RateControl && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoRateControl(soap, "tt:RateControl", &a->RateControl, "tt:VideoRateControl"))
				{	soap_flag_RateControl--;
					continue;
				}
			if (soap_flag_MPEG4 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Mpeg4Configuration(soap, "tt:MPEG4", &a->MPEG4, "tt:Mpeg4Configuration"))
				{	soap_flag_MPEG4--;
					continue;
				}
			if (soap_flag_H264 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__H264Configuration(soap, "tt:H264", &a->H264, "tt:H264Configuration"))
				{	soap_flag_H264--;
					continue;
				}
			if (soap_flag_Multicast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &a->Multicast, "tt:MulticastConfiguration"))
				{	soap_flag_Multicast--;
					continue;
				}
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
	{	a = (struct tt__VideoEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoEncoderConfiguration, 0, sizeof(struct tt__VideoEncoderConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_Encoding > 0 || soap_flag_Resolution > 0 || soap_flag_Quality > 0 || soap_flag_Multicast > 0 || soap_flag_SessionTimeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoEncoderConfiguration(struct soap *soap, const struct tt__VideoEncoderConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoderConfiguration);
	if (soap_out_tt__VideoEncoderConfiguration(soap, tag?tag:"tt:VideoEncoderConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoEncoderConfiguration * SOAP_FMAC4 soap_get_tt__VideoEncoderConfiguration(struct soap *soap, struct tt__VideoEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioSourceConfiguration(struct soap *soap, struct tt__AudioSourceConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__ReferenceToken(soap, &a->SourceToken);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioSourceConfiguration(struct soap *soap, const struct tt__AudioSourceConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_tt__ReferenceToken(soap, &a->SourceToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioSourceConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AudioSourceConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioSourceConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->SourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:SourceToken", -1, &a->SourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioSourceConfiguration * SOAP_FMAC4 soap_in_tt__AudioSourceConfiguration(struct soap *soap, const char *tag, struct tt__AudioSourceConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_SourceToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioSourceConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioSourceConfiguration, sizeof(struct tt__AudioSourceConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioSourceConfiguration(soap, a);
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
			if (soap_flag_SourceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:SourceToken", &a->SourceToken, "tt:ReferenceToken"))
				{	soap_flag_SourceToken--;
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
	{	a = (struct tt__AudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioSourceConfiguration, 0, sizeof(struct tt__AudioSourceConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_SourceToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioSourceConfiguration(struct soap *soap, const struct tt__AudioSourceConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioSourceConfiguration);
	if (soap_out_tt__AudioSourceConfiguration(soap, tag?tag:"tt:AudioSourceConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioSourceConfiguration * SOAP_FMAC4 soap_get_tt__AudioSourceConfiguration(struct soap *soap, struct tt__AudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceConfiguration(struct soap *soap, struct tt__VideoSourceConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__ReferenceToken(soap, &a->SourceToken);
	a->Bounds = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceConfiguration(struct soap *soap, const struct tt__VideoSourceConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_tt__ReferenceToken(soap, &a->SourceToken);
	soap_serialize_PointerTott__IntRectangle(soap, &a->Bounds);
	soap_serialize_PointerTott__VideoSourceConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceConfiguration(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceConfiguration), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->SourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:SourceToken", -1, &a->SourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceToken"))
		return soap->error;
	if (a->Bounds)
	{	if (soap_out_PointerTott__IntRectangle(soap, "tt:Bounds", -1, &a->Bounds, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bounds"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__VideoSourceConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceConfiguration * SOAP_FMAC4 soap_in_tt__VideoSourceConfiguration(struct soap *soap, const char *tag, struct tt__VideoSourceConfiguration *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_SourceToken = 1;
	size_t soap_flag_Bounds = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceConfiguration, sizeof(struct tt__VideoSourceConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceConfiguration(soap, a);
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
			if (soap_flag_SourceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:SourceToken", &a->SourceToken, "tt:ReferenceToken"))
				{	soap_flag_SourceToken--;
					continue;
				}
			if (soap_flag_Bounds && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRectangle(soap, "tt:Bounds", &a->Bounds, "tt:IntRectangle"))
				{	soap_flag_Bounds--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:VideoSourceConfigurationExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__VideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceConfiguration, 0, sizeof(struct tt__VideoSourceConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_SourceToken > 0 || soap_flag_Bounds > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceConfiguration(struct soap *soap, const struct tt__VideoSourceConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceConfiguration);
	if (soap_out_tt__VideoSourceConfiguration(soap, tag?tag:"tt:VideoSourceConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceConfiguration * SOAP_FMAC4 soap_get_tt__VideoSourceConfiguration(struct soap *soap, struct tt__VideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Profile(struct soap *soap, struct tt__Profile *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	a->VideoSourceConfiguration = NULL;
	a->AudioSourceConfiguration = NULL;
	a->VideoEncoderConfiguration = NULL;
	a->AudioEncoderConfiguration = NULL;
	a->VideoAnalyticsConfiguration = NULL;
	a->PTZConfiguration = NULL;
	a->MetadataConfiguration = NULL;
	a->Extension = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->fixed = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Profile(struct soap *soap, const struct tt__Profile *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_serialize_PointerTott__VideoSourceConfiguration(soap, &a->VideoSourceConfiguration);
	soap_serialize_PointerTott__AudioSourceConfiguration(soap, &a->AudioSourceConfiguration);
	soap_serialize_PointerTott__VideoEncoderConfiguration(soap, &a->VideoEncoderConfiguration);
	soap_serialize_PointerTott__AudioEncoderConfiguration(soap, &a->AudioEncoderConfiguration);
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &a->VideoAnalyticsConfiguration);
	soap_serialize_PointerTott__PTZConfiguration(soap, &a->PTZConfiguration);
	soap_serialize_PointerTott__MetadataConfiguration(soap, &a->MetadataConfiguration);
	soap_serialize_PointerTott__ProfileExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Profile(struct soap *soap, const char *tag, int id, const struct tt__Profile *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->fixed)
		soap_set_attr(soap, "fixed", soap_xsd__boolean2s(soap, *a->fixed), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Profile), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_PointerTott__VideoSourceConfiguration(soap, "tt:VideoSourceConfiguration", -1, &a->VideoSourceConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioSourceConfiguration(soap, "tt:AudioSourceConfiguration", -1, &a->AudioSourceConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoEncoderConfiguration", -1, &a->VideoEncoderConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", -1, &a->AudioEncoderConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", -1, &a->VideoAnalyticsConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfiguration(soap, "tt:PTZConfiguration", -1, &a->PTZConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__MetadataConfiguration(soap, "tt:MetadataConfiguration", -1, &a->MetadataConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__ProfileExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Profile * SOAP_FMAC4 soap_in_tt__Profile(struct soap *soap, const char *tag, struct tt__Profile *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_VideoSourceConfiguration = 1;
	size_t soap_flag_AudioSourceConfiguration = 1;
	size_t soap_flag_VideoEncoderConfiguration = 1;
	size_t soap_flag_AudioEncoderConfiguration = 1;
	size_t soap_flag_VideoAnalyticsConfiguration = 1;
	size_t soap_flag_PTZConfiguration = 1;
	size_t soap_flag_MetadataConfiguration = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Profile *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Profile, sizeof(struct tt__Profile), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Profile(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	{	const char *t = soap_attr_value(soap, "fixed", 0);
		if (t)
		{
			if (!(a->fixed = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->fixed))
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
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &a->Name, "tt:Name"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_VideoSourceConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "tt:VideoSourceConfiguration", &a->VideoSourceConfiguration, "tt:VideoSourceConfiguration"))
				{	soap_flag_VideoSourceConfiguration--;
					continue;
				}
			if (soap_flag_AudioSourceConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "tt:AudioSourceConfiguration", &a->AudioSourceConfiguration, "tt:AudioSourceConfiguration"))
				{	soap_flag_AudioSourceConfiguration--;
					continue;
				}
			if (soap_flag_VideoEncoderConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoEncoderConfiguration", &a->VideoEncoderConfiguration, "tt:VideoEncoderConfiguration"))
				{	soap_flag_VideoEncoderConfiguration--;
					continue;
				}
			if (soap_flag_AudioEncoderConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", &a->AudioEncoderConfiguration, "tt:AudioEncoderConfiguration"))
				{	soap_flag_AudioEncoderConfiguration--;
					continue;
				}
			if (soap_flag_VideoAnalyticsConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", &a->VideoAnalyticsConfiguration, "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_VideoAnalyticsConfiguration--;
					continue;
				}
			if (soap_flag_PTZConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfiguration(soap, "tt:PTZConfiguration", &a->PTZConfiguration, "tt:PTZConfiguration"))
				{	soap_flag_PTZConfiguration--;
					continue;
				}
			if (soap_flag_MetadataConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfiguration(soap, "tt:MetadataConfiguration", &a->MetadataConfiguration, "tt:MetadataConfiguration"))
				{	soap_flag_MetadataConfiguration--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ProfileExtension(soap, "tt:Extension", &a->Extension, "tt:ProfileExtension"))
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
	{	a = (struct tt__Profile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Profile, 0, sizeof(struct tt__Profile), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Profile(struct soap *soap, const struct tt__Profile *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Profile);
	if (soap_out_tt__Profile(soap, tag?tag:"tt:Profile", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Profile * SOAP_FMAC4 soap_get_tt__Profile(struct soap *soap, struct tt__Profile *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Profile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceExtension2(struct soap *soap, struct tt__VideoSourceExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceExtension2(struct soap *soap, const struct tt__VideoSourceExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceExtension2(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceExtension2 * SOAP_FMAC4 soap_in_tt__VideoSourceExtension2(struct soap *soap, const char *tag, struct tt__VideoSourceExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceExtension2, sizeof(struct tt__VideoSourceExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceExtension2(soap, a);
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
	{	a = (struct tt__VideoSourceExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceExtension2, 0, sizeof(struct tt__VideoSourceExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceExtension2(struct soap *soap, const struct tt__VideoSourceExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceExtension2);
	if (soap_out_tt__VideoSourceExtension2(soap, tag?tag:"tt:VideoSourceExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceExtension2 * SOAP_FMAC4 soap_get_tt__VideoSourceExtension2(struct soap *soap, struct tt__VideoSourceExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingSettings20(struct soap *soap, struct tt__ImagingSettings20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BacklightCompensation = NULL;
	a->Brightness = NULL;
	a->ColorSaturation = NULL;
	a->Contrast = NULL;
	a->Exposure = NULL;
	a->Focus = NULL;
	a->IrCutFilter = NULL;
	a->Sharpness = NULL;
	a->WideDynamicRange = NULL;
	a->WhiteBalance = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingSettings20(struct soap *soap, const struct tt__ImagingSettings20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensation20(soap, &a->BacklightCompensation);
	soap_serialize_PointerTofloat(soap, &a->Brightness);
	soap_serialize_PointerTofloat(soap, &a->ColorSaturation);
	soap_serialize_PointerTofloat(soap, &a->Contrast);
	soap_serialize_PointerTott__Exposure20(soap, &a->Exposure);
	soap_serialize_PointerTott__FocusConfiguration20(soap, &a->Focus);
	soap_serialize_PointerTott__IrCutFilterMode(soap, &a->IrCutFilter);
	soap_serialize_PointerTofloat(soap, &a->Sharpness);
	soap_serialize_PointerTott__WideDynamicRange20(soap, &a->WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalance20(soap, &a->WhiteBalance);
	soap_serialize_PointerTott__ImagingSettingsExtension20(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettings20(struct soap *soap, const char *tag, int id, const struct tt__ImagingSettings20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettings20), type))
		return soap->error;
	if (soap_out_PointerTott__BacklightCompensation20(soap, "tt:BacklightCompensation", -1, &a->BacklightCompensation, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Brightness", -1, &a->Brightness, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ColorSaturation", -1, &a->ColorSaturation, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Contrast", -1, &a->Contrast, ""))
		return soap->error;
	if (soap_out_PointerTott__Exposure20(soap, "tt:Exposure", -1, &a->Exposure, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration20(soap, "tt:Focus", -1, &a->Focus, ""))
		return soap->error;
	if (soap_out_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", -1, &a->IrCutFilter, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Sharpness", -1, &a->Sharpness, ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRange20(soap, "tt:WideDynamicRange", -1, &a->WideDynamicRange, ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance20(soap, "tt:WhiteBalance", -1, &a->WhiteBalance, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension20(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingSettings20 * SOAP_FMAC4 soap_in_tt__ImagingSettings20(struct soap *soap, const char *tag, struct tt__ImagingSettings20 *a, const char *type)
{
	size_t soap_flag_BacklightCompensation = 1;
	size_t soap_flag_Brightness = 1;
	size_t soap_flag_ColorSaturation = 1;
	size_t soap_flag_Contrast = 1;
	size_t soap_flag_Exposure = 1;
	size_t soap_flag_Focus = 1;
	size_t soap_flag_IrCutFilter = 1;
	size_t soap_flag_Sharpness = 1;
	size_t soap_flag_WideDynamicRange = 1;
	size_t soap_flag_WhiteBalance = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingSettings20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettings20, sizeof(struct tt__ImagingSettings20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingSettings20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BacklightCompensation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensation20(soap, "tt:BacklightCompensation", &a->BacklightCompensation, "tt:BacklightCompensation20"))
				{	soap_flag_BacklightCompensation--;
					continue;
				}
			if (soap_flag_Brightness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Brightness", &a->Brightness, "xsd:float"))
				{	soap_flag_Brightness--;
					continue;
				}
			if (soap_flag_ColorSaturation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:ColorSaturation", &a->ColorSaturation, "xsd:float"))
				{	soap_flag_ColorSaturation--;
					continue;
				}
			if (soap_flag_Contrast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Contrast", &a->Contrast, "xsd:float"))
				{	soap_flag_Contrast--;
					continue;
				}
			if (soap_flag_Exposure && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Exposure20(soap, "tt:Exposure", &a->Exposure, "tt:Exposure20"))
				{	soap_flag_Exposure--;
					continue;
				}
			if (soap_flag_Focus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration20(soap, "tt:Focus", &a->Focus, "tt:FocusConfiguration20"))
				{	soap_flag_Focus--;
					continue;
				}
			if (soap_flag_IrCutFilter && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", &a->IrCutFilter, "tt:IrCutFilterMode"))
				{	soap_flag_IrCutFilter--;
					continue;
				}
			if (soap_flag_Sharpness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Sharpness", &a->Sharpness, "xsd:float"))
				{	soap_flag_Sharpness--;
					continue;
				}
			if (soap_flag_WideDynamicRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRange20(soap, "tt:WideDynamicRange", &a->WideDynamicRange, "tt:WideDynamicRange20"))
				{	soap_flag_WideDynamicRange--;
					continue;
				}
			if (soap_flag_WhiteBalance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance20(soap, "tt:WhiteBalance", &a->WhiteBalance, "tt:WhiteBalance20"))
				{	soap_flag_WhiteBalance--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension20(soap, "tt:Extension", &a->Extension, "tt:ImagingSettingsExtension20"))
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
	{	a = (struct tt__ImagingSettings20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettings20, 0, sizeof(struct tt__ImagingSettings20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingSettings20(struct soap *soap, const struct tt__ImagingSettings20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettings20);
	if (soap_out_tt__ImagingSettings20(soap, tag?tag:"tt:ImagingSettings20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingSettings20 * SOAP_FMAC4 soap_get_tt__ImagingSettings20(struct soap *soap, struct tt__ImagingSettings20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettings20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoSourceExtension(struct soap *soap, struct tt__VideoSourceExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->Imaging = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoSourceExtension(struct soap *soap, const struct tt__VideoSourceExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImagingSettings20(soap, &a->Imaging);
	soap_serialize_PointerTott__VideoSourceExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoSourceExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoSourceExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoSourceExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ImagingSettings20(soap, "tt:Imaging", -1, &a->Imaging, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoSourceExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoSourceExtension * SOAP_FMAC4 soap_in_tt__VideoSourceExtension(struct soap *soap, const char *tag, struct tt__VideoSourceExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Imaging = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoSourceExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoSourceExtension, sizeof(struct tt__VideoSourceExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoSourceExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Imaging && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettings20(soap, "tt:Imaging", &a->Imaging, "tt:ImagingSettings20"))
				{	soap_flag_Imaging--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceExtension2(soap, "tt:Extension", &a->Extension, "tt:VideoSourceExtension2"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__VideoSourceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoSourceExtension, 0, sizeof(struct tt__VideoSourceExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoSourceExtension(struct soap *soap, const struct tt__VideoSourceExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoSourceExtension);
	if (soap_out_tt__VideoSourceExtension(soap, tag?tag:"tt:VideoSourceExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoSourceExtension * SOAP_FMAC4 soap_get_tt__VideoSourceExtension(struct soap *soap, struct tt__VideoSourceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoSourceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnyHolder(struct soap *soap, struct tt__AnyHolder *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnyHolder(struct soap *soap, const struct tt__AnyHolder *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnyHolder(struct soap *soap, const char *tag, int id, const struct tt__AnyHolder *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnyHolder), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnyHolder * SOAP_FMAC4 soap_in_tt__AnyHolder(struct soap *soap, const char *tag, struct tt__AnyHolder *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnyHolder *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnyHolder, sizeof(struct tt__AnyHolder), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnyHolder(soap, a);
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
	{	a = (struct tt__AnyHolder *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnyHolder, 0, sizeof(struct tt__AnyHolder), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnyHolder(struct soap *soap, const struct tt__AnyHolder *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnyHolder);
	if (soap_out_tt__AnyHolder(soap, tag?tag:"tt:AnyHolder", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnyHolder * SOAP_FMAC4 soap_get_tt__AnyHolder(struct soap *soap, struct tt__AnyHolder *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnyHolder(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FloatList(struct soap *soap, struct tt__FloatList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeItems = 0;
	a->Items = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FloatList(struct soap *soap, const struct tt__FloatList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
		{
			soap_embedded(soap, a->Items + i, SOAP_TYPE_float);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FloatList(struct soap *soap, const char *tag, int id, const struct tt__FloatList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FloatList), type))
		return soap->error;
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
			if (soap_out_float(soap, "tt:Items", -1, a->Items + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FloatList * SOAP_FMAC4 soap_in_tt__FloatList(struct soap *soap, const char *tag, struct tt__FloatList *a, const char *type)
{
	struct soap_blist *soap_blist_Items = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FloatList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FloatList, sizeof(struct tt__FloatList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FloatList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Items", 1, NULL))
			{	if (a->Items == NULL)
				{	if (soap_blist_Items == NULL)
						soap_blist_Items = soap_new_block(soap);
					a->Items = (float *)soap_push_block(soap, soap_blist_Items, sizeof(float));
					if (a->Items == NULL)
						return NULL;
					soap_default_float(soap, a->Items);
				}
				soap_revert(soap);
				if (soap_in_float(soap, "tt:Items", a->Items, "xsd:float"))
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
			a->Items = (float *)soap_save_block(soap, soap_blist_Items, NULL, 1);
		else
		{	a->Items = NULL;
			if (soap_blist_Items)
				soap_end_block(soap, soap_blist_Items);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FloatList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FloatList, 0, sizeof(struct tt__FloatList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FloatList(struct soap *soap, const struct tt__FloatList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FloatList);
	if (soap_out_tt__FloatList(soap, tag?tag:"tt:FloatList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FloatList * SOAP_FMAC4 soap_get_tt__FloatList(struct soap *soap, struct tt__FloatList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FloatList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IntList(struct soap *soap, struct tt__IntList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeItems = 0;
	a->Items = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IntList(struct soap *soap, const struct tt__IntList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
		{
			soap_embedded(soap, a->Items + i, SOAP_TYPE_int);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IntList(struct soap *soap, const char *tag, int id, const struct tt__IntList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IntList), type))
		return soap->error;
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
			if (soap_out_int(soap, "tt:Items", -1, a->Items + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IntList * SOAP_FMAC4 soap_in_tt__IntList(struct soap *soap, const char *tag, struct tt__IntList *a, const char *type)
{
	struct soap_blist *soap_blist_Items = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IntList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IntList, sizeof(struct tt__IntList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IntList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Items", 1, NULL))
			{	if (a->Items == NULL)
				{	if (soap_blist_Items == NULL)
						soap_blist_Items = soap_new_block(soap);
					a->Items = (int *)soap_push_block(soap, soap_blist_Items, sizeof(int));
					if (a->Items == NULL)
						return NULL;
					soap_default_int(soap, a->Items);
				}
				soap_revert(soap);
				if (soap_in_int(soap, "tt:Items", a->Items, "xsd:int"))
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
			a->Items = (int *)soap_save_block(soap, soap_blist_Items, NULL, 1);
		else
		{	a->Items = NULL;
			if (soap_blist_Items)
				soap_end_block(soap, soap_blist_Items);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IntList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IntList, 0, sizeof(struct tt__IntList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IntList(struct soap *soap, const struct tt__IntList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IntList);
	if (soap_out_tt__IntList(soap, tag?tag:"tt:IntList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IntList * SOAP_FMAC4 soap_get_tt__IntList(struct soap *soap, struct tt__IntList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IntList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DurationRange(struct soap *soap, struct tt__DurationRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__duration(soap, &a->Min);
	soap_default_xsd__duration(soap, &a->Max);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DurationRange(struct soap *soap, const struct tt__DurationRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Min, SOAP_TYPE_xsd__duration);
	soap_embedded(soap, &a->Max, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DurationRange(struct soap *soap, const char *tag, int id, const struct tt__DurationRange *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DurationRange), type))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:Min", -1, &a->Min, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:Max", -1, &a->Max, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DurationRange * SOAP_FMAC4 soap_in_tt__DurationRange(struct soap *soap, const char *tag, struct tt__DurationRange *a, const char *type)
{
	size_t soap_flag_Min = 1;
	size_t soap_flag_Max = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DurationRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DurationRange, sizeof(struct tt__DurationRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DurationRange(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Min && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:Min", &a->Min, "xsd:duration"))
				{	soap_flag_Min--;
					continue;
				}
			if (soap_flag_Max && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:Max", &a->Max, "xsd:duration"))
				{	soap_flag_Max--;
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
	{	a = (struct tt__DurationRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DurationRange, 0, sizeof(struct tt__DurationRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Min > 0 || soap_flag_Max > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DurationRange(struct soap *soap, const struct tt__DurationRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DurationRange);
	if (soap_out_tt__DurationRange(soap, tag?tag:"tt:DurationRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DurationRange * SOAP_FMAC4 soap_get_tt__DurationRange(struct soap *soap, struct tt__DurationRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DurationRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FloatRange(struct soap *soap, struct tt__FloatRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Min);
	soap_default_float(soap, &a->Max);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FloatRange(struct soap *soap, const struct tt__FloatRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Min, SOAP_TYPE_float);
	soap_embedded(soap, &a->Max, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FloatRange(struct soap *soap, const char *tag, int id, const struct tt__FloatRange *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FloatRange), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Min", -1, &a->Min, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Max", -1, &a->Max, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FloatRange * SOAP_FMAC4 soap_in_tt__FloatRange(struct soap *soap, const char *tag, struct tt__FloatRange *a, const char *type)
{
	size_t soap_flag_Min = 1;
	size_t soap_flag_Max = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FloatRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FloatRange, sizeof(struct tt__FloatRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FloatRange(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Min && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Min", &a->Min, "xsd:float"))
				{	soap_flag_Min--;
					continue;
				}
			if (soap_flag_Max && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Max", &a->Max, "xsd:float"))
				{	soap_flag_Max--;
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
	{	a = (struct tt__FloatRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FloatRange, 0, sizeof(struct tt__FloatRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Min > 0 || soap_flag_Max > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FloatRange(struct soap *soap, const struct tt__FloatRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FloatRange);
	if (soap_out_tt__FloatRange(soap, tag?tag:"tt:FloatRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FloatRange * SOAP_FMAC4 soap_get_tt__FloatRange(struct soap *soap, struct tt__FloatRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FloatRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IntRange(struct soap *soap, struct tt__IntRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->Min);
	soap_default_int(soap, &a->Max);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IntRange(struct soap *soap, const struct tt__IntRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Min, SOAP_TYPE_int);
	soap_embedded(soap, &a->Max, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IntRange(struct soap *soap, const char *tag, int id, const struct tt__IntRange *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IntRange), type))
		return soap->error;
	if (soap_out_int(soap, "tt:Min", -1, &a->Min, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Max", -1, &a->Max, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IntRange * SOAP_FMAC4 soap_in_tt__IntRange(struct soap *soap, const char *tag, struct tt__IntRange *a, const char *type)
{
	size_t soap_flag_Min = 1;
	size_t soap_flag_Max = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IntRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IntRange, sizeof(struct tt__IntRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IntRange(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Min && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Min", &a->Min, "xsd:int"))
				{	soap_flag_Min--;
					continue;
				}
			if (soap_flag_Max && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Max", &a->Max, "xsd:int"))
				{	soap_flag_Max--;
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
	{	a = (struct tt__IntRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IntRange, 0, sizeof(struct tt__IntRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Min > 0 || soap_flag_Max > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IntRange(struct soap *soap, const struct tt__IntRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IntRange);
	if (soap_out_tt__IntRange(soap, tag?tag:"tt:IntRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IntRange * SOAP_FMAC4 soap_get_tt__IntRange(struct soap *soap, struct tt__IntRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IntRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IntRectangleRange(struct soap *soap, struct tt__IntRectangleRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->XRange = NULL;
	a->YRange = NULL;
	a->WidthRange = NULL;
	a->HeightRange = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IntRectangleRange(struct soap *soap, const struct tt__IntRectangleRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntRange(soap, &a->XRange);
	soap_serialize_PointerTott__IntRange(soap, &a->YRange);
	soap_serialize_PointerTott__IntRange(soap, &a->WidthRange);
	soap_serialize_PointerTott__IntRange(soap, &a->HeightRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IntRectangleRange(struct soap *soap, const char *tag, int id, const struct tt__IntRectangleRange *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IntRectangleRange), type))
		return soap->error;
	if (a->XRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:XRange", -1, &a->XRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XRange"))
		return soap->error;
	if (a->YRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:YRange", -1, &a->YRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YRange"))
		return soap->error;
	if (a->WidthRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:WidthRange", -1, &a->WidthRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:WidthRange"))
		return soap->error;
	if (a->HeightRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:HeightRange", -1, &a->HeightRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:HeightRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IntRectangleRange * SOAP_FMAC4 soap_in_tt__IntRectangleRange(struct soap *soap, const char *tag, struct tt__IntRectangleRange *a, const char *type)
{
	size_t soap_flag_XRange = 1;
	size_t soap_flag_YRange = 1;
	size_t soap_flag_WidthRange = 1;
	size_t soap_flag_HeightRange = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IntRectangleRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IntRectangleRange, sizeof(struct tt__IntRectangleRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IntRectangleRange(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:XRange", &a->XRange, "tt:IntRange"))
				{	soap_flag_XRange--;
					continue;
				}
			if (soap_flag_YRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:YRange", &a->YRange, "tt:IntRange"))
				{	soap_flag_YRange--;
					continue;
				}
			if (soap_flag_WidthRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:WidthRange", &a->WidthRange, "tt:IntRange"))
				{	soap_flag_WidthRange--;
					continue;
				}
			if (soap_flag_HeightRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:HeightRange", &a->HeightRange, "tt:IntRange"))
				{	soap_flag_HeightRange--;
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
	{	a = (struct tt__IntRectangleRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IntRectangleRange, 0, sizeof(struct tt__IntRectangleRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XRange > 0 || soap_flag_YRange > 0 || soap_flag_WidthRange > 0 || soap_flag_HeightRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IntRectangleRange(struct soap *soap, const struct tt__IntRectangleRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IntRectangleRange);
	if (soap_out_tt__IntRectangleRange(soap, tag?tag:"tt:IntRectangleRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IntRectangleRange * SOAP_FMAC4 soap_get_tt__IntRectangleRange(struct soap *soap, struct tt__IntRectangleRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IntRectangleRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IntRectangle(struct soap *soap, struct tt__IntRectangle *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->x);
	soap_default_int(soap, &a->y);
	soap_default_int(soap, &a->width);
	soap_default_int(soap, &a->height);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IntRectangle(struct soap *soap, const struct tt__IntRectangle *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IntRectangle(struct soap *soap, const char *tag, int id, const struct tt__IntRectangle *a, const char *type)
{
	soap_set_attr(soap, "x", soap_int2s(soap, a->x), 1);
	soap_set_attr(soap, "y", soap_int2s(soap, a->y), 1);
	soap_set_attr(soap, "width", soap_int2s(soap, a->width), 1);
	soap_set_attr(soap, "height", soap_int2s(soap, a->height), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IntRectangle), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IntRectangle * SOAP_FMAC4 soap_in_tt__IntRectangle(struct soap *soap, const char *tag, struct tt__IntRectangle *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IntRectangle *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IntRectangle, sizeof(struct tt__IntRectangle), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IntRectangle(soap, a);
	if (soap_s2int(soap, soap_attr_value(soap, "x", 1), &a->x))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "y", 1), &a->y))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "width", 1), &a->width))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "height", 1), &a->height))
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
	{	a = (struct tt__IntRectangle *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IntRectangle, 0, sizeof(struct tt__IntRectangle), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IntRectangle(struct soap *soap, const struct tt__IntRectangle *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IntRectangle);
	if (soap_out_tt__IntRectangle(soap, tag?tag:"tt:IntRectangle", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IntRectangle * SOAP_FMAC4 soap_get_tt__IntRectangle(struct soap *soap, struct tt__IntRectangle *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IntRectangle(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceEntity(struct soap *soap, struct tt__DeviceEntity *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->token);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceEntity(struct soap *soap, const struct tt__DeviceEntity *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceEntity(struct soap *soap, const char *tag, int id, const struct tt__DeviceEntity *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceEntity), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceEntity * SOAP_FMAC4 soap_in_tt__DeviceEntity(struct soap *soap, const char *tag, struct tt__DeviceEntity *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DeviceEntity *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceEntity, sizeof(struct tt__DeviceEntity), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DeviceEntity(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
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
	{	a = (struct tt__DeviceEntity *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceEntity, 0, sizeof(struct tt__DeviceEntity), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceEntity(struct soap *soap, const struct tt__DeviceEntity *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceEntity);
	if (soap_out_tt__DeviceEntity(soap, tag?tag:"tt:DeviceEntity", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceEntity * SOAP_FMAC4 soap_get_tt__DeviceEntity(struct soap *soap, struct tt__DeviceEntity *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceEntity(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__DeleteActionTriggersResponse(struct soap *soap, struct _ns1__DeleteActionTriggersResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__DeleteActionTriggersResponse(struct soap *soap, const struct _ns1__DeleteActionTriggersResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__DeleteActionTriggersResponse(struct soap *soap, const char *tag, int id, const struct _ns1__DeleteActionTriggersResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__DeleteActionTriggersResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__DeleteActionTriggersResponse * SOAP_FMAC4 soap_in__ns1__DeleteActionTriggersResponse(struct soap *soap, const char *tag, struct _ns1__DeleteActionTriggersResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__DeleteActionTriggersResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__DeleteActionTriggersResponse, sizeof(struct _ns1__DeleteActionTriggersResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__DeleteActionTriggersResponse(soap, a);
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
	{	a = (struct _ns1__DeleteActionTriggersResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__DeleteActionTriggersResponse, 0, sizeof(struct _ns1__DeleteActionTriggersResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__DeleteActionTriggersResponse(struct soap *soap, const struct _ns1__DeleteActionTriggersResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__DeleteActionTriggersResponse);
	if (soap_out__ns1__DeleteActionTriggersResponse(soap, tag?tag:"ns1:DeleteActionTriggersResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__DeleteActionTriggersResponse * SOAP_FMAC4 soap_get__ns1__DeleteActionTriggersResponse(struct soap *soap, struct _ns1__DeleteActionTriggersResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__DeleteActionTriggersResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__DeleteActionTriggers(struct soap *soap, struct _ns1__DeleteActionTriggers *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeToken = 0;
	a->Token = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__DeleteActionTriggers(struct soap *soap, const struct _ns1__DeleteActionTriggers *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->Token + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__DeleteActionTriggers(struct soap *soap, const char *tag, int id, const struct _ns1__DeleteActionTriggers *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__DeleteActionTriggers), type))
		return soap->error;
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "ns1:Token", -1, a->Token + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__DeleteActionTriggers * SOAP_FMAC4 soap_in__ns1__DeleteActionTriggers(struct soap *soap, const char *tag, struct _ns1__DeleteActionTriggers *a, const char *type)
{
	struct soap_blist *soap_blist_Token = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__DeleteActionTriggers *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__DeleteActionTriggers, sizeof(struct _ns1__DeleteActionTriggers), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__DeleteActionTriggers(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Token", 1, NULL))
			{	if (a->Token == NULL)
				{	if (soap_blist_Token == NULL)
						soap_blist_Token = soap_new_block(soap);
					a->Token = (char **)soap_push_block(soap, soap_blist_Token, sizeof(char *));
					if (a->Token == NULL)
						return NULL;
					*a->Token = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "ns1:Token", a->Token, "tt:ReferenceToken"))
				{	a->__sizeToken++;
					a->Token = NULL;
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
	{	a = (struct _ns1__DeleteActionTriggers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__DeleteActionTriggers, 0, sizeof(struct _ns1__DeleteActionTriggers), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeToken < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__DeleteActionTriggers(struct soap *soap, const struct _ns1__DeleteActionTriggers *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__DeleteActionTriggers);
	if (soap_out__ns1__DeleteActionTriggers(soap, tag?tag:"ns1:DeleteActionTriggers", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__DeleteActionTriggers * SOAP_FMAC4 soap_get__ns1__DeleteActionTriggers(struct soap *soap, struct _ns1__DeleteActionTriggers *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__DeleteActionTriggers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ModifyActionTriggersResponse(struct soap *soap, struct _ns1__ModifyActionTriggersResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ModifyActionTriggersResponse(struct soap *soap, const struct _ns1__ModifyActionTriggersResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ModifyActionTriggersResponse(struct soap *soap, const char *tag, int id, const struct _ns1__ModifyActionTriggersResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__ModifyActionTriggersResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__ModifyActionTriggersResponse * SOAP_FMAC4 soap_in__ns1__ModifyActionTriggersResponse(struct soap *soap, const char *tag, struct _ns1__ModifyActionTriggersResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__ModifyActionTriggersResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__ModifyActionTriggersResponse, sizeof(struct _ns1__ModifyActionTriggersResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__ModifyActionTriggersResponse(soap, a);
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
	{	a = (struct _ns1__ModifyActionTriggersResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__ModifyActionTriggersResponse, 0, sizeof(struct _ns1__ModifyActionTriggersResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ModifyActionTriggersResponse(struct soap *soap, const struct _ns1__ModifyActionTriggersResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__ModifyActionTriggersResponse);
	if (soap_out__ns1__ModifyActionTriggersResponse(soap, tag?tag:"ns1:ModifyActionTriggersResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__ModifyActionTriggersResponse * SOAP_FMAC4 soap_get__ns1__ModifyActionTriggersResponse(struct soap *soap, struct _ns1__ModifyActionTriggersResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__ModifyActionTriggersResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ModifyActionTriggers(struct soap *soap, struct _ns1__ModifyActionTriggers *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionTrigger = 0;
	a->ActionTrigger = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ModifyActionTriggers(struct soap *soap, const struct _ns1__ModifyActionTriggers *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
		{
			soap_embedded(soap, a->ActionTrigger + i, SOAP_TYPE_ns1__ActionTrigger);
			soap_serialize_ns1__ActionTrigger(soap, a->ActionTrigger + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ModifyActionTriggers(struct soap *soap, const char *tag, int id, const struct _ns1__ModifyActionTriggers *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__ModifyActionTriggers), type))
		return soap->error;
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
			if (soap_out_ns1__ActionTrigger(soap, "ns1:ActionTrigger", -1, a->ActionTrigger + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__ModifyActionTriggers * SOAP_FMAC4 soap_in__ns1__ModifyActionTriggers(struct soap *soap, const char *tag, struct _ns1__ModifyActionTriggers *a, const char *type)
{
	struct soap_blist *soap_blist_ActionTrigger = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__ModifyActionTriggers *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__ModifyActionTriggers, sizeof(struct _ns1__ModifyActionTriggers), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__ModifyActionTriggers(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionTrigger", 1, NULL))
			{	if (a->ActionTrigger == NULL)
				{	if (soap_blist_ActionTrigger == NULL)
						soap_blist_ActionTrigger = soap_new_block(soap);
					a->ActionTrigger = (struct ns1__ActionTrigger *)soap_push_block(soap, soap_blist_ActionTrigger, sizeof(struct ns1__ActionTrigger));
					if (a->ActionTrigger == NULL)
						return NULL;
					soap_default_ns1__ActionTrigger(soap, a->ActionTrigger);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionTrigger(soap, "ns1:ActionTrigger", a->ActionTrigger, "ns1:ActionTrigger"))
				{	a->__sizeActionTrigger++;
					a->ActionTrigger = NULL;
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
		if (a->ActionTrigger)
			soap_pop_block(soap, soap_blist_ActionTrigger);
		if (a->__sizeActionTrigger)
			a->ActionTrigger = (struct ns1__ActionTrigger *)soap_save_block(soap, soap_blist_ActionTrigger, NULL, 1);
		else
		{	a->ActionTrigger = NULL;
			if (soap_blist_ActionTrigger)
				soap_end_block(soap, soap_blist_ActionTrigger);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__ModifyActionTriggers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__ModifyActionTriggers, 0, sizeof(struct _ns1__ModifyActionTriggers), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeActionTrigger < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ModifyActionTriggers(struct soap *soap, const struct _ns1__ModifyActionTriggers *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__ModifyActionTriggers);
	if (soap_out__ns1__ModifyActionTriggers(soap, tag?tag:"ns1:ModifyActionTriggers", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__ModifyActionTriggers * SOAP_FMAC4 soap_get__ns1__ModifyActionTriggers(struct soap *soap, struct _ns1__ModifyActionTriggers *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__ModifyActionTriggers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__CreateActionTriggersResponse(struct soap *soap, struct _ns1__CreateActionTriggersResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionTrigger = 0;
	a->ActionTrigger = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__CreateActionTriggersResponse(struct soap *soap, const struct _ns1__CreateActionTriggersResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
		{
			soap_embedded(soap, a->ActionTrigger + i, SOAP_TYPE_ns1__ActionTrigger);
			soap_serialize_ns1__ActionTrigger(soap, a->ActionTrigger + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__CreateActionTriggersResponse(struct soap *soap, const char *tag, int id, const struct _ns1__CreateActionTriggersResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__CreateActionTriggersResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeActionTrigger");
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
			if (soap_out_ns1__ActionTrigger(soap, "ns1:ActionTrigger", -1, a->ActionTrigger + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__CreateActionTriggersResponse * SOAP_FMAC4 soap_in__ns1__CreateActionTriggersResponse(struct soap *soap, const char *tag, struct _ns1__CreateActionTriggersResponse *a, const char *type)
{
	struct soap_blist *soap_blist_ActionTrigger = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__CreateActionTriggersResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__CreateActionTriggersResponse, sizeof(struct _ns1__CreateActionTriggersResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__CreateActionTriggersResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionTrigger", 1, NULL))
			{	if (a->ActionTrigger == NULL)
				{	if (soap_blist_ActionTrigger == NULL)
						soap_blist_ActionTrigger = soap_new_block(soap);
					a->ActionTrigger = (struct ns1__ActionTrigger *)soap_push_block(soap, soap_blist_ActionTrigger, sizeof(struct ns1__ActionTrigger));
					if (a->ActionTrigger == NULL)
						return NULL;
					soap_default_ns1__ActionTrigger(soap, a->ActionTrigger);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionTrigger(soap, "ns1:ActionTrigger", a->ActionTrigger, "ns1:ActionTrigger"))
				{	a->__sizeActionTrigger++;
					a->ActionTrigger = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeActionTrigger");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->ActionTrigger)
			soap_pop_block(soap, soap_blist_ActionTrigger);
		if (a->__sizeActionTrigger)
			a->ActionTrigger = (struct ns1__ActionTrigger *)soap_save_block(soap, soap_blist_ActionTrigger, NULL, 1);
		else
		{	a->ActionTrigger = NULL;
			if (soap_blist_ActionTrigger)
				soap_end_block(soap, soap_blist_ActionTrigger);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__CreateActionTriggersResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__CreateActionTriggersResponse, 0, sizeof(struct _ns1__CreateActionTriggersResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__CreateActionTriggersResponse(struct soap *soap, const struct _ns1__CreateActionTriggersResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__CreateActionTriggersResponse);
	if (soap_out__ns1__CreateActionTriggersResponse(soap, tag?tag:"ns1:CreateActionTriggersResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__CreateActionTriggersResponse * SOAP_FMAC4 soap_get__ns1__CreateActionTriggersResponse(struct soap *soap, struct _ns1__CreateActionTriggersResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__CreateActionTriggersResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__CreateActionTriggers(struct soap *soap, struct _ns1__CreateActionTriggers *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionTrigger = 0;
	a->ActionTrigger = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__CreateActionTriggers(struct soap *soap, const struct _ns1__CreateActionTriggers *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
		{
			soap_embedded(soap, a->ActionTrigger + i, SOAP_TYPE_ns1__ActionTriggerConfiguration);
			soap_serialize_ns1__ActionTriggerConfiguration(soap, a->ActionTrigger + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__CreateActionTriggers(struct soap *soap, const char *tag, int id, const struct _ns1__CreateActionTriggers *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__CreateActionTriggers), type))
		return soap->error;
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
			if (soap_out_ns1__ActionTriggerConfiguration(soap, "ns1:ActionTrigger", -1, a->ActionTrigger + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__CreateActionTriggers * SOAP_FMAC4 soap_in__ns1__CreateActionTriggers(struct soap *soap, const char *tag, struct _ns1__CreateActionTriggers *a, const char *type)
{
	struct soap_blist *soap_blist_ActionTrigger = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__CreateActionTriggers *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__CreateActionTriggers, sizeof(struct _ns1__CreateActionTriggers), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__CreateActionTriggers(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionTrigger", 1, NULL))
			{	if (a->ActionTrigger == NULL)
				{	if (soap_blist_ActionTrigger == NULL)
						soap_blist_ActionTrigger = soap_new_block(soap);
					a->ActionTrigger = (struct ns1__ActionTriggerConfiguration *)soap_push_block(soap, soap_blist_ActionTrigger, sizeof(struct ns1__ActionTriggerConfiguration));
					if (a->ActionTrigger == NULL)
						return NULL;
					soap_default_ns1__ActionTriggerConfiguration(soap, a->ActionTrigger);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionTriggerConfiguration(soap, "ns1:ActionTrigger", a->ActionTrigger, "ns1:ActionTriggerConfiguration"))
				{	a->__sizeActionTrigger++;
					a->ActionTrigger = NULL;
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
		if (a->ActionTrigger)
			soap_pop_block(soap, soap_blist_ActionTrigger);
		if (a->__sizeActionTrigger)
			a->ActionTrigger = (struct ns1__ActionTriggerConfiguration *)soap_save_block(soap, soap_blist_ActionTrigger, NULL, 1);
		else
		{	a->ActionTrigger = NULL;
			if (soap_blist_ActionTrigger)
				soap_end_block(soap, soap_blist_ActionTrigger);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__CreateActionTriggers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__CreateActionTriggers, 0, sizeof(struct _ns1__CreateActionTriggers), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeActionTrigger < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__CreateActionTriggers(struct soap *soap, const struct _ns1__CreateActionTriggers *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__CreateActionTriggers);
	if (soap_out__ns1__CreateActionTriggers(soap, tag?tag:"ns1:CreateActionTriggers", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__CreateActionTriggers * SOAP_FMAC4 soap_get__ns1__CreateActionTriggers(struct soap *soap, struct _ns1__CreateActionTriggers *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__CreateActionTriggers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetActionTriggersResponse(struct soap *soap, struct _ns1__GetActionTriggersResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionTrigger = 0;
	a->ActionTrigger = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetActionTriggersResponse(struct soap *soap, const struct _ns1__GetActionTriggersResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
		{
			soap_embedded(soap, a->ActionTrigger + i, SOAP_TYPE_ns1__ActionTrigger);
			soap_serialize_ns1__ActionTrigger(soap, a->ActionTrigger + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetActionTriggersResponse(struct soap *soap, const char *tag, int id, const struct _ns1__GetActionTriggersResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetActionTriggersResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeActionTrigger");
	if (a->ActionTrigger)
	{	int i;
		for (i = 0; i < a->__sizeActionTrigger; i++)
			if (soap_out_ns1__ActionTrigger(soap, "ns1:ActionTrigger", -1, a->ActionTrigger + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetActionTriggersResponse * SOAP_FMAC4 soap_in__ns1__GetActionTriggersResponse(struct soap *soap, const char *tag, struct _ns1__GetActionTriggersResponse *a, const char *type)
{
	struct soap_blist *soap_blist_ActionTrigger = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetActionTriggersResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetActionTriggersResponse, sizeof(struct _ns1__GetActionTriggersResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetActionTriggersResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionTrigger", 1, NULL))
			{	if (a->ActionTrigger == NULL)
				{	if (soap_blist_ActionTrigger == NULL)
						soap_blist_ActionTrigger = soap_new_block(soap);
					a->ActionTrigger = (struct ns1__ActionTrigger *)soap_push_block(soap, soap_blist_ActionTrigger, sizeof(struct ns1__ActionTrigger));
					if (a->ActionTrigger == NULL)
						return NULL;
					soap_default_ns1__ActionTrigger(soap, a->ActionTrigger);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionTrigger(soap, "ns1:ActionTrigger", a->ActionTrigger, "ns1:ActionTrigger"))
				{	a->__sizeActionTrigger++;
					a->ActionTrigger = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeActionTrigger");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->ActionTrigger)
			soap_pop_block(soap, soap_blist_ActionTrigger);
		if (a->__sizeActionTrigger)
			a->ActionTrigger = (struct ns1__ActionTrigger *)soap_save_block(soap, soap_blist_ActionTrigger, NULL, 1);
		else
		{	a->ActionTrigger = NULL;
			if (soap_blist_ActionTrigger)
				soap_end_block(soap, soap_blist_ActionTrigger);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__GetActionTriggersResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetActionTriggersResponse, 0, sizeof(struct _ns1__GetActionTriggersResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetActionTriggersResponse(struct soap *soap, const struct _ns1__GetActionTriggersResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetActionTriggersResponse);
	if (soap_out__ns1__GetActionTriggersResponse(soap, tag?tag:"ns1:GetActionTriggersResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetActionTriggersResponse * SOAP_FMAC4 soap_get__ns1__GetActionTriggersResponse(struct soap *soap, struct _ns1__GetActionTriggersResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetActionTriggersResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetActionTriggers(struct soap *soap, struct _ns1__GetActionTriggers *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetActionTriggers(struct soap *soap, const struct _ns1__GetActionTriggers *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetActionTriggers(struct soap *soap, const char *tag, int id, const struct _ns1__GetActionTriggers *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetActionTriggers), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetActionTriggers * SOAP_FMAC4 soap_in__ns1__GetActionTriggers(struct soap *soap, const char *tag, struct _ns1__GetActionTriggers *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetActionTriggers *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetActionTriggers, sizeof(struct _ns1__GetActionTriggers), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetActionTriggers(soap, a);
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
	{	a = (struct _ns1__GetActionTriggers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetActionTriggers, 0, sizeof(struct _ns1__GetActionTriggers), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetActionTriggers(struct soap *soap, const struct _ns1__GetActionTriggers *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetActionTriggers);
	if (soap_out__ns1__GetActionTriggers(soap, tag?tag:"ns1:GetActionTriggers", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetActionTriggers * SOAP_FMAC4 soap_get__ns1__GetActionTriggers(struct soap *soap, struct _ns1__GetActionTriggers *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetActionTriggers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetServiceCapabilitiesResponse(struct soap *soap, struct _ns1__GetServiceCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Capabilities = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetServiceCapabilitiesResponse(struct soap *soap, const struct _ns1__GetServiceCapabilitiesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__ActionEngineCapabilities(soap, &a->Capabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const struct _ns1__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "ns1:Capabilities");
	if (a->Capabilities)
	{	if (soap_out_PointerTons1__ActionEngineCapabilities(soap, "ns1:Capabilities", -1, &a->Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Capabilities"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__ns1__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, struct _ns1__GetServiceCapabilitiesResponse *a, const char *type)
{
	size_t soap_flag_Capabilities = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetServiceCapabilitiesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetServiceCapabilitiesResponse, sizeof(struct _ns1__GetServiceCapabilitiesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetServiceCapabilitiesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__ActionEngineCapabilities(soap, "ns1:Capabilities", &a->Capabilities, "ns1:ActionEngineCapabilities"))
				{	soap_flag_Capabilities--;
					continue;
				}
			soap_check_result(soap, "ns1:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetServiceCapabilitiesResponse, 0, sizeof(struct _ns1__GetServiceCapabilitiesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetServiceCapabilitiesResponse(struct soap *soap, const struct _ns1__GetServiceCapabilitiesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetServiceCapabilitiesResponse);
	if (soap_out__ns1__GetServiceCapabilitiesResponse(soap, tag?tag:"ns1:GetServiceCapabilitiesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__ns1__GetServiceCapabilitiesResponse(struct soap *soap, struct _ns1__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetServiceCapabilities(struct soap *soap, struct _ns1__GetServiceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetServiceCapabilities(struct soap *soap, const struct _ns1__GetServiceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const struct _ns1__GetServiceCapabilities *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetServiceCapabilities), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetServiceCapabilities * SOAP_FMAC4 soap_in__ns1__GetServiceCapabilities(struct soap *soap, const char *tag, struct _ns1__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetServiceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetServiceCapabilities, sizeof(struct _ns1__GetServiceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetServiceCapabilities(soap, a);
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
	{	a = (struct _ns1__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetServiceCapabilities, 0, sizeof(struct _ns1__GetServiceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetServiceCapabilities(struct soap *soap, const struct _ns1__GetServiceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetServiceCapabilities);
	if (soap_out__ns1__GetServiceCapabilities(soap, tag?tag:"ns1:GetServiceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetServiceCapabilities * SOAP_FMAC4 soap_get__ns1__GetServiceCapabilities(struct soap *soap, struct _ns1__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ModifyActionsResponse(struct soap *soap, struct _ns1__ModifyActionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ModifyActionsResponse(struct soap *soap, const struct _ns1__ModifyActionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ModifyActionsResponse(struct soap *soap, const char *tag, int id, const struct _ns1__ModifyActionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__ModifyActionsResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__ModifyActionsResponse * SOAP_FMAC4 soap_in__ns1__ModifyActionsResponse(struct soap *soap, const char *tag, struct _ns1__ModifyActionsResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__ModifyActionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__ModifyActionsResponse, sizeof(struct _ns1__ModifyActionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__ModifyActionsResponse(soap, a);
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
	{	a = (struct _ns1__ModifyActionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__ModifyActionsResponse, 0, sizeof(struct _ns1__ModifyActionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ModifyActionsResponse(struct soap *soap, const struct _ns1__ModifyActionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__ModifyActionsResponse);
	if (soap_out__ns1__ModifyActionsResponse(soap, tag?tag:"ns1:ModifyActionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__ModifyActionsResponse * SOAP_FMAC4 soap_get__ns1__ModifyActionsResponse(struct soap *soap, struct _ns1__ModifyActionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__ModifyActionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__ModifyActions(struct soap *soap, struct _ns1__ModifyActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAction = 0;
	a->Action = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__ModifyActions(struct soap *soap, const struct _ns1__ModifyActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
		{
			soap_embedded(soap, a->Action + i, SOAP_TYPE_ns1__Action);
			soap_serialize_ns1__Action(soap, a->Action + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__ModifyActions(struct soap *soap, const char *tag, int id, const struct _ns1__ModifyActions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__ModifyActions), type))
		return soap->error;
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
			if (soap_out_ns1__Action(soap, "ns1:Action", -1, a->Action + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__ModifyActions * SOAP_FMAC4 soap_in__ns1__ModifyActions(struct soap *soap, const char *tag, struct _ns1__ModifyActions *a, const char *type)
{
	struct soap_blist *soap_blist_Action = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__ModifyActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__ModifyActions, sizeof(struct _ns1__ModifyActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__ModifyActions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Action", 1, NULL))
			{	if (a->Action == NULL)
				{	if (soap_blist_Action == NULL)
						soap_blist_Action = soap_new_block(soap);
					a->Action = (struct ns1__Action *)soap_push_block(soap, soap_blist_Action, sizeof(struct ns1__Action));
					if (a->Action == NULL)
						return NULL;
					soap_default_ns1__Action(soap, a->Action);
				}
				soap_revert(soap);
				if (soap_in_ns1__Action(soap, "ns1:Action", a->Action, "ns1:Action"))
				{	a->__sizeAction++;
					a->Action = NULL;
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
		if (a->Action)
			soap_pop_block(soap, soap_blist_Action);
		if (a->__sizeAction)
			a->Action = (struct ns1__Action *)soap_save_block(soap, soap_blist_Action, NULL, 1);
		else
		{	a->Action = NULL;
			if (soap_blist_Action)
				soap_end_block(soap, soap_blist_Action);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__ModifyActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__ModifyActions, 0, sizeof(struct _ns1__ModifyActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeAction < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__ModifyActions(struct soap *soap, const struct _ns1__ModifyActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__ModifyActions);
	if (soap_out__ns1__ModifyActions(soap, tag?tag:"ns1:ModifyActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__ModifyActions * SOAP_FMAC4 soap_get__ns1__ModifyActions(struct soap *soap, struct _ns1__ModifyActions *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__ModifyActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__DeleteActionsResponse(struct soap *soap, struct _ns1__DeleteActionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__DeleteActionsResponse(struct soap *soap, const struct _ns1__DeleteActionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__DeleteActionsResponse(struct soap *soap, const char *tag, int id, const struct _ns1__DeleteActionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__DeleteActionsResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__DeleteActionsResponse * SOAP_FMAC4 soap_in__ns1__DeleteActionsResponse(struct soap *soap, const char *tag, struct _ns1__DeleteActionsResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__DeleteActionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__DeleteActionsResponse, sizeof(struct _ns1__DeleteActionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__DeleteActionsResponse(soap, a);
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
	{	a = (struct _ns1__DeleteActionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__DeleteActionsResponse, 0, sizeof(struct _ns1__DeleteActionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__DeleteActionsResponse(struct soap *soap, const struct _ns1__DeleteActionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__DeleteActionsResponse);
	if (soap_out__ns1__DeleteActionsResponse(soap, tag?tag:"ns1:DeleteActionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__DeleteActionsResponse * SOAP_FMAC4 soap_get__ns1__DeleteActionsResponse(struct soap *soap, struct _ns1__DeleteActionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__DeleteActionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__DeleteActions(struct soap *soap, struct _ns1__DeleteActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeToken = 0;
	a->Token = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__DeleteActions(struct soap *soap, const struct _ns1__DeleteActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->Token + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__DeleteActions(struct soap *soap, const char *tag, int id, const struct _ns1__DeleteActions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__DeleteActions), type))
		return soap->error;
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "ns1:Token", -1, a->Token + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__DeleteActions * SOAP_FMAC4 soap_in__ns1__DeleteActions(struct soap *soap, const char *tag, struct _ns1__DeleteActions *a, const char *type)
{
	struct soap_blist *soap_blist_Token = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__DeleteActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__DeleteActions, sizeof(struct _ns1__DeleteActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__DeleteActions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Token", 1, NULL))
			{	if (a->Token == NULL)
				{	if (soap_blist_Token == NULL)
						soap_blist_Token = soap_new_block(soap);
					a->Token = (char **)soap_push_block(soap, soap_blist_Token, sizeof(char *));
					if (a->Token == NULL)
						return NULL;
					*a->Token = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "ns1:Token", a->Token, "tt:ReferenceToken"))
				{	a->__sizeToken++;
					a->Token = NULL;
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
	{	a = (struct _ns1__DeleteActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__DeleteActions, 0, sizeof(struct _ns1__DeleteActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeToken < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__DeleteActions(struct soap *soap, const struct _ns1__DeleteActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__DeleteActions);
	if (soap_out__ns1__DeleteActions(soap, tag?tag:"ns1:DeleteActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__DeleteActions * SOAP_FMAC4 soap_get__ns1__DeleteActions(struct soap *soap, struct _ns1__DeleteActions *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__DeleteActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__CreateActionsResponse(struct soap *soap, struct _ns1__CreateActionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAction = 0;
	a->Action = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__CreateActionsResponse(struct soap *soap, const struct _ns1__CreateActionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
		{
			soap_embedded(soap, a->Action + i, SOAP_TYPE_ns1__Action);
			soap_serialize_ns1__Action(soap, a->Action + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__CreateActionsResponse(struct soap *soap, const char *tag, int id, const struct _ns1__CreateActionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__CreateActionsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAction");
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
			if (soap_out_ns1__Action(soap, "ns1:Action", -1, a->Action + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__CreateActionsResponse * SOAP_FMAC4 soap_in__ns1__CreateActionsResponse(struct soap *soap, const char *tag, struct _ns1__CreateActionsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Action = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__CreateActionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__CreateActionsResponse, sizeof(struct _ns1__CreateActionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__CreateActionsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Action", 1, NULL))
			{	if (a->Action == NULL)
				{	if (soap_blist_Action == NULL)
						soap_blist_Action = soap_new_block(soap);
					a->Action = (struct ns1__Action *)soap_push_block(soap, soap_blist_Action, sizeof(struct ns1__Action));
					if (a->Action == NULL)
						return NULL;
					soap_default_ns1__Action(soap, a->Action);
				}
				soap_revert(soap);
				if (soap_in_ns1__Action(soap, "ns1:Action", a->Action, "ns1:Action"))
				{	a->__sizeAction++;
					a->Action = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeAction");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Action)
			soap_pop_block(soap, soap_blist_Action);
		if (a->__sizeAction)
			a->Action = (struct ns1__Action *)soap_save_block(soap, soap_blist_Action, NULL, 1);
		else
		{	a->Action = NULL;
			if (soap_blist_Action)
				soap_end_block(soap, soap_blist_Action);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__CreateActionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__CreateActionsResponse, 0, sizeof(struct _ns1__CreateActionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__CreateActionsResponse(struct soap *soap, const struct _ns1__CreateActionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__CreateActionsResponse);
	if (soap_out__ns1__CreateActionsResponse(soap, tag?tag:"ns1:CreateActionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__CreateActionsResponse * SOAP_FMAC4 soap_get__ns1__CreateActionsResponse(struct soap *soap, struct _ns1__CreateActionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__CreateActionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__CreateActions(struct soap *soap, struct _ns1__CreateActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAction = 0;
	a->Action = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__CreateActions(struct soap *soap, const struct _ns1__CreateActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
		{
			soap_embedded(soap, a->Action + i, SOAP_TYPE_ns1__ActionConfiguration);
			soap_serialize_ns1__ActionConfiguration(soap, a->Action + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__CreateActions(struct soap *soap, const char *tag, int id, const struct _ns1__CreateActions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__CreateActions), type))
		return soap->error;
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
			if (soap_out_ns1__ActionConfiguration(soap, "ns1:Action", -1, a->Action + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__CreateActions * SOAP_FMAC4 soap_in__ns1__CreateActions(struct soap *soap, const char *tag, struct _ns1__CreateActions *a, const char *type)
{
	struct soap_blist *soap_blist_Action = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__CreateActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__CreateActions, sizeof(struct _ns1__CreateActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__CreateActions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Action", 1, NULL))
			{	if (a->Action == NULL)
				{	if (soap_blist_Action == NULL)
						soap_blist_Action = soap_new_block(soap);
					a->Action = (struct ns1__ActionConfiguration *)soap_push_block(soap, soap_blist_Action, sizeof(struct ns1__ActionConfiguration));
					if (a->Action == NULL)
						return NULL;
					soap_default_ns1__ActionConfiguration(soap, a->Action);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionConfiguration(soap, "ns1:Action", a->Action, "ns1:ActionConfiguration"))
				{	a->__sizeAction++;
					a->Action = NULL;
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
		if (a->Action)
			soap_pop_block(soap, soap_blist_Action);
		if (a->__sizeAction)
			a->Action = (struct ns1__ActionConfiguration *)soap_save_block(soap, soap_blist_Action, NULL, 1);
		else
		{	a->Action = NULL;
			if (soap_blist_Action)
				soap_end_block(soap, soap_blist_Action);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__CreateActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__CreateActions, 0, sizeof(struct _ns1__CreateActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeAction < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__CreateActions(struct soap *soap, const struct _ns1__CreateActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__CreateActions);
	if (soap_out__ns1__CreateActions(soap, tag?tag:"ns1:CreateActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__CreateActions * SOAP_FMAC4 soap_get__ns1__CreateActions(struct soap *soap, struct _ns1__CreateActions *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__CreateActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetActionsResponse(struct soap *soap, struct _ns1__GetActionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAction = 0;
	a->Action = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetActionsResponse(struct soap *soap, const struct _ns1__GetActionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
		{
			soap_embedded(soap, a->Action + i, SOAP_TYPE_ns1__Action);
			soap_serialize_ns1__Action(soap, a->Action + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetActionsResponse(struct soap *soap, const char *tag, int id, const struct _ns1__GetActionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetActionsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAction");
	if (a->Action)
	{	int i;
		for (i = 0; i < a->__sizeAction; i++)
			if (soap_out_ns1__Action(soap, "ns1:Action", -1, a->Action + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetActionsResponse * SOAP_FMAC4 soap_in__ns1__GetActionsResponse(struct soap *soap, const char *tag, struct _ns1__GetActionsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Action = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetActionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetActionsResponse, sizeof(struct _ns1__GetActionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetActionsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:Action", 1, NULL))
			{	if (a->Action == NULL)
				{	if (soap_blist_Action == NULL)
						soap_blist_Action = soap_new_block(soap);
					a->Action = (struct ns1__Action *)soap_push_block(soap, soap_blist_Action, sizeof(struct ns1__Action));
					if (a->Action == NULL)
						return NULL;
					soap_default_ns1__Action(soap, a->Action);
				}
				soap_revert(soap);
				if (soap_in_ns1__Action(soap, "ns1:Action", a->Action, "ns1:Action"))
				{	a->__sizeAction++;
					a->Action = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeAction");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Action)
			soap_pop_block(soap, soap_blist_Action);
		if (a->__sizeAction)
			a->Action = (struct ns1__Action *)soap_save_block(soap, soap_blist_Action, NULL, 1);
		else
		{	a->Action = NULL;
			if (soap_blist_Action)
				soap_end_block(soap, soap_blist_Action);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__GetActionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetActionsResponse, 0, sizeof(struct _ns1__GetActionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetActionsResponse(struct soap *soap, const struct _ns1__GetActionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetActionsResponse);
	if (soap_out__ns1__GetActionsResponse(soap, tag?tag:"ns1:GetActionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetActionsResponse * SOAP_FMAC4 soap_get__ns1__GetActionsResponse(struct soap *soap, struct _ns1__GetActionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetActionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetActions(struct soap *soap, struct _ns1__GetActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetActions(struct soap *soap, const struct _ns1__GetActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetActions(struct soap *soap, const char *tag, int id, const struct _ns1__GetActions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetActions), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetActions * SOAP_FMAC4 soap_in__ns1__GetActions(struct soap *soap, const char *tag, struct _ns1__GetActions *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetActions, sizeof(struct _ns1__GetActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetActions(soap, a);
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
	{	a = (struct _ns1__GetActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetActions, 0, sizeof(struct _ns1__GetActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetActions(struct soap *soap, const struct _ns1__GetActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetActions);
	if (soap_out__ns1__GetActions(soap, tag?tag:"ns1:GetActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetActions * SOAP_FMAC4 soap_get__ns1__GetActions(struct soap *soap, struct _ns1__GetActions *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetSupportedActionsResponse(struct soap *soap, struct _ns1__GetSupportedActionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SupportedActions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetSupportedActionsResponse(struct soap *soap, const struct _ns1__GetSupportedActionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__SupportedActions(soap, &a->SupportedActions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetSupportedActionsResponse(struct soap *soap, const char *tag, int id, const struct _ns1__GetSupportedActionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetSupportedActionsResponse), type))
		return soap->error;
	if (a->SupportedActions)
		soap_element_result(soap, "ns1:SupportedActions");
	if (a->SupportedActions)
	{	if (soap_out_PointerTons1__SupportedActions(soap, "ns1:SupportedActions", -1, &a->SupportedActions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:SupportedActions"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetSupportedActionsResponse * SOAP_FMAC4 soap_in__ns1__GetSupportedActionsResponse(struct soap *soap, const char *tag, struct _ns1__GetSupportedActionsResponse *a, const char *type)
{
	size_t soap_flag_SupportedActions = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetSupportedActionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetSupportedActionsResponse, sizeof(struct _ns1__GetSupportedActionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetSupportedActionsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SupportedActions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__SupportedActions(soap, "ns1:SupportedActions", &a->SupportedActions, "ns1:SupportedActions"))
				{	soap_flag_SupportedActions--;
					continue;
				}
			soap_check_result(soap, "ns1:SupportedActions");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _ns1__GetSupportedActionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetSupportedActionsResponse, 0, sizeof(struct _ns1__GetSupportedActionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedActions > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetSupportedActionsResponse(struct soap *soap, const struct _ns1__GetSupportedActionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetSupportedActionsResponse);
	if (soap_out__ns1__GetSupportedActionsResponse(soap, tag?tag:"ns1:GetSupportedActionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetSupportedActionsResponse * SOAP_FMAC4 soap_get__ns1__GetSupportedActionsResponse(struct soap *soap, struct _ns1__GetSupportedActionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetSupportedActionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__ns1__GetSupportedActions(struct soap *soap, struct _ns1__GetSupportedActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns1__GetSupportedActions(struct soap *soap, const struct _ns1__GetSupportedActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns1__GetSupportedActions(struct soap *soap, const char *tag, int id, const struct _ns1__GetSupportedActions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__ns1__GetSupportedActions), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _ns1__GetSupportedActions * SOAP_FMAC4 soap_in__ns1__GetSupportedActions(struct soap *soap, const char *tag, struct _ns1__GetSupportedActions *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _ns1__GetSupportedActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__ns1__GetSupportedActions, sizeof(struct _ns1__GetSupportedActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__ns1__GetSupportedActions(soap, a);
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
	{	a = (struct _ns1__GetSupportedActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__ns1__GetSupportedActions, 0, sizeof(struct _ns1__GetSupportedActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__ns1__GetSupportedActions(struct soap *soap, const struct _ns1__GetSupportedActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__ns1__GetSupportedActions);
	if (soap_out__ns1__GetSupportedActions(soap, tag?tag:"ns1:GetSupportedActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _ns1__GetSupportedActions * SOAP_FMAC4 soap_get__ns1__GetSupportedActions(struct soap *soap, struct _ns1__GetSupportedActions *p, const char *tag, const char *type)
{
	if ((p = soap_in__ns1__GetSupportedActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__RecordingActionConfiguration(struct soap *soap, struct ns1__RecordingActionConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->RecordConfig = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__RecordingActionConfiguration(struct soap *soap, const struct ns1__RecordingActionConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__TriggeredRecordingConfiguration(soap, &a->RecordConfig);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__RecordingActionConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__RecordingActionConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__RecordingActionConfiguration), type))
		return soap->error;
	if (a->RecordConfig)
	{	if (soap_out_PointerTons1__TriggeredRecordingConfiguration(soap, "ns1:RecordConfig", -1, &a->RecordConfig, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:RecordConfig"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__RecordingActionConfiguration * SOAP_FMAC4 soap_in_ns1__RecordingActionConfiguration(struct soap *soap, const char *tag, struct ns1__RecordingActionConfiguration *a, const char *type)
{
	size_t soap_flag_RecordConfig = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__RecordingActionConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__RecordingActionConfiguration, sizeof(struct ns1__RecordingActionConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__RecordingActionConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__TriggeredRecordingConfiguration(soap, "ns1:RecordConfig", &a->RecordConfig, "ns1:TriggeredRecordingConfiguration"))
				{	soap_flag_RecordConfig--;
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
	{	a = (struct ns1__RecordingActionConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__RecordingActionConfiguration, 0, sizeof(struct ns1__RecordingActionConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordConfig > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__RecordingActionConfiguration(struct soap *soap, const struct ns1__RecordingActionConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__RecordingActionConfiguration);
	if (soap_out_ns1__RecordingActionConfiguration(soap, tag?tag:"ns1:RecordingActionConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__RecordingActionConfiguration * SOAP_FMAC4 soap_get_ns1__RecordingActionConfiguration(struct soap *soap, struct ns1__RecordingActionConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__RecordingActionConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__TriggeredRecordingConfiguration(struct soap *soap, struct ns1__TriggeredRecordingConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__duration(soap, &a->PreRecordDuration);
	soap_default_xsd__duration(soap, &a->PostRecordDuration);
	soap_default_xsd__duration(soap, &a->RecordDuration);
	soap_default_xsd__positiveInteger(soap, &a->RecordFrameRate);
	soap_default_xsd__boolean(soap, &a->DoRecordAudio);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__TriggeredRecordingConfiguration(struct soap *soap, const struct ns1__TriggeredRecordingConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->PreRecordDuration, SOAP_TYPE_xsd__duration);
	soap_embedded(soap, &a->PostRecordDuration, SOAP_TYPE_xsd__duration);
	soap_embedded(soap, &a->RecordDuration, SOAP_TYPE_xsd__duration);
	soap_serialize_xsd__positiveInteger(soap, &a->RecordFrameRate);
	soap_embedded(soap, &a->DoRecordAudio, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__TriggeredRecordingConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__TriggeredRecordingConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__TriggeredRecordingConfiguration), type))
		return soap->error;
	if (soap_out_xsd__duration(soap, "ns1:PreRecordDuration", -1, &a->PreRecordDuration, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "ns1:PostRecordDuration", -1, &a->PostRecordDuration, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "ns1:RecordDuration", -1, &a->RecordDuration, ""))
		return soap->error;
	if (soap_out_xsd__positiveInteger(soap, "ns1:RecordFrameRate", -1, &a->RecordFrameRate, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "ns1:DoRecordAudio", -1, &a->DoRecordAudio, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__TriggeredRecordingConfiguration * SOAP_FMAC4 soap_in_ns1__TriggeredRecordingConfiguration(struct soap *soap, const char *tag, struct ns1__TriggeredRecordingConfiguration *a, const char *type)
{
	size_t soap_flag_PreRecordDuration = 1;
	size_t soap_flag_PostRecordDuration = 1;
	size_t soap_flag_RecordDuration = 1;
	size_t soap_flag_RecordFrameRate = 1;
	size_t soap_flag_DoRecordAudio = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__TriggeredRecordingConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__TriggeredRecordingConfiguration, sizeof(struct ns1__TriggeredRecordingConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__TriggeredRecordingConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PreRecordDuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "ns1:PreRecordDuration", &a->PreRecordDuration, "xsd:duration"))
				{	soap_flag_PreRecordDuration--;
					continue;
				}
			if (soap_flag_PostRecordDuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "ns1:PostRecordDuration", &a->PostRecordDuration, "xsd:duration"))
				{	soap_flag_PostRecordDuration--;
					continue;
				}
			if (soap_flag_RecordDuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "ns1:RecordDuration", &a->RecordDuration, "xsd:duration"))
				{	soap_flag_RecordDuration--;
					continue;
				}
			if (soap_flag_RecordFrameRate && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__positiveInteger(soap, "ns1:RecordFrameRate", &a->RecordFrameRate, "xsd:positiveInteger"))
				{	soap_flag_RecordFrameRate--;
					continue;
				}
			if (soap_flag_DoRecordAudio && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "ns1:DoRecordAudio", &a->DoRecordAudio, "xsd:boolean"))
				{	soap_flag_DoRecordAudio--;
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
	{	a = (struct ns1__TriggeredRecordingConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__TriggeredRecordingConfiguration, 0, sizeof(struct ns1__TriggeredRecordingConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PreRecordDuration > 0 || soap_flag_PostRecordDuration > 0 || soap_flag_RecordDuration > 0 || soap_flag_DoRecordAudio > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__TriggeredRecordingConfiguration(struct soap *soap, const struct ns1__TriggeredRecordingConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__TriggeredRecordingConfiguration);
	if (soap_out_ns1__TriggeredRecordingConfiguration(soap, tag?tag:"ns1:TriggeredRecordingConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__TriggeredRecordingConfiguration * SOAP_FMAC4 soap_get_ns1__TriggeredRecordingConfiguration(struct soap *soap, struct ns1__TriggeredRecordingConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__TriggeredRecordingConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SMSMessage(struct soap *soap, struct ns1__SMSMessage *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Text);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SMSMessage(struct soap *soap, const struct ns1__SMSMessage *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Text);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SMSMessage(struct soap *soap, const char *tag, int id, const struct ns1__SMSMessage *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SMSMessage), type))
		return soap->error;
	if (a->Text)
	{	if (soap_out_string(soap, "ns1:Text", -1, &a->Text, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Text"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SMSMessage * SOAP_FMAC4 soap_in_ns1__SMSMessage(struct soap *soap, const char *tag, struct ns1__SMSMessage *a, const char *type)
{
	size_t soap_flag_Text = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SMSMessage *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SMSMessage, sizeof(struct ns1__SMSMessage), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SMSMessage(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Text && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:Text", &a->Text, "xsd:string"))
				{	soap_flag_Text--;
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
	{	a = (struct ns1__SMSMessage *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SMSMessage, 0, sizeof(struct ns1__SMSMessage), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Text > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SMSMessage(struct soap *soap, const struct ns1__SMSMessage *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SMSMessage);
	if (soap_out_ns1__SMSMessage(soap, tag?tag:"ns1:SMSMessage", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SMSMessage * SOAP_FMAC4 soap_get_ns1__SMSMessage(struct soap *soap, struct ns1__SMSMessage *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SMSMessage(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SMSSenderConfiguration(struct soap *soap, struct ns1__SMSSenderConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->EMail);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SMSSenderConfiguration(struct soap *soap, const struct ns1__SMSSenderConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->EMail);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SMSSenderConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__SMSSenderConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SMSSenderConfiguration), type))
		return soap->error;
	if (a->EMail)
	{	if (soap_out_string(soap, "ns1:EMail", -1, &a->EMail, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:EMail"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SMSSenderConfiguration * SOAP_FMAC4 soap_in_ns1__SMSSenderConfiguration(struct soap *soap, const char *tag, struct ns1__SMSSenderConfiguration *a, const char *type)
{
	size_t soap_flag_EMail = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SMSSenderConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SMSSenderConfiguration, sizeof(struct ns1__SMSSenderConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SMSSenderConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_EMail && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:EMail", &a->EMail, "xsd:string"))
				{	soap_flag_EMail--;
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
	{	a = (struct ns1__SMSSenderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SMSSenderConfiguration, 0, sizeof(struct ns1__SMSSenderConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_EMail > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SMSSenderConfiguration(struct soap *soap, const struct ns1__SMSSenderConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SMSSenderConfiguration);
	if (soap_out_ns1__SMSSenderConfiguration(soap, tag?tag:"ns1:SMSSenderConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SMSSenderConfiguration * SOAP_FMAC4 soap_get_ns1__SMSSenderConfiguration(struct soap *soap, struct ns1__SMSSenderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SMSSenderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SMSProviderConfiguration(struct soap *soap, struct ns1__SMSProviderConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->ProviderURL);
	a->User = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SMSProviderConfiguration(struct soap *soap, const struct ns1__SMSProviderConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->ProviderURL);
	soap_serialize_PointerTons1__UserCredentials(soap, &a->User);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SMSProviderConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__SMSProviderConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SMSProviderConfiguration), type))
		return soap->error;
	if (a->ProviderURL)
	{	if (soap_out_xsd__anyURI(soap, "ns1:ProviderURL", -1, &a->ProviderURL, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:ProviderURL"))
		return soap->error;
	if (a->User)
	{	if (soap_out_PointerTons1__UserCredentials(soap, "ns1:User", -1, &a->User, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:User"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SMSProviderConfiguration * SOAP_FMAC4 soap_in_ns1__SMSProviderConfiguration(struct soap *soap, const char *tag, struct ns1__SMSProviderConfiguration *a, const char *type)
{
	size_t soap_flag_ProviderURL = 1;
	size_t soap_flag_User = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SMSProviderConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SMSProviderConfiguration, sizeof(struct ns1__SMSProviderConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SMSProviderConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProviderURL && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "ns1:ProviderURL", &a->ProviderURL, "xsd:anyURI"))
				{	soap_flag_ProviderURL--;
					continue;
				}
			if (soap_flag_User && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__UserCredentials(soap, "ns1:User", &a->User, "ns1:UserCredentials"))
				{	soap_flag_User--;
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
	{	a = (struct ns1__SMSProviderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SMSProviderConfiguration, 0, sizeof(struct ns1__SMSProviderConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProviderURL > 0 || soap_flag_User > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SMSProviderConfiguration(struct soap *soap, const struct ns1__SMSProviderConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SMSProviderConfiguration);
	if (soap_out_ns1__SMSProviderConfiguration(soap, tag?tag:"ns1:SMSProviderConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SMSProviderConfiguration * SOAP_FMAC4 soap_get_ns1__SMSProviderConfiguration(struct soap *soap, struct ns1__SMSProviderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SMSProviderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpContentConfigurationUploadFile(struct soap *soap, struct ns1__FtpContentConfigurationUploadFile *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->sourceFileName);
	soap_default_string(soap, &a->destinationFileName);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpContentConfigurationUploadFile(struct soap *soap, const struct ns1__FtpContentConfigurationUploadFile *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->sourceFileName);
	soap_serialize_string(soap, &a->destinationFileName);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpContentConfigurationUploadFile(struct soap *soap, const char *tag, int id, const struct ns1__FtpContentConfigurationUploadFile *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpContentConfigurationUploadFile), type))
		return soap->error;
	if (a->sourceFileName)
	{	if (soap_out_string(soap, "ns1:sourceFileName", -1, &a->sourceFileName, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:sourceFileName"))
		return soap->error;
	if (a->destinationFileName)
	{	if (soap_out_string(soap, "ns1:destinationFileName", -1, &a->destinationFileName, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:destinationFileName"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpContentConfigurationUploadFile * SOAP_FMAC4 soap_in_ns1__FtpContentConfigurationUploadFile(struct soap *soap, const char *tag, struct ns1__FtpContentConfigurationUploadFile *a, const char *type)
{
	size_t soap_flag_sourceFileName = 1;
	size_t soap_flag_destinationFileName = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpContentConfigurationUploadFile *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpContentConfigurationUploadFile, sizeof(struct ns1__FtpContentConfigurationUploadFile), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpContentConfigurationUploadFile(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_sourceFileName && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:sourceFileName", &a->sourceFileName, "xsd:string"))
				{	soap_flag_sourceFileName--;
					continue;
				}
			if (soap_flag_destinationFileName && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:destinationFileName", &a->destinationFileName, "xsd:string"))
				{	soap_flag_destinationFileName--;
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
	{	a = (struct ns1__FtpContentConfigurationUploadFile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpContentConfigurationUploadFile, 0, sizeof(struct ns1__FtpContentConfigurationUploadFile), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_sourceFileName > 0 || soap_flag_destinationFileName > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpContentConfigurationUploadFile(struct soap *soap, const struct ns1__FtpContentConfigurationUploadFile *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpContentConfigurationUploadFile);
	if (soap_out_ns1__FtpContentConfigurationUploadFile(soap, tag?tag:"ns1:FtpContentConfigurationUploadFile", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpContentConfigurationUploadFile * SOAP_FMAC4 soap_get_ns1__FtpContentConfigurationUploadFile(struct soap *soap, struct ns1__FtpContentConfigurationUploadFile *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpContentConfigurationUploadFile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpContentConfigurationUploadImages(struct soap *soap, struct ns1__FtpContentConfigurationUploadImages *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__duration(soap, &a->HowLong);
	soap_default_xsd__duration(soap, &a->SampleInterval);
	a->FileName = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpContentConfigurationUploadImages(struct soap *soap, const struct ns1__FtpContentConfigurationUploadImages *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->HowLong, SOAP_TYPE_xsd__duration);
	soap_embedded(soap, &a->SampleInterval, SOAP_TYPE_xsd__duration);
	soap_serialize_PointerTons1__FtpFileNameConfigurations(soap, &a->FileName);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpContentConfigurationUploadImages(struct soap *soap, const char *tag, int id, const struct ns1__FtpContentConfigurationUploadImages *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpContentConfigurationUploadImages), type))
		return soap->error;
	if (soap_out_xsd__duration(soap, "ns1:HowLong", -1, &a->HowLong, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "ns1:SampleInterval", -1, &a->SampleInterval, ""))
		return soap->error;
	if (a->FileName)
	{	if (soap_out_PointerTons1__FtpFileNameConfigurations(soap, "ns1:FileName", -1, &a->FileName, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:FileName"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpContentConfigurationUploadImages * SOAP_FMAC4 soap_in_ns1__FtpContentConfigurationUploadImages(struct soap *soap, const char *tag, struct ns1__FtpContentConfigurationUploadImages *a, const char *type)
{
	size_t soap_flag_HowLong = 1;
	size_t soap_flag_SampleInterval = 1;
	size_t soap_flag_FileName = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpContentConfigurationUploadImages *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpContentConfigurationUploadImages, sizeof(struct ns1__FtpContentConfigurationUploadImages), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpContentConfigurationUploadImages(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HowLong && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "ns1:HowLong", &a->HowLong, "xsd:duration"))
				{	soap_flag_HowLong--;
					continue;
				}
			if (soap_flag_SampleInterval && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "ns1:SampleInterval", &a->SampleInterval, "xsd:duration"))
				{	soap_flag_SampleInterval--;
					continue;
				}
			if (soap_flag_FileName && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpFileNameConfigurations(soap, "ns1:FileName", &a->FileName, "ns1:FtpFileNameConfigurations"))
				{	soap_flag_FileName--;
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
	{	a = (struct ns1__FtpContentConfigurationUploadImages *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpContentConfigurationUploadImages, 0, sizeof(struct ns1__FtpContentConfigurationUploadImages), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HowLong > 0 || soap_flag_SampleInterval > 0 || soap_flag_FileName > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpContentConfigurationUploadImages(struct soap *soap, const struct ns1__FtpContentConfigurationUploadImages *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpContentConfigurationUploadImages);
	if (soap_out_ns1__FtpContentConfigurationUploadImages(soap, tag?tag:"ns1:FtpContentConfigurationUploadImages", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpContentConfigurationUploadImages * SOAP_FMAC4 soap_get_ns1__FtpContentConfigurationUploadImages(struct soap *soap, struct ns1__FtpContentConfigurationUploadImages *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpContentConfigurationUploadImages(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpFileNameConfigurations(struct soap *soap, struct ns1__FtpFileNameConfigurations *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default_string(soap, &a->file_USCOREname);
	a->suffix = (enum ns1__FileSuffixType)0;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpFileNameConfigurations(struct soap *soap, const struct ns1__FtpFileNameConfigurations *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpFileNameConfigurations(struct soap *soap, const char *tag, int id, const struct ns1__FtpFileNameConfigurations *a, const char *type)
{
	if (a->file_USCOREname)
		soap_set_attr(soap, "file_name", a->file_USCOREname, 1);
	soap_set_attr(soap, "suffix", soap_ns1__FileSuffixType2s(soap, a->suffix), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpFileNameConfigurations), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpFileNameConfigurations * SOAP_FMAC4 soap_in_ns1__FtpFileNameConfigurations(struct soap *soap, const char *tag, struct ns1__FtpFileNameConfigurations *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpFileNameConfigurations *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpFileNameConfigurations, sizeof(struct ns1__FtpFileNameConfigurations), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpFileNameConfigurations(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "file_name", 0), &a->file_USCOREname, 0, -1))
		return NULL;
	if (soap_s2ns1__FileSuffixType(soap, soap_attr_value(soap, "suffix", 0), &a->suffix))
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
	{	a = (struct ns1__FtpFileNameConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpFileNameConfigurations, 0, sizeof(struct ns1__FtpFileNameConfigurations), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpFileNameConfigurations(struct soap *soap, const struct ns1__FtpFileNameConfigurations *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpFileNameConfigurations);
	if (soap_out_ns1__FtpFileNameConfigurations(soap, tag?tag:"ns1:FtpFileNameConfigurations", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpFileNameConfigurations * SOAP_FMAC4 soap_get_ns1__FtpFileNameConfigurations(struct soap *soap, struct ns1__FtpFileNameConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpFileNameConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpContentConfiguration(struct soap *soap, struct ns1__FtpContentConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_FtpContentConfiguration = 0;
	a->__size = 0;
	a->__any = NULL;
	soap_default_string(soap, &a->Type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpContentConfiguration(struct soap *soap, const struct ns1__FtpContentConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__ns1__union_FtpContentConfiguration(soap, a->__union_FtpContentConfiguration, &a->union_FtpContentConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpContentConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__FtpContentConfiguration *a, const char *type)
{
	if (a->Type)
		soap_set_attr(soap, "Type", a->Type, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpContentConfiguration), type))
		return soap->error;
	if (soap_out__ns1__union_FtpContentConfiguration(soap, a->__union_FtpContentConfiguration, &a->union_FtpContentConfiguration))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpContentConfiguration * SOAP_FMAC4 soap_in_ns1__FtpContentConfiguration(struct soap *soap, const char *tag, struct ns1__FtpContentConfiguration *a, const char *type)
{
	size_t soap_flag_union_FtpContentConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpContentConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpContentConfiguration, sizeof(struct ns1__FtpContentConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpContentConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_union_FtpContentConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__ns1__union_FtpContentConfiguration(soap, &a->__union_FtpContentConfiguration, &a->union_FtpContentConfiguration))
				{	soap_flag_union_FtpContentConfiguration = 0;
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
	{	a = (struct ns1__FtpContentConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpContentConfiguration, 0, sizeof(struct ns1__FtpContentConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_union_FtpContentConfiguration))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpContentConfiguration(struct soap *soap, const struct ns1__FtpContentConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpContentConfiguration);
	if (soap_out_ns1__FtpContentConfiguration(soap, tag?tag:"ns1:FtpContentConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpContentConfiguration * SOAP_FMAC4 soap_get_ns1__FtpContentConfiguration(struct soap *soap, struct ns1__FtpContentConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpContentConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpContent(struct soap *soap, struct ns1__FtpContent *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->FtpContentConfig = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpContent(struct soap *soap, const struct ns1__FtpContent *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__FtpContentConfiguration(soap, &a->FtpContentConfig);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpContent(struct soap *soap, const char *tag, int id, const struct ns1__FtpContent *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpContent), type))
		return soap->error;
	if (a->FtpContentConfig)
	{	if (soap_out_PointerTons1__FtpContentConfiguration(soap, "ns1:FtpContentConfig", -1, &a->FtpContentConfig, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:FtpContentConfig"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpContent * SOAP_FMAC4 soap_in_ns1__FtpContent(struct soap *soap, const char *tag, struct ns1__FtpContent *a, const char *type)
{
	size_t soap_flag_FtpContentConfig = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpContent *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpContent, sizeof(struct ns1__FtpContent), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpContent(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FtpContentConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpContentConfiguration(soap, "ns1:FtpContentConfig", &a->FtpContentConfig, "ns1:FtpContentConfiguration"))
				{	soap_flag_FtpContentConfig--;
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
	{	a = (struct ns1__FtpContent *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpContent, 0, sizeof(struct ns1__FtpContent), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FtpContentConfig > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpContent(struct soap *soap, const struct ns1__FtpContent *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpContent);
	if (soap_out_ns1__FtpContent(soap, tag?tag:"ns1:FtpContent", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpContent * SOAP_FMAC4 soap_get_ns1__FtpContent(struct soap *soap, struct ns1__FtpContent *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpContent(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, struct ns1__FtpAuthenticationConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, const struct ns1__FtpAuthenticationConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__FtpAuthenticationConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpAuthenticationConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpAuthenticationConfigurationExtension * SOAP_FMAC4 soap_in_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, const char *tag, struct ns1__FtpAuthenticationConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpAuthenticationConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpAuthenticationConfigurationExtension, sizeof(struct ns1__FtpAuthenticationConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpAuthenticationConfigurationExtension(soap, a);
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
	{	a = (struct ns1__FtpAuthenticationConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpAuthenticationConfigurationExtension, 0, sizeof(struct ns1__FtpAuthenticationConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, const struct ns1__FtpAuthenticationConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpAuthenticationConfigurationExtension);
	if (soap_out_ns1__FtpAuthenticationConfigurationExtension(soap, tag?tag:"ns1:FtpAuthenticationConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpAuthenticationConfigurationExtension * SOAP_FMAC4 soap_get_ns1__FtpAuthenticationConfigurationExtension(struct soap *soap, struct ns1__FtpAuthenticationConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpAuthenticationConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpDestinationConfigurationExtension(struct soap *soap, struct ns1__FtpDestinationConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpDestinationConfigurationExtension(struct soap *soap, const struct ns1__FtpDestinationConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpDestinationConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__FtpDestinationConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpDestinationConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpDestinationConfigurationExtension * SOAP_FMAC4 soap_in_ns1__FtpDestinationConfigurationExtension(struct soap *soap, const char *tag, struct ns1__FtpDestinationConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpDestinationConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpDestinationConfigurationExtension, sizeof(struct ns1__FtpDestinationConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpDestinationConfigurationExtension(soap, a);
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
	{	a = (struct ns1__FtpDestinationConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpDestinationConfigurationExtension, 0, sizeof(struct ns1__FtpDestinationConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpDestinationConfigurationExtension(struct soap *soap, const struct ns1__FtpDestinationConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpDestinationConfigurationExtension);
	if (soap_out_ns1__FtpDestinationConfigurationExtension(soap, tag?tag:"ns1:FtpDestinationConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpDestinationConfigurationExtension * SOAP_FMAC4 soap_get_ns1__FtpDestinationConfigurationExtension(struct soap *soap, struct ns1__FtpDestinationConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpDestinationConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpAuthenticationConfiguration(struct soap *soap, struct ns1__FtpAuthenticationConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->User = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpAuthenticationConfiguration(struct soap *soap, const struct ns1__FtpAuthenticationConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__UserCredentials(soap, &a->User);
	soap_serialize_PointerTons1__FtpAuthenticationConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpAuthenticationConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__FtpAuthenticationConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpAuthenticationConfiguration), type))
		return soap->error;
	if (soap_out_PointerTons1__UserCredentials(soap, "ns1:User", -1, &a->User, ""))
		return soap->error;
	if (soap_out_PointerTons1__FtpAuthenticationConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpAuthenticationConfiguration * SOAP_FMAC4 soap_in_ns1__FtpAuthenticationConfiguration(struct soap *soap, const char *tag, struct ns1__FtpAuthenticationConfiguration *a, const char *type)
{
	size_t soap_flag_User = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpAuthenticationConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpAuthenticationConfiguration, sizeof(struct ns1__FtpAuthenticationConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpAuthenticationConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_User && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__UserCredentials(soap, "ns1:User", &a->User, "ns1:UserCredentials"))
				{	soap_flag_User--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpAuthenticationConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:FtpAuthenticationConfigurationExtension"))
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
	{	a = (struct ns1__FtpAuthenticationConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpAuthenticationConfiguration, 0, sizeof(struct ns1__FtpAuthenticationConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpAuthenticationConfiguration(struct soap *soap, const struct ns1__FtpAuthenticationConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpAuthenticationConfiguration);
	if (soap_out_ns1__FtpAuthenticationConfiguration(soap, tag?tag:"ns1:FtpAuthenticationConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpAuthenticationConfiguration * SOAP_FMAC4 soap_get_ns1__FtpAuthenticationConfiguration(struct soap *soap, struct ns1__FtpAuthenticationConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpAuthenticationConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpHostAddress(struct soap *soap, struct ns1__FtpHostAddress *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Value);
	a->__size = 0;
	a->__any = NULL;
	soap_default_ns1__AddressFormatType(soap, &a->formatType);
	soap_default_xsd__integer(soap, &a->portNo);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpHostAddress(struct soap *soap, const struct ns1__FtpHostAddress *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Value);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpHostAddress(struct soap *soap, const char *tag, int id, const struct ns1__FtpHostAddress *a, const char *type)
{
	soap_set_attr(soap, "formatType", soap_ns1__AddressFormatType2s(soap, a->formatType), 1);
	if (a->portNo)
		soap_set_attr(soap, "portNo", a->portNo, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpHostAddress), type))
		return soap->error;
	if (a->Value)
	{	if (soap_out_string(soap, "ns1:Value", -1, &a->Value, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Value"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpHostAddress * SOAP_FMAC4 soap_in_ns1__FtpHostAddress(struct soap *soap, const char *tag, struct ns1__FtpHostAddress *a, const char *type)
{
	size_t soap_flag_Value = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpHostAddress *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpHostAddress, sizeof(struct ns1__FtpHostAddress), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpHostAddress(soap, a);
	if (soap_s2ns1__AddressFormatType(soap, soap_attr_value(soap, "formatType", 1), &a->formatType))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "portNo", 0), &a->portNo, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Value && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:Value", &a->Value, "xsd:string"))
				{	soap_flag_Value--;
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
	{	a = (struct ns1__FtpHostAddress *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpHostAddress, 0, sizeof(struct ns1__FtpHostAddress), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Value > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpHostAddress(struct soap *soap, const struct ns1__FtpHostAddress *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpHostAddress);
	if (soap_out_ns1__FtpHostAddress(soap, tag?tag:"ns1:FtpHostAddress", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpHostAddress * SOAP_FMAC4 soap_get_ns1__FtpHostAddress(struct soap *soap, struct ns1__FtpHostAddress *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpHostAddress(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpHostConfigurationsExtension(struct soap *soap, struct ns1__FtpHostConfigurationsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpHostConfigurationsExtension(struct soap *soap, const struct ns1__FtpHostConfigurationsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpHostConfigurationsExtension(struct soap *soap, const char *tag, int id, const struct ns1__FtpHostConfigurationsExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpHostConfigurationsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpHostConfigurationsExtension * SOAP_FMAC4 soap_in_ns1__FtpHostConfigurationsExtension(struct soap *soap, const char *tag, struct ns1__FtpHostConfigurationsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpHostConfigurationsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpHostConfigurationsExtension, sizeof(struct ns1__FtpHostConfigurationsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpHostConfigurationsExtension(soap, a);
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
	{	a = (struct ns1__FtpHostConfigurationsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpHostConfigurationsExtension, 0, sizeof(struct ns1__FtpHostConfigurationsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpHostConfigurationsExtension(struct soap *soap, const struct ns1__FtpHostConfigurationsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpHostConfigurationsExtension);
	if (soap_out_ns1__FtpHostConfigurationsExtension(soap, tag?tag:"ns1:FtpHostConfigurationsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpHostConfigurationsExtension * SOAP_FMAC4 soap_get_ns1__FtpHostConfigurationsExtension(struct soap *soap, struct ns1__FtpHostConfigurationsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpHostConfigurationsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpDestinationConfiguration(struct soap *soap, struct ns1__FtpDestinationConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->HostAddress = NULL;
	soap_default_string(soap, &a->UploadPath);
	a->FtpAuthentication = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpDestinationConfiguration(struct soap *soap, const struct ns1__FtpDestinationConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__FtpHostAddress(soap, &a->HostAddress);
	soap_serialize_string(soap, &a->UploadPath);
	soap_serialize_PointerTons1__FtpAuthenticationConfiguration(soap, &a->FtpAuthentication);
	soap_serialize_PointerTons1__FtpDestinationConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpDestinationConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__FtpDestinationConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpDestinationConfiguration), type))
		return soap->error;
	if (a->HostAddress)
	{	if (soap_out_PointerTons1__FtpHostAddress(soap, "ns1:HostAddress", -1, &a->HostAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:HostAddress"))
		return soap->error;
	if (a->UploadPath)
	{	if (soap_out_string(soap, "ns1:UploadPath", -1, &a->UploadPath, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:UploadPath"))
		return soap->error;
	if (a->FtpAuthentication)
	{	if (soap_out_PointerTons1__FtpAuthenticationConfiguration(soap, "ns1:FtpAuthentication", -1, &a->FtpAuthentication, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:FtpAuthentication"))
		return soap->error;
	if (soap_out_PointerTons1__FtpDestinationConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpDestinationConfiguration * SOAP_FMAC4 soap_in_ns1__FtpDestinationConfiguration(struct soap *soap, const char *tag, struct ns1__FtpDestinationConfiguration *a, const char *type)
{
	size_t soap_flag_HostAddress = 1;
	size_t soap_flag_UploadPath = 1;
	size_t soap_flag_FtpAuthentication = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpDestinationConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpDestinationConfiguration, sizeof(struct ns1__FtpDestinationConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpDestinationConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HostAddress && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpHostAddress(soap, "ns1:HostAddress", &a->HostAddress, "ns1:FtpHostAddress"))
				{	soap_flag_HostAddress--;
					continue;
				}
			if (soap_flag_UploadPath && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:UploadPath", &a->UploadPath, "xsd:string"))
				{	soap_flag_UploadPath--;
					continue;
				}
			if (soap_flag_FtpAuthentication && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpAuthenticationConfiguration(soap, "ns1:FtpAuthentication", &a->FtpAuthentication, "ns1:FtpAuthenticationConfiguration"))
				{	soap_flag_FtpAuthentication--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpDestinationConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:FtpDestinationConfigurationExtension"))
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
	{	a = (struct ns1__FtpDestinationConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpDestinationConfiguration, 0, sizeof(struct ns1__FtpDestinationConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HostAddress > 0 || soap_flag_UploadPath > 0 || soap_flag_FtpAuthentication > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpDestinationConfiguration(struct soap *soap, const struct ns1__FtpDestinationConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpDestinationConfiguration);
	if (soap_out_ns1__FtpDestinationConfiguration(soap, tag?tag:"ns1:FtpDestinationConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpDestinationConfiguration * SOAP_FMAC4 soap_get_ns1__FtpDestinationConfiguration(struct soap *soap, struct ns1__FtpDestinationConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpDestinationConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__FtpHostConfigurations(struct soap *soap, struct ns1__FtpHostConfigurations *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeFtpDestination = 0;
	a->FtpDestination = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__FtpHostConfigurations(struct soap *soap, const struct ns1__FtpHostConfigurations *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->FtpDestination)
	{	int i;
		for (i = 0; i < a->__sizeFtpDestination; i++)
		{
			soap_embedded(soap, a->FtpDestination + i, SOAP_TYPE_ns1__FtpDestinationConfiguration);
			soap_serialize_ns1__FtpDestinationConfiguration(soap, a->FtpDestination + i);
		}
	}
	soap_serialize_PointerTons1__FtpHostConfigurationsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__FtpHostConfigurations(struct soap *soap, const char *tag, int id, const struct ns1__FtpHostConfigurations *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__FtpHostConfigurations), type))
		return soap->error;
	if (a->FtpDestination)
	{	int i;
		for (i = 0; i < a->__sizeFtpDestination; i++)
			if (soap_out_ns1__FtpDestinationConfiguration(soap, "ns1:FtpDestination", -1, a->FtpDestination + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__FtpHostConfigurationsExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__FtpHostConfigurations * SOAP_FMAC4 soap_in_ns1__FtpHostConfigurations(struct soap *soap, const char *tag, struct ns1__FtpHostConfigurations *a, const char *type)
{
	struct soap_blist *soap_blist_FtpDestination = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__FtpHostConfigurations *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__FtpHostConfigurations, sizeof(struct ns1__FtpHostConfigurations), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__FtpHostConfigurations(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:FtpDestination", 1, NULL))
			{	if (a->FtpDestination == NULL)
				{	if (soap_blist_FtpDestination == NULL)
						soap_blist_FtpDestination = soap_new_block(soap);
					a->FtpDestination = (struct ns1__FtpDestinationConfiguration *)soap_push_block(soap, soap_blist_FtpDestination, sizeof(struct ns1__FtpDestinationConfiguration));
					if (a->FtpDestination == NULL)
						return NULL;
					soap_default_ns1__FtpDestinationConfiguration(soap, a->FtpDestination);
				}
				soap_revert(soap);
				if (soap_in_ns1__FtpDestinationConfiguration(soap, "ns1:FtpDestination", a->FtpDestination, "ns1:FtpDestinationConfiguration"))
				{	a->__sizeFtpDestination++;
					a->FtpDestination = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FtpHostConfigurationsExtension(soap, "ns1:Extension", &a->Extension, "ns1:FtpHostConfigurationsExtension"))
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
		if (a->FtpDestination)
			soap_pop_block(soap, soap_blist_FtpDestination);
		if (a->__sizeFtpDestination)
			a->FtpDestination = (struct ns1__FtpDestinationConfiguration *)soap_save_block(soap, soap_blist_FtpDestination, NULL, 1);
		else
		{	a->FtpDestination = NULL;
			if (soap_blist_FtpDestination)
				soap_end_block(soap, soap_blist_FtpDestination);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__FtpHostConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__FtpHostConfigurations, 0, sizeof(struct ns1__FtpHostConfigurations), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeFtpDestination < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__FtpHostConfigurations(struct soap *soap, const struct ns1__FtpHostConfigurations *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__FtpHostConfigurations);
	if (soap_out_ns1__FtpHostConfigurations(soap, tag?tag:"ns1:FtpHostConfigurations", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__FtpHostConfigurations * SOAP_FMAC4 soap_get_ns1__FtpHostConfigurations(struct soap *soap, struct ns1__FtpHostConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__FtpHostConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__PostBodyConfiguration(struct soap *soap, struct ns1__PostBodyConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default_string(soap, &a->formData);
	a->includeEvent = NULL;
	a->includeMedia = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__PostBodyConfiguration(struct soap *soap, const struct ns1__PostBodyConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__PostBodyConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__PostBodyConfiguration *a, const char *type)
{
	if (a->formData)
		soap_set_attr(soap, "formData", a->formData, 1);
	if (a->includeEvent)
		soap_set_attr(soap, "includeEvent", soap_xsd__boolean2s(soap, *a->includeEvent), 1);
	if (a->includeMedia)
		soap_set_attr(soap, "includeMedia", soap_xsd__boolean2s(soap, *a->includeMedia), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__PostBodyConfiguration), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__PostBodyConfiguration * SOAP_FMAC4 soap_in_ns1__PostBodyConfiguration(struct soap *soap, const char *tag, struct ns1__PostBodyConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__PostBodyConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__PostBodyConfiguration, sizeof(struct ns1__PostBodyConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__PostBodyConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "formData", 0), &a->formData, 0, -1))
		return NULL;
	{	const char *t = soap_attr_value(soap, "includeEvent", 0);
		if (t)
		{
			if (!(a->includeEvent = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->includeEvent))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "includeMedia", 0);
		if (t)
		{
			if (!(a->includeMedia = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->includeMedia))
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
	{	a = (struct ns1__PostBodyConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__PostBodyConfiguration, 0, sizeof(struct ns1__PostBodyConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__PostBodyConfiguration(struct soap *soap, const struct ns1__PostBodyConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__PostBodyConfiguration);
	if (soap_out_ns1__PostBodyConfiguration(soap, tag?tag:"ns1:PostBodyConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__PostBodyConfiguration * SOAP_FMAC4 soap_get_ns1__PostBodyConfiguration(struct soap *soap, struct ns1__PostBodyConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__PostBodyConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__PostContentConfiguration(struct soap *soap, struct ns1__PostContentConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->MediaReference = NULL;
	a->PostBody = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__PostContentConfiguration(struct soap *soap, const struct ns1__PostContentConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__MediaSource(soap, &a->MediaReference);
	soap_serialize_PointerTons1__PostBodyConfiguration(soap, &a->PostBody);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__PostContentConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__PostContentConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__PostContentConfiguration), type))
		return soap->error;
	if (soap_out_PointerTons1__MediaSource(soap, "ns1:MediaReference", -1, &a->MediaReference, ""))
		return soap->error;
	if (a->PostBody)
	{	if (soap_out_PointerTons1__PostBodyConfiguration(soap, "ns1:PostBody", -1, &a->PostBody, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:PostBody"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__PostContentConfiguration * SOAP_FMAC4 soap_in_ns1__PostContentConfiguration(struct soap *soap, const char *tag, struct ns1__PostContentConfiguration *a, const char *type)
{
	size_t soap_flag_MediaReference = 1;
	size_t soap_flag_PostBody = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__PostContentConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__PostContentConfiguration, sizeof(struct ns1__PostContentConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__PostContentConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MediaReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__MediaSource(soap, "ns1:MediaReference", &a->MediaReference, "ns1:MediaSource"))
				{	soap_flag_MediaReference--;
					continue;
				}
			if (soap_flag_PostBody && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__PostBodyConfiguration(soap, "ns1:PostBody", &a->PostBody, "ns1:PostBodyConfiguration"))
				{	soap_flag_PostBody--;
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
	{	a = (struct ns1__PostContentConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__PostContentConfiguration, 0, sizeof(struct ns1__PostContentConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PostBody > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__PostContentConfiguration(struct soap *soap, const struct ns1__PostContentConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__PostContentConfiguration);
	if (soap_out_ns1__PostContentConfiguration(soap, tag?tag:"ns1:PostContentConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__PostContentConfiguration * SOAP_FMAC4 soap_get_ns1__PostContentConfiguration(struct soap *soap, struct ns1__PostContentConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__PostContentConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, struct ns1__HttpAuthenticationConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, const struct ns1__HttpAuthenticationConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__HttpAuthenticationConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpAuthenticationConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpAuthenticationConfigurationExtension * SOAP_FMAC4 soap_in_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, const char *tag, struct ns1__HttpAuthenticationConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpAuthenticationConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpAuthenticationConfigurationExtension, sizeof(struct ns1__HttpAuthenticationConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpAuthenticationConfigurationExtension(soap, a);
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
	{	a = (struct ns1__HttpAuthenticationConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpAuthenticationConfigurationExtension, 0, sizeof(struct ns1__HttpAuthenticationConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, const struct ns1__HttpAuthenticationConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpAuthenticationConfigurationExtension);
	if (soap_out_ns1__HttpAuthenticationConfigurationExtension(soap, tag?tag:"ns1:HttpAuthenticationConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpAuthenticationConfigurationExtension * SOAP_FMAC4 soap_get_ns1__HttpAuthenticationConfigurationExtension(struct soap *soap, struct ns1__HttpAuthenticationConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpAuthenticationConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpDestinationConfigurationExtension(struct soap *soap, struct ns1__HttpDestinationConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpDestinationConfigurationExtension(struct soap *soap, const struct ns1__HttpDestinationConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpDestinationConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__HttpDestinationConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpDestinationConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpDestinationConfigurationExtension * SOAP_FMAC4 soap_in_ns1__HttpDestinationConfigurationExtension(struct soap *soap, const char *tag, struct ns1__HttpDestinationConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpDestinationConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpDestinationConfigurationExtension, sizeof(struct ns1__HttpDestinationConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpDestinationConfigurationExtension(soap, a);
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
	{	a = (struct ns1__HttpDestinationConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpDestinationConfigurationExtension, 0, sizeof(struct ns1__HttpDestinationConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpDestinationConfigurationExtension(struct soap *soap, const struct ns1__HttpDestinationConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpDestinationConfigurationExtension);
	if (soap_out_ns1__HttpDestinationConfigurationExtension(soap, tag?tag:"ns1:HttpDestinationConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpDestinationConfigurationExtension * SOAP_FMAC4 soap_get_ns1__HttpDestinationConfigurationExtension(struct soap *soap, struct ns1__HttpDestinationConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpDestinationConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpAuthenticationConfiguration(struct soap *soap, struct ns1__HttpAuthenticationConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->User = NULL;
	a->Extension = NULL;
	a->method = (enum ns1__HttpAuthenticationMethodType)0;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpAuthenticationConfiguration(struct soap *soap, const struct ns1__HttpAuthenticationConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__UserCredentials(soap, &a->User);
	soap_serialize_PointerTons1__HttpAuthenticationConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpAuthenticationConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__HttpAuthenticationConfiguration *a, const char *type)
{
	soap_set_attr(soap, "method", soap_ns1__HttpAuthenticationMethodType2s(soap, a->method), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpAuthenticationConfiguration), type))
		return soap->error;
	if (soap_out_PointerTons1__UserCredentials(soap, "ns1:User", -1, &a->User, ""))
		return soap->error;
	if (soap_out_PointerTons1__HttpAuthenticationConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpAuthenticationConfiguration * SOAP_FMAC4 soap_in_ns1__HttpAuthenticationConfiguration(struct soap *soap, const char *tag, struct ns1__HttpAuthenticationConfiguration *a, const char *type)
{
	size_t soap_flag_User = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpAuthenticationConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpAuthenticationConfiguration, sizeof(struct ns1__HttpAuthenticationConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpAuthenticationConfiguration(soap, a);
	if (soap_s2ns1__HttpAuthenticationMethodType(soap, soap_attr_value(soap, "method", 0), &a->method))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_User && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__UserCredentials(soap, "ns1:User", &a->User, "ns1:UserCredentials"))
				{	soap_flag_User--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HttpAuthenticationConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:HttpAuthenticationConfigurationExtension"))
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
	{	a = (struct ns1__HttpAuthenticationConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpAuthenticationConfiguration, 0, sizeof(struct ns1__HttpAuthenticationConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpAuthenticationConfiguration(struct soap *soap, const struct ns1__HttpAuthenticationConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpAuthenticationConfiguration);
	if (soap_out_ns1__HttpAuthenticationConfiguration(soap, tag?tag:"ns1:HttpAuthenticationConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpAuthenticationConfiguration * SOAP_FMAC4 soap_get_ns1__HttpAuthenticationConfiguration(struct soap *soap, struct ns1__HttpAuthenticationConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpAuthenticationConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpHostAddress(struct soap *soap, struct ns1__HttpHostAddress *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Value);
	a->__size = 0;
	a->__any = NULL;
	soap_default_ns1__AddressFormatType(soap, &a->formatType);
	soap_default_xsd__integer(soap, &a->portNo);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpHostAddress(struct soap *soap, const struct ns1__HttpHostAddress *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Value);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpHostAddress(struct soap *soap, const char *tag, int id, const struct ns1__HttpHostAddress *a, const char *type)
{
	soap_set_attr(soap, "formatType", soap_ns1__AddressFormatType2s(soap, a->formatType), 1);
	if (a->portNo)
		soap_set_attr(soap, "portNo", a->portNo, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpHostAddress), type))
		return soap->error;
	if (a->Value)
	{	if (soap_out_string(soap, "ns1:Value", -1, &a->Value, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Value"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpHostAddress * SOAP_FMAC4 soap_in_ns1__HttpHostAddress(struct soap *soap, const char *tag, struct ns1__HttpHostAddress *a, const char *type)
{
	size_t soap_flag_Value = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpHostAddress *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpHostAddress, sizeof(struct ns1__HttpHostAddress), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpHostAddress(soap, a);
	if (soap_s2ns1__AddressFormatType(soap, soap_attr_value(soap, "formatType", 1), &a->formatType))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "portNo", 0), &a->portNo, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Value && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:Value", &a->Value, "xsd:string"))
				{	soap_flag_Value--;
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
	{	a = (struct ns1__HttpHostAddress *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpHostAddress, 0, sizeof(struct ns1__HttpHostAddress), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Value > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpHostAddress(struct soap *soap, const struct ns1__HttpHostAddress *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpHostAddress);
	if (soap_out_ns1__HttpHostAddress(soap, tag?tag:"ns1:HttpHostAddress", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpHostAddress * SOAP_FMAC4 soap_get_ns1__HttpHostAddress(struct soap *soap, struct ns1__HttpHostAddress *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpHostAddress(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpHostConfigurationsExtension(struct soap *soap, struct ns1__HttpHostConfigurationsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpHostConfigurationsExtension(struct soap *soap, const struct ns1__HttpHostConfigurationsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpHostConfigurationsExtension(struct soap *soap, const char *tag, int id, const struct ns1__HttpHostConfigurationsExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpHostConfigurationsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpHostConfigurationsExtension * SOAP_FMAC4 soap_in_ns1__HttpHostConfigurationsExtension(struct soap *soap, const char *tag, struct ns1__HttpHostConfigurationsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpHostConfigurationsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpHostConfigurationsExtension, sizeof(struct ns1__HttpHostConfigurationsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpHostConfigurationsExtension(soap, a);
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
	{	a = (struct ns1__HttpHostConfigurationsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpHostConfigurationsExtension, 0, sizeof(struct ns1__HttpHostConfigurationsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpHostConfigurationsExtension(struct soap *soap, const struct ns1__HttpHostConfigurationsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpHostConfigurationsExtension);
	if (soap_out_ns1__HttpHostConfigurationsExtension(soap, tag?tag:"ns1:HttpHostConfigurationsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpHostConfigurationsExtension * SOAP_FMAC4 soap_get_ns1__HttpHostConfigurationsExtension(struct soap *soap, struct ns1__HttpHostConfigurationsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpHostConfigurationsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpDestinationConfiguration(struct soap *soap, struct ns1__HttpDestinationConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->HostAddress = NULL;
	a->HttpAuthentication = NULL;
	a->Extension = NULL;
	a->uri = (char*)"/";
	a->protocol = (enum ns1__HttpProtocolType)0;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpDestinationConfiguration(struct soap *soap, const struct ns1__HttpDestinationConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__HttpHostAddress(soap, &a->HostAddress);
	soap_serialize_PointerTons1__HttpAuthenticationConfiguration(soap, &a->HttpAuthentication);
	soap_serialize_PointerTons1__HttpDestinationConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpDestinationConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__HttpDestinationConfiguration *a, const char *type)
{
	if (a->uri)
		soap_set_attr(soap, "uri", a->uri, 1);
	soap_set_attr(soap, "protocol", soap_ns1__HttpProtocolType2s(soap, a->protocol), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpDestinationConfiguration), type))
		return soap->error;
	if (a->HostAddress)
	{	if (soap_out_PointerTons1__HttpHostAddress(soap, "ns1:HostAddress", -1, &a->HostAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:HostAddress"))
		return soap->error;
	if (soap_out_PointerTons1__HttpAuthenticationConfiguration(soap, "ns1:HttpAuthentication", -1, &a->HttpAuthentication, ""))
		return soap->error;
	if (soap_out_PointerTons1__HttpDestinationConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpDestinationConfiguration * SOAP_FMAC4 soap_in_ns1__HttpDestinationConfiguration(struct soap *soap, const char *tag, struct ns1__HttpDestinationConfiguration *a, const char *type)
{
	size_t soap_flag_HostAddress = 1;
	size_t soap_flag_HttpAuthentication = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpDestinationConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpDestinationConfiguration, sizeof(struct ns1__HttpDestinationConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpDestinationConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "uri", 0), &a->uri, 0, -1))
		return NULL;
	if (soap_s2ns1__HttpProtocolType(soap, soap_attr_value(soap, "protocol", 0), &a->protocol))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HostAddress && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HttpHostAddress(soap, "ns1:HostAddress", &a->HostAddress, "ns1:HttpHostAddress"))
				{	soap_flag_HostAddress--;
					continue;
				}
			if (soap_flag_HttpAuthentication && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HttpAuthenticationConfiguration(soap, "ns1:HttpAuthentication", &a->HttpAuthentication, "ns1:HttpAuthenticationConfiguration"))
				{	soap_flag_HttpAuthentication--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HttpDestinationConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:HttpDestinationConfigurationExtension"))
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
	{	a = (struct ns1__HttpDestinationConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpDestinationConfiguration, 0, sizeof(struct ns1__HttpDestinationConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HostAddress > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpDestinationConfiguration(struct soap *soap, const struct ns1__HttpDestinationConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpDestinationConfiguration);
	if (soap_out_ns1__HttpDestinationConfiguration(soap, tag?tag:"ns1:HttpDestinationConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpDestinationConfiguration * SOAP_FMAC4 soap_get_ns1__HttpDestinationConfiguration(struct soap *soap, struct ns1__HttpDestinationConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpDestinationConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HttpHostConfigurations(struct soap *soap, struct ns1__HttpHostConfigurations *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeHttpDestination = 0;
	a->HttpDestination = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HttpHostConfigurations(struct soap *soap, const struct ns1__HttpHostConfigurations *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->HttpDestination)
	{	int i;
		for (i = 0; i < a->__sizeHttpDestination; i++)
		{
			soap_embedded(soap, a->HttpDestination + i, SOAP_TYPE_ns1__HttpDestinationConfiguration);
			soap_serialize_ns1__HttpDestinationConfiguration(soap, a->HttpDestination + i);
		}
	}
	soap_serialize_PointerTons1__HttpHostConfigurationsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HttpHostConfigurations(struct soap *soap, const char *tag, int id, const struct ns1__HttpHostConfigurations *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HttpHostConfigurations), type))
		return soap->error;
	if (a->HttpDestination)
	{	int i;
		for (i = 0; i < a->__sizeHttpDestination; i++)
			if (soap_out_ns1__HttpDestinationConfiguration(soap, "ns1:HttpDestination", -1, a->HttpDestination + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__HttpHostConfigurationsExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HttpHostConfigurations * SOAP_FMAC4 soap_in_ns1__HttpHostConfigurations(struct soap *soap, const char *tag, struct ns1__HttpHostConfigurations *a, const char *type)
{
	struct soap_blist *soap_blist_HttpDestination = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HttpHostConfigurations *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HttpHostConfigurations, sizeof(struct ns1__HttpHostConfigurations), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HttpHostConfigurations(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:HttpDestination", 1, NULL))
			{	if (a->HttpDestination == NULL)
				{	if (soap_blist_HttpDestination == NULL)
						soap_blist_HttpDestination = soap_new_block(soap);
					a->HttpDestination = (struct ns1__HttpDestinationConfiguration *)soap_push_block(soap, soap_blist_HttpDestination, sizeof(struct ns1__HttpDestinationConfiguration));
					if (a->HttpDestination == NULL)
						return NULL;
					soap_default_ns1__HttpDestinationConfiguration(soap, a->HttpDestination);
				}
				soap_revert(soap);
				if (soap_in_ns1__HttpDestinationConfiguration(soap, "ns1:HttpDestination", a->HttpDestination, "ns1:HttpDestinationConfiguration"))
				{	a->__sizeHttpDestination++;
					a->HttpDestination = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HttpHostConfigurationsExtension(soap, "ns1:Extension", &a->Extension, "ns1:HttpHostConfigurationsExtension"))
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
		if (a->HttpDestination)
			soap_pop_block(soap, soap_blist_HttpDestination);
		if (a->__sizeHttpDestination)
			a->HttpDestination = (struct ns1__HttpDestinationConfiguration *)soap_save_block(soap, soap_blist_HttpDestination, NULL, 1);
		else
		{	a->HttpDestination = NULL;
			if (soap_blist_HttpDestination)
				soap_end_block(soap, soap_blist_HttpDestination);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__HttpHostConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HttpHostConfigurations, 0, sizeof(struct ns1__HttpHostConfigurations), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeHttpDestination < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HttpHostConfigurations(struct soap *soap, const struct ns1__HttpHostConfigurations *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HttpHostConfigurations);
	if (soap_out_ns1__HttpHostConfigurations(soap, tag?tag:"ns1:HttpHostConfigurations", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HttpHostConfigurations * SOAP_FMAC4 soap_get_ns1__HttpHostConfigurations(struct soap *soap, struct ns1__HttpHostConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HttpHostConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__MediaSource(struct soap *soap, struct ns1__MediaSource *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ProfileToken);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__MediaSource(struct soap *soap, const struct ns1__MediaSource *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ProfileToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__MediaSource(struct soap *soap, const char *tag, int id, const struct ns1__MediaSource *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__MediaSource), type))
		return soap->error;
	if (a->ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "ns1:ProfileToken", -1, &a->ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:ProfileToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__MediaSource * SOAP_FMAC4 soap_in_ns1__MediaSource(struct soap *soap, const char *tag, struct ns1__MediaSource *a, const char *type)
{
	size_t soap_flag_ProfileToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__MediaSource *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__MediaSource, sizeof(struct ns1__MediaSource), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__MediaSource(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "ns1:ProfileToken", &a->ProfileToken, "tt:ReferenceToken"))
				{	soap_flag_ProfileToken--;
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
	{	a = (struct ns1__MediaSource *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__MediaSource, 0, sizeof(struct ns1__MediaSource), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__MediaSource(struct soap *soap, const struct ns1__MediaSource *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__MediaSource);
	if (soap_out_ns1__MediaSource(soap, tag?tag:"ns1:MediaSource", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__MediaSource * SOAP_FMAC4 soap_get_ns1__MediaSource(struct soap *soap, struct ns1__MediaSource *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__MediaSource(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailBodyTextConfiguration(struct soap *soap, struct ns1__EMailBodyTextConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->includeEvent = NULL;
	soap_default_string(soap, &a->type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailBodyTextConfiguration(struct soap *soap, const struct ns1__EMailBodyTextConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailBodyTextConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__EMailBodyTextConfiguration *a, const char *type)
{
	if (a->includeEvent)
		soap_set_attr(soap, "includeEvent", soap_xsd__boolean2s(soap, *a->includeEvent), 1);
	if (a->type)
		soap_set_attr(soap, "type", a->type, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailBodyTextConfiguration), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailBodyTextConfiguration * SOAP_FMAC4 soap_in_ns1__EMailBodyTextConfiguration(struct soap *soap, const char *tag, struct ns1__EMailBodyTextConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailBodyTextConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailBodyTextConfiguration, sizeof(struct ns1__EMailBodyTextConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailBodyTextConfiguration(soap, a);
	{	const char *t = soap_attr_value(soap, "includeEvent", 0);
		if (t)
		{
			if (!(a->includeEvent = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->includeEvent))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "type", 0), &a->type, 0, -1))
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
	{	a = (struct ns1__EMailBodyTextConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailBodyTextConfiguration, 0, sizeof(struct ns1__EMailBodyTextConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailBodyTextConfiguration(struct soap *soap, const struct ns1__EMailBodyTextConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailBodyTextConfiguration);
	if (soap_out_ns1__EMailBodyTextConfiguration(soap, tag?tag:"ns1:EMailBodyTextConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailBodyTextConfiguration * SOAP_FMAC4 soap_get_ns1__EMailBodyTextConfiguration(struct soap *soap, struct ns1__EMailBodyTextConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailBodyTextConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, struct ns1__EMailAttachmentConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, const struct ns1__EMailAttachmentConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__EMailAttachmentConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailAttachmentConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailAttachmentConfigurationExtension * SOAP_FMAC4 soap_in_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, const char *tag, struct ns1__EMailAttachmentConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailAttachmentConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailAttachmentConfigurationExtension, sizeof(struct ns1__EMailAttachmentConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailAttachmentConfigurationExtension(soap, a);
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
	{	a = (struct ns1__EMailAttachmentConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailAttachmentConfigurationExtension, 0, sizeof(struct ns1__EMailAttachmentConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, const struct ns1__EMailAttachmentConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailAttachmentConfigurationExtension);
	if (soap_out_ns1__EMailAttachmentConfigurationExtension(soap, tag?tag:"ns1:EMailAttachmentConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailAttachmentConfigurationExtension * SOAP_FMAC4 soap_get_ns1__EMailAttachmentConfigurationExtension(struct soap *soap, struct ns1__EMailAttachmentConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailAttachmentConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailAttachmentConfiguration(struct soap *soap, struct ns1__EMailAttachmentConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->FileName);
	a->doSuffix = NULL;
	a->Extension = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailAttachmentConfiguration(struct soap *soap, const struct ns1__EMailAttachmentConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->FileName);
	soap_serialize_PointerTons1__FileSuffixType(soap, &a->doSuffix);
	soap_serialize_PointerTons1__EMailAttachmentConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailAttachmentConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__EMailAttachmentConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailAttachmentConfiguration), type))
		return soap->error;
	if (soap_out_string(soap, "ns1:FileName", -1, &a->FileName, ""))
		return soap->error;
	if (soap_out_PointerTons1__FileSuffixType(soap, "ns1:doSuffix", -1, &a->doSuffix, ""))
		return soap->error;
	if (soap_out_PointerTons1__EMailAttachmentConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailAttachmentConfiguration * SOAP_FMAC4 soap_in_ns1__EMailAttachmentConfiguration(struct soap *soap, const char *tag, struct ns1__EMailAttachmentConfiguration *a, const char *type)
{
	size_t soap_flag_FileName = 1;
	size_t soap_flag_doSuffix = 1;
	size_t soap_flag_Extension = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailAttachmentConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailAttachmentConfiguration, sizeof(struct ns1__EMailAttachmentConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailAttachmentConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FileName && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:FileName", &a->FileName, "xsd:string"))
				{	soap_flag_FileName--;
					continue;
				}
			if (soap_flag_doSuffix && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__FileSuffixType(soap, "ns1:doSuffix", &a->doSuffix, "ns1:FileSuffixType"))
				{	soap_flag_doSuffix--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__EMailAttachmentConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:EMailAttachmentConfigurationExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct ns1__EMailAttachmentConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailAttachmentConfiguration, 0, sizeof(struct ns1__EMailAttachmentConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailAttachmentConfiguration(struct soap *soap, const struct ns1__EMailAttachmentConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailAttachmentConfiguration);
	if (soap_out_ns1__EMailAttachmentConfiguration(soap, tag?tag:"ns1:EMailAttachmentConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailAttachmentConfiguration * SOAP_FMAC4 soap_get_ns1__EMailAttachmentConfiguration(struct soap *soap, struct ns1__EMailAttachmentConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailAttachmentConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailReceiverConfigurationExtension(struct soap *soap, struct ns1__EMailReceiverConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailReceiverConfigurationExtension(struct soap *soap, const struct ns1__EMailReceiverConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailReceiverConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__EMailReceiverConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailReceiverConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailReceiverConfigurationExtension * SOAP_FMAC4 soap_in_ns1__EMailReceiverConfigurationExtension(struct soap *soap, const char *tag, struct ns1__EMailReceiverConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailReceiverConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailReceiverConfigurationExtension, sizeof(struct ns1__EMailReceiverConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailReceiverConfigurationExtension(soap, a);
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
	{	a = (struct ns1__EMailReceiverConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailReceiverConfigurationExtension, 0, sizeof(struct ns1__EMailReceiverConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailReceiverConfigurationExtension(struct soap *soap, const struct ns1__EMailReceiverConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailReceiverConfigurationExtension);
	if (soap_out_ns1__EMailReceiverConfigurationExtension(soap, tag?tag:"ns1:EMailReceiverConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailReceiverConfigurationExtension * SOAP_FMAC4 soap_get_ns1__EMailReceiverConfigurationExtension(struct soap *soap, struct ns1__EMailReceiverConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailReceiverConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailReceiverConfiguration(struct soap *soap, struct ns1__EMailReceiverConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeTO = 0;
	a->TO = NULL;
	a->__sizeCC = 0;
	a->CC = NULL;
	a->Extension = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailReceiverConfiguration(struct soap *soap, const struct ns1__EMailReceiverConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->TO)
	{	int i;
		for (i = 0; i < a->__sizeTO; i++)
		{
			soap_serialize_string(soap, a->TO + i);
		}
	}
	if (a->CC)
	{	int i;
		for (i = 0; i < a->__sizeCC; i++)
		{
			soap_serialize_string(soap, a->CC + i);
		}
	}
	soap_serialize_PointerTons1__EMailReceiverConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailReceiverConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__EMailReceiverConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailReceiverConfiguration), type))
		return soap->error;
	if (a->TO)
	{	int i;
		for (i = 0; i < a->__sizeTO; i++)
			if (soap_out_string(soap, "ns1:TO", -1, a->TO + i, ""))
				return soap->error;
	}
	if (a->CC)
	{	int i;
		for (i = 0; i < a->__sizeCC; i++)
			if (soap_out_string(soap, "ns1:CC", -1, a->CC + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__EMailReceiverConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailReceiverConfiguration * SOAP_FMAC4 soap_in_ns1__EMailReceiverConfiguration(struct soap *soap, const char *tag, struct ns1__EMailReceiverConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist_TO = NULL;
	struct soap_blist *soap_blist_CC = NULL;
	size_t soap_flag_Extension = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailReceiverConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailReceiverConfiguration, sizeof(struct ns1__EMailReceiverConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailReceiverConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:TO", 1, NULL))
			{	if (a->TO == NULL)
				{	if (soap_blist_TO == NULL)
						soap_blist_TO = soap_new_block(soap);
					a->TO = (char **)soap_push_block(soap, soap_blist_TO, sizeof(char *));
					if (a->TO == NULL)
						return NULL;
					*a->TO = NULL;
				}
				soap_revert(soap);
				if (soap_in_string(soap, "ns1:TO", a->TO, "xsd:string"))
				{	a->__sizeTO++;
					a->TO = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:CC", 1, NULL))
			{	if (a->CC == NULL)
				{	if (soap_blist_CC == NULL)
						soap_blist_CC = soap_new_block(soap);
					a->CC = (char **)soap_push_block(soap, soap_blist_CC, sizeof(char *));
					if (a->CC == NULL)
						return NULL;
					*a->CC = NULL;
				}
				soap_revert(soap);
				if (soap_in_string(soap, "ns1:CC", a->CC, "xsd:string"))
				{	a->__sizeCC++;
					a->CC = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__EMailReceiverConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:EMailReceiverConfigurationExtension"))
				{	soap_flag_Extension--;
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
		if (a->TO)
			soap_pop_block(soap, soap_blist_TO);
		if (a->__sizeTO)
			a->TO = (char **)soap_save_block(soap, soap_blist_TO, NULL, 1);
		else
		{	a->TO = NULL;
			if (soap_blist_TO)
				soap_end_block(soap, soap_blist_TO);
		}
		if (a->CC)
			soap_pop_block(soap, soap_blist_CC);
		if (a->__sizeCC)
			a->CC = (char **)soap_save_block(soap, soap_blist_CC, NULL, 1);
		else
		{	a->CC = NULL;
			if (soap_blist_CC)
				soap_end_block(soap, soap_blist_CC);
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
	{	a = (struct ns1__EMailReceiverConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailReceiverConfiguration, 0, sizeof(struct ns1__EMailReceiverConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeTO < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailReceiverConfiguration(struct soap *soap, const struct ns1__EMailReceiverConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailReceiverConfiguration);
	if (soap_out_ns1__EMailReceiverConfiguration(soap, tag?tag:"ns1:EMailReceiverConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailReceiverConfiguration * SOAP_FMAC4 soap_get_ns1__EMailReceiverConfiguration(struct soap *soap, struct ns1__EMailReceiverConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailReceiverConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__UserCredentialsExtension(struct soap *soap, struct ns1__UserCredentialsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__UserCredentialsExtension(struct soap *soap, const struct ns1__UserCredentialsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__UserCredentialsExtension(struct soap *soap, const char *tag, int id, const struct ns1__UserCredentialsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__UserCredentialsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__UserCredentialsExtension * SOAP_FMAC4 soap_in_ns1__UserCredentialsExtension(struct soap *soap, const char *tag, struct ns1__UserCredentialsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__UserCredentialsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__UserCredentialsExtension, sizeof(struct ns1__UserCredentialsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__UserCredentialsExtension(soap, a);
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
	{	a = (struct ns1__UserCredentialsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__UserCredentialsExtension, 0, sizeof(struct ns1__UserCredentialsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__UserCredentialsExtension(struct soap *soap, const struct ns1__UserCredentialsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__UserCredentialsExtension);
	if (soap_out_ns1__UserCredentialsExtension(soap, tag?tag:"ns1:UserCredentialsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__UserCredentialsExtension * SOAP_FMAC4 soap_get_ns1__UserCredentialsExtension(struct soap *soap, struct ns1__UserCredentialsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__UserCredentialsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__UserCredentials(struct soap *soap, struct ns1__UserCredentials *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->username);
	a->password = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__UserCredentials(struct soap *soap, const struct ns1__UserCredentials *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->username);
	soap_serialize_PointerToxsd__base64Binary(soap, &a->password);
	soap_serialize_PointerTons1__UserCredentialsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__UserCredentials(struct soap *soap, const char *tag, int id, const struct ns1__UserCredentials *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__UserCredentials), type))
		return soap->error;
	if (a->username)
	{	if (soap_out_string(soap, "ns1:username", -1, &a->username, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:username"))
		return soap->error;
	if (soap_out_PointerToxsd__base64Binary(soap, "ns1:password", -1, &a->password, ""))
		return soap->error;
	if (soap_out_PointerTons1__UserCredentialsExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__UserCredentials * SOAP_FMAC4 soap_in_ns1__UserCredentials(struct soap *soap, const char *tag, struct ns1__UserCredentials *a, const char *type)
{
	size_t soap_flag_username = 1;
	size_t soap_flag_password = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__UserCredentials *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__UserCredentials, sizeof(struct ns1__UserCredentials), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__UserCredentials(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_username && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:username", &a->username, "xsd:string"))
				{	soap_flag_username--;
					continue;
				}
			if (soap_flag_password && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__base64Binary(soap, "ns1:password", &a->password, "xsd:base64Binary"))
				{	soap_flag_password--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__UserCredentialsExtension(soap, "ns1:Extension", &a->Extension, "ns1:UserCredentialsExtension"))
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
	{	a = (struct ns1__UserCredentials *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__UserCredentials, 0, sizeof(struct ns1__UserCredentials), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_username > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__UserCredentials(struct soap *soap, const struct ns1__UserCredentials *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__UserCredentials);
	if (soap_out_ns1__UserCredentials(soap, tag?tag:"ns1:UserCredentials", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__UserCredentials * SOAP_FMAC4 soap_get_ns1__UserCredentials(struct soap *soap, struct ns1__UserCredentials *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__UserCredentials(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__HostAddress(struct soap *soap, struct ns1__HostAddress *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Value);
	a->__size = 0;
	a->__any = NULL;
	soap_default_ns1__AddressFormatType(soap, &a->formatType);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__HostAddress(struct soap *soap, const struct ns1__HostAddress *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Value);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__HostAddress(struct soap *soap, const char *tag, int id, const struct ns1__HostAddress *a, const char *type)
{
	soap_set_attr(soap, "formatType", soap_ns1__AddressFormatType2s(soap, a->formatType), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__HostAddress), type))
		return soap->error;
	if (a->Value)
	{	if (soap_out_string(soap, "ns1:Value", -1, &a->Value, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Value"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__HostAddress * SOAP_FMAC4 soap_in_ns1__HostAddress(struct soap *soap, const char *tag, struct ns1__HostAddress *a, const char *type)
{
	size_t soap_flag_Value = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__HostAddress *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__HostAddress, sizeof(struct ns1__HostAddress), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__HostAddress(soap, a);
	if (soap_s2ns1__AddressFormatType(soap, soap_attr_value(soap, "formatType", 1), &a->formatType))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Value && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "ns1:Value", &a->Value, "xsd:string"))
				{	soap_flag_Value--;
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
	{	a = (struct ns1__HostAddress *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__HostAddress, 0, sizeof(struct ns1__HostAddress), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Value > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__HostAddress(struct soap *soap, const struct ns1__HostAddress *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__HostAddress);
	if (soap_out_ns1__HostAddress(soap, tag?tag:"ns1:HostAddress", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__HostAddress * SOAP_FMAC4 soap_get_ns1__HostAddress(struct soap *soap, struct ns1__HostAddress *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__HostAddress(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__AuthenticationConfig(struct soap *soap, struct ns1__AuthenticationConfig *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->User = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_ns1__EMailAuthenticationMode(soap, &a->mode);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__AuthenticationConfig(struct soap *soap, const struct ns1__AuthenticationConfig *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__UserCredentials(soap, &a->User);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__AuthenticationConfig(struct soap *soap, const char *tag, int id, const struct ns1__AuthenticationConfig *a, const char *type)
{
	soap_set_attr(soap, "mode", soap_ns1__EMailAuthenticationMode2s(soap, a->mode), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__AuthenticationConfig), type))
		return soap->error;
	if (a->User)
	{	if (soap_out_PointerTons1__UserCredentials(soap, "ns1:User", -1, &a->User, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:User"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__AuthenticationConfig * SOAP_FMAC4 soap_in_ns1__AuthenticationConfig(struct soap *soap, const char *tag, struct ns1__AuthenticationConfig *a, const char *type)
{
	size_t soap_flag_User = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__AuthenticationConfig *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__AuthenticationConfig, sizeof(struct ns1__AuthenticationConfig), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__AuthenticationConfig(soap, a);
	if (soap_s2ns1__EMailAuthenticationMode(soap, soap_attr_value(soap, "mode", 1), &a->mode))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_User && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__UserCredentials(soap, "ns1:User", &a->User, "ns1:UserCredentials"))
				{	soap_flag_User--;
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
	{	a = (struct ns1__AuthenticationConfig *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__AuthenticationConfig, 0, sizeof(struct ns1__AuthenticationConfig), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_User > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__AuthenticationConfig(struct soap *soap, const struct ns1__AuthenticationConfig *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__AuthenticationConfig);
	if (soap_out_ns1__AuthenticationConfig(soap, tag?tag:"ns1:AuthenticationConfig", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__AuthenticationConfig * SOAP_FMAC4 soap_get_ns1__AuthenticationConfig(struct soap *soap, struct ns1__AuthenticationConfig *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__AuthenticationConfig(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__POPConfig(struct soap *soap, struct ns1__POPConfig *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->HostAddress = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__POPConfig(struct soap *soap, const struct ns1__POPConfig *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__HostAddress(soap, &a->HostAddress);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__POPConfig(struct soap *soap, const char *tag, int id, const struct ns1__POPConfig *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__POPConfig), type))
		return soap->error;
	if (a->HostAddress)
	{	if (soap_out_PointerTons1__HostAddress(soap, "ns1:HostAddress", -1, &a->HostAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:HostAddress"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__POPConfig * SOAP_FMAC4 soap_in_ns1__POPConfig(struct soap *soap, const char *tag, struct ns1__POPConfig *a, const char *type)
{
	size_t soap_flag_HostAddress = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__POPConfig *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__POPConfig, sizeof(struct ns1__POPConfig), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__POPConfig(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HostAddress && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HostAddress(soap, "ns1:HostAddress", &a->HostAddress, "ns1:HostAddress"))
				{	soap_flag_HostAddress--;
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
	{	a = (struct ns1__POPConfig *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__POPConfig, 0, sizeof(struct ns1__POPConfig), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HostAddress > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__POPConfig(struct soap *soap, const struct ns1__POPConfig *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__POPConfig);
	if (soap_out_ns1__POPConfig(soap, tag?tag:"ns1:POPConfig", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__POPConfig * SOAP_FMAC4 soap_get_ns1__POPConfig(struct soap *soap, struct ns1__POPConfig *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__POPConfig(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SMTPConfig(struct soap *soap, struct ns1__SMTPConfig *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->HostAddress = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_xsd__positiveInteger(soap, &a->portNo);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SMTPConfig(struct soap *soap, const struct ns1__SMTPConfig *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__HostAddress(soap, &a->HostAddress);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SMTPConfig(struct soap *soap, const char *tag, int id, const struct ns1__SMTPConfig *a, const char *type)
{
	if (a->portNo)
		soap_set_attr(soap, "portNo", a->portNo, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SMTPConfig), type))
		return soap->error;
	if (a->HostAddress)
	{	if (soap_out_PointerTons1__HostAddress(soap, "ns1:HostAddress", -1, &a->HostAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:HostAddress"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SMTPConfig * SOAP_FMAC4 soap_in_ns1__SMTPConfig(struct soap *soap, const char *tag, struct ns1__SMTPConfig *a, const char *type)
{
	size_t soap_flag_HostAddress = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SMTPConfig *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SMTPConfig, sizeof(struct ns1__SMTPConfig), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SMTPConfig(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "portNo", 0), &a->portNo, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HostAddress && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__HostAddress(soap, "ns1:HostAddress", &a->HostAddress, "ns1:HostAddress"))
				{	soap_flag_HostAddress--;
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
	{	a = (struct ns1__SMTPConfig *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SMTPConfig, 0, sizeof(struct ns1__SMTPConfig), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HostAddress > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SMTPConfig(struct soap *soap, const struct ns1__SMTPConfig *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SMTPConfig);
	if (soap_out_ns1__SMTPConfig(soap, tag?tag:"ns1:SMTPConfig", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SMTPConfig * SOAP_FMAC4 soap_get_ns1__SMTPConfig(struct soap *soap, struct ns1__SMTPConfig *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SMTPConfig(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__EMailServerConfiguration(struct soap *soap, struct ns1__EMailServerConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SMTPConfig = NULL;
	a->POPConfig = NULL;
	a->AuthenticationConfig = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__EMailServerConfiguration(struct soap *soap, const struct ns1__EMailServerConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__SMTPConfig(soap, &a->SMTPConfig);
	soap_serialize_PointerTons1__POPConfig(soap, &a->POPConfig);
	soap_serialize_PointerTons1__AuthenticationConfig(soap, &a->AuthenticationConfig);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__EMailServerConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__EMailServerConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__EMailServerConfiguration), type))
		return soap->error;
	if (a->SMTPConfig)
	{	if (soap_out_PointerTons1__SMTPConfig(soap, "ns1:SMTPConfig", -1, &a->SMTPConfig, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:SMTPConfig"))
		return soap->error;
	if (a->POPConfig)
	{	if (soap_out_PointerTons1__POPConfig(soap, "ns1:POPConfig", -1, &a->POPConfig, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:POPConfig"))
		return soap->error;
	if (a->AuthenticationConfig)
	{	if (soap_out_PointerTons1__AuthenticationConfig(soap, "ns1:AuthenticationConfig", -1, &a->AuthenticationConfig, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:AuthenticationConfig"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__EMailServerConfiguration * SOAP_FMAC4 soap_in_ns1__EMailServerConfiguration(struct soap *soap, const char *tag, struct ns1__EMailServerConfiguration *a, const char *type)
{
	size_t soap_flag_SMTPConfig = 1;
	size_t soap_flag_POPConfig = 1;
	size_t soap_flag_AuthenticationConfig = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__EMailServerConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__EMailServerConfiguration, sizeof(struct ns1__EMailServerConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__EMailServerConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SMTPConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__SMTPConfig(soap, "ns1:SMTPConfig", &a->SMTPConfig, "ns1:SMTPConfig"))
				{	soap_flag_SMTPConfig--;
					continue;
				}
			if (soap_flag_POPConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__POPConfig(soap, "ns1:POPConfig", &a->POPConfig, "ns1:POPConfig"))
				{	soap_flag_POPConfig--;
					continue;
				}
			if (soap_flag_AuthenticationConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__AuthenticationConfig(soap, "ns1:AuthenticationConfig", &a->AuthenticationConfig, "ns1:AuthenticationConfig"))
				{	soap_flag_AuthenticationConfig--;
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
	{	a = (struct ns1__EMailServerConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__EMailServerConfiguration, 0, sizeof(struct ns1__EMailServerConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SMTPConfig > 0 || soap_flag_POPConfig > 0 || soap_flag_AuthenticationConfig > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__EMailServerConfiguration(struct soap *soap, const struct ns1__EMailServerConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__EMailServerConfiguration);
	if (soap_out_ns1__EMailServerConfiguration(soap, tag?tag:"ns1:EMailServerConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__EMailServerConfiguration * SOAP_FMAC4 soap_get_ns1__EMailServerConfiguration(struct soap *soap, struct ns1__EMailServerConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__EMailServerConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__onvif_USCOREaction(struct soap *soap, struct ns1__onvif_USCOREaction *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionDescription = 0;
	a->ActionDescription = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__onvif_USCOREaction(struct soap *soap, const struct ns1__onvif_USCOREaction *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionDescription)
	{	int i;
		for (i = 0; i < a->__sizeActionDescription; i++)
		{
			soap_embedded(soap, a->ActionDescription + i, SOAP_TYPE_ns1__ActionConfigDescription);
			soap_serialize_ns1__ActionConfigDescription(soap, a->ActionDescription + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__onvif_USCOREaction(struct soap *soap, const char *tag, int id, const struct ns1__onvif_USCOREaction *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__onvif_USCOREaction), type))
		return soap->error;
	if (a->ActionDescription)
	{	int i;
		for (i = 0; i < a->__sizeActionDescription; i++)
			if (soap_out_ns1__ActionConfigDescription(soap, "ns1:ActionDescription", -1, a->ActionDescription + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__onvif_USCOREaction * SOAP_FMAC4 soap_in_ns1__onvif_USCOREaction(struct soap *soap, const char *tag, struct ns1__onvif_USCOREaction *a, const char *type)
{
	struct soap_blist *soap_blist_ActionDescription = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__onvif_USCOREaction *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__onvif_USCOREaction, sizeof(struct ns1__onvif_USCOREaction), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__onvif_USCOREaction(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionDescription", 1, NULL))
			{	if (a->ActionDescription == NULL)
				{	if (soap_blist_ActionDescription == NULL)
						soap_blist_ActionDescription = soap_new_block(soap);
					a->ActionDescription = (struct ns1__ActionConfigDescription *)soap_push_block(soap, soap_blist_ActionDescription, sizeof(struct ns1__ActionConfigDescription));
					if (a->ActionDescription == NULL)
						return NULL;
					soap_default_ns1__ActionConfigDescription(soap, a->ActionDescription);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionConfigDescription(soap, "ns1:ActionDescription", a->ActionDescription, "ns1:ActionConfigDescription"))
				{	a->__sizeActionDescription++;
					a->ActionDescription = NULL;
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
		if (a->ActionDescription)
			soap_pop_block(soap, soap_blist_ActionDescription);
		if (a->__sizeActionDescription)
			a->ActionDescription = (struct ns1__ActionConfigDescription *)soap_save_block(soap, soap_blist_ActionDescription, NULL, 1);
		else
		{	a->ActionDescription = NULL;
			if (soap_blist_ActionDescription)
				soap_end_block(soap, soap_blist_ActionDescription);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__onvif_USCOREaction *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__onvif_USCOREaction, 0, sizeof(struct ns1__onvif_USCOREaction), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeActionDescription < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__onvif_USCOREaction(struct soap *soap, const struct ns1__onvif_USCOREaction *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__onvif_USCOREaction);
	if (soap_out_ns1__onvif_USCOREaction(soap, tag?tag:"ns1:onvif_action", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__onvif_USCOREaction * SOAP_FMAC4 soap_get_ns1__onvif_USCOREaction(struct soap *soap, struct ns1__onvif_USCOREaction *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__onvif_USCOREaction(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionTrigger(struct soap *soap, struct ns1__ActionTrigger *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_tt__ReferenceToken(soap, &a->Token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionTrigger(struct soap *soap, const struct ns1__ActionTrigger *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__ActionTriggerConfiguration(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionTrigger(struct soap *soap, const char *tag, int id, const struct ns1__ActionTrigger *a, const char *type)
{
	if (a->Token)
		soap_set_attr(soap, "Token", a->Token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionTrigger), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTons1__ActionTriggerConfiguration(soap, "ns1:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Configuration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionTrigger * SOAP_FMAC4 soap_in_ns1__ActionTrigger(struct soap *soap, const char *tag, struct ns1__ActionTrigger *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionTrigger *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionTrigger, sizeof(struct ns1__ActionTrigger), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionTrigger(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Token", 1), &a->Token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__ActionTriggerConfiguration(soap, "ns1:Configuration", &a->Configuration, "ns1:ActionTriggerConfiguration"))
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
	{	a = (struct ns1__ActionTrigger *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionTrigger, 0, sizeof(struct ns1__ActionTrigger), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionTrigger(struct soap *soap, const struct ns1__ActionTrigger *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionTrigger);
	if (soap_out_ns1__ActionTrigger(soap, tag?tag:"ns1:ActionTrigger", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionTrigger * SOAP_FMAC4 soap_get_ns1__ActionTrigger(struct soap *soap, struct ns1__ActionTrigger *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionTrigger(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionTriggerConfigurationExtension(struct soap *soap, struct ns1__ActionTriggerConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionTriggerConfigurationExtension(struct soap *soap, const struct ns1__ActionTriggerConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionTriggerConfigurationExtension(struct soap *soap, const char *tag, int id, const struct ns1__ActionTriggerConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionTriggerConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionTriggerConfigurationExtension * SOAP_FMAC4 soap_in_ns1__ActionTriggerConfigurationExtension(struct soap *soap, const char *tag, struct ns1__ActionTriggerConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionTriggerConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionTriggerConfigurationExtension, sizeof(struct ns1__ActionTriggerConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionTriggerConfigurationExtension(soap, a);
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
	{	a = (struct ns1__ActionTriggerConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionTriggerConfigurationExtension, 0, sizeof(struct ns1__ActionTriggerConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionTriggerConfigurationExtension(struct soap *soap, const struct ns1__ActionTriggerConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionTriggerConfigurationExtension);
	if (soap_out_ns1__ActionTriggerConfigurationExtension(soap, tag?tag:"ns1:ActionTriggerConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionTriggerConfigurationExtension * SOAP_FMAC4 soap_get_ns1__ActionTriggerConfigurationExtension(struct soap *soap, struct ns1__ActionTriggerConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionTriggerConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsnt__QueryExpressionType(struct soap *soap, struct wsnt__QueryExpressionType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
	soap_default_xsd__anyURI(soap, &a->Dialect);
	a->__mixed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsnt__QueryExpressionType(struct soap *soap, const struct wsnt__QueryExpressionType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__QueryExpressionType(struct soap *soap, const char *tag, int id, const struct wsnt__QueryExpressionType *a, const char *type)
{
	if (a->Dialect)
		soap_set_attr(soap, "Dialect", a->Dialect, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__QueryExpressionType), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	soap_outliteral(soap, "-mixed", &a->__mixed, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsnt__QueryExpressionType * SOAP_FMAC4 soap_in_wsnt__QueryExpressionType(struct soap *soap, const char *tag, struct wsnt__QueryExpressionType *a, const char *type)
{
	size_t soap_flag___any = 1;
	size_t soap_flag___mixed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsnt__QueryExpressionType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__QueryExpressionType, sizeof(struct wsnt__QueryExpressionType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsnt__QueryExpressionType(soap, a);
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
	{	a = (struct wsnt__QueryExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__QueryExpressionType, 0, sizeof(struct wsnt__QueryExpressionType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsnt__QueryExpressionType(struct soap *soap, const struct wsnt__QueryExpressionType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsnt__QueryExpressionType);
	if (soap_out_wsnt__QueryExpressionType(soap, tag?tag:"wsnt:QueryExpressionType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsnt__QueryExpressionType * SOAP_FMAC4 soap_get_wsnt__QueryExpressionType(struct soap *soap, struct wsnt__QueryExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__QueryExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsnt__TopicExpressionType(struct soap *soap, struct wsnt__TopicExpressionType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
	soap_default_xsd__anyURI(soap, &a->Dialect);
	a->__anyAttribute = NULL;
	a->__mixed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsnt__TopicExpressionType(struct soap *soap, const struct wsnt__TopicExpressionType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__TopicExpressionType(struct soap *soap, const char *tag, int id, const struct wsnt__TopicExpressionType *a, const char *type)
{
	if (a->Dialect)
		soap_set_attr(soap, "Dialect", a->Dialect, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__TopicExpressionType), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	soap_outliteral(soap, "-mixed", &a->__mixed, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsnt__TopicExpressionType * SOAP_FMAC4 soap_in_wsnt__TopicExpressionType(struct soap *soap, const char *tag, struct wsnt__TopicExpressionType *a, const char *type)
{
	size_t soap_flag___any = 1;
	size_t soap_flag___mixed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsnt__TopicExpressionType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__TopicExpressionType, sizeof(struct wsnt__TopicExpressionType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsnt__TopicExpressionType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Dialect", 1), &a->Dialect, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
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
	{	a = (struct wsnt__TopicExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__TopicExpressionType, 0, sizeof(struct wsnt__TopicExpressionType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsnt__TopicExpressionType(struct soap *soap, const struct wsnt__TopicExpressionType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsnt__TopicExpressionType);
	if (soap_out_wsnt__TopicExpressionType(soap, tag?tag:"wsnt:TopicExpressionType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsnt__TopicExpressionType * SOAP_FMAC4 soap_get_wsnt__TopicExpressionType(struct soap *soap, struct wsnt__TopicExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__TopicExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionTriggerConfiguration(struct soap *soap, struct ns1__ActionTriggerConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->TopicExpression = NULL;
	a->ContentExpression = NULL;
	a->__sizeActionToken = 0;
	a->ActionToken = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionTriggerConfiguration(struct soap *soap, const struct ns1__ActionTriggerConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsnt__TopicExpressionType(soap, &a->TopicExpression);
	soap_serialize_PointerTowsnt__QueryExpressionType(soap, &a->ContentExpression);
	if (a->ActionToken)
	{	int i;
		for (i = 0; i < a->__sizeActionToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->ActionToken + i);
		}
	}
	soap_serialize_PointerTons1__ActionTriggerConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionTriggerConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__ActionTriggerConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionTriggerConfiguration), type))
		return soap->error;
	if (a->TopicExpression)
	{	if (soap_out_PointerTowsnt__TopicExpressionType(soap, "ns1:TopicExpression", -1, &a->TopicExpression, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:TopicExpression"))
		return soap->error;
	if (soap_out_PointerTowsnt__QueryExpressionType(soap, "ns1:ContentExpression", -1, &a->ContentExpression, ""))
		return soap->error;
	if (a->ActionToken)
	{	int i;
		for (i = 0; i < a->__sizeActionToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "ns1:ActionToken", -1, a->ActionToken + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__ActionTriggerConfigurationExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionTriggerConfiguration * SOAP_FMAC4 soap_in_ns1__ActionTriggerConfiguration(struct soap *soap, const char *tag, struct ns1__ActionTriggerConfiguration *a, const char *type)
{
	size_t soap_flag_TopicExpression = 1;
	size_t soap_flag_ContentExpression = 1;
	struct soap_blist *soap_blist_ActionToken = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionTriggerConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionTriggerConfiguration, sizeof(struct ns1__ActionTriggerConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionTriggerConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TopicExpression && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "ns1:TopicExpression", &a->TopicExpression, "wsnt:TopicExpressionType"))
				{	soap_flag_TopicExpression--;
					continue;
				}
			if (soap_flag_ContentExpression && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__QueryExpressionType(soap, "ns1:ContentExpression", &a->ContentExpression, "wsnt:QueryExpressionType"))
				{	soap_flag_ContentExpression--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionToken", 1, NULL))
			{	if (a->ActionToken == NULL)
				{	if (soap_blist_ActionToken == NULL)
						soap_blist_ActionToken = soap_new_block(soap);
					a->ActionToken = (char **)soap_push_block(soap, soap_blist_ActionToken, sizeof(char *));
					if (a->ActionToken == NULL)
						return NULL;
					*a->ActionToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "ns1:ActionToken", a->ActionToken, "tt:ReferenceToken"))
				{	a->__sizeActionToken++;
					a->ActionToken = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__ActionTriggerConfigurationExtension(soap, "ns1:Extension", &a->Extension, "ns1:ActionTriggerConfigurationExtension"))
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
		if (a->ActionToken)
			soap_pop_block(soap, soap_blist_ActionToken);
		if (a->__sizeActionToken)
			a->ActionToken = (char **)soap_save_block(soap, soap_blist_ActionToken, NULL, 1);
		else
		{	a->ActionToken = NULL;
			if (soap_blist_ActionToken)
				soap_end_block(soap, soap_blist_ActionToken);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__ActionTriggerConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionTriggerConfiguration, 0, sizeof(struct ns1__ActionTriggerConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TopicExpression > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionTriggerConfiguration(struct soap *soap, const struct ns1__ActionTriggerConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionTriggerConfiguration);
	if (soap_out_ns1__ActionTriggerConfiguration(soap, tag?tag:"ns1:ActionTriggerConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionTriggerConfiguration * SOAP_FMAC4 soap_get_ns1__ActionTriggerConfiguration(struct soap *soap, struct ns1__ActionTriggerConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionTriggerConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__Action(struct soap *soap, struct ns1__Action *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_tt__ReferenceToken(soap, &a->Token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__Action(struct soap *soap, const struct ns1__Action *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTons1__ActionConfiguration(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__Action(struct soap *soap, const char *tag, int id, const struct ns1__Action *a, const char *type)
{
	if (a->Token)
		soap_set_attr(soap, "Token", a->Token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__Action), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTons1__ActionConfiguration(soap, "ns1:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Configuration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__Action * SOAP_FMAC4 soap_in_ns1__Action(struct soap *soap, const char *tag, struct ns1__Action *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__Action *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__Action, sizeof(struct ns1__Action), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__Action(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Token", 1), &a->Token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__ActionConfiguration(soap, "ns1:Configuration", &a->Configuration, "ns1:ActionConfiguration"))
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
	{	a = (struct ns1__Action *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__Action, 0, sizeof(struct ns1__Action), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__Action(struct soap *soap, const struct ns1__Action *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__Action);
	if (soap_out_ns1__Action(soap, tag?tag:"ns1:Action", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__Action * SOAP_FMAC4 soap_get_ns1__Action(struct soap *soap, struct ns1__Action *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__Action(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ItemList(struct soap *soap, struct tt__ItemList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeSimpleItem = 0;
	a->SimpleItem = NULL;
	a->__sizeElementItem = 0;
	a->ElementItem = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ItemList(struct soap *soap, const struct tt__ItemList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->SimpleItem)
	{	int i;
		for (i = 0; i < a->__sizeSimpleItem; i++)
		{
			soap_embedded(soap, a->SimpleItem + i, SOAP_TYPE__tt__ItemList_SimpleItem);
			soap_serialize__tt__ItemList_SimpleItem(soap, a->SimpleItem + i);
		}
	}
	if (a->ElementItem)
	{	int i;
		for (i = 0; i < a->__sizeElementItem; i++)
		{
			soap_embedded(soap, a->ElementItem + i, SOAP_TYPE__tt__ItemList_ElementItem);
			soap_serialize__tt__ItemList_ElementItem(soap, a->ElementItem + i);
		}
	}
	soap_serialize_PointerTott__ItemListExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemList(struct soap *soap, const char *tag, int id, const struct tt__ItemList *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemList), type))
		return soap->error;
	if (a->SimpleItem)
	{	int i;
		for (i = 0; i < a->__sizeSimpleItem; i++)
			if (soap_out__tt__ItemList_SimpleItem(soap, "tt:SimpleItem", -1, a->SimpleItem + i, ""))
				return soap->error;
	}
	if (a->ElementItem)
	{	int i;
		for (i = 0; i < a->__sizeElementItem; i++)
			if (soap_out__tt__ItemList_ElementItem(soap, "tt:ElementItem", -1, a->ElementItem + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ItemListExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ItemList * SOAP_FMAC4 soap_in_tt__ItemList(struct soap *soap, const char *tag, struct tt__ItemList *a, const char *type)
{
	struct soap_blist *soap_blist_SimpleItem = NULL;
	struct soap_blist *soap_blist_ElementItem = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ItemList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemList, sizeof(struct tt__ItemList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ItemList(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SimpleItem", 1, NULL))
			{	if (a->SimpleItem == NULL)
				{	if (soap_blist_SimpleItem == NULL)
						soap_blist_SimpleItem = soap_new_block(soap);
					a->SimpleItem = (struct _tt__ItemList_SimpleItem *)soap_push_block(soap, soap_blist_SimpleItem, sizeof(struct _tt__ItemList_SimpleItem));
					if (a->SimpleItem == NULL)
						return NULL;
					soap_default__tt__ItemList_SimpleItem(soap, a->SimpleItem);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemList_SimpleItem(soap, "tt:SimpleItem", a->SimpleItem, ""))
				{	a->__sizeSimpleItem++;
					a->SimpleItem = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ElementItem", 1, NULL))
			{	if (a->ElementItem == NULL)
				{	if (soap_blist_ElementItem == NULL)
						soap_blist_ElementItem = soap_new_block(soap);
					a->ElementItem = (struct _tt__ItemList_ElementItem *)soap_push_block(soap, soap_blist_ElementItem, sizeof(struct _tt__ItemList_ElementItem));
					if (a->ElementItem == NULL)
						return NULL;
					soap_default__tt__ItemList_ElementItem(soap, a->ElementItem);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemList_ElementItem(soap, "tt:ElementItem", a->ElementItem, ""))
				{	a->__sizeElementItem++;
					a->ElementItem = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListExtension(soap, "tt:Extension", &a->Extension, "tt:ItemListExtension"))
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
		if (a->SimpleItem)
			soap_pop_block(soap, soap_blist_SimpleItem);
		if (a->__sizeSimpleItem)
			a->SimpleItem = (struct _tt__ItemList_SimpleItem *)soap_save_block(soap, soap_blist_SimpleItem, NULL, 1);
		else
		{	a->SimpleItem = NULL;
			if (soap_blist_SimpleItem)
				soap_end_block(soap, soap_blist_SimpleItem);
		}
		if (a->ElementItem)
			soap_pop_block(soap, soap_blist_ElementItem);
		if (a->__sizeElementItem)
			a->ElementItem = (struct _tt__ItemList_ElementItem *)soap_save_block(soap, soap_blist_ElementItem, NULL, 1);
		else
		{	a->ElementItem = NULL;
			if (soap_blist_ElementItem)
				soap_end_block(soap, soap_blist_ElementItem);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ItemList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemList, 0, sizeof(struct tt__ItemList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ItemList(struct soap *soap, const struct tt__ItemList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ItemList);
	if (soap_out_tt__ItemList(soap, tag?tag:"tt:ItemList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ItemList * SOAP_FMAC4 soap_get_tt__ItemList(struct soap *soap, struct tt__ItemList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionConfiguration(struct soap *soap, struct ns1__ActionConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Parameters = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_string(soap, &a->Name);
	soap_default__QName(soap, &a->Type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionConfiguration(struct soap *soap, const struct ns1__ActionConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemList(soap, &a->Parameters);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionConfiguration(struct soap *soap, const char *tag, int id, const struct ns1__ActionConfiguration *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	if (a->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, a->Type), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionConfiguration), type))
		return soap->error;
	if (a->Parameters)
	{	if (soap_out_PointerTott__ItemList(soap, "ns1:Parameters", -1, &a->Parameters, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:Parameters"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionConfiguration * SOAP_FMAC4 soap_in_ns1__ActionConfiguration(struct soap *soap, const char *tag, struct ns1__ActionConfiguration *a, const char *type)
{
	size_t soap_flag_Parameters = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionConfiguration, sizeof(struct ns1__ActionConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Parameters && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "ns1:Parameters", &a->Parameters, "tt:ItemList"))
				{	soap_flag_Parameters--;
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
	{	a = (struct ns1__ActionConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionConfiguration, 0, sizeof(struct ns1__ActionConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Parameters > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionConfiguration(struct soap *soap, const struct ns1__ActionConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionConfiguration);
	if (soap_out_ns1__ActionConfiguration(soap, tag?tag:"ns1:ActionConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionConfiguration * SOAP_FMAC4 soap_get_ns1__ActionConfiguration(struct soap *soap, struct ns1__ActionConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, struct ns1__ActionEngineCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, const struct ns1__ActionEngineCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct ns1__ActionEngineCapabilitiesExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionEngineCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionEngineCapabilitiesExtension * SOAP_FMAC4 soap_in_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, const char *tag, struct ns1__ActionEngineCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionEngineCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionEngineCapabilitiesExtension, sizeof(struct ns1__ActionEngineCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionEngineCapabilitiesExtension(soap, a);
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
	{	a = (struct ns1__ActionEngineCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionEngineCapabilitiesExtension, 0, sizeof(struct ns1__ActionEngineCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, const struct ns1__ActionEngineCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionEngineCapabilitiesExtension);
	if (soap_out_ns1__ActionEngineCapabilitiesExtension(soap, tag?tag:"ns1:ActionEngineCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionEngineCapabilitiesExtension * SOAP_FMAC4 soap_get_ns1__ActionEngineCapabilitiesExtension(struct soap *soap, struct ns1__ActionEngineCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionEngineCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionTypeLimits(struct soap *soap, struct ns1__ActionTypeLimits *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default__QName(soap, &a->Type);
	soap_default_xsd__positiveInteger(soap, &a->Maximum);
	soap_default_xsd__nonNegativeInteger(soap, &a->InUse);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionTypeLimits(struct soap *soap, const struct ns1__ActionTypeLimits *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionTypeLimits(struct soap *soap, const char *tag, int id, const struct ns1__ActionTypeLimits *a, const char *type)
{
	if (a->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, a->Type), 1);
	if (a->Maximum)
		soap_set_attr(soap, "Maximum", a->Maximum, 1);
	if (a->InUse)
		soap_set_attr(soap, "InUse", a->InUse, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionTypeLimits), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionTypeLimits * SOAP_FMAC4 soap_in_ns1__ActionTypeLimits(struct soap *soap, const char *tag, struct ns1__ActionTypeLimits *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionTypeLimits *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionTypeLimits, sizeof(struct ns1__ActionTypeLimits), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionTypeLimits(soap, a);
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Maximum", 1), &a->Maximum, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "InUse", 0), &a->InUse, 0, -1))
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
	{	a = (struct ns1__ActionTypeLimits *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionTypeLimits, 0, sizeof(struct ns1__ActionTypeLimits), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionTypeLimits(struct soap *soap, const struct ns1__ActionTypeLimits *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionTypeLimits);
	if (soap_out_ns1__ActionTypeLimits(soap, tag?tag:"ns1:ActionTypeLimits", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionTypeLimits * SOAP_FMAC4 soap_get_ns1__ActionTypeLimits(struct soap *soap, struct ns1__ActionTypeLimits *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionTypeLimits(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionEngineCapabilities(struct soap *soap, struct ns1__ActionEngineCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionCapabilities = 0;
	a->ActionCapabilities = NULL;
	a->Extension = NULL;
	soap_default_xsd__positiveInteger(soap, &a->MaximumTriggers);
	soap_default_xsd__positiveInteger(soap, &a->MaximumActions);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionEngineCapabilities(struct soap *soap, const struct ns1__ActionEngineCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionCapabilities)
	{	int i;
		for (i = 0; i < a->__sizeActionCapabilities; i++)
		{
			soap_embedded(soap, a->ActionCapabilities + i, SOAP_TYPE_ns1__ActionTypeLimits);
			soap_serialize_ns1__ActionTypeLimits(soap, a->ActionCapabilities + i);
		}
	}
	soap_serialize_PointerTons1__ActionEngineCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionEngineCapabilities(struct soap *soap, const char *tag, int id, const struct ns1__ActionEngineCapabilities *a, const char *type)
{
	if (a->MaximumTriggers)
		soap_set_attr(soap, "MaximumTriggers", a->MaximumTriggers, 1);
	if (a->MaximumActions)
		soap_set_attr(soap, "MaximumActions", a->MaximumActions, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionEngineCapabilities), type))
		return soap->error;
	if (a->ActionCapabilities)
	{	int i;
		for (i = 0; i < a->__sizeActionCapabilities; i++)
			if (soap_out_ns1__ActionTypeLimits(soap, "ns1:ActionCapabilities", -1, a->ActionCapabilities + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__ActionEngineCapabilitiesExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionEngineCapabilities * SOAP_FMAC4 soap_in_ns1__ActionEngineCapabilities(struct soap *soap, const char *tag, struct ns1__ActionEngineCapabilities *a, const char *type)
{
	struct soap_blist *soap_blist_ActionCapabilities = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionEngineCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionEngineCapabilities, sizeof(struct ns1__ActionEngineCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionEngineCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "MaximumTriggers", 0), &a->MaximumTriggers, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "MaximumActions", 0), &a->MaximumActions, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionCapabilities", 1, NULL))
			{	if (a->ActionCapabilities == NULL)
				{	if (soap_blist_ActionCapabilities == NULL)
						soap_blist_ActionCapabilities = soap_new_block(soap);
					a->ActionCapabilities = (struct ns1__ActionTypeLimits *)soap_push_block(soap, soap_blist_ActionCapabilities, sizeof(struct ns1__ActionTypeLimits));
					if (a->ActionCapabilities == NULL)
						return NULL;
					soap_default_ns1__ActionTypeLimits(soap, a->ActionCapabilities);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionTypeLimits(soap, "ns1:ActionCapabilities", a->ActionCapabilities, "ns1:ActionTypeLimits"))
				{	a->__sizeActionCapabilities++;
					a->ActionCapabilities = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__ActionEngineCapabilitiesExtension(soap, "ns1:Extension", &a->Extension, "ns1:ActionEngineCapabilitiesExtension"))
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
		if (a->ActionCapabilities)
			soap_pop_block(soap, soap_blist_ActionCapabilities);
		if (a->__sizeActionCapabilities)
			a->ActionCapabilities = (struct ns1__ActionTypeLimits *)soap_save_block(soap, soap_blist_ActionCapabilities, NULL, 1);
		else
		{	a->ActionCapabilities = NULL;
			if (soap_blist_ActionCapabilities)
				soap_end_block(soap, soap_blist_ActionCapabilities);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__ActionEngineCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionEngineCapabilities, 0, sizeof(struct ns1__ActionEngineCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionEngineCapabilities(struct soap *soap, const struct ns1__ActionEngineCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionEngineCapabilities);
	if (soap_out_ns1__ActionEngineCapabilities(soap, tag?tag:"ns1:ActionEngineCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionEngineCapabilities * SOAP_FMAC4 soap_get_ns1__ActionEngineCapabilities(struct soap *soap, struct ns1__ActionEngineCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionEngineCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SupportedActionsExtension(struct soap *soap, struct ns1__SupportedActionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SupportedActionsExtension(struct soap *soap, const struct ns1__SupportedActionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SupportedActionsExtension(struct soap *soap, const char *tag, int id, const struct ns1__SupportedActionsExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SupportedActionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SupportedActionsExtension * SOAP_FMAC4 soap_in_ns1__SupportedActionsExtension(struct soap *soap, const char *tag, struct ns1__SupportedActionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SupportedActionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SupportedActionsExtension, sizeof(struct ns1__SupportedActionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SupportedActionsExtension(soap, a);
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
	{	a = (struct ns1__SupportedActionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SupportedActionsExtension, 0, sizeof(struct ns1__SupportedActionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SupportedActionsExtension(struct soap *soap, const struct ns1__SupportedActionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SupportedActionsExtension);
	if (soap_out_ns1__SupportedActionsExtension(soap, tag?tag:"ns1:SupportedActionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SupportedActionsExtension * SOAP_FMAC4 soap_get_ns1__SupportedActionsExtension(struct soap *soap, struct ns1__SupportedActionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SupportedActionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__SupportedActions(struct soap *soap, struct ns1__SupportedActions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeActionContentSchemaLocation = 0;
	a->ActionContentSchemaLocation = NULL;
	a->__sizeActionDescription = 0;
	a->ActionDescription = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__SupportedActions(struct soap *soap, const struct ns1__SupportedActions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ActionContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeActionContentSchemaLocation; i++)
		{
			soap_serialize_xsd__anyURI(soap, a->ActionContentSchemaLocation + i);
		}
	}
	if (a->ActionDescription)
	{	int i;
		for (i = 0; i < a->__sizeActionDescription; i++)
		{
			soap_embedded(soap, a->ActionDescription + i, SOAP_TYPE_ns1__ActionConfigDescription);
			soap_serialize_ns1__ActionConfigDescription(soap, a->ActionDescription + i);
		}
	}
	soap_serialize_PointerTons1__SupportedActionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__SupportedActions(struct soap *soap, const char *tag, int id, const struct ns1__SupportedActions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__SupportedActions), type))
		return soap->error;
	if (a->ActionContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeActionContentSchemaLocation; i++)
			if (soap_out_xsd__anyURI(soap, "ns1:ActionContentSchemaLocation", -1, a->ActionContentSchemaLocation + i, ""))
				return soap->error;
	}
	if (a->ActionDescription)
	{	int i;
		for (i = 0; i < a->__sizeActionDescription; i++)
			if (soap_out_ns1__ActionConfigDescription(soap, "ns1:ActionDescription", -1, a->ActionDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTons1__SupportedActionsExtension(soap, "ns1:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__SupportedActions * SOAP_FMAC4 soap_in_ns1__SupportedActions(struct soap *soap, const char *tag, struct ns1__SupportedActions *a, const char *type)
{
	struct soap_blist *soap_blist_ActionContentSchemaLocation = NULL;
	struct soap_blist *soap_blist_ActionDescription = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__SupportedActions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__SupportedActions, sizeof(struct ns1__SupportedActions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__SupportedActions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionContentSchemaLocation", 1, NULL))
			{	if (a->ActionContentSchemaLocation == NULL)
				{	if (soap_blist_ActionContentSchemaLocation == NULL)
						soap_blist_ActionContentSchemaLocation = soap_new_block(soap);
					a->ActionContentSchemaLocation = (char **)soap_push_block(soap, soap_blist_ActionContentSchemaLocation, sizeof(char *));
					if (a->ActionContentSchemaLocation == NULL)
						return NULL;
					*a->ActionContentSchemaLocation = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "ns1:ActionContentSchemaLocation", a->ActionContentSchemaLocation, "xsd:anyURI"))
				{	a->__sizeActionContentSchemaLocation++;
					a->ActionContentSchemaLocation = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "ns1:ActionDescription", 1, NULL))
			{	if (a->ActionDescription == NULL)
				{	if (soap_blist_ActionDescription == NULL)
						soap_blist_ActionDescription = soap_new_block(soap);
					a->ActionDescription = (struct ns1__ActionConfigDescription *)soap_push_block(soap, soap_blist_ActionDescription, sizeof(struct ns1__ActionConfigDescription));
					if (a->ActionDescription == NULL)
						return NULL;
					soap_default_ns1__ActionConfigDescription(soap, a->ActionDescription);
				}
				soap_revert(soap);
				if (soap_in_ns1__ActionConfigDescription(soap, "ns1:ActionDescription", a->ActionDescription, "ns1:ActionConfigDescription"))
				{	a->__sizeActionDescription++;
					a->ActionDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTons1__SupportedActionsExtension(soap, "ns1:Extension", &a->Extension, "ns1:SupportedActionsExtension"))
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
		if (a->ActionContentSchemaLocation)
			soap_pop_block(soap, soap_blist_ActionContentSchemaLocation);
		if (a->__sizeActionContentSchemaLocation)
			a->ActionContentSchemaLocation = (char **)soap_save_block(soap, soap_blist_ActionContentSchemaLocation, NULL, 1);
		else
		{	a->ActionContentSchemaLocation = NULL;
			if (soap_blist_ActionContentSchemaLocation)
				soap_end_block(soap, soap_blist_ActionContentSchemaLocation);
		}
		if (a->ActionDescription)
			soap_pop_block(soap, soap_blist_ActionDescription);
		if (a->__sizeActionDescription)
			a->ActionDescription = (struct ns1__ActionConfigDescription *)soap_save_block(soap, soap_blist_ActionDescription, NULL, 1);
		else
		{	a->ActionDescription = NULL;
			if (soap_blist_ActionDescription)
				soap_end_block(soap, soap_blist_ActionDescription);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct ns1__SupportedActions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__SupportedActions, 0, sizeof(struct ns1__SupportedActions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__SupportedActions(struct soap *soap, const struct ns1__SupportedActions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__SupportedActions);
	if (soap_out_ns1__SupportedActions(soap, tag?tag:"ns1:SupportedActions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__SupportedActions * SOAP_FMAC4 soap_get_ns1__SupportedActions(struct soap *soap, struct ns1__SupportedActions *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__SupportedActions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ItemListDescription(struct soap *soap, struct tt__ItemListDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeSimpleItemDescription = 0;
	a->SimpleItemDescription = NULL;
	a->__sizeElementItemDescription = 0;
	a->ElementItemDescription = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ItemListDescription(struct soap *soap, const struct tt__ItemListDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->SimpleItemDescription)
	{	int i;
		for (i = 0; i < a->__sizeSimpleItemDescription; i++)
		{
			soap_embedded(soap, a->SimpleItemDescription + i, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription);
			soap_serialize__tt__ItemListDescription_SimpleItemDescription(soap, a->SimpleItemDescription + i);
		}
	}
	if (a->ElementItemDescription)
	{	int i;
		for (i = 0; i < a->__sizeElementItemDescription; i++)
		{
			soap_embedded(soap, a->ElementItemDescription + i, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription);
			soap_serialize__tt__ItemListDescription_ElementItemDescription(soap, a->ElementItemDescription + i);
		}
	}
	soap_serialize_PointerTott__ItemListDescriptionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListDescription(struct soap *soap, const char *tag, int id, const struct tt__ItemListDescription *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListDescription), type))
		return soap->error;
	if (a->SimpleItemDescription)
	{	int i;
		for (i = 0; i < a->__sizeSimpleItemDescription; i++)
			if (soap_out__tt__ItemListDescription_SimpleItemDescription(soap, "tt:SimpleItemDescription", -1, a->SimpleItemDescription + i, ""))
				return soap->error;
	}
	if (a->ElementItemDescription)
	{	int i;
		for (i = 0; i < a->__sizeElementItemDescription; i++)
			if (soap_out__tt__ItemListDescription_ElementItemDescription(soap, "tt:ElementItemDescription", -1, a->ElementItemDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ItemListDescriptionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ItemListDescription * SOAP_FMAC4 soap_in_tt__ItemListDescription(struct soap *soap, const char *tag, struct tt__ItemListDescription *a, const char *type)
{
	struct soap_blist *soap_blist_SimpleItemDescription = NULL;
	struct soap_blist *soap_blist_ElementItemDescription = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ItemListDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListDescription, sizeof(struct tt__ItemListDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ItemListDescription(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SimpleItemDescription", 1, NULL))
			{	if (a->SimpleItemDescription == NULL)
				{	if (soap_blist_SimpleItemDescription == NULL)
						soap_blist_SimpleItemDescription = soap_new_block(soap);
					a->SimpleItemDescription = (struct _tt__ItemListDescription_SimpleItemDescription *)soap_push_block(soap, soap_blist_SimpleItemDescription, sizeof(struct _tt__ItemListDescription_SimpleItemDescription));
					if (a->SimpleItemDescription == NULL)
						return NULL;
					soap_default__tt__ItemListDescription_SimpleItemDescription(soap, a->SimpleItemDescription);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemListDescription_SimpleItemDescription(soap, "tt:SimpleItemDescription", a->SimpleItemDescription, ""))
				{	a->__sizeSimpleItemDescription++;
					a->SimpleItemDescription = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ElementItemDescription", 1, NULL))
			{	if (a->ElementItemDescription == NULL)
				{	if (soap_blist_ElementItemDescription == NULL)
						soap_blist_ElementItemDescription = soap_new_block(soap);
					a->ElementItemDescription = (struct _tt__ItemListDescription_ElementItemDescription *)soap_push_block(soap, soap_blist_ElementItemDescription, sizeof(struct _tt__ItemListDescription_ElementItemDescription));
					if (a->ElementItemDescription == NULL)
						return NULL;
					soap_default__tt__ItemListDescription_ElementItemDescription(soap, a->ElementItemDescription);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemListDescription_ElementItemDescription(soap, "tt:ElementItemDescription", a->ElementItemDescription, ""))
				{	a->__sizeElementItemDescription++;
					a->ElementItemDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescriptionExtension(soap, "tt:Extension", &a->Extension, "tt:ItemListDescriptionExtension"))
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
		if (a->SimpleItemDescription)
			soap_pop_block(soap, soap_blist_SimpleItemDescription);
		if (a->__sizeSimpleItemDescription)
			a->SimpleItemDescription = (struct _tt__ItemListDescription_SimpleItemDescription *)soap_save_block(soap, soap_blist_SimpleItemDescription, NULL, 1);
		else
		{	a->SimpleItemDescription = NULL;
			if (soap_blist_SimpleItemDescription)
				soap_end_block(soap, soap_blist_SimpleItemDescription);
		}
		if (a->ElementItemDescription)
			soap_pop_block(soap, soap_blist_ElementItemDescription);
		if (a->__sizeElementItemDescription)
			a->ElementItemDescription = (struct _tt__ItemListDescription_ElementItemDescription *)soap_save_block(soap, soap_blist_ElementItemDescription, NULL, 1);
		else
		{	a->ElementItemDescription = NULL;
			if (soap_blist_ElementItemDescription)
				soap_end_block(soap, soap_blist_ElementItemDescription);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ItemListDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListDescription, 0, sizeof(struct tt__ItemListDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ItemListDescription(struct soap *soap, const struct tt__ItemListDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ItemListDescription);
	if (soap_out_tt__ItemListDescription(soap, tag?tag:"tt:ItemListDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ItemListDescription * SOAP_FMAC4 soap_get_tt__ItemListDescription(struct soap *soap, struct tt__ItemListDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__ActionConfigDescription(struct soap *soap, struct ns1__ActionConfigDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->ParameterDescription = NULL;
	soap_default__QName(soap, &a->Name);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__ActionConfigDescription(struct soap *soap, const struct ns1__ActionConfigDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &a->ParameterDescription);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__ActionConfigDescription(struct soap *soap, const char *tag, int id, const struct ns1__ActionConfigDescription *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", soap_QName2s(soap, a->Name), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_ns1__ActionConfigDescription), type))
		return soap->error;
	if (a->ParameterDescription)
	{	if (soap_out_PointerTott__ItemListDescription(soap, "ns1:ParameterDescription", -1, &a->ParameterDescription, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "ns1:ParameterDescription"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct ns1__ActionConfigDescription * SOAP_FMAC4 soap_in_ns1__ActionConfigDescription(struct soap *soap, const char *tag, struct ns1__ActionConfigDescription *a, const char *type)
{
	size_t soap_flag_ParameterDescription = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct ns1__ActionConfigDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_ns1__ActionConfigDescription, sizeof(struct ns1__ActionConfigDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_ns1__ActionConfigDescription(soap, a);
	if (soap_s2QName(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ParameterDescription && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "ns1:ParameterDescription", &a->ParameterDescription, "tt:ItemListDescription"))
				{	soap_flag_ParameterDescription--;
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
	{	a = (struct ns1__ActionConfigDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_ns1__ActionConfigDescription, 0, sizeof(struct ns1__ActionConfigDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ParameterDescription > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__ActionConfigDescription(struct soap *soap, const struct ns1__ActionConfigDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_ns1__ActionConfigDescription);
	if (soap_out_ns1__ActionConfigDescription(soap, tag?tag:"ns1:ActionConfigDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct ns1__ActionConfigDescription * SOAP_FMAC4 soap_get_ns1__ActionConfigDescription(struct soap *soap, struct ns1__ActionConfigDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_ns1__ActionConfigDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11PSK(struct soap *soap, struct xsd__hexBinary const*a)
{
#ifndef WITH_NOIDREF
	if (a->__ptr)
		soap_array_reference(soap, a, (struct soap_array*)&a->__ptr, 1, SOAP_TYPE_tt__Dot11PSK);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSK(struct soap *soap, const char *tag, int id, const struct xsd__hexBinary *a, const char *type)
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

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_in_tt__Dot11PSK(struct soap *soap, const char *tag, struct xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (struct xsd__hexBinary *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSK, sizeof(struct xsd__hexBinary), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11PSK(soap, a);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_gethex(soap, &a->__size);
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSK, 0, sizeof(struct xsd__hexBinary), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11PSK(struct soap *soap, const struct xsd__hexBinary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_tt__Dot11PSK);
	if (soap_out_tt__Dot11PSK(soap, tag?tag:"tt:Dot11PSK", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_get_tt__Dot11PSK(struct soap *soap, struct xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSK(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11SSIDType(struct soap *soap, struct xsd__hexBinary const*a)
{
#ifndef WITH_NOIDREF
	if (a->__ptr)
		soap_array_reference(soap, a, (struct soap_array*)&a->__ptr, 1, SOAP_TYPE_tt__Dot11SSIDType);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SSIDType(struct soap *soap, const char *tag, int id, const struct xsd__hexBinary *a, const char *type)
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

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_in_tt__Dot11SSIDType(struct soap *soap, const char *tag, struct xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (struct xsd__hexBinary *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SSIDType, sizeof(struct xsd__hexBinary), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11SSIDType(soap, a);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_gethex(soap, &a->__size);
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SSIDType, 0, sizeof(struct xsd__hexBinary), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SSIDType(struct soap *soap, const struct xsd__hexBinary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_tt__Dot11SSIDType);
	if (soap_out_tt__Dot11SSIDType(soap, tag?tag:"tt:Dot11SSIDType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_get_tt__Dot11SSIDType(struct soap *soap, struct xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SSIDType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__hexBinary(struct soap *soap, struct xsd__hexBinary *a)
{	(void)soap;
	(void)soap; /* appease -Wall -Werror */
	a->__size = 0;
	a->__ptr = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_xsd__hexBinary(struct soap *soap, struct xsd__hexBinary const*a)
{
#ifndef WITH_NOIDREF
	if (a->__ptr)
		soap_array_reference(soap, a, (struct soap_array*)&a->__ptr, 1, SOAP_TYPE_xsd__hexBinary);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__hexBinary(struct soap *soap, const char *tag, int id, const struct xsd__hexBinary *a, const char *type)
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

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_in_xsd__hexBinary(struct soap *soap, const char *tag, struct xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (struct xsd__hexBinary *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__hexBinary, sizeof(struct xsd__hexBinary), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_xsd__hexBinary(soap, a);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_gethex(soap, &a->__size);
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_xsd__hexBinary, 0, sizeof(struct xsd__hexBinary), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__hexBinary(struct soap *soap, const struct xsd__hexBinary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_xsd__hexBinary);
	if (soap_out_xsd__hexBinary(soap, tag?tag:"xsd:hexBinary", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct xsd__hexBinary * SOAP_FMAC4 soap_get_xsd__hexBinary(struct soap *soap, struct xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__hexBinary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__base64Binary(struct soap *soap, struct xsd__base64Binary *a)
{	(void)soap;
	(void)soap; /* appease -Wall -Werror */
	a->__size = 0;
	a->__ptr = NULL;
	a->id = NULL;
	a->type = NULL;
	a->options = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_xsd__base64Binary(struct soap *soap, struct xsd__base64Binary const*a)
{
#ifndef WITH_NOIDREF
	if (a->__ptr && !soap_array_reference(soap, a, (struct soap_array*)&a->__ptr, 1, SOAP_TYPE_xsd__base64Binary))
		if (a->id || a->type)
			soap->mode |= SOAP_ENC_DIME;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__base64Binary(struct soap *soap, const char *tag, int id, const struct xsd__base64Binary *a, const char *type)
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

SOAP_FMAC3 struct xsd__base64Binary * SOAP_FMAC4 soap_in_xsd__base64Binary(struct soap *soap, const char *tag, struct xsd__base64Binary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":base64Binary") && soap_match_tag(soap, soap->type, ":base64"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (struct xsd__base64Binary *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__base64Binary, sizeof(struct xsd__base64Binary), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_xsd__base64Binary(soap, a);
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
			a = (struct xsd__base64Binary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_xsd__base64Binary, 0, sizeof(struct xsd__base64Binary), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__base64Binary(struct soap *soap, const struct xsd__base64Binary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_xsd__base64Binary);
	if (soap_out_xsd__base64Binary(soap, tag?tag:"xsd:base64Binary", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct xsd__base64Binary * SOAP_FMAC4 soap_get_xsd__base64Binary(struct soap *soap, struct xsd__base64Binary *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__base64Binary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Envelope(struct soap *soap, struct SOAP_ENV__Envelope *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SOAP_ENV__Header = NULL;
	a->SOAP_ENV__Body = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Envelope(struct soap *soap, const struct SOAP_ENV__Envelope *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToSOAP_ENV__Header(soap, &a->SOAP_ENV__Header);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Envelope(struct soap *soap, const char *tag, int id, const struct SOAP_ENV__Envelope *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_SOAP_ENV__Envelope), type))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Header(soap, "SOAP-ENV:Header", -1, &a->SOAP_ENV__Header, ""))
		return soap->error;
	soap_outliteral(soap, "SOAP-ENV:Body", &a->SOAP_ENV__Body, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct SOAP_ENV__Envelope * SOAP_FMAC4 soap_in_SOAP_ENV__Envelope(struct soap *soap, const char *tag, struct SOAP_ENV__Envelope *a, const char *type)
{
	size_t soap_flag_SOAP_ENV__Header = 1;
	size_t soap_flag_SOAP_ENV__Body = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct SOAP_ENV__Envelope *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_SOAP_ENV__Envelope, sizeof(struct SOAP_ENV__Envelope), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_SOAP_ENV__Envelope(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SOAP_ENV__Header && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Header(soap, "SOAP-ENV:Header", &a->SOAP_ENV__Header, ""))
				{	soap_flag_SOAP_ENV__Header--;
					continue;
				}
			if (soap_flag_SOAP_ENV__Body && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "SOAP-ENV:Body", &a->SOAP_ENV__Body))
				{	soap_flag_SOAP_ENV__Body--;
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
	{	a = (struct SOAP_ENV__Envelope *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_SOAP_ENV__Envelope, 0, sizeof(struct SOAP_ENV__Envelope), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Envelope(struct soap *soap, const struct SOAP_ENV__Envelope *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_SOAP_ENV__Envelope);
	if (soap_out_SOAP_ENV__Envelope(soap, tag?tag:"SOAP-ENV:Envelope", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct SOAP_ENV__Envelope * SOAP_FMAC4 soap_get_SOAP_ENV__Envelope(struct soap *soap, struct SOAP_ENV__Envelope *p, const char *tag, const char *type)
{
	if ((p = soap_in_SOAP_ENV__Envelope(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_chan__ChannelInstanceType(struct soap *soap, struct chan__ChannelInstanceType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->__item);
	a->wsa5__IsReferenceParameter = (enum _wsa5__IsReferenceParameter)0;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_chan__ChannelInstanceType(struct soap *soap, const struct chan__ChannelInstanceType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->__item, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_chan__ChannelInstanceType(struct soap *soap, const char *tag, int id, const struct chan__ChannelInstanceType *a, const char *type)
{
	soap_set_attr(soap, "wsa5:IsReferenceParameter", soap__wsa5__IsReferenceParameter2s(soap, a->wsa5__IsReferenceParameter), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	return soap_out_int(soap, tag, id, &a->__item, "");
}

SOAP_FMAC3 struct chan__ChannelInstanceType * SOAP_FMAC4 soap_in_chan__ChannelInstanceType(struct soap *soap, const char *tag, struct chan__ChannelInstanceType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (struct chan__ChannelInstanceType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_chan__ChannelInstanceType, sizeof(struct chan__ChannelInstanceType), 0, NULL, NULL, NULL)))
		return NULL;
	soap_revert(soap);
	*soap->id = '\0';
	soap_default_chan__ChannelInstanceType(soap, a);
	if (soap_s2_wsa5__IsReferenceParameter(soap, soap_attr_value(soap, "wsa5:IsReferenceParameter", 0), &a->wsa5__IsReferenceParameter))
		return NULL;
	if (!soap_in_int(soap, tag, &a->__item, "chan:ChannelInstanceType"))
		return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_chan__ChannelInstanceType(struct soap *soap, const struct chan__ChannelInstanceType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_chan__ChannelInstanceType);
	if (soap_out_chan__ChannelInstanceType(soap, tag?tag:"chan:ChannelInstanceType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct chan__ChannelInstanceType * SOAP_FMAC4 soap_get_chan__ChannelInstanceType(struct soap *soap, struct chan__ChannelInstanceType *p, const char *tag, const char *type)
{
	if ((p = soap_in_chan__ChannelInstanceType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__ProblemActionType(struct soap *soap, struct wsa5__ProblemActionType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Action);
	soap_default_string(soap, &a->SoapAction);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsa5__ProblemActionType(struct soap *soap, const struct wsa5__ProblemActionType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Action);
	soap_serialize_string(soap, &a->SoapAction);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__ProblemActionType(struct soap *soap, const char *tag, int id, const struct wsa5__ProblemActionType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__ProblemActionType), type))
		return soap->error;
	if (soap_out_string(soap, "wsa5:Action", -1, &a->Action, ""))
		return soap->error;
	if (soap_out_string(soap, "wsa5:SoapAction", -1, &a->SoapAction, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsa5__ProblemActionType * SOAP_FMAC4 soap_in_wsa5__ProblemActionType(struct soap *soap, const char *tag, struct wsa5__ProblemActionType *a, const char *type)
{
	size_t soap_flag_Action = 1;
	size_t soap_flag_SoapAction = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsa5__ProblemActionType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__ProblemActionType, sizeof(struct wsa5__ProblemActionType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsa5__ProblemActionType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Action && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "wsa5:Action", &a->Action, "xsd:string"))
				{	soap_flag_Action--;
					continue;
				}
			if (soap_flag_SoapAction && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "wsa5:SoapAction", &a->SoapAction, "xsd:string"))
				{	soap_flag_SoapAction--;
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
	{	a = (struct wsa5__ProblemActionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__ProblemActionType, 0, sizeof(struct wsa5__ProblemActionType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__ProblemActionType(struct soap *soap, const struct wsa5__ProblemActionType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__ProblemActionType);
	if (soap_out_wsa5__ProblemActionType(soap, tag?tag:"wsa5:ProblemActionType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsa5__ProblemActionType * SOAP_FMAC4 soap_get_wsa5__ProblemActionType(struct soap *soap, struct wsa5__ProblemActionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__ProblemActionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__RelatesToType(struct soap *soap, struct wsa5__RelatesToType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->__item);
	soap_default_wsa5__RelationshipTypeOpenEnum(soap, &a->RelationshipType);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsa5__RelatesToType(struct soap *soap, const struct wsa5__RelatesToType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->__item);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__RelatesToType(struct soap *soap, const char *tag, int id, const struct wsa5__RelatesToType *a, const char *type)
{
	if (a->RelationshipType)
		soap_set_attr(soap, "RelationshipType", a->RelationshipType, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	return soap_out_string(soap, tag, id, &a->__item, "");
}

SOAP_FMAC3 struct wsa5__RelatesToType * SOAP_FMAC4 soap_in_wsa5__RelatesToType(struct soap *soap, const char *tag, struct wsa5__RelatesToType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (struct wsa5__RelatesToType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__RelatesToType, sizeof(struct wsa5__RelatesToType), 0, NULL, NULL, NULL)))
		return NULL;
	soap_revert(soap);
	*soap->id = '\0';
	soap_default_wsa5__RelatesToType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "RelationshipType", 0), &a->RelationshipType, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (!soap_in_string(soap, tag, &a->__item, "wsa5:RelatesToType"))
		return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__RelatesToType(struct soap *soap, const struct wsa5__RelatesToType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__RelatesToType);
	if (soap_out_wsa5__RelatesToType(soap, tag?tag:"wsa5:RelatesToType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsa5__RelatesToType * SOAP_FMAC4 soap_get_wsa5__RelatesToType(struct soap *soap, struct wsa5__RelatesToType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__RelatesToType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__MetadataType(struct soap *soap, struct wsa5__MetadataType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsa5__MetadataType(struct soap *soap, const struct wsa5__MetadataType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__MetadataType(struct soap *soap, const char *tag, int id, const struct wsa5__MetadataType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__MetadataType), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			soap_outliteral(soap, "-any", a->__any + i, NULL);
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsa5__MetadataType * SOAP_FMAC4 soap_in_wsa5__MetadataType(struct soap *soap, const char *tag, struct wsa5__MetadataType *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsa5__MetadataType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__MetadataType, sizeof(struct wsa5__MetadataType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsa5__MetadataType(soap, a);
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
					a->__any = (char **)soap_push_block(soap, soap_blist___any, sizeof(char *));
					if (a->__any == NULL)
						return NULL;
					*a->__any = NULL;
				}
				if (soap_inliteral(soap, "-any", a->__any))
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
			a->__any = (char **)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsa5__MetadataType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__MetadataType, 0, sizeof(struct wsa5__MetadataType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__MetadataType(struct soap *soap, const struct wsa5__MetadataType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__MetadataType);
	if (soap_out_wsa5__MetadataType(soap, tag?tag:"wsa5:MetadataType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsa5__MetadataType * SOAP_FMAC4 soap_get_wsa5__MetadataType(struct soap *soap, struct wsa5__MetadataType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__MetadataType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__ReferenceParametersType(struct soap *soap, struct wsa5__ReferenceParametersType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->chan__ChannelInstance = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsa5__ReferenceParametersType(struct soap *soap, const struct wsa5__ReferenceParametersType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &a->chan__ChannelInstance);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__ReferenceParametersType(struct soap *soap, const char *tag, int id, const struct wsa5__ReferenceParametersType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__ReferenceParametersType), type))
		return soap->error;
	if (soap_out_PointerToint(soap, "chan:ChannelInstance", -1, &a->chan__ChannelInstance, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			soap_outliteral(soap, "-any", a->__any + i, NULL);
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsa5__ReferenceParametersType * SOAP_FMAC4 soap_in_wsa5__ReferenceParametersType(struct soap *soap, const char *tag, struct wsa5__ReferenceParametersType *a, const char *type)
{
	size_t soap_flag_chan__ChannelInstance = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsa5__ReferenceParametersType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__ReferenceParametersType, sizeof(struct wsa5__ReferenceParametersType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsa5__ReferenceParametersType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_chan__ChannelInstance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "chan:ChannelInstance", &a->chan__ChannelInstance, "xsd:int"))
				{	soap_flag_chan__ChannelInstance--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char **)soap_push_block(soap, soap_blist___any, sizeof(char *));
					if (a->__any == NULL)
						return NULL;
					*a->__any = NULL;
				}
				if (soap_inliteral(soap, "-any", a->__any))
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
			a->__any = (char **)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsa5__ReferenceParametersType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__ReferenceParametersType, 0, sizeof(struct wsa5__ReferenceParametersType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__ReferenceParametersType(struct soap *soap, const struct wsa5__ReferenceParametersType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__ReferenceParametersType);
	if (soap_out_wsa5__ReferenceParametersType(soap, tag?tag:"wsa5:ReferenceParametersType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsa5__ReferenceParametersType * SOAP_FMAC4 soap_get_wsa5__ReferenceParametersType(struct soap *soap, struct wsa5__ReferenceParametersType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__ReferenceParametersType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__EndpointReferenceType(struct soap *soap, struct wsa5__EndpointReferenceType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Address);
	a->ReferenceParameters = NULL;
	a->Metadata = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsa5__EndpointReferenceType(struct soap *soap, const struct wsa5__EndpointReferenceType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Address);
	soap_serialize_PointerTowsa5__ReferenceParametersType(soap, &a->ReferenceParameters);
	soap_serialize_PointerTowsa5__MetadataType(soap, &a->Metadata);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__EndpointReferenceType(struct soap *soap, const char *tag, int id, const struct wsa5__EndpointReferenceType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__EndpointReferenceType), type))
		return soap->error;
	if (a->Address)
	{	if (soap_out_string(soap, "wsa5:Address", -1, &a->Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "wsa5:Address"))
		return soap->error;
	if (soap_out_PointerTowsa5__ReferenceParametersType(soap, "wsa5:ReferenceParameters", -1, &a->ReferenceParameters, ""))
		return soap->error;
	if (soap_out_PointerTowsa5__MetadataType(soap, "wsa5:Metadata", -1, &a->Metadata, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			soap_outliteral(soap, "-any", a->__any + i, NULL);
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsa5__EndpointReferenceType * SOAP_FMAC4 soap_in_wsa5__EndpointReferenceType(struct soap *soap, const char *tag, struct wsa5__EndpointReferenceType *a, const char *type)
{
	size_t soap_flag_Address = 1;
	size_t soap_flag_ReferenceParameters = 1;
	size_t soap_flag_Metadata = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsa5__EndpointReferenceType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__EndpointReferenceType, sizeof(struct wsa5__EndpointReferenceType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsa5__EndpointReferenceType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "wsa5:Address", &a->Address, "xsd:string"))
				{	soap_flag_Address--;
					continue;
				}
			if (soap_flag_ReferenceParameters && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__ReferenceParametersType(soap, "wsa5:ReferenceParameters", &a->ReferenceParameters, "wsa5:ReferenceParametersType"))
				{	soap_flag_ReferenceParameters--;
					continue;
				}
			if (soap_flag_Metadata && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__MetadataType(soap, "wsa5:Metadata", &a->Metadata, "wsa5:MetadataType"))
				{	soap_flag_Metadata--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char **)soap_push_block(soap, soap_blist___any, sizeof(char *));
					if (a->__any == NULL)
						return NULL;
					*a->__any = NULL;
				}
				if (soap_inliteral(soap, "-any", a->__any))
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
			a->__any = (char **)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsa5__EndpointReferenceType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__EndpointReferenceType, 0, sizeof(struct wsa5__EndpointReferenceType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__EndpointReferenceType(struct soap *soap, const struct wsa5__EndpointReferenceType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__EndpointReferenceType);
	if (soap_out_wsa5__EndpointReferenceType(soap, tag?tag:"wsa5:EndpointReferenceType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsa5__EndpointReferenceType * SOAP_FMAC4 soap_get_wsa5__EndpointReferenceType(struct soap *soap, struct wsa5__EndpointReferenceType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__EndpointReferenceType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__xop__Include(struct soap *soap, struct _xop__Include *a)
{	(void)soap;
	(void)soap; /* appease -Wall -Werror */
	a->__size = 0;
	a->__ptr = NULL;
	a->id = NULL;
	a->type = NULL;
	a->options = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__xop__Include(struct soap *soap, struct _xop__Include const*a)
{
#ifndef WITH_NOIDREF
	if (a->__ptr && !soap_array_reference(soap, a, (struct soap_array*)&a->__ptr, 1, SOAP_TYPE__xop__Include))
		if (a->id || a->type)
			soap->mode |= SOAP_ENC_DIME;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__xop__Include(struct soap *soap, const char *tag, int id, const struct _xop__Include *a, const char *type)
{
#ifndef WITH_LEANER
	id = soap_attachment(soap, tag, id, a, (struct soap_array*)&a->__ptr, a->id, a->type, a->options, 1, type, SOAP_TYPE__xop__Include);
#else
	id = soap_element_id(soap, tag, id, a, (struct soap_array*)&a->__ptr, 1, type, SOAP_TYPE__xop__Include);
#endif
	if (id < 0)
		return soap->error;
	if (soap_element_begin_out(soap, tag, id, type))
		return soap->error;
	if (soap_putbase64(soap, a->__ptr, a->__size))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _xop__Include * SOAP_FMAC4 soap_in__xop__Include(struct soap *soap, const char *tag, struct _xop__Include *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":base64Binary") && soap_match_tag(soap, soap->type, ":base64"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (struct _xop__Include *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__xop__Include, sizeof(struct _xop__Include), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__xop__Include(soap, a);
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
			a = (struct _xop__Include *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__xop__Include, 0, sizeof(struct _xop__Include), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__xop__Include(struct soap *soap, const struct _xop__Include *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE__xop__Include);
	if (soap_out__xop__Include(soap, tag?tag:"xop:Include", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _xop__Include * SOAP_FMAC4 soap_get__xop__Include(struct soap *soap, struct _xop__Include *p, const char *tag, const char *type)
{
	if ((p = soap_in__xop__Include(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__ResolveMatches(struct soap *soap, struct __wsdd__ResolveMatches *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__ResolveMatches = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__ResolveMatches(struct soap *soap, const struct __wsdd__ResolveMatches *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ResolveMatchesType(soap, &a->wsdd__ResolveMatches);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__ResolveMatches(struct soap *soap, const char *tag, int id, const struct __wsdd__ResolveMatches *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__ResolveMatchesType(soap, "wsdd:ResolveMatches", -1, &a->wsdd__ResolveMatches, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__ResolveMatches * SOAP_FMAC4 soap_in___wsdd__ResolveMatches(struct soap *soap, const char *tag, struct __wsdd__ResolveMatches *a, const char *type)
{
	size_t soap_flag_wsdd__ResolveMatches = 1;
	short soap_flag;
	a = (struct __wsdd__ResolveMatches *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__ResolveMatches, sizeof(struct __wsdd__ResolveMatches), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__ResolveMatches(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__ResolveMatches && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ResolveMatchesType(soap, "wsdd:ResolveMatches", &a->wsdd__ResolveMatches, "wsdd:ResolveMatchesType"))
				{	soap_flag_wsdd__ResolveMatches--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__ResolveMatches(struct soap *soap, const struct __wsdd__ResolveMatches *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__ResolveMatches(soap, tag?tag:"-wsdd:ResolveMatches", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__ResolveMatches * SOAP_FMAC4 soap_get___wsdd__ResolveMatches(struct soap *soap, struct __wsdd__ResolveMatches *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__ResolveMatches(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__Resolve(struct soap *soap, struct __wsdd__Resolve *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__Resolve = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__Resolve(struct soap *soap, const struct __wsdd__Resolve *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ResolveType(soap, &a->wsdd__Resolve);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__Resolve(struct soap *soap, const char *tag, int id, const struct __wsdd__Resolve *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__ResolveType(soap, "wsdd:Resolve", -1, &a->wsdd__Resolve, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Resolve * SOAP_FMAC4 soap_in___wsdd__Resolve(struct soap *soap, const char *tag, struct __wsdd__Resolve *a, const char *type)
{
	size_t soap_flag_wsdd__Resolve = 1;
	short soap_flag;
	a = (struct __wsdd__Resolve *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__Resolve, sizeof(struct __wsdd__Resolve), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__Resolve(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__Resolve && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ResolveType(soap, "wsdd:Resolve", &a->wsdd__Resolve, "wsdd:ResolveType"))
				{	soap_flag_wsdd__Resolve--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__Resolve(struct soap *soap, const struct __wsdd__Resolve *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__Resolve(soap, tag?tag:"-wsdd:Resolve", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Resolve * SOAP_FMAC4 soap_get___wsdd__Resolve(struct soap *soap, struct __wsdd__Resolve *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__Resolve(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__ProbeMatches(struct soap *soap, struct __wsdd__ProbeMatches *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__ProbeMatches = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__ProbeMatches(struct soap *soap, const struct __wsdd__ProbeMatches *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ProbeMatchesType(soap, &a->wsdd__ProbeMatches);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__ProbeMatches(struct soap *soap, const char *tag, int id, const struct __wsdd__ProbeMatches *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__ProbeMatchesType(soap, "wsdd:ProbeMatches", -1, &a->wsdd__ProbeMatches, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__ProbeMatches * SOAP_FMAC4 soap_in___wsdd__ProbeMatches(struct soap *soap, const char *tag, struct __wsdd__ProbeMatches *a, const char *type)
{
	size_t soap_flag_wsdd__ProbeMatches = 1;
	short soap_flag;
	a = (struct __wsdd__ProbeMatches *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__ProbeMatches, sizeof(struct __wsdd__ProbeMatches), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__ProbeMatches(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__ProbeMatches && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ProbeMatchesType(soap, "wsdd:ProbeMatches", &a->wsdd__ProbeMatches, "wsdd:ProbeMatchesType"))
				{	soap_flag_wsdd__ProbeMatches--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__ProbeMatches(struct soap *soap, const struct __wsdd__ProbeMatches *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__ProbeMatches(soap, tag?tag:"-wsdd:ProbeMatches", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__ProbeMatches * SOAP_FMAC4 soap_get___wsdd__ProbeMatches(struct soap *soap, struct __wsdd__ProbeMatches *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__ProbeMatches(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__Probe(struct soap *soap, struct __wsdd__Probe *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__Probe = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__Probe(struct soap *soap, const struct __wsdd__Probe *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ProbeType(soap, &a->wsdd__Probe);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__Probe(struct soap *soap, const char *tag, int id, const struct __wsdd__Probe *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__ProbeType(soap, "wsdd:Probe", -1, &a->wsdd__Probe, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Probe * SOAP_FMAC4 soap_in___wsdd__Probe(struct soap *soap, const char *tag, struct __wsdd__Probe *a, const char *type)
{
	size_t soap_flag_wsdd__Probe = 1;
	short soap_flag;
	a = (struct __wsdd__Probe *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__Probe, sizeof(struct __wsdd__Probe), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__Probe(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__Probe && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ProbeType(soap, "wsdd:Probe", &a->wsdd__Probe, "wsdd:ProbeType"))
				{	soap_flag_wsdd__Probe--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__Probe(struct soap *soap, const struct __wsdd__Probe *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__Probe(soap, tag?tag:"-wsdd:Probe", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Probe * SOAP_FMAC4 soap_get___wsdd__Probe(struct soap *soap, struct __wsdd__Probe *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__Probe(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__Bye(struct soap *soap, struct __wsdd__Bye *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__Bye = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__Bye(struct soap *soap, const struct __wsdd__Bye *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ByeType(soap, &a->wsdd__Bye);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__Bye(struct soap *soap, const char *tag, int id, const struct __wsdd__Bye *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__ByeType(soap, "wsdd:Bye", -1, &a->wsdd__Bye, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Bye * SOAP_FMAC4 soap_in___wsdd__Bye(struct soap *soap, const char *tag, struct __wsdd__Bye *a, const char *type)
{
	size_t soap_flag_wsdd__Bye = 1;
	short soap_flag;
	a = (struct __wsdd__Bye *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__Bye, sizeof(struct __wsdd__Bye), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__Bye(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__Bye && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ByeType(soap, "wsdd:Bye", &a->wsdd__Bye, "wsdd:ByeType"))
				{	soap_flag_wsdd__Bye--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__Bye(struct soap *soap, const struct __wsdd__Bye *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__Bye(soap, tag?tag:"-wsdd:Bye", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Bye * SOAP_FMAC4 soap_get___wsdd__Bye(struct soap *soap, struct __wsdd__Bye *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__Bye(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___wsdd__Hello(struct soap *soap, struct __wsdd__Hello *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->wsdd__Hello = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___wsdd__Hello(struct soap *soap, const struct __wsdd__Hello *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__HelloType(soap, &a->wsdd__Hello);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___wsdd__Hello(struct soap *soap, const char *tag, int id, const struct __wsdd__Hello *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTowsdd__HelloType(soap, "wsdd:Hello", -1, &a->wsdd__Hello, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Hello * SOAP_FMAC4 soap_in___wsdd__Hello(struct soap *soap, const char *tag, struct __wsdd__Hello *a, const char *type)
{
	size_t soap_flag_wsdd__Hello = 1;
	short soap_flag;
	a = (struct __wsdd__Hello *)soap_id_enter(soap, "", a, SOAP_TYPE___wsdd__Hello, sizeof(struct __wsdd__Hello), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___wsdd__Hello(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsdd__Hello && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__HelloType(soap, "wsdd:Hello", &a->wsdd__Hello, "wsdd:HelloType"))
				{	soap_flag_wsdd__Hello--;
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

SOAP_FMAC3 int SOAP_FMAC4 soap_put___wsdd__Hello(struct soap *soap, const struct __wsdd__Hello *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___wsdd__Hello(soap, tag?tag:"-wsdd:Hello", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __wsdd__Hello * SOAP_FMAC4 soap_get___wsdd__Hello(struct soap *soap, struct __wsdd__Hello *p, const char *tag, const char *type)
{
	if ((p = soap_in___wsdd__Hello(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__AppSequenceType(struct soap *soap, struct wsdd__AppSequenceType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_unsignedInt(soap, &a->InstanceId);
	soap_default_string(soap, &a->SequenceId);
	soap_default_unsignedInt(soap, &a->MessageNumber);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__AppSequenceType(struct soap *soap, const struct wsdd__AppSequenceType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__AppSequenceType(struct soap *soap, const char *tag, int id, const struct wsdd__AppSequenceType *a, const char *type)
{
	soap_set_attr(soap, "InstanceId", soap_unsignedInt2s(soap, a->InstanceId), 1);
	if (a->SequenceId)
		soap_set_attr(soap, "SequenceId", a->SequenceId, 1);
	soap_set_attr(soap, "MessageNumber", soap_unsignedInt2s(soap, a->MessageNumber), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__AppSequenceType), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__AppSequenceType * SOAP_FMAC4 soap_in_wsdd__AppSequenceType(struct soap *soap, const char *tag, struct wsdd__AppSequenceType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__AppSequenceType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__AppSequenceType, sizeof(struct wsdd__AppSequenceType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__AppSequenceType(soap, a);
	if (soap_s2unsignedInt(soap, soap_attr_value(soap, "InstanceId", 1), &a->InstanceId))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "SequenceId", 0), &a->SequenceId, 0, -1))
		return NULL;
	if (soap_s2unsignedInt(soap, soap_attr_value(soap, "MessageNumber", 1), &a->MessageNumber))
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
	{	a = (struct wsdd__AppSequenceType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__AppSequenceType, 0, sizeof(struct wsdd__AppSequenceType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__AppSequenceType(struct soap *soap, const struct wsdd__AppSequenceType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__AppSequenceType);
	if (soap_out_wsdd__AppSequenceType(soap, tag?tag:"wsdd:AppSequenceType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__AppSequenceType * SOAP_FMAC4 soap_get_wsdd__AppSequenceType(struct soap *soap, struct wsdd__AppSequenceType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__AppSequenceType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__SigType(struct soap *soap, struct wsdd__SigType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Scheme);
	soap_default_string(soap, &a->KeyId);
	soap_default_string(soap, &a->Refs);
	soap_default_string(soap, &a->Sig);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__SigType(struct soap *soap, const struct wsdd__SigType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__SigType(struct soap *soap, const char *tag, int id, const struct wsdd__SigType *a, const char *type)
{
	if (a->Scheme)
		soap_set_attr(soap, "Scheme", a->Scheme, 1);
	if (a->KeyId)
		soap_set_attr(soap, "KeyId", a->KeyId, 1);
	if (a->Refs)
		soap_set_attr(soap, "Refs", a->Refs, 1);
	if (a->Sig)
		soap_set_attr(soap, "Sig", a->Sig, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__SigType), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__SigType * SOAP_FMAC4 soap_in_wsdd__SigType(struct soap *soap, const char *tag, struct wsdd__SigType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__SigType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__SigType, sizeof(struct wsdd__SigType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__SigType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Scheme", 1), &a->Scheme, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "KeyId", 0), &a->KeyId, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Refs", 1), &a->Refs, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Sig", 1), &a->Sig, 0, -1))
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
	{	a = (struct wsdd__SigType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__SigType, 0, sizeof(struct wsdd__SigType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__SigType(struct soap *soap, const struct wsdd__SigType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__SigType);
	if (soap_out_wsdd__SigType(soap, tag?tag:"wsdd:SigType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__SigType * SOAP_FMAC4 soap_get_wsdd__SigType(struct soap *soap, struct wsdd__SigType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__SigType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__SecurityType(struct soap *soap, struct wsdd__SecurityType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Sig = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__SecurityType(struct soap *soap, const struct wsdd__SecurityType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__SigType(soap, &a->Sig);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__SecurityType(struct soap *soap, const char *tag, int id, const struct wsdd__SecurityType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__SecurityType), type))
		return soap->error;
	if (soap_out_PointerTowsdd__SigType(soap, "wsdd:Sig", -1, &a->Sig, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__SecurityType * SOAP_FMAC4 soap_in_wsdd__SecurityType(struct soap *soap, const char *tag, struct wsdd__SecurityType *a, const char *type)
{
	size_t soap_flag_Sig = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__SecurityType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__SecurityType, sizeof(struct wsdd__SecurityType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__SecurityType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Sig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__SigType(soap, "wsdd:Sig", &a->Sig, "wsdd:SigType"))
				{	soap_flag_Sig--;
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
	{	a = (struct wsdd__SecurityType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__SecurityType, 0, sizeof(struct wsdd__SecurityType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__SecurityType(struct soap *soap, const struct wsdd__SecurityType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__SecurityType);
	if (soap_out_wsdd__SecurityType(soap, tag?tag:"wsdd:SecurityType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__SecurityType * SOAP_FMAC4 soap_get_wsdd__SecurityType(struct soap *soap, struct wsdd__SecurityType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__SecurityType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ScopesType(struct soap *soap, struct wsdd__ScopesType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsdd__UriListType(soap, &a->__item);
	soap_default_string(soap, &a->MatchBy);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ScopesType(struct soap *soap, const struct wsdd__ScopesType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_wsdd__UriListType(soap, &a->__item);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ScopesType(struct soap *soap, const char *tag, int id, const struct wsdd__ScopesType *a, const char *type)
{
	if (a->MatchBy)
		soap_set_attr(soap, "MatchBy", a->MatchBy, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	return soap_out_wsdd__UriListType(soap, tag, id, &a->__item, "");
}

SOAP_FMAC3 struct wsdd__ScopesType * SOAP_FMAC4 soap_in_wsdd__ScopesType(struct soap *soap, const char *tag, struct wsdd__ScopesType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (struct wsdd__ScopesType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ScopesType, sizeof(struct wsdd__ScopesType), 0, NULL, NULL, NULL)))
		return NULL;
	soap_revert(soap);
	*soap->id = '\0';
	soap_default_wsdd__ScopesType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "MatchBy", 0), &a->MatchBy, 0, -1))
		return NULL;
	if (!soap_in_wsdd__UriListType(soap, tag, &a->__item, "wsdd:ScopesType"))
		return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ScopesType(struct soap *soap, const struct wsdd__ScopesType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ScopesType);
	if (soap_out_wsdd__ScopesType(soap, tag?tag:"wsdd:ScopesType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ScopesType * SOAP_FMAC4 soap_get_wsdd__ScopesType(struct soap *soap, struct wsdd__ScopesType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ScopesType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ResolveMatchType(struct soap *soap, struct wsdd__ResolveMatchType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_default_wsdd__QNameListType(soap, &a->Types);
	a->Scopes = NULL;
	soap_default_wsdd__UriListType(soap, &a->XAddrs);
	soap_default_unsignedInt(soap, &a->MetadataVersion);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ResolveMatchType(struct soap *soap, const struct wsdd__ResolveMatchType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_serialize_wsdd__QNameListType(soap, &a->Types);
	soap_serialize_PointerTowsdd__ScopesType(soap, &a->Scopes);
	soap_serialize_wsdd__UriListType(soap, &a->XAddrs);
	soap_embedded(soap, &a->MetadataVersion, SOAP_TYPE_unsignedInt);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ResolveMatchType(struct soap *soap, const char *tag, int id, const struct wsdd__ResolveMatchType *a, const char *type)
{
	const char *soap_tmp_Types = soap_QName2s(soap, a->Types);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ResolveMatchType), type))
		return soap->error;
	if (soap_out__wsa__EndpointReference(soap, "wsa:EndpointReference", -1, &a->wsa__EndpointReference, ""))
		return soap->error;
	if (soap_out_wsdd__QNameListType(soap, "wsdd:Types", -1, (char*const*)&soap_tmp_Types, ""))
		return soap->error;
	if (soap_out_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", -1, &a->Scopes, ""))
		return soap->error;
	if (soap_out_wsdd__UriListType(soap, "wsdd:XAddrs", -1, &a->XAddrs, ""))
		return soap->error;
	if (soap_out_unsignedInt(soap, "wsdd:MetadataVersion", -1, &a->MetadataVersion, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ResolveMatchType * SOAP_FMAC4 soap_in_wsdd__ResolveMatchType(struct soap *soap, const char *tag, struct wsdd__ResolveMatchType *a, const char *type)
{
	size_t soap_flag_wsa__EndpointReference = 1;
	size_t soap_flag_Types = 1;
	size_t soap_flag_Scopes = 1;
	size_t soap_flag_XAddrs = 1;
	size_t soap_flag_MetadataVersion = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ResolveMatchType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ResolveMatchType, sizeof(struct wsdd__ResolveMatchType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ResolveMatchType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsa__EndpointReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsa__EndpointReference(soap, "wsa:EndpointReference", &a->wsa__EndpointReference, ""))
				{	soap_flag_wsa__EndpointReference--;
					continue;
				}
			if (soap_flag_Types && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__QNameListType(soap, "wsdd:Types", &a->Types, "wsdd:QNameListType"))
				{	soap_flag_Types--;
					continue;
				}
			if (soap_flag_Scopes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", &a->Scopes, "wsdd:ScopesType"))
				{	soap_flag_Scopes--;
					continue;
				}
			if (soap_flag_XAddrs && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__UriListType(soap, "wsdd:XAddrs", &a->XAddrs, "wsdd:UriListType"))
				{	soap_flag_XAddrs--;
					continue;
				}
			if (soap_flag_MetadataVersion && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_unsignedInt(soap, "wsdd:MetadataVersion", &a->MetadataVersion, "xsd:unsignedInt"))
				{	soap_flag_MetadataVersion--;
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
	{	a = (struct wsdd__ResolveMatchType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ResolveMatchType, 0, sizeof(struct wsdd__ResolveMatchType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_wsa__EndpointReference > 0 || soap_flag_MetadataVersion > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ResolveMatchType(struct soap *soap, const struct wsdd__ResolveMatchType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ResolveMatchType);
	if (soap_out_wsdd__ResolveMatchType(soap, tag?tag:"wsdd:ResolveMatchType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ResolveMatchType * SOAP_FMAC4 soap_get_wsdd__ResolveMatchType(struct soap *soap, struct wsdd__ResolveMatchType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ResolveMatchType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ResolveMatchesType(struct soap *soap, struct wsdd__ResolveMatchesType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->ResolveMatch = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ResolveMatchesType(struct soap *soap, const struct wsdd__ResolveMatchesType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsdd__ResolveMatchType(soap, &a->ResolveMatch);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ResolveMatchesType(struct soap *soap, const char *tag, int id, const struct wsdd__ResolveMatchesType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ResolveMatchesType), type))
		return soap->error;
	if (soap_out_PointerTowsdd__ResolveMatchType(soap, "wsdd:ResolveMatch", -1, &a->ResolveMatch, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ResolveMatchesType * SOAP_FMAC4 soap_in_wsdd__ResolveMatchesType(struct soap *soap, const char *tag, struct wsdd__ResolveMatchesType *a, const char *type)
{
	size_t soap_flag_ResolveMatch = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ResolveMatchesType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ResolveMatchesType, sizeof(struct wsdd__ResolveMatchesType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ResolveMatchesType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ResolveMatch && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ResolveMatchType(soap, "wsdd:ResolveMatch", &a->ResolveMatch, "wsdd:ResolveMatchType"))
				{	soap_flag_ResolveMatch--;
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
	{	a = (struct wsdd__ResolveMatchesType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ResolveMatchesType, 0, sizeof(struct wsdd__ResolveMatchesType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ResolveMatchesType(struct soap *soap, const struct wsdd__ResolveMatchesType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ResolveMatchesType);
	if (soap_out_wsdd__ResolveMatchesType(soap, tag?tag:"wsdd:ResolveMatchesType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ResolveMatchesType * SOAP_FMAC4 soap_get_wsdd__ResolveMatchesType(struct soap *soap, struct wsdd__ResolveMatchesType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ResolveMatchesType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ResolveType(struct soap *soap, struct wsdd__ResolveType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ResolveType(struct soap *soap, const struct wsdd__ResolveType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ResolveType(struct soap *soap, const char *tag, int id, const struct wsdd__ResolveType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ResolveType), type))
		return soap->error;
	soap_element_result(soap, "wsa:EndpointReference");
	if (soap_out__wsa__EndpointReference(soap, "wsa:EndpointReference", -1, &a->wsa__EndpointReference, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ResolveType * SOAP_FMAC4 soap_in_wsdd__ResolveType(struct soap *soap, const char *tag, struct wsdd__ResolveType *a, const char *type)
{
	size_t soap_flag_wsa__EndpointReference = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ResolveType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ResolveType, sizeof(struct wsdd__ResolveType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ResolveType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsa__EndpointReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsa__EndpointReference(soap, "wsa:EndpointReference", &a->wsa__EndpointReference, ""))
				{	soap_flag_wsa__EndpointReference--;
					continue;
				}
			soap_check_result(soap, "wsa:EndpointReference");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsdd__ResolveType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ResolveType, 0, sizeof(struct wsdd__ResolveType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_wsa__EndpointReference > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ResolveType(struct soap *soap, const struct wsdd__ResolveType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ResolveType);
	if (soap_out_wsdd__ResolveType(soap, tag?tag:"wsdd:ResolveType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ResolveType * SOAP_FMAC4 soap_get_wsdd__ResolveType(struct soap *soap, struct wsdd__ResolveType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ResolveType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ProbeMatchType(struct soap *soap, struct wsdd__ProbeMatchType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_default_wsdd__QNameListType(soap, &a->Types);
	a->Scopes = NULL;
	soap_default_wsdd__UriListType(soap, &a->XAddrs);
	soap_default_unsignedInt(soap, &a->MetadataVersion);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ProbeMatchType(struct soap *soap, const struct wsdd__ProbeMatchType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_serialize_wsdd__QNameListType(soap, &a->Types);
	soap_serialize_PointerTowsdd__ScopesType(soap, &a->Scopes);
	soap_serialize_wsdd__UriListType(soap, &a->XAddrs);
	soap_embedded(soap, &a->MetadataVersion, SOAP_TYPE_unsignedInt);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ProbeMatchType(struct soap *soap, const char *tag, int id, const struct wsdd__ProbeMatchType *a, const char *type)
{
	const char *soap_tmp_Types = soap_QName2s(soap, a->Types);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ProbeMatchType), type))
		return soap->error;
	if (soap_out__wsa__EndpointReference(soap, "wsa:EndpointReference", -1, &a->wsa__EndpointReference, ""))
		return soap->error;
	if (soap_out_wsdd__QNameListType(soap, "wsdd:Types", -1, (char*const*)&soap_tmp_Types, ""))
		return soap->error;
	if (soap_out_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", -1, &a->Scopes, ""))
		return soap->error;
	if (soap_out_wsdd__UriListType(soap, "wsdd:XAddrs", -1, &a->XAddrs, ""))
		return soap->error;
	if (soap_out_unsignedInt(soap, "wsdd:MetadataVersion", -1, &a->MetadataVersion, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ProbeMatchType * SOAP_FMAC4 soap_in_wsdd__ProbeMatchType(struct soap *soap, const char *tag, struct wsdd__ProbeMatchType *a, const char *type)
{
	size_t soap_flag_wsa__EndpointReference = 1;
	size_t soap_flag_Types = 1;
	size_t soap_flag_Scopes = 1;
	size_t soap_flag_XAddrs = 1;
	size_t soap_flag_MetadataVersion = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ProbeMatchType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ProbeMatchType, sizeof(struct wsdd__ProbeMatchType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ProbeMatchType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsa__EndpointReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsa__EndpointReference(soap, "wsa:EndpointReference", &a->wsa__EndpointReference, ""))
				{	soap_flag_wsa__EndpointReference--;
					continue;
				}
			if (soap_flag_Types && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__QNameListType(soap, "wsdd:Types", &a->Types, "wsdd:QNameListType"))
				{	soap_flag_Types--;
					continue;
				}
			if (soap_flag_Scopes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", &a->Scopes, "wsdd:ScopesType"))
				{	soap_flag_Scopes--;
					continue;
				}
			if (soap_flag_XAddrs && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__UriListType(soap, "wsdd:XAddrs", &a->XAddrs, "wsdd:UriListType"))
				{	soap_flag_XAddrs--;
					continue;
				}
			if (soap_flag_MetadataVersion && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_unsignedInt(soap, "wsdd:MetadataVersion", &a->MetadataVersion, "xsd:unsignedInt"))
				{	soap_flag_MetadataVersion--;
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
	{	a = (struct wsdd__ProbeMatchType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ProbeMatchType, 0, sizeof(struct wsdd__ProbeMatchType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_wsa__EndpointReference > 0 || soap_flag_MetadataVersion > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ProbeMatchType(struct soap *soap, const struct wsdd__ProbeMatchType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ProbeMatchType);
	if (soap_out_wsdd__ProbeMatchType(soap, tag?tag:"wsdd:ProbeMatchType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ProbeMatchType * SOAP_FMAC4 soap_get_wsdd__ProbeMatchType(struct soap *soap, struct wsdd__ProbeMatchType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ProbeMatchType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ProbeMatchesType(struct soap *soap, struct wsdd__ProbeMatchesType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeProbeMatch = 0;
	a->ProbeMatch = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ProbeMatchesType(struct soap *soap, const struct wsdd__ProbeMatchesType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ProbeMatch)
	{	int i;
		for (i = 0; i < a->__sizeProbeMatch; i++)
		{
			soap_embedded(soap, a->ProbeMatch + i, SOAP_TYPE_wsdd__ProbeMatchType);
			soap_serialize_wsdd__ProbeMatchType(soap, a->ProbeMatch + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ProbeMatchesType(struct soap *soap, const char *tag, int id, const struct wsdd__ProbeMatchesType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ProbeMatchesType), type))
		return soap->error;
	soap_element_result(soap, "-sizeProbeMatch");
	if (a->ProbeMatch)
	{	int i;
		for (i = 0; i < a->__sizeProbeMatch; i++)
			if (soap_out_wsdd__ProbeMatchType(soap, "wsdd:ProbeMatch", -1, a->ProbeMatch + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ProbeMatchesType * SOAP_FMAC4 soap_in_wsdd__ProbeMatchesType(struct soap *soap, const char *tag, struct wsdd__ProbeMatchesType *a, const char *type)
{
	struct soap_blist *soap_blist_ProbeMatch = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ProbeMatchesType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ProbeMatchesType, sizeof(struct wsdd__ProbeMatchesType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ProbeMatchesType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsdd:ProbeMatch", 1, NULL))
			{	if (a->ProbeMatch == NULL)
				{	if (soap_blist_ProbeMatch == NULL)
						soap_blist_ProbeMatch = soap_new_block(soap);
					a->ProbeMatch = (struct wsdd__ProbeMatchType *)soap_push_block(soap, soap_blist_ProbeMatch, sizeof(struct wsdd__ProbeMatchType));
					if (a->ProbeMatch == NULL)
						return NULL;
					soap_default_wsdd__ProbeMatchType(soap, a->ProbeMatch);
				}
				soap_revert(soap);
				if (soap_in_wsdd__ProbeMatchType(soap, "wsdd:ProbeMatch", a->ProbeMatch, "wsdd:ProbeMatchType"))
				{	a->__sizeProbeMatch++;
					a->ProbeMatch = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeProbeMatch");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->ProbeMatch)
			soap_pop_block(soap, soap_blist_ProbeMatch);
		if (a->__sizeProbeMatch)
			a->ProbeMatch = (struct wsdd__ProbeMatchType *)soap_save_block(soap, soap_blist_ProbeMatch, NULL, 1);
		else
		{	a->ProbeMatch = NULL;
			if (soap_blist_ProbeMatch)
				soap_end_block(soap, soap_blist_ProbeMatch);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsdd__ProbeMatchesType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ProbeMatchesType, 0, sizeof(struct wsdd__ProbeMatchesType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ProbeMatchesType(struct soap *soap, const struct wsdd__ProbeMatchesType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ProbeMatchesType);
	if (soap_out_wsdd__ProbeMatchesType(soap, tag?tag:"wsdd:ProbeMatchesType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ProbeMatchesType * SOAP_FMAC4 soap_get_wsdd__ProbeMatchesType(struct soap *soap, struct wsdd__ProbeMatchesType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ProbeMatchesType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ProbeType(struct soap *soap, struct wsdd__ProbeType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsdd__QNameListType(soap, &a->Types);
	a->Scopes = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ProbeType(struct soap *soap, const struct wsdd__ProbeType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_wsdd__QNameListType(soap, &a->Types);
	soap_serialize_PointerTowsdd__ScopesType(soap, &a->Scopes);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ProbeType(struct soap *soap, const char *tag, int id, const struct wsdd__ProbeType *a, const char *type)
{
	const char *soap_tmp_Types = soap_QName2s(soap, a->Types);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ProbeType), type))
		return soap->error;
	if (soap_out_wsdd__QNameListType(soap, "wsdd:Types", -1, (char*const*)&soap_tmp_Types, ""))
		return soap->error;
	if (soap_out_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", -1, &a->Scopes, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ProbeType * SOAP_FMAC4 soap_in_wsdd__ProbeType(struct soap *soap, const char *tag, struct wsdd__ProbeType *a, const char *type)
{
	size_t soap_flag_Types = 1;
	size_t soap_flag_Scopes = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ProbeType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ProbeType, sizeof(struct wsdd__ProbeType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ProbeType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Types && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__QNameListType(soap, "wsdd:Types", &a->Types, "wsdd:QNameListType"))
				{	soap_flag_Types--;
					continue;
				}
			if (soap_flag_Scopes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", &a->Scopes, "wsdd:ScopesType"))
				{	soap_flag_Scopes--;
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
	{	a = (struct wsdd__ProbeType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ProbeType, 0, sizeof(struct wsdd__ProbeType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ProbeType(struct soap *soap, const struct wsdd__ProbeType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ProbeType);
	if (soap_out_wsdd__ProbeType(soap, tag?tag:"wsdd:ProbeType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ProbeType * SOAP_FMAC4 soap_get_wsdd__ProbeType(struct soap *soap, struct wsdd__ProbeType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ProbeType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__ByeType(struct soap *soap, struct wsdd__ByeType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_default_wsdd__QNameListType(soap, &a->Types);
	a->Scopes = NULL;
	soap_default_wsdd__UriListType(soap, &a->XAddrs);
	a->MetadataVersion = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__ByeType(struct soap *soap, const struct wsdd__ByeType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_serialize_wsdd__QNameListType(soap, &a->Types);
	soap_serialize_PointerTowsdd__ScopesType(soap, &a->Scopes);
	soap_serialize_wsdd__UriListType(soap, &a->XAddrs);
	soap_serialize_PointerTounsignedInt(soap, &a->MetadataVersion);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__ByeType(struct soap *soap, const char *tag, int id, const struct wsdd__ByeType *a, const char *type)
{
	const char *soap_tmp_Types = soap_QName2s(soap, a->Types);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__ByeType), type))
		return soap->error;
	if (soap_out__wsa__EndpointReference(soap, "wsa:EndpointReference", -1, &a->wsa__EndpointReference, ""))
		return soap->error;
	if (soap_out_wsdd__QNameListType(soap, "wsdd:Types", -1, (char*const*)&soap_tmp_Types, ""))
		return soap->error;
	if (soap_out_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", -1, &a->Scopes, ""))
		return soap->error;
	if (soap_out_wsdd__UriListType(soap, "wsdd:XAddrs", -1, &a->XAddrs, ""))
		return soap->error;
	if (soap_out_PointerTounsignedInt(soap, "wsdd:MetadataVersion", -1, &a->MetadataVersion, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__ByeType * SOAP_FMAC4 soap_in_wsdd__ByeType(struct soap *soap, const char *tag, struct wsdd__ByeType *a, const char *type)
{
	size_t soap_flag_wsa__EndpointReference = 1;
	size_t soap_flag_Types = 1;
	size_t soap_flag_Scopes = 1;
	size_t soap_flag_XAddrs = 1;
	size_t soap_flag_MetadataVersion = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__ByeType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__ByeType, sizeof(struct wsdd__ByeType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__ByeType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsa__EndpointReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsa__EndpointReference(soap, "wsa:EndpointReference", &a->wsa__EndpointReference, ""))
				{	soap_flag_wsa__EndpointReference--;
					continue;
				}
			if (soap_flag_Types && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__QNameListType(soap, "wsdd:Types", &a->Types, "wsdd:QNameListType"))
				{	soap_flag_Types--;
					continue;
				}
			if (soap_flag_Scopes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", &a->Scopes, "wsdd:ScopesType"))
				{	soap_flag_Scopes--;
					continue;
				}
			if (soap_flag_XAddrs && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__UriListType(soap, "wsdd:XAddrs", &a->XAddrs, "wsdd:UriListType"))
				{	soap_flag_XAddrs--;
					continue;
				}
			if (soap_flag_MetadataVersion && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTounsignedInt(soap, "wsdd:MetadataVersion", &a->MetadataVersion, "xsd:unsignedInt"))
				{	soap_flag_MetadataVersion--;
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
	{	a = (struct wsdd__ByeType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__ByeType, 0, sizeof(struct wsdd__ByeType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_wsa__EndpointReference > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__ByeType(struct soap *soap, const struct wsdd__ByeType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__ByeType);
	if (soap_out_wsdd__ByeType(soap, tag?tag:"wsdd:ByeType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsdd__ByeType * SOAP_FMAC4 soap_get_wsdd__ByeType(struct soap *soap, struct wsdd__ByeType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__ByeType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__HelloType(struct soap *soap, struct wsdd__HelloType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_default_wsdd__QNameListType(soap, &a->Types);
	a->Scopes = NULL;
	soap_default_wsdd__UriListType(soap, &a->XAddrs);
	soap_default_unsignedInt(soap, &a->MetadataVersion);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsdd__HelloType(struct soap *soap, const struct wsdd__HelloType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__wsa__EndpointReference(soap, &a->wsa__EndpointReference);
	soap_serialize_wsdd__QNameListType(soap, &a->Types);
	soap_serialize_PointerTowsdd__ScopesType(soap, &a->Scopes);
	soap_serialize_wsdd__UriListType(soap, &a->XAddrs);
	soap_embedded(soap, &a->MetadataVersion, SOAP_TYPE_unsignedInt);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__HelloType(struct soap *soap, const char *tag, int id, const struct wsdd__HelloType *a, const char *type)
{
	const char *soap_tmp_Types = soap_QName2s(soap, a->Types);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__HelloType), type))
		return soap->error;
	if (soap_out__wsa__EndpointReference(soap, "wsa:EndpointReference", -1, &a->wsa__EndpointReference, ""))
		return soap->error;
	if (soap_out_wsdd__QNameListType(soap, "wsdd:Types", -1, (char*const*)&soap_tmp_Types, ""))
		return soap->error;
	if (soap_out_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", -1, &a->Scopes, ""))
		return soap->error;
	if (soap_out_wsdd__UriListType(soap, "wsdd:XAddrs", -1, &a->XAddrs, ""))
		return soap->error;
	if (soap_out_unsignedInt(soap, "wsdd:MetadataVersion", -1, &a->MetadataVersion, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsdd__HelloType * SOAP_FMAC4 soap_in_wsdd__HelloType(struct soap *soap, const char *tag, struct wsdd__HelloType *a, const char *type)
{
	size_t soap_flag_wsa__EndpointReference = 1;
	size_t soap_flag_Types = 1;
	size_t soap_flag_Scopes = 1;
	size_t soap_flag_XAddrs = 1;
	size_t soap_flag_MetadataVersion = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsdd__HelloType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__HelloType, sizeof(struct wsdd__HelloType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsdd__HelloType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_wsa__EndpointReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsa__EndpointReference(soap, "wsa:EndpointReference", &a->wsa__EndpointReference, ""))
				{	soap_flag_wsa__EndpointReference--;
					continue;
				}
			if (soap_flag_Types && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__QNameListType(soap, "wsdd:Types", &a->Types, "wsdd:QNameListType"))
				{	soap_flag_Types--;
					continue;
				}
			if (soap_flag_Scopes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsdd__ScopesType(soap, "wsdd:Scopes", &a->Scopes, "wsdd:ScopesType"))
				{	soap_flag_Scopes--;
					continue;
				}
			if (soap_flag_XAddrs && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsdd__UriListType(soap, "wsdd:XAddrs", &a->XAddrs, "wsdd:UriListType"))
				{	soap_flag_XAddrs--;
					continue;
				}
			if (soap_flag_MetadataVersion && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_unsignedInt(soap, "wsdd:MetadataVersion", &a->MetadataVersion, "xsd:unsignedInt"))
				{	soap_flag_MetadataVersion--;
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
	{	a = (struct wsdd__HelloType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__HelloType, 0, sizeof(struct wsdd__HelloType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_wsa__EndpointReference > 0 || soap_flag_MetadataVersion > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

#ifdef __cplusplus
}
#endif

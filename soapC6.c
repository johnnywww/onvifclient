#include "soapH.h"

#ifdef __cplusplus
extern "C" {
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MotionInCells(struct soap *soap, const struct tt__MotionInCells *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MotionInCells);
	if (soap_out_tt__MotionInCells(soap, tag?tag:"tt:MotionInCells", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MotionInCells * SOAP_FMAC4 soap_get_tt__MotionInCells(struct soap *soap, struct tt__MotionInCells *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionInCells(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FrameExtension(struct soap *soap, struct tt__FrameExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->MotionInCells = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FrameExtension(struct soap *soap, const struct tt__FrameExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MotionInCells(soap, &a->MotionInCells);
	soap_serialize_PointerTott__FrameExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FrameExtension(struct soap *soap, const char *tag, int id, const struct tt__FrameExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FrameExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MotionInCells(soap, "tt:MotionInCells", -1, &a->MotionInCells, ""))
		return soap->error;
	if (soap_out_PointerTott__FrameExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FrameExtension * SOAP_FMAC4 soap_in_tt__FrameExtension(struct soap *soap, const char *tag, struct tt__FrameExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_MotionInCells = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FrameExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FrameExtension, sizeof(struct tt__FrameExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FrameExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MotionInCells && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MotionInCells(soap, "tt:MotionInCells", &a->MotionInCells, "tt:MotionInCells"))
				{	soap_flag_MotionInCells--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FrameExtension2(soap, "tt:Extension", &a->Extension, "tt:FrameExtension2"))
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
	{	a = (struct tt__FrameExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FrameExtension, 0, sizeof(struct tt__FrameExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FrameExtension(struct soap *soap, const struct tt__FrameExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FrameExtension);
	if (soap_out_tt__FrameExtension(soap, tag?tag:"tt:FrameExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FrameExtension * SOAP_FMAC4 soap_get_tt__FrameExtension(struct soap *soap, struct tt__FrameExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FrameExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ObjectTree(struct soap *soap, struct tt__ObjectTree *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeRename = 0;
	a->Rename = NULL;
	a->__sizeSplit = 0;
	a->Split = NULL;
	a->__sizeMerge = 0;
	a->Merge = NULL;
	a->__sizeDelete = 0;
	a->Delete = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ObjectTree(struct soap *soap, const struct tt__ObjectTree *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Rename)
	{	int i;
		for (i = 0; i < a->__sizeRename; i++)
		{
			soap_embedded(soap, a->Rename + i, SOAP_TYPE_tt__Rename);
			soap_serialize_tt__Rename(soap, a->Rename + i);
		}
	}
	if (a->Split)
	{	int i;
		for (i = 0; i < a->__sizeSplit; i++)
		{
			soap_embedded(soap, a->Split + i, SOAP_TYPE_tt__Split);
			soap_serialize_tt__Split(soap, a->Split + i);
		}
	}
	if (a->Merge)
	{	int i;
		for (i = 0; i < a->__sizeMerge; i++)
		{
			soap_embedded(soap, a->Merge + i, SOAP_TYPE_tt__Merge);
			soap_serialize_tt__Merge(soap, a->Merge + i);
		}
	}
	if (a->Delete)
	{	int i;
		for (i = 0; i < a->__sizeDelete; i++)
		{
			soap_embedded(soap, a->Delete + i, SOAP_TYPE_tt__ObjectId);
			soap_serialize_tt__ObjectId(soap, a->Delete + i);
		}
	}
	soap_serialize_PointerTott__ObjectTreeExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectTree(struct soap *soap, const char *tag, int id, const struct tt__ObjectTree *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectTree), type))
		return soap->error;
	if (a->Rename)
	{	int i;
		for (i = 0; i < a->__sizeRename; i++)
			if (soap_out_tt__Rename(soap, "tt:Rename", -1, a->Rename + i, ""))
				return soap->error;
	}
	if (a->Split)
	{	int i;
		for (i = 0; i < a->__sizeSplit; i++)
			if (soap_out_tt__Split(soap, "tt:Split", -1, a->Split + i, ""))
				return soap->error;
	}
	if (a->Merge)
	{	int i;
		for (i = 0; i < a->__sizeMerge; i++)
			if (soap_out_tt__Merge(soap, "tt:Merge", -1, a->Merge + i, ""))
				return soap->error;
	}
	if (a->Delete)
	{	int i;
		for (i = 0; i < a->__sizeDelete; i++)
			if (soap_out_tt__ObjectId(soap, "tt:Delete", -1, a->Delete + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ObjectTreeExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ObjectTree * SOAP_FMAC4 soap_in_tt__ObjectTree(struct soap *soap, const char *tag, struct tt__ObjectTree *a, const char *type)
{
	struct soap_blist *soap_blist_Rename = NULL;
	struct soap_blist *soap_blist_Split = NULL;
	struct soap_blist *soap_blist_Merge = NULL;
	struct soap_blist *soap_blist_Delete = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ObjectTree *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectTree, sizeof(struct tt__ObjectTree), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ObjectTree(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Rename", 1, NULL))
			{	if (a->Rename == NULL)
				{	if (soap_blist_Rename == NULL)
						soap_blist_Rename = soap_new_block(soap);
					a->Rename = (struct tt__Rename *)soap_push_block(soap, soap_blist_Rename, sizeof(struct tt__Rename));
					if (a->Rename == NULL)
						return NULL;
					soap_default_tt__Rename(soap, a->Rename);
				}
				soap_revert(soap);
				if (soap_in_tt__Rename(soap, "tt:Rename", a->Rename, "tt:Rename"))
				{	a->__sizeRename++;
					a->Rename = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Split", 1, NULL))
			{	if (a->Split == NULL)
				{	if (soap_blist_Split == NULL)
						soap_blist_Split = soap_new_block(soap);
					a->Split = (struct tt__Split *)soap_push_block(soap, soap_blist_Split, sizeof(struct tt__Split));
					if (a->Split == NULL)
						return NULL;
					soap_default_tt__Split(soap, a->Split);
				}
				soap_revert(soap);
				if (soap_in_tt__Split(soap, "tt:Split", a->Split, "tt:Split"))
				{	a->__sizeSplit++;
					a->Split = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Merge", 1, NULL))
			{	if (a->Merge == NULL)
				{	if (soap_blist_Merge == NULL)
						soap_blist_Merge = soap_new_block(soap);
					a->Merge = (struct tt__Merge *)soap_push_block(soap, soap_blist_Merge, sizeof(struct tt__Merge));
					if (a->Merge == NULL)
						return NULL;
					soap_default_tt__Merge(soap, a->Merge);
				}
				soap_revert(soap);
				if (soap_in_tt__Merge(soap, "tt:Merge", a->Merge, "tt:Merge"))
				{	a->__sizeMerge++;
					a->Merge = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Delete", 1, NULL))
			{	if (a->Delete == NULL)
				{	if (soap_blist_Delete == NULL)
						soap_blist_Delete = soap_new_block(soap);
					a->Delete = (struct tt__ObjectId *)soap_push_block(soap, soap_blist_Delete, sizeof(struct tt__ObjectId));
					if (a->Delete == NULL)
						return NULL;
					soap_default_tt__ObjectId(soap, a->Delete);
				}
				soap_revert(soap);
				if (soap_in_tt__ObjectId(soap, "tt:Delete", a->Delete, "tt:ObjectId"))
				{	a->__sizeDelete++;
					a->Delete = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectTreeExtension(soap, "tt:Extension", &a->Extension, "tt:ObjectTreeExtension"))
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
		if (a->Rename)
			soap_pop_block(soap, soap_blist_Rename);
		if (a->__sizeRename)
			a->Rename = (struct tt__Rename *)soap_save_block(soap, soap_blist_Rename, NULL, 1);
		else
		{	a->Rename = NULL;
			if (soap_blist_Rename)
				soap_end_block(soap, soap_blist_Rename);
		}
		if (a->Split)
			soap_pop_block(soap, soap_blist_Split);
		if (a->__sizeSplit)
			a->Split = (struct tt__Split *)soap_save_block(soap, soap_blist_Split, NULL, 1);
		else
		{	a->Split = NULL;
			if (soap_blist_Split)
				soap_end_block(soap, soap_blist_Split);
		}
		if (a->Merge)
			soap_pop_block(soap, soap_blist_Merge);
		if (a->__sizeMerge)
			a->Merge = (struct tt__Merge *)soap_save_block(soap, soap_blist_Merge, NULL, 1);
		else
		{	a->Merge = NULL;
			if (soap_blist_Merge)
				soap_end_block(soap, soap_blist_Merge);
		}
		if (a->Delete)
			soap_pop_block(soap, soap_blist_Delete);
		if (a->__sizeDelete)
			a->Delete = (struct tt__ObjectId *)soap_save_block(soap, soap_blist_Delete, NULL, 1);
		else
		{	a->Delete = NULL;
			if (soap_blist_Delete)
				soap_end_block(soap, soap_blist_Delete);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ObjectTree *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectTree, 0, sizeof(struct tt__ObjectTree), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ObjectTree(struct soap *soap, const struct tt__ObjectTree *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ObjectTree);
	if (soap_out_tt__ObjectTree(soap, tag?tag:"tt:ObjectTree", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ObjectTree * SOAP_FMAC4 soap_get_tt__ObjectTree(struct soap *soap, struct tt__ObjectTree *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectTree(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Object(struct soap *soap, struct tt__Object *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__integer(soap, &a->ObjectId);
	a->Appearance = NULL;
	a->Behaviour = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Object(struct soap *soap, const struct tt__Object *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Appearance(soap, &a->Appearance);
	soap_serialize_PointerTott__Behaviour(soap, &a->Behaviour);
	soap_serialize_PointerTott__ObjectExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Object(struct soap *soap, const char *tag, int id, const struct tt__Object *a, const char *type)
{
	if (a->ObjectId)
		soap_set_attr(soap, "ObjectId", a->ObjectId, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Object), type))
		return soap->error;
	if (soap_out_PointerTott__Appearance(soap, "tt:Appearance", -1, &a->Appearance, ""))
		return soap->error;
	if (soap_out_PointerTott__Behaviour(soap, "tt:Behaviour", -1, &a->Behaviour, ""))
		return soap->error;
	if (soap_out_PointerTott__ObjectExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Object * SOAP_FMAC4 soap_in_tt__Object(struct soap *soap, const char *tag, struct tt__Object *a, const char *type)
{
	size_t soap_flag_Appearance = 1;
	size_t soap_flag_Behaviour = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Object *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Object, sizeof(struct tt__Object), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Object(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "ObjectId", 0), &a->ObjectId, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Appearance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Appearance(soap, "tt:Appearance", &a->Appearance, "tt:Appearance"))
				{	soap_flag_Appearance--;
					continue;
				}
			if (soap_flag_Behaviour && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Behaviour(soap, "tt:Behaviour", &a->Behaviour, "tt:Behaviour"))
				{	soap_flag_Behaviour--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectExtension(soap, "tt:Extension", &a->Extension, "tt:ObjectExtension"))
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
	{	a = (struct tt__Object *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Object, 0, sizeof(struct tt__Object), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Object(struct soap *soap, const struct tt__Object *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Object);
	if (soap_out_tt__Object(soap, tag?tag:"tt:Object", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Object * SOAP_FMAC4 soap_get_tt__Object(struct soap *soap, struct tt__Object *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Object(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Frame(struct soap *soap, struct tt__Frame *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PTZStatus = NULL;
	a->Transformation = NULL;
	a->__sizeObject = 0;
	a->Object = NULL;
	a->ObjectTree = NULL;
	a->Extension = NULL;
	soap_default_time(soap, &a->UtcTime);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Frame(struct soap *soap, const struct tt__Frame *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZStatus(soap, &a->PTZStatus);
	soap_serialize_PointerTott__Transformation(soap, &a->Transformation);
	if (a->Object)
	{	int i;
		for (i = 0; i < a->__sizeObject; i++)
		{
			soap_embedded(soap, a->Object + i, SOAP_TYPE_tt__Object);
			soap_serialize_tt__Object(soap, a->Object + i);
		}
	}
	soap_serialize_PointerTott__ObjectTree(soap, &a->ObjectTree);
	soap_serialize_PointerTott__FrameExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Frame(struct soap *soap, const char *tag, int id, const struct tt__Frame *a, const char *type)
{
	soap_set_attr(soap, "UtcTime", soap_dateTime2s(soap, a->UtcTime), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Frame), type))
		return soap->error;
	if (soap_out_PointerTott__PTZStatus(soap, "tt:PTZStatus", -1, &a->PTZStatus, ""))
		return soap->error;
	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &a->Transformation, ""))
		return soap->error;
	if (a->Object)
	{	int i;
		for (i = 0; i < a->__sizeObject; i++)
			if (soap_out_tt__Object(soap, "tt:Object", -1, a->Object + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ObjectTree(soap, "tt:ObjectTree", -1, &a->ObjectTree, ""))
		return soap->error;
	if (soap_out_PointerTott__FrameExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Frame * SOAP_FMAC4 soap_in_tt__Frame(struct soap *soap, const char *tag, struct tt__Frame *a, const char *type)
{
	size_t soap_flag_PTZStatus = 1;
	size_t soap_flag_Transformation = 1;
	struct soap_blist *soap_blist_Object = NULL;
	size_t soap_flag_ObjectTree = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Frame *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Frame, sizeof(struct tt__Frame), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Frame(soap, a);
	if (soap_s2dateTime(soap, soap_attr_value(soap, "UtcTime", 1), &a->UtcTime))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatus(soap, "tt:PTZStatus", &a->PTZStatus, "tt:PTZStatus"))
				{	soap_flag_PTZStatus--;
					continue;
				}
			if (soap_flag_Transformation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transformation(soap, "tt:Transformation", &a->Transformation, "tt:Transformation"))
				{	soap_flag_Transformation--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Object", 1, NULL))
			{	if (a->Object == NULL)
				{	if (soap_blist_Object == NULL)
						soap_blist_Object = soap_new_block(soap);
					a->Object = (struct tt__Object *)soap_push_block(soap, soap_blist_Object, sizeof(struct tt__Object));
					if (a->Object == NULL)
						return NULL;
					soap_default_tt__Object(soap, a->Object);
				}
				soap_revert(soap);
				if (soap_in_tt__Object(soap, "tt:Object", a->Object, "tt:Object"))
				{	a->__sizeObject++;
					a->Object = NULL;
					continue;
				}
			}
			if (soap_flag_ObjectTree && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectTree(soap, "tt:ObjectTree", &a->ObjectTree, "tt:ObjectTree"))
				{	soap_flag_ObjectTree--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FrameExtension(soap, "tt:Extension", &a->Extension, "tt:FrameExtension"))
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
		if (a->Object)
			soap_pop_block(soap, soap_blist_Object);
		if (a->__sizeObject)
			a->Object = (struct tt__Object *)soap_save_block(soap, soap_blist_Object, NULL, 1);
		else
		{	a->Object = NULL;
			if (soap_blist_Object)
				soap_end_block(soap, soap_blist_Object);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Frame *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Frame, 0, sizeof(struct tt__Frame), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Frame(struct soap *soap, const struct tt__Frame *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Frame);
	if (soap_out_tt__Frame(soap, tag?tag:"tt:Frame", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Frame * SOAP_FMAC4 soap_get_tt__Frame(struct soap *soap, struct tt__Frame *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Frame(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TransformationExtension(struct soap *soap, struct tt__TransformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TransformationExtension(struct soap *soap, const struct tt__TransformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TransformationExtension(struct soap *soap, const char *tag, int id, const struct tt__TransformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TransformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TransformationExtension * SOAP_FMAC4 soap_in_tt__TransformationExtension(struct soap *soap, const char *tag, struct tt__TransformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TransformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TransformationExtension, sizeof(struct tt__TransformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TransformationExtension(soap, a);
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
	{	a = (struct tt__TransformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TransformationExtension, 0, sizeof(struct tt__TransformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TransformationExtension(struct soap *soap, const struct tt__TransformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TransformationExtension);
	if (soap_out_tt__TransformationExtension(soap, tag?tag:"tt:TransformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TransformationExtension * SOAP_FMAC4 soap_get_tt__TransformationExtension(struct soap *soap, struct tt__TransformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TransformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ObjectExtension(struct soap *soap, struct tt__ObjectExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ObjectExtension(struct soap *soap, const struct tt__ObjectExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectExtension(struct soap *soap, const char *tag, int id, const struct tt__ObjectExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ObjectExtension * SOAP_FMAC4 soap_in_tt__ObjectExtension(struct soap *soap, const char *tag, struct tt__ObjectExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ObjectExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectExtension, sizeof(struct tt__ObjectExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ObjectExtension(soap, a);
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
	{	a = (struct tt__ObjectExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectExtension, 0, sizeof(struct tt__ObjectExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ObjectExtension(struct soap *soap, const struct tt__ObjectExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ObjectExtension);
	if (soap_out_tt__ObjectExtension(soap, tag?tag:"tt:ObjectExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ObjectExtension * SOAP_FMAC4 soap_get_tt__ObjectExtension(struct soap *soap, struct tt__ObjectExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ClassDescriptorExtension2(struct soap *soap, struct tt__ClassDescriptorExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ClassDescriptorExtension2(struct soap *soap, const struct tt__ClassDescriptorExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptorExtension2(struct soap *soap, const char *tag, int id, const struct tt__ClassDescriptorExtension2 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptorExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ClassDescriptorExtension2 * SOAP_FMAC4 soap_in_tt__ClassDescriptorExtension2(struct soap *soap, const char *tag, struct tt__ClassDescriptorExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ClassDescriptorExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptorExtension2, sizeof(struct tt__ClassDescriptorExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ClassDescriptorExtension2(soap, a);
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
	{	a = (struct tt__ClassDescriptorExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptorExtension2, 0, sizeof(struct tt__ClassDescriptorExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ClassDescriptorExtension2(struct soap *soap, const struct tt__ClassDescriptorExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptorExtension2);
	if (soap_out_tt__ClassDescriptorExtension2(soap, tag?tag:"tt:ClassDescriptorExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ClassDescriptorExtension2 * SOAP_FMAC4 soap_get_tt__ClassDescriptorExtension2(struct soap *soap, struct tt__ClassDescriptorExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptorExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__OtherType(struct soap *soap, struct tt__OtherType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Type);
	soap_default_float(soap, &a->Likelihood);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__OtherType(struct soap *soap, const struct tt__OtherType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Type);
	soap_embedded(soap, &a->Likelihood, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__OtherType(struct soap *soap, const char *tag, int id, const struct tt__OtherType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__OtherType), type))
		return soap->error;
	if (a->Type)
	{	if (soap_out_string(soap, "tt:Type", -1, &a->Type, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Type"))
		return soap->error;
	if (soap_out_float(soap, "tt:Likelihood", -1, &a->Likelihood, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__OtherType * SOAP_FMAC4 soap_in_tt__OtherType(struct soap *soap, const char *tag, struct tt__OtherType *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_Likelihood = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__OtherType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__OtherType, sizeof(struct tt__OtherType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__OtherType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Type", &a->Type, "xsd:string"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_Likelihood && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Likelihood", &a->Likelihood, "xsd:float"))
				{	soap_flag_Likelihood--;
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
	{	a = (struct tt__OtherType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__OtherType, 0, sizeof(struct tt__OtherType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0 || soap_flag_Likelihood > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__OtherType(struct soap *soap, const struct tt__OtherType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__OtherType);
	if (soap_out_tt__OtherType(soap, tag?tag:"tt:OtherType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__OtherType * SOAP_FMAC4 soap_get_tt__OtherType(struct soap *soap, struct tt__OtherType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__OtherType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ClassDescriptorExtension(struct soap *soap, struct tt__ClassDescriptorExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__sizeOtherTypes = 0;
	a->OtherTypes = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ClassDescriptorExtension(struct soap *soap, const struct tt__ClassDescriptorExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->OtherTypes)
	{	int i;
		for (i = 0; i < a->__sizeOtherTypes; i++)
		{
			soap_embedded(soap, a->OtherTypes + i, SOAP_TYPE_tt__OtherType);
			soap_serialize_tt__OtherType(soap, a->OtherTypes + i);
		}
	}
	soap_serialize_PointerTott__ClassDescriptorExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptorExtension(struct soap *soap, const char *tag, int id, const struct tt__ClassDescriptorExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptorExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (a->OtherTypes)
	{	int i;
		for (i = 0; i < a->__sizeOtherTypes; i++)
			if (soap_out_tt__OtherType(soap, "tt:OtherTypes", -1, a->OtherTypes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ClassDescriptorExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ClassDescriptorExtension * SOAP_FMAC4 soap_in_tt__ClassDescriptorExtension(struct soap *soap, const char *tag, struct tt__ClassDescriptorExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	struct soap_blist *soap_blist_OtherTypes = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ClassDescriptorExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptorExtension, sizeof(struct tt__ClassDescriptorExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ClassDescriptorExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:OtherTypes", 1, NULL))
			{	if (a->OtherTypes == NULL)
				{	if (soap_blist_OtherTypes == NULL)
						soap_blist_OtherTypes = soap_new_block(soap);
					a->OtherTypes = (struct tt__OtherType *)soap_push_block(soap, soap_blist_OtherTypes, sizeof(struct tt__OtherType));
					if (a->OtherTypes == NULL)
						return NULL;
					soap_default_tt__OtherType(soap, a->OtherTypes);
				}
				soap_revert(soap);
				if (soap_in_tt__OtherType(soap, "tt:OtherTypes", a->OtherTypes, "tt:OtherType"))
				{	a->__sizeOtherTypes++;
					a->OtherTypes = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptorExtension2(soap, "tt:Extension", &a->Extension, "tt:ClassDescriptorExtension2"))
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
		if (a->OtherTypes)
			soap_pop_block(soap, soap_blist_OtherTypes);
		if (a->__sizeOtherTypes)
			a->OtherTypes = (struct tt__OtherType *)soap_save_block(soap, soap_blist_OtherTypes, NULL, 1);
		else
		{	a->OtherTypes = NULL;
			if (soap_blist_OtherTypes)
				soap_end_block(soap, soap_blist_OtherTypes);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ClassDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptorExtension, 0, sizeof(struct tt__ClassDescriptorExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeOtherTypes < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ClassDescriptorExtension(struct soap *soap, const struct tt__ClassDescriptorExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptorExtension);
	if (soap_out_tt__ClassDescriptorExtension(soap, tag?tag:"tt:ClassDescriptorExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ClassDescriptorExtension * SOAP_FMAC4 soap_get_tt__ClassDescriptorExtension(struct soap *soap, struct tt__ClassDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ClassDescriptor_ClassCandidate(struct soap *soap, struct _tt__ClassDescriptor_ClassCandidate *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ClassType(soap, &a->Type);
	soap_default_float(soap, &a->Likelihood);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const struct _tt__ClassDescriptor_ClassCandidate *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Likelihood, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const char *tag, int id, const struct _tt__ClassDescriptor_ClassCandidate *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate), type))
		return soap->error;
	if (soap_out_tt__ClassType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Likelihood", -1, &a->Likelihood, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ClassDescriptor_ClassCandidate * SOAP_FMAC4 soap_in__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const char *tag, struct _tt__ClassDescriptor_ClassCandidate *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_Likelihood = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ClassDescriptor_ClassCandidate *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate, sizeof(struct _tt__ClassDescriptor_ClassCandidate), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ClassDescriptor_ClassCandidate(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ClassType(soap, "tt:Type", &a->Type, "tt:ClassType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_Likelihood && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Likelihood", &a->Likelihood, "xsd:float"))
				{	soap_flag_Likelihood--;
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
	{	a = (struct _tt__ClassDescriptor_ClassCandidate *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate, 0, sizeof(struct _tt__ClassDescriptor_ClassCandidate), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0 || soap_flag_Likelihood > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const struct _tt__ClassDescriptor_ClassCandidate *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate);
	if (soap_out__tt__ClassDescriptor_ClassCandidate(soap, tag?tag:"tt:ClassDescriptor-ClassCandidate", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ClassDescriptor_ClassCandidate * SOAP_FMAC4 soap_get__tt__ClassDescriptor_ClassCandidate(struct soap *soap, struct _tt__ClassDescriptor_ClassCandidate *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ClassDescriptor_ClassCandidate(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ColorDescriptorExtension(struct soap *soap, struct tt__ColorDescriptorExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ColorDescriptorExtension(struct soap *soap, const struct tt__ColorDescriptorExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorDescriptorExtension(struct soap *soap, const char *tag, int id, const struct tt__ColorDescriptorExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ColorDescriptorExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ColorDescriptorExtension * SOAP_FMAC4 soap_in_tt__ColorDescriptorExtension(struct soap *soap, const char *tag, struct tt__ColorDescriptorExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ColorDescriptorExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorDescriptorExtension, sizeof(struct tt__ColorDescriptorExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ColorDescriptorExtension(soap, a);
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
	{	a = (struct tt__ColorDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ColorDescriptorExtension, 0, sizeof(struct tt__ColorDescriptorExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ColorDescriptorExtension(struct soap *soap, const struct tt__ColorDescriptorExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ColorDescriptorExtension);
	if (soap_out_tt__ColorDescriptorExtension(soap, tag?tag:"tt:ColorDescriptorExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ColorDescriptorExtension * SOAP_FMAC4 soap_get_tt__ColorDescriptorExtension(struct soap *soap, struct tt__ColorDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ColorDescriptor_ColorCluster(struct soap *soap, struct _tt__ColorDescriptor_ColorCluster *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Color = NULL;
	a->Weight = NULL;
	a->Covariance = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ColorDescriptor_ColorCluster(struct soap *soap, const struct _tt__ColorDescriptor_ColorCluster *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Color(soap, &a->Color);
	soap_serialize_PointerTofloat(soap, &a->Weight);
	soap_serialize_PointerTott__ColorCovariance(soap, &a->Covariance);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ColorDescriptor_ColorCluster(struct soap *soap, const char *tag, int id, const struct _tt__ColorDescriptor_ColorCluster *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ColorDescriptor_ColorCluster), type))
		return soap->error;
	if (a->Color)
	{	if (soap_out_PointerTott__Color(soap, "tt:Color", -1, &a->Color, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Color"))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Weight", -1, &a->Weight, ""))
		return soap->error;
	if (soap_out_PointerTott__ColorCovariance(soap, "tt:Covariance", -1, &a->Covariance, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ColorDescriptor_ColorCluster * SOAP_FMAC4 soap_in__tt__ColorDescriptor_ColorCluster(struct soap *soap, const char *tag, struct _tt__ColorDescriptor_ColorCluster *a, const char *type)
{
	size_t soap_flag_Color = 1;
	size_t soap_flag_Weight = 1;
	size_t soap_flag_Covariance = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ColorDescriptor_ColorCluster *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ColorDescriptor_ColorCluster, sizeof(struct _tt__ColorDescriptor_ColorCluster), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ColorDescriptor_ColorCluster(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Color && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Color(soap, "tt:Color", &a->Color, "tt:Color"))
				{	soap_flag_Color--;
					continue;
				}
			if (soap_flag_Weight && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Weight", &a->Weight, "xsd:float"))
				{	soap_flag_Weight--;
					continue;
				}
			if (soap_flag_Covariance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorCovariance(soap, "tt:Covariance", &a->Covariance, "tt:ColorCovariance"))
				{	soap_flag_Covariance--;
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
	{	a = (struct _tt__ColorDescriptor_ColorCluster *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ColorDescriptor_ColorCluster, 0, sizeof(struct _tt__ColorDescriptor_ColorCluster), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Color > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ColorDescriptor_ColorCluster(struct soap *soap, const struct _tt__ColorDescriptor_ColorCluster *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ColorDescriptor_ColorCluster);
	if (soap_out__tt__ColorDescriptor_ColorCluster(soap, tag?tag:"tt:ColorDescriptor-ColorCluster", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ColorDescriptor_ColorCluster * SOAP_FMAC4 soap_get__tt__ColorDescriptor_ColorCluster(struct soap *soap, struct _tt__ColorDescriptor_ColorCluster *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ColorDescriptor_ColorCluster(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ShapeDescriptorExtension(struct soap *soap, struct tt__ShapeDescriptorExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ShapeDescriptorExtension(struct soap *soap, const struct tt__ShapeDescriptorExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ShapeDescriptorExtension(struct soap *soap, const char *tag, int id, const struct tt__ShapeDescriptorExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ShapeDescriptorExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ShapeDescriptorExtension * SOAP_FMAC4 soap_in_tt__ShapeDescriptorExtension(struct soap *soap, const char *tag, struct tt__ShapeDescriptorExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ShapeDescriptorExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ShapeDescriptorExtension, sizeof(struct tt__ShapeDescriptorExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ShapeDescriptorExtension(soap, a);
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
	{	a = (struct tt__ShapeDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ShapeDescriptorExtension, 0, sizeof(struct tt__ShapeDescriptorExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ShapeDescriptorExtension(struct soap *soap, const struct tt__ShapeDescriptorExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ShapeDescriptorExtension);
	if (soap_out_tt__ShapeDescriptorExtension(soap, tag?tag:"tt:ShapeDescriptorExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ShapeDescriptorExtension * SOAP_FMAC4 soap_get_tt__ShapeDescriptorExtension(struct soap *soap, struct tt__ShapeDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ShapeDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AppearanceExtension(struct soap *soap, struct tt__AppearanceExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AppearanceExtension(struct soap *soap, const struct tt__AppearanceExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AppearanceExtension(struct soap *soap, const char *tag, int id, const struct tt__AppearanceExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AppearanceExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AppearanceExtension * SOAP_FMAC4 soap_in_tt__AppearanceExtension(struct soap *soap, const char *tag, struct tt__AppearanceExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AppearanceExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AppearanceExtension, sizeof(struct tt__AppearanceExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AppearanceExtension(soap, a);
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
	{	a = (struct tt__AppearanceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AppearanceExtension, 0, sizeof(struct tt__AppearanceExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AppearanceExtension(struct soap *soap, const struct tt__AppearanceExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AppearanceExtension);
	if (soap_out_tt__AppearanceExtension(soap, tag?tag:"tt:AppearanceExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AppearanceExtension * SOAP_FMAC4 soap_get_tt__AppearanceExtension(struct soap *soap, struct tt__AppearanceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AppearanceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ClassDescriptor(struct soap *soap, struct tt__ClassDescriptor *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeClassCandidate = 0;
	a->ClassCandidate = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ClassDescriptor(struct soap *soap, const struct tt__ClassDescriptor *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ClassCandidate)
	{	int i;
		for (i = 0; i < a->__sizeClassCandidate; i++)
		{
			soap_embedded(soap, a->ClassCandidate + i, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate);
			soap_serialize__tt__ClassDescriptor_ClassCandidate(soap, a->ClassCandidate + i);
		}
	}
	soap_serialize_PointerTott__ClassDescriptorExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptor(struct soap *soap, const char *tag, int id, const struct tt__ClassDescriptor *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptor), type))
		return soap->error;
	if (a->ClassCandidate)
	{	int i;
		for (i = 0; i < a->__sizeClassCandidate; i++)
			if (soap_out__tt__ClassDescriptor_ClassCandidate(soap, "tt:ClassCandidate", -1, a->ClassCandidate + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ClassDescriptorExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ClassDescriptor * SOAP_FMAC4 soap_in_tt__ClassDescriptor(struct soap *soap, const char *tag, struct tt__ClassDescriptor *a, const char *type)
{
	struct soap_blist *soap_blist_ClassCandidate = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ClassDescriptor *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptor, sizeof(struct tt__ClassDescriptor), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ClassDescriptor(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ClassCandidate", 1, NULL))
			{	if (a->ClassCandidate == NULL)
				{	if (soap_blist_ClassCandidate == NULL)
						soap_blist_ClassCandidate = soap_new_block(soap);
					a->ClassCandidate = (struct _tt__ClassDescriptor_ClassCandidate *)soap_push_block(soap, soap_blist_ClassCandidate, sizeof(struct _tt__ClassDescriptor_ClassCandidate));
					if (a->ClassCandidate == NULL)
						return NULL;
					soap_default__tt__ClassDescriptor_ClassCandidate(soap, a->ClassCandidate);
				}
				soap_revert(soap);
				if (soap_in__tt__ClassDescriptor_ClassCandidate(soap, "tt:ClassCandidate", a->ClassCandidate, ""))
				{	a->__sizeClassCandidate++;
					a->ClassCandidate = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptorExtension(soap, "tt:Extension", &a->Extension, "tt:ClassDescriptorExtension"))
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
		if (a->ClassCandidate)
			soap_pop_block(soap, soap_blist_ClassCandidate);
		if (a->__sizeClassCandidate)
			a->ClassCandidate = (struct _tt__ClassDescriptor_ClassCandidate *)soap_save_block(soap, soap_blist_ClassCandidate, NULL, 1);
		else
		{	a->ClassCandidate = NULL;
			if (soap_blist_ClassCandidate)
				soap_end_block(soap, soap_blist_ClassCandidate);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ClassDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptor, 0, sizeof(struct tt__ClassDescriptor), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ClassDescriptor(struct soap *soap, const struct tt__ClassDescriptor *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptor);
	if (soap_out_tt__ClassDescriptor(soap, tag?tag:"tt:ClassDescriptor", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ClassDescriptor * SOAP_FMAC4 soap_get_tt__ClassDescriptor(struct soap *soap, struct tt__ClassDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ColorDescriptor(struct soap *soap, struct tt__ColorDescriptor *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeColorCluster = 0;
	a->ColorCluster = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ColorDescriptor(struct soap *soap, const struct tt__ColorDescriptor *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ColorCluster)
	{	int i;
		for (i = 0; i < a->__sizeColorCluster; i++)
		{
			soap_embedded(soap, a->ColorCluster + i, SOAP_TYPE__tt__ColorDescriptor_ColorCluster);
			soap_serialize__tt__ColorDescriptor_ColorCluster(soap, a->ColorCluster + i);
		}
	}
	soap_serialize_PointerTott__ColorDescriptorExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorDescriptor(struct soap *soap, const char *tag, int id, const struct tt__ColorDescriptor *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ColorDescriptor), type))
		return soap->error;
	if (a->ColorCluster)
	{	int i;
		for (i = 0; i < a->__sizeColorCluster; i++)
			if (soap_out__tt__ColorDescriptor_ColorCluster(soap, "tt:ColorCluster", -1, a->ColorCluster + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ColorDescriptorExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ColorDescriptor * SOAP_FMAC4 soap_in_tt__ColorDescriptor(struct soap *soap, const char *tag, struct tt__ColorDescriptor *a, const char *type)
{
	struct soap_blist *soap_blist_ColorCluster = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ColorDescriptor *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorDescriptor, sizeof(struct tt__ColorDescriptor), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ColorDescriptor(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ColorCluster", 1, NULL))
			{	if (a->ColorCluster == NULL)
				{	if (soap_blist_ColorCluster == NULL)
						soap_blist_ColorCluster = soap_new_block(soap);
					a->ColorCluster = (struct _tt__ColorDescriptor_ColorCluster *)soap_push_block(soap, soap_blist_ColorCluster, sizeof(struct _tt__ColorDescriptor_ColorCluster));
					if (a->ColorCluster == NULL)
						return NULL;
					soap_default__tt__ColorDescriptor_ColorCluster(soap, a->ColorCluster);
				}
				soap_revert(soap);
				if (soap_in__tt__ColorDescriptor_ColorCluster(soap, "tt:ColorCluster", a->ColorCluster, ""))
				{	a->__sizeColorCluster++;
					a->ColorCluster = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorDescriptorExtension(soap, "tt:Extension", &a->Extension, "tt:ColorDescriptorExtension"))
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
		if (a->ColorCluster)
			soap_pop_block(soap, soap_blist_ColorCluster);
		if (a->__sizeColorCluster)
			a->ColorCluster = (struct _tt__ColorDescriptor_ColorCluster *)soap_save_block(soap, soap_blist_ColorCluster, NULL, 1);
		else
		{	a->ColorCluster = NULL;
			if (soap_blist_ColorCluster)
				soap_end_block(soap, soap_blist_ColorCluster);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ColorDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ColorDescriptor, 0, sizeof(struct tt__ColorDescriptor), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ColorDescriptor(struct soap *soap, const struct tt__ColorDescriptor *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ColorDescriptor);
	if (soap_out_tt__ColorDescriptor(soap, tag?tag:"tt:ColorDescriptor", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ColorDescriptor * SOAP_FMAC4 soap_get_tt__ColorDescriptor(struct soap *soap, struct tt__ColorDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ShapeDescriptor(struct soap *soap, struct tt__ShapeDescriptor *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BoundingBox = NULL;
	a->CenterOfGravity = NULL;
	a->__sizePolygon = 0;
	a->Polygon = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ShapeDescriptor(struct soap *soap, const struct tt__ShapeDescriptor *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Rectangle(soap, &a->BoundingBox);
	soap_serialize_PointerTott__Vector(soap, &a->CenterOfGravity);
	if (a->Polygon)
	{	int i;
		for (i = 0; i < a->__sizePolygon; i++)
		{
			soap_embedded(soap, a->Polygon + i, SOAP_TYPE_tt__Polygon);
			soap_serialize_tt__Polygon(soap, a->Polygon + i);
		}
	}
	soap_serialize_PointerTott__ShapeDescriptorExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ShapeDescriptor(struct soap *soap, const char *tag, int id, const struct tt__ShapeDescriptor *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ShapeDescriptor), type))
		return soap->error;
	if (a->BoundingBox)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:BoundingBox", -1, &a->BoundingBox, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BoundingBox"))
		return soap->error;
	if (a->CenterOfGravity)
	{	if (soap_out_PointerTott__Vector(soap, "tt:CenterOfGravity", -1, &a->CenterOfGravity, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CenterOfGravity"))
		return soap->error;
	if (a->Polygon)
	{	int i;
		for (i = 0; i < a->__sizePolygon; i++)
			if (soap_out_tt__Polygon(soap, "tt:Polygon", -1, a->Polygon + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ShapeDescriptorExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ShapeDescriptor * SOAP_FMAC4 soap_in_tt__ShapeDescriptor(struct soap *soap, const char *tag, struct tt__ShapeDescriptor *a, const char *type)
{
	size_t soap_flag_BoundingBox = 1;
	size_t soap_flag_CenterOfGravity = 1;
	struct soap_blist *soap_blist_Polygon = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ShapeDescriptor *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ShapeDescriptor, sizeof(struct tt__ShapeDescriptor), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ShapeDescriptor(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BoundingBox && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:BoundingBox", &a->BoundingBox, "tt:Rectangle"))
				{	soap_flag_BoundingBox--;
					continue;
				}
			if (soap_flag_CenterOfGravity && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:CenterOfGravity", &a->CenterOfGravity, "tt:Vector"))
				{	soap_flag_CenterOfGravity--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Polygon", 1, NULL))
			{	if (a->Polygon == NULL)
				{	if (soap_blist_Polygon == NULL)
						soap_blist_Polygon = soap_new_block(soap);
					a->Polygon = (struct tt__Polygon *)soap_push_block(soap, soap_blist_Polygon, sizeof(struct tt__Polygon));
					if (a->Polygon == NULL)
						return NULL;
					soap_default_tt__Polygon(soap, a->Polygon);
				}
				soap_revert(soap);
				if (soap_in_tt__Polygon(soap, "tt:Polygon", a->Polygon, "tt:Polygon"))
				{	a->__sizePolygon++;
					a->Polygon = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ShapeDescriptorExtension(soap, "tt:Extension", &a->Extension, "tt:ShapeDescriptorExtension"))
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
		if (a->Polygon)
			soap_pop_block(soap, soap_blist_Polygon);
		if (a->__sizePolygon)
			a->Polygon = (struct tt__Polygon *)soap_save_block(soap, soap_blist_Polygon, NULL, 1);
		else
		{	a->Polygon = NULL;
			if (soap_blist_Polygon)
				soap_end_block(soap, soap_blist_Polygon);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ShapeDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ShapeDescriptor, 0, sizeof(struct tt__ShapeDescriptor), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BoundingBox > 0 || soap_flag_CenterOfGravity > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ShapeDescriptor(struct soap *soap, const struct tt__ShapeDescriptor *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ShapeDescriptor);
	if (soap_out_tt__ShapeDescriptor(soap, tag?tag:"tt:ShapeDescriptor", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ShapeDescriptor * SOAP_FMAC4 soap_get_tt__ShapeDescriptor(struct soap *soap, struct tt__ShapeDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ShapeDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Transformation(struct soap *soap, struct tt__Transformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Translate = NULL;
	a->Scale = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Transformation(struct soap *soap, const struct tt__Transformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector(soap, &a->Translate);
	soap_serialize_PointerTott__Vector(soap, &a->Scale);
	soap_serialize_PointerTott__TransformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Transformation(struct soap *soap, const char *tag, int id, const struct tt__Transformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Transformation), type))
		return soap->error;
	if (soap_out_PointerTott__Vector(soap, "tt:Translate", -1, &a->Translate, ""))
		return soap->error;
	if (soap_out_PointerTott__Vector(soap, "tt:Scale", -1, &a->Scale, ""))
		return soap->error;
	if (soap_out_PointerTott__TransformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Transformation * SOAP_FMAC4 soap_in_tt__Transformation(struct soap *soap, const char *tag, struct tt__Transformation *a, const char *type)
{
	size_t soap_flag_Translate = 1;
	size_t soap_flag_Scale = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Transformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Transformation, sizeof(struct tt__Transformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Transformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Translate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:Translate", &a->Translate, "tt:Vector"))
				{	soap_flag_Translate--;
					continue;
				}
			if (soap_flag_Scale && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:Scale", &a->Scale, "tt:Vector"))
				{	soap_flag_Scale--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TransformationExtension(soap, "tt:Extension", &a->Extension, "tt:TransformationExtension"))
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
	{	a = (struct tt__Transformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Transformation, 0, sizeof(struct tt__Transformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Transformation(struct soap *soap, const struct tt__Transformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Transformation);
	if (soap_out_tt__Transformation(soap, tag?tag:"tt:Transformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Transformation * SOAP_FMAC4 soap_get_tt__Transformation(struct soap *soap, struct tt__Transformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Transformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Appearance(struct soap *soap, struct tt__Appearance *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Transformation = NULL;
	a->Shape = NULL;
	a->Color = NULL;
	a->Class1 = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Appearance(struct soap *soap, const struct tt__Appearance *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transformation(soap, &a->Transformation);
	soap_serialize_PointerTott__ShapeDescriptor(soap, &a->Shape);
	soap_serialize_PointerTott__ColorDescriptor(soap, &a->Color);
	soap_serialize_PointerTott__ClassDescriptor(soap, &a->Class1);
	soap_serialize_PointerTott__AppearanceExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Appearance(struct soap *soap, const char *tag, int id, const struct tt__Appearance *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Appearance), type))
		return soap->error;
	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &a->Transformation, ""))
		return soap->error;
	if (soap_out_PointerTott__ShapeDescriptor(soap, "tt:Shape", -1, &a->Shape, ""))
		return soap->error;
	if (soap_out_PointerTott__ColorDescriptor(soap, "tt:Color", -1, &a->Color, ""))
		return soap->error;
	if (soap_out_PointerTott__ClassDescriptor(soap, "tt:Class", -1, &a->Class1, ""))
		return soap->error;
	if (soap_out_PointerTott__AppearanceExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Appearance * SOAP_FMAC4 soap_in_tt__Appearance(struct soap *soap, const char *tag, struct tt__Appearance *a, const char *type)
{
	size_t soap_flag_Transformation = 1;
	size_t soap_flag_Shape = 1;
	size_t soap_flag_Color = 1;
	size_t soap_flag_Class = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Appearance *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Appearance, sizeof(struct tt__Appearance), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Appearance(soap, a);
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
			if (soap_flag_Shape && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ShapeDescriptor(soap, "tt:Shape", &a->Shape, "tt:ShapeDescriptor"))
				{	soap_flag_Shape--;
					continue;
				}
			if (soap_flag_Color && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorDescriptor(soap, "tt:Color", &a->Color, "tt:ColorDescriptor"))
				{	soap_flag_Color--;
					continue;
				}
			if (soap_flag_Class && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptor(soap, "tt:Class", &a->Class1, "tt:ClassDescriptor"))
				{	soap_flag_Class--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AppearanceExtension(soap, "tt:Extension", &a->Extension, "tt:AppearanceExtension"))
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
	{	a = (struct tt__Appearance *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Appearance, 0, sizeof(struct tt__Appearance), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Appearance(struct soap *soap, const struct tt__Appearance *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Appearance);
	if (soap_out_tt__Appearance(soap, tag?tag:"tt:Appearance", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Appearance * SOAP_FMAC4 soap_get_tt__Appearance(struct soap *soap, struct tt__Appearance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Appearance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ColorCovariance(struct soap *soap, struct tt__ColorCovariance *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->XX);
	soap_default_float(soap, &a->YY);
	soap_default_float(soap, &a->ZZ);
	a->XY = NULL;
	a->XZ = NULL;
	a->YZ = NULL;
	soap_default_xsd__anyURI(soap, &a->Colorspace);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ColorCovariance(struct soap *soap, const struct tt__ColorCovariance *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorCovariance(struct soap *soap, const char *tag, int id, const struct tt__ColorCovariance *a, const char *type)
{
	soap_set_attr(soap, "XX", soap_float2s(soap, a->XX), 1);
	soap_set_attr(soap, "YY", soap_float2s(soap, a->YY), 1);
	soap_set_attr(soap, "ZZ", soap_float2s(soap, a->ZZ), 1);
	if (a->XY)
		soap_set_attr(soap, "XY", soap_float2s(soap, *a->XY), 1);
	if (a->XZ)
		soap_set_attr(soap, "XZ", soap_float2s(soap, *a->XZ), 1);
	if (a->YZ)
		soap_set_attr(soap, "YZ", soap_float2s(soap, *a->YZ), 1);
	if (a->Colorspace)
		soap_set_attr(soap, "Colorspace", a->Colorspace, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ColorCovariance), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ColorCovariance * SOAP_FMAC4 soap_in_tt__ColorCovariance(struct soap *soap, const char *tag, struct tt__ColorCovariance *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ColorCovariance *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorCovariance, sizeof(struct tt__ColorCovariance), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ColorCovariance(soap, a);
	if (soap_s2float(soap, soap_attr_value(soap, "XX", 1), &a->XX))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "YY", 1), &a->YY))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "ZZ", 1), &a->ZZ))
		return NULL;
	{	const char *t = soap_attr_value(soap, "XY", 0);
		if (t)
		{
			if (!(a->XY = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->XY))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "XZ", 0);
		if (t)
		{
			if (!(a->XZ = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->XZ))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "YZ", 0);
		if (t)
		{
			if (!(a->YZ = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->YZ))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Colorspace", 0), &a->Colorspace, 0, -1))
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
	{	a = (struct tt__ColorCovariance *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ColorCovariance, 0, sizeof(struct tt__ColorCovariance), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ColorCovariance(struct soap *soap, const struct tt__ColorCovariance *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ColorCovariance);
	if (soap_out_tt__ColorCovariance(soap, tag?tag:"tt:ColorCovariance", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ColorCovariance * SOAP_FMAC4 soap_get_tt__ColorCovariance(struct soap *soap, struct tt__ColorCovariance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorCovariance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Color(struct soap *soap, struct tt__Color *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->X);
	soap_default_float(soap, &a->Y);
	soap_default_float(soap, &a->Z);
	soap_default_xsd__anyURI(soap, &a->Colorspace);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Color(struct soap *soap, const struct tt__Color *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Color(struct soap *soap, const char *tag, int id, const struct tt__Color *a, const char *type)
{
	soap_set_attr(soap, "X", soap_float2s(soap, a->X), 1);
	soap_set_attr(soap, "Y", soap_float2s(soap, a->Y), 1);
	soap_set_attr(soap, "Z", soap_float2s(soap, a->Z), 1);
	if (a->Colorspace)
		soap_set_attr(soap, "Colorspace", a->Colorspace, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Color), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Color * SOAP_FMAC4 soap_in_tt__Color(struct soap *soap, const char *tag, struct tt__Color *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Color *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Color, sizeof(struct tt__Color), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Color(soap, a);
	if (soap_s2float(soap, soap_attr_value(soap, "X", 1), &a->X))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "Y", 1), &a->Y))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "Z", 1), &a->Z))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Colorspace", 0), &a->Colorspace, 0, -1))
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
	{	a = (struct tt__Color *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Color, 0, sizeof(struct tt__Color), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Color(struct soap *soap, const struct tt__Color *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Color);
	if (soap_out_tt__Color(soap, tag?tag:"tt:Color", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Color * SOAP_FMAC4 soap_get_tt__Color(struct soap *soap, struct tt__Color *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Color(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Polyline(struct soap *soap, struct tt__Polyline *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizePoint = 0;
	a->Point = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Polyline(struct soap *soap, const struct tt__Polyline *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Point)
	{	int i;
		for (i = 0; i < a->__sizePoint; i++)
		{
			soap_embedded(soap, a->Point + i, SOAP_TYPE_tt__Vector);
			soap_serialize_tt__Vector(soap, a->Point + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Polyline(struct soap *soap, const char *tag, int id, const struct tt__Polyline *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Polyline), type))
		return soap->error;
	if (a->Point)
	{	int i;
		for (i = 0; i < a->__sizePoint; i++)
			if (soap_out_tt__Vector(soap, "tt:Point", -1, a->Point + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Polyline * SOAP_FMAC4 soap_in_tt__Polyline(struct soap *soap, const char *tag, struct tt__Polyline *a, const char *type)
{
	struct soap_blist *soap_blist_Point = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Polyline *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Polyline, sizeof(struct tt__Polyline), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Polyline(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Point", 1, NULL))
			{	if (a->Point == NULL)
				{	if (soap_blist_Point == NULL)
						soap_blist_Point = soap_new_block(soap);
					a->Point = (struct tt__Vector *)soap_push_block(soap, soap_blist_Point, sizeof(struct tt__Vector));
					if (a->Point == NULL)
						return NULL;
					soap_default_tt__Vector(soap, a->Point);
				}
				soap_revert(soap);
				if (soap_in_tt__Vector(soap, "tt:Point", a->Point, "tt:Vector"))
				{	a->__sizePoint++;
					a->Point = NULL;
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
		if (a->Point)
			soap_pop_block(soap, soap_blist_Point);
		if (a->__sizePoint)
			a->Point = (struct tt__Vector *)soap_save_block(soap, soap_blist_Point, NULL, 1);
		else
		{	a->Point = NULL;
			if (soap_blist_Point)
				soap_end_block(soap, soap_blist_Point);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Polyline *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Polyline, 0, sizeof(struct tt__Polyline), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizePoint < 2))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Polyline(struct soap *soap, const struct tt__Polyline *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Polyline);
	if (soap_out_tt__Polyline(soap, tag?tag:"tt:Polyline", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Polyline * SOAP_FMAC4 soap_get_tt__Polyline(struct soap *soap, struct tt__Polyline *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Polyline(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Polygon(struct soap *soap, struct tt__Polygon *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizePoint = 0;
	a->Point = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Polygon(struct soap *soap, const struct tt__Polygon *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Point)
	{	int i;
		for (i = 0; i < a->__sizePoint; i++)
		{
			soap_embedded(soap, a->Point + i, SOAP_TYPE_tt__Vector);
			soap_serialize_tt__Vector(soap, a->Point + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Polygon(struct soap *soap, const char *tag, int id, const struct tt__Polygon *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Polygon), type))
		return soap->error;
	if (a->Point)
	{	int i;
		for (i = 0; i < a->__sizePoint; i++)
			if (soap_out_tt__Vector(soap, "tt:Point", -1, a->Point + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Polygon * SOAP_FMAC4 soap_in_tt__Polygon(struct soap *soap, const char *tag, struct tt__Polygon *a, const char *type)
{
	struct soap_blist *soap_blist_Point = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Polygon *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Polygon, sizeof(struct tt__Polygon), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Polygon(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Point", 1, NULL))
			{	if (a->Point == NULL)
				{	if (soap_blist_Point == NULL)
						soap_blist_Point = soap_new_block(soap);
					a->Point = (struct tt__Vector *)soap_push_block(soap, soap_blist_Point, sizeof(struct tt__Vector));
					if (a->Point == NULL)
						return NULL;
					soap_default_tt__Vector(soap, a->Point);
				}
				soap_revert(soap);
				if (soap_in_tt__Vector(soap, "tt:Point", a->Point, "tt:Vector"))
				{	a->__sizePoint++;
					a->Point = NULL;
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
		if (a->Point)
			soap_pop_block(soap, soap_blist_Point);
		if (a->__sizePoint)
			a->Point = (struct tt__Vector *)soap_save_block(soap, soap_blist_Point, NULL, 1);
		else
		{	a->Point = NULL;
			if (soap_blist_Point)
				soap_end_block(soap, soap_blist_Point);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Polygon *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Polygon, 0, sizeof(struct tt__Polygon), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizePoint < 3))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Polygon(struct soap *soap, const struct tt__Polygon *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Polygon);
	if (soap_out_tt__Polygon(soap, tag?tag:"tt:Polygon", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Polygon * SOAP_FMAC4 soap_get_tt__Polygon(struct soap *soap, struct tt__Polygon *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Polygon(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Vector(struct soap *soap, struct tt__Vector *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->x = NULL;
	a->y = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Vector(struct soap *soap, const struct tt__Vector *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector(struct soap *soap, const char *tag, int id, const struct tt__Vector *a, const char *type)
{
	if (a->x)
		soap_set_attr(soap, "x", soap_float2s(soap, *a->x), 1);
	if (a->y)
		soap_set_attr(soap, "y", soap_float2s(soap, *a->y), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Vector), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Vector * SOAP_FMAC4 soap_in_tt__Vector(struct soap *soap, const char *tag, struct tt__Vector *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Vector *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector, sizeof(struct tt__Vector), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Vector(soap, a);
	{	const char *t = soap_attr_value(soap, "x", 0);
		if (t)
		{
			if (!(a->x = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->x))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "y", 0);
		if (t)
		{
			if (!(a->y = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->y))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
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
	{	a = (struct tt__Vector *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Vector, 0, sizeof(struct tt__Vector), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Vector(struct soap *soap, const struct tt__Vector *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Vector);
	if (soap_out_tt__Vector(soap, tag?tag:"tt:Vector", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Vector * SOAP_FMAC4 soap_get_tt__Vector(struct soap *soap, struct tt__Vector *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ItemListDescriptionExtension(struct soap *soap, struct tt__ItemListDescriptionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ItemListDescriptionExtension(struct soap *soap, const struct tt__ItemListDescriptionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListDescriptionExtension(struct soap *soap, const char *tag, int id, const struct tt__ItemListDescriptionExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListDescriptionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ItemListDescriptionExtension * SOAP_FMAC4 soap_in_tt__ItemListDescriptionExtension(struct soap *soap, const char *tag, struct tt__ItemListDescriptionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ItemListDescriptionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListDescriptionExtension, sizeof(struct tt__ItemListDescriptionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ItemListDescriptionExtension(soap, a);
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
	{	a = (struct tt__ItemListDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListDescriptionExtension, 0, sizeof(struct tt__ItemListDescriptionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ItemListDescriptionExtension(struct soap *soap, const struct tt__ItemListDescriptionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ItemListDescriptionExtension);
	if (soap_out_tt__ItemListDescriptionExtension(soap, tag?tag:"tt:ItemListDescriptionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ItemListDescriptionExtension * SOAP_FMAC4 soap_get_tt__ItemListDescriptionExtension(struct soap *soap, struct tt__ItemListDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ItemListDescription_ElementItemDescription(struct soap *soap, struct _tt__ItemListDescription_ElementItemDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	soap_default__QName(soap, &a->Type);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const struct _tt__ItemListDescription_ElementItemDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const char *tag, int id, const struct _tt__ItemListDescription_ElementItemDescription *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	if (a->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, a->Type), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ItemListDescription_ElementItemDescription * SOAP_FMAC4 soap_in__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const char *tag, struct _tt__ItemListDescription_ElementItemDescription *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ItemListDescription_ElementItemDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription, sizeof(struct _tt__ItemListDescription_ElementItemDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ItemListDescription_ElementItemDescription(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
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
	{	a = (struct _tt__ItemListDescription_ElementItemDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription, 0, sizeof(struct _tt__ItemListDescription_ElementItemDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const struct _tt__ItemListDescription_ElementItemDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription);
	if (soap_out__tt__ItemListDescription_ElementItemDescription(soap, tag?tag:"tt:ItemListDescription-ElementItemDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ItemListDescription_ElementItemDescription * SOAP_FMAC4 soap_get__tt__ItemListDescription_ElementItemDescription(struct soap *soap, struct _tt__ItemListDescription_ElementItemDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemListDescription_ElementItemDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, struct _tt__ItemListDescription_SimpleItemDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	soap_default__QName(soap, &a->Type);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const struct _tt__ItemListDescription_SimpleItemDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const char *tag, int id, const struct _tt__ItemListDescription_SimpleItemDescription *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	if (a->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, a->Type), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ItemListDescription_SimpleItemDescription * SOAP_FMAC4 soap_in__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const char *tag, struct _tt__ItemListDescription_SimpleItemDescription *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ItemListDescription_SimpleItemDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription, sizeof(struct _tt__ItemListDescription_SimpleItemDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ItemListDescription_SimpleItemDescription(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
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
	{	a = (struct _tt__ItemListDescription_SimpleItemDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription, 0, sizeof(struct _tt__ItemListDescription_SimpleItemDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const struct _tt__ItemListDescription_SimpleItemDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription);
	if (soap_out__tt__ItemListDescription_SimpleItemDescription(soap, tag?tag:"tt:ItemListDescription-SimpleItemDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ItemListDescription_SimpleItemDescription * SOAP_FMAC4 soap_get__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, struct _tt__ItemListDescription_SimpleItemDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemListDescription_SimpleItemDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MessageDescriptionExtension(struct soap *soap, struct tt__MessageDescriptionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MessageDescriptionExtension(struct soap *soap, const struct tt__MessageDescriptionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageDescriptionExtension(struct soap *soap, const char *tag, int id, const struct tt__MessageDescriptionExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageDescriptionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MessageDescriptionExtension * SOAP_FMAC4 soap_in_tt__MessageDescriptionExtension(struct soap *soap, const char *tag, struct tt__MessageDescriptionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MessageDescriptionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageDescriptionExtension, sizeof(struct tt__MessageDescriptionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MessageDescriptionExtension(soap, a);
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
	{	a = (struct tt__MessageDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageDescriptionExtension, 0, sizeof(struct tt__MessageDescriptionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MessageDescriptionExtension(struct soap *soap, const struct tt__MessageDescriptionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MessageDescriptionExtension);
	if (soap_out_tt__MessageDescriptionExtension(soap, tag?tag:"tt:MessageDescriptionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MessageDescriptionExtension * SOAP_FMAC4 soap_get_tt__MessageDescriptionExtension(struct soap *soap, struct tt__MessageDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MessageDescription(struct soap *soap, struct tt__MessageDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Source = NULL;
	a->Key = NULL;
	a->Data = NULL;
	a->Extension = NULL;
	a->IsProperty = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MessageDescription(struct soap *soap, const struct tt__MessageDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Source);
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Key);
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Data);
	soap_serialize_PointerTott__MessageDescriptionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageDescription(struct soap *soap, const char *tag, int id, const struct tt__MessageDescription *a, const char *type)
{
	if (a->IsProperty)
		soap_set_attr(soap, "IsProperty", soap_xsd__boolean2s(soap, *a->IsProperty), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageDescription), type))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Source", -1, &a->Source, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Key", -1, &a->Key, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Data", -1, &a->Data, ""))
		return soap->error;
	if (soap_out_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MessageDescription * SOAP_FMAC4 soap_in_tt__MessageDescription(struct soap *soap, const char *tag, struct tt__MessageDescription *a, const char *type)
{
	size_t soap_flag_Source = 1;
	size_t soap_flag_Key = 1;
	size_t soap_flag_Data = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MessageDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageDescription, sizeof(struct tt__MessageDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MessageDescription(soap, a);
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
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MessageDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageDescription, 0, sizeof(struct tt__MessageDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MessageDescription(struct soap *soap, const struct tt__MessageDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MessageDescription);
	if (soap_out_tt__MessageDescription(soap, tag?tag:"tt:MessageDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MessageDescription * SOAP_FMAC4 soap_get_tt__MessageDescription(struct soap *soap, struct tt__MessageDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ItemListExtension(struct soap *soap, struct tt__ItemListExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ItemListExtension(struct soap *soap, const struct tt__ItemListExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListExtension(struct soap *soap, const char *tag, int id, const struct tt__ItemListExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ItemListExtension * SOAP_FMAC4 soap_in_tt__ItemListExtension(struct soap *soap, const char *tag, struct tt__ItemListExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ItemListExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListExtension, sizeof(struct tt__ItemListExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ItemListExtension(soap, a);
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
	{	a = (struct tt__ItemListExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListExtension, 0, sizeof(struct tt__ItemListExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ItemListExtension(struct soap *soap, const struct tt__ItemListExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ItemListExtension);
	if (soap_out_tt__ItemListExtension(soap, tag?tag:"tt:ItemListExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ItemListExtension * SOAP_FMAC4 soap_get_tt__ItemListExtension(struct soap *soap, struct tt__ItemListExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ItemList_ElementItem(struct soap *soap, struct _tt__ItemList_ElementItem *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
	soap_default_string(soap, &a->Name);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ItemList_ElementItem(struct soap *soap, const struct _tt__ItemList_ElementItem *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemList_ElementItem(struct soap *soap, const char *tag, int id, const struct _tt__ItemList_ElementItem *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemList_ElementItem), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ItemList_ElementItem * SOAP_FMAC4 soap_in__tt__ItemList_ElementItem(struct soap *soap, const char *tag, struct _tt__ItemList_ElementItem *a, const char *type)
{
	size_t soap_flag___any = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ItemList_ElementItem *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemList_ElementItem, sizeof(struct _tt__ItemList_ElementItem), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ItemList_ElementItem(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
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
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tt__ItemList_ElementItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemList_ElementItem, 0, sizeof(struct _tt__ItemList_ElementItem), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ItemList_ElementItem(struct soap *soap, const struct _tt__ItemList_ElementItem *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ItemList_ElementItem);
	if (soap_out__tt__ItemList_ElementItem(soap, tag?tag:"tt:ItemList-ElementItem", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ItemList_ElementItem * SOAP_FMAC4 soap_get__tt__ItemList_ElementItem(struct soap *soap, struct _tt__ItemList_ElementItem *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemList_ElementItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ItemList_SimpleItem(struct soap *soap, struct _tt__ItemList_SimpleItem *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	soap_default_xsd__anySimpleType(soap, &a->Value);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ItemList_SimpleItem(struct soap *soap, const struct _tt__ItemList_SimpleItem *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemList_SimpleItem(struct soap *soap, const char *tag, int id, const struct _tt__ItemList_SimpleItem *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	if (a->Value)
		soap_set_attr(soap, "Value", a->Value, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemList_SimpleItem), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ItemList_SimpleItem * SOAP_FMAC4 soap_in__tt__ItemList_SimpleItem(struct soap *soap, const char *tag, struct _tt__ItemList_SimpleItem *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ItemList_SimpleItem *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemList_SimpleItem, sizeof(struct _tt__ItemList_SimpleItem), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ItemList_SimpleItem(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Value", 1), &a->Value, 0, -1))
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
	{	a = (struct _tt__ItemList_SimpleItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemList_SimpleItem, 0, sizeof(struct _tt__ItemList_SimpleItem), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ItemList_SimpleItem(struct soap *soap, const struct _tt__ItemList_SimpleItem *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ItemList_SimpleItem);
	if (soap_out__tt__ItemList_SimpleItem(soap, tag?tag:"tt:ItemList-SimpleItem", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ItemList_SimpleItem * SOAP_FMAC4 soap_get__tt__ItemList_SimpleItem(struct soap *soap, struct _tt__ItemList_SimpleItem *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemList_SimpleItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MessageExtension(struct soap *soap, struct tt__MessageExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MessageExtension(struct soap *soap, const struct tt__MessageExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageExtension(struct soap *soap, const char *tag, int id, const struct tt__MessageExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MessageExtension * SOAP_FMAC4 soap_in_tt__MessageExtension(struct soap *soap, const char *tag, struct tt__MessageExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MessageExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageExtension, sizeof(struct tt__MessageExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MessageExtension(soap, a);
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
	{	a = (struct tt__MessageExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageExtension, 0, sizeof(struct tt__MessageExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MessageExtension(struct soap *soap, const struct tt__MessageExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MessageExtension);
	if (soap_out_tt__MessageExtension(soap, tag?tag:"tt:MessageExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MessageExtension * SOAP_FMAC4 soap_get_tt__MessageExtension(struct soap *soap, struct tt__MessageExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusOptions20Extension(struct soap *soap, struct tt__FocusOptions20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusOptions20Extension(struct soap *soap, const struct tt__FocusOptions20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions20Extension(struct soap *soap, const char *tag, int id, const struct tt__FocusOptions20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusOptions20Extension * SOAP_FMAC4 soap_in_tt__FocusOptions20Extension(struct soap *soap, const char *tag, struct tt__FocusOptions20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusOptions20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions20Extension, sizeof(struct tt__FocusOptions20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusOptions20Extension(soap, a);
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
	{	a = (struct tt__FocusOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions20Extension, 0, sizeof(struct tt__FocusOptions20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusOptions20Extension(struct soap *soap, const struct tt__FocusOptions20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions20Extension);
	if (soap_out_tt__FocusOptions20Extension(soap, tag?tag:"tt:FocusOptions20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusOptions20Extension * SOAP_FMAC4 soap_get_tt__FocusOptions20Extension(struct soap *soap, struct tt__FocusOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalanceOptions20Extension(struct soap *soap, struct tt__WhiteBalanceOptions20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalanceOptions20Extension(struct soap *soap, const struct tt__WhiteBalanceOptions20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions20Extension(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalanceOptions20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions20Extension * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions20Extension(struct soap *soap, const char *tag, struct tt__WhiteBalanceOptions20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalanceOptions20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions20Extension, sizeof(struct tt__WhiteBalanceOptions20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalanceOptions20Extension(soap, a);
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
	{	a = (struct tt__WhiteBalanceOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions20Extension, 0, sizeof(struct tt__WhiteBalanceOptions20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalanceOptions20Extension(struct soap *soap, const struct tt__WhiteBalanceOptions20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions20Extension);
	if (soap_out_tt__WhiteBalanceOptions20Extension(soap, tag?tag:"tt:WhiteBalanceOptions20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions20Extension * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions20Extension(struct soap *soap, struct tt__WhiteBalanceOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusConfiguration20Extension(struct soap *soap, struct tt__FocusConfiguration20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusConfiguration20Extension(struct soap *soap, const struct tt__FocusConfiguration20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration20Extension(struct soap *soap, const char *tag, int id, const struct tt__FocusConfiguration20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusConfiguration20Extension * SOAP_FMAC4 soap_in_tt__FocusConfiguration20Extension(struct soap *soap, const char *tag, struct tt__FocusConfiguration20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusConfiguration20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration20Extension, sizeof(struct tt__FocusConfiguration20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusConfiguration20Extension(soap, a);
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
	{	a = (struct tt__FocusConfiguration20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration20Extension, 0, sizeof(struct tt__FocusConfiguration20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusConfiguration20Extension(struct soap *soap, const struct tt__FocusConfiguration20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration20Extension);
	if (soap_out_tt__FocusConfiguration20Extension(soap, tag?tag:"tt:FocusConfiguration20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusConfiguration20Extension * SOAP_FMAC4 soap_get_tt__FocusConfiguration20Extension(struct soap *soap, struct tt__FocusConfiguration20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalance20Extension(struct soap *soap, struct tt__WhiteBalance20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalance20Extension(struct soap *soap, const struct tt__WhiteBalance20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance20Extension(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalance20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalance20Extension * SOAP_FMAC4 soap_in_tt__WhiteBalance20Extension(struct soap *soap, const char *tag, struct tt__WhiteBalance20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalance20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance20Extension, sizeof(struct tt__WhiteBalance20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalance20Extension(soap, a);
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
	{	a = (struct tt__WhiteBalance20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance20Extension, 0, sizeof(struct tt__WhiteBalance20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalance20Extension(struct soap *soap, const struct tt__WhiteBalance20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance20Extension);
	if (soap_out_tt__WhiteBalance20Extension(soap, tag?tag:"tt:WhiteBalance20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalance20Extension * SOAP_FMAC4 soap_get_tt__WhiteBalance20Extension(struct soap *soap, struct tt__WhiteBalance20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelativeFocusOptions20(struct soap *soap, struct tt__RelativeFocusOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Distance = NULL;
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RelativeFocusOptions20(struct soap *soap, const struct tt__RelativeFocusOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &a->Distance);
	soap_serialize_PointerTott__FloatRange(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocusOptions20(struct soap *soap, const char *tag, int id, const struct tt__RelativeFocusOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocusOptions20), type))
		return soap->error;
	if (a->Distance)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Distance", -1, &a->Distance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Distance"))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RelativeFocusOptions20 * SOAP_FMAC4 soap_in_tt__RelativeFocusOptions20(struct soap *soap, const char *tag, struct tt__RelativeFocusOptions20 *a, const char *type)
{
	size_t soap_flag_Distance = 1;
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RelativeFocusOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocusOptions20, sizeof(struct tt__RelativeFocusOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RelativeFocusOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Distance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Distance", &a->Distance, "tt:FloatRange"))
				{	soap_flag_Distance--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &a->Speed, "tt:FloatRange"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__RelativeFocusOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocusOptions20, 0, sizeof(struct tt__RelativeFocusOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelativeFocusOptions20(struct soap *soap, const struct tt__RelativeFocusOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocusOptions20);
	if (soap_out_tt__RelativeFocusOptions20(soap, tag?tag:"tt:RelativeFocusOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RelativeFocusOptions20 * SOAP_FMAC4 soap_get_tt__RelativeFocusOptions20(struct soap *soap, struct tt__RelativeFocusOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocusOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MoveOptions20(struct soap *soap, struct tt__MoveOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Absolute = NULL;
	a->Relative = NULL;
	a->Continuous = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MoveOptions20(struct soap *soap, const struct tt__MoveOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocusOptions(soap, &a->Absolute);
	soap_serialize_PointerTott__RelativeFocusOptions20(soap, &a->Relative);
	soap_serialize_PointerTott__ContinuousFocusOptions(soap, &a->Continuous);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveOptions20(struct soap *soap, const char *tag, int id, const struct tt__MoveOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MoveOptions20), type))
		return soap->error;
	if (soap_out_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", -1, &a->Absolute, ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocusOptions20(soap, "tt:Relative", -1, &a->Relative, ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", -1, &a->Continuous, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MoveOptions20 * SOAP_FMAC4 soap_in_tt__MoveOptions20(struct soap *soap, const char *tag, struct tt__MoveOptions20 *a, const char *type)
{
	size_t soap_flag_Absolute = 1;
	size_t soap_flag_Relative = 1;
	size_t soap_flag_Continuous = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MoveOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveOptions20, sizeof(struct tt__MoveOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MoveOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Absolute && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", &a->Absolute, "tt:AbsoluteFocusOptions"))
				{	soap_flag_Absolute--;
					continue;
				}
			if (soap_flag_Relative && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocusOptions20(soap, "tt:Relative", &a->Relative, "tt:RelativeFocusOptions20"))
				{	soap_flag_Relative--;
					continue;
				}
			if (soap_flag_Continuous && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", &a->Continuous, "tt:ContinuousFocusOptions"))
				{	soap_flag_Continuous--;
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
	{	a = (struct tt__MoveOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MoveOptions20, 0, sizeof(struct tt__MoveOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MoveOptions20(struct soap *soap, const struct tt__MoveOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MoveOptions20);
	if (soap_out_tt__MoveOptions20(soap, tag?tag:"tt:MoveOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MoveOptions20 * SOAP_FMAC4 soap_get_tt__MoveOptions20(struct soap *soap, struct tt__MoveOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImageStabilizationOptionsExtension(struct soap *soap, struct tt__ImageStabilizationOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImageStabilizationOptionsExtension(struct soap *soap, const struct tt__ImageStabilizationOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__ImageStabilizationOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImageStabilizationOptionsExtension * SOAP_FMAC4 soap_in_tt__ImageStabilizationOptionsExtension(struct soap *soap, const char *tag, struct tt__ImageStabilizationOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImageStabilizationOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationOptionsExtension, sizeof(struct tt__ImageStabilizationOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImageStabilizationOptionsExtension(soap, a);
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
	{	a = (struct tt__ImageStabilizationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationOptionsExtension, 0, sizeof(struct tt__ImageStabilizationOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImageStabilizationOptionsExtension(struct soap *soap, const struct tt__ImageStabilizationOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationOptionsExtension);
	if (soap_out_tt__ImageStabilizationOptionsExtension(soap, tag?tag:"tt:ImageStabilizationOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImageStabilizationOptionsExtension * SOAP_FMAC4 soap_get_tt__ImageStabilizationOptionsExtension(struct soap *soap, struct tt__ImageStabilizationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingOptions20Extension2(struct soap *soap, struct tt__ImagingOptions20Extension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingOptions20Extension2(struct soap *soap, const struct tt__ImagingOptions20Extension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20Extension2(struct soap *soap, const char *tag, int id, const struct tt__ImagingOptions20Extension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20Extension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingOptions20Extension2 * SOAP_FMAC4 soap_in_tt__ImagingOptions20Extension2(struct soap *soap, const char *tag, struct tt__ImagingOptions20Extension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingOptions20Extension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20Extension2, sizeof(struct tt__ImagingOptions20Extension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingOptions20Extension2(soap, a);
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
	{	a = (struct tt__ImagingOptions20Extension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20Extension2, 0, sizeof(struct tt__ImagingOptions20Extension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingOptions20Extension2(struct soap *soap, const struct tt__ImagingOptions20Extension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20Extension2);
	if (soap_out_tt__ImagingOptions20Extension2(soap, tag?tag:"tt:ImagingOptions20Extension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingOptions20Extension2 * SOAP_FMAC4 soap_get_tt__ImagingOptions20Extension2(struct soap *soap, struct tt__ImagingOptions20Extension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20Extension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImageStabilizationOptions(struct soap *soap, struct tt__ImageStabilizationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Level = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImageStabilizationOptions(struct soap *soap, const struct tt__ImageStabilizationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__ImageStabilizationMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Level);
	soap_serialize_PointerTott__ImageStabilizationOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationOptions(struct soap *soap, const char *tag, int id, const struct tt__ImageStabilizationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__ImageStabilizationMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	if (soap_out_PointerTott__ImageStabilizationOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImageStabilizationOptions * SOAP_FMAC4 soap_in_tt__ImageStabilizationOptions(struct soap *soap, const char *tag, struct tt__ImageStabilizationOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Level = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImageStabilizationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationOptions, sizeof(struct tt__ImageStabilizationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImageStabilizationOptions(soap, a);
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
					a->Mode = (enum tt__ImageStabilizationMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__ImageStabilizationMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__ImageStabilizationMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ImageStabilizationMode(soap, "tt:Mode", a->Mode, "tt:ImageStabilizationMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &a->Level, "tt:FloatRange"))
				{	soap_flag_Level--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:ImageStabilizationOptionsExtension"))
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
			a->Mode = (enum tt__ImageStabilizationMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ImageStabilizationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationOptions, 0, sizeof(struct tt__ImageStabilizationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImageStabilizationOptions(struct soap *soap, const struct tt__ImageStabilizationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationOptions);
	if (soap_out_tt__ImageStabilizationOptions(soap, tag?tag:"tt:ImageStabilizationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImageStabilizationOptions * SOAP_FMAC4 soap_get_tt__ImageStabilizationOptions(struct soap *soap, struct tt__ImageStabilizationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingOptions20Extension(struct soap *soap, struct tt__ImagingOptions20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->ImageStabilization = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingOptions20Extension(struct soap *soap, const struct tt__ImagingOptions20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImageStabilizationOptions(soap, &a->ImageStabilization);
	soap_serialize_PointerTott__ImagingOptions20Extension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20Extension(struct soap *soap, const char *tag, int id, const struct tt__ImagingOptions20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ImageStabilizationOptions(soap, "tt:ImageStabilization", -1, &a->ImageStabilization, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingOptions20Extension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingOptions20Extension * SOAP_FMAC4 soap_in_tt__ImagingOptions20Extension(struct soap *soap, const char *tag, struct tt__ImagingOptions20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_ImageStabilization = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingOptions20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20Extension, sizeof(struct tt__ImagingOptions20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingOptions20Extension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ImageStabilization && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationOptions(soap, "tt:ImageStabilization", &a->ImageStabilization, "tt:ImageStabilizationOptions"))
				{	soap_flag_ImageStabilization--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingOptions20Extension2(soap, "tt:Extension", &a->Extension, "tt:ImagingOptions20Extension2"))
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
	{	a = (struct tt__ImagingOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20Extension, 0, sizeof(struct tt__ImagingOptions20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingOptions20Extension(struct soap *soap, const struct tt__ImagingOptions20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20Extension);
	if (soap_out_tt__ImagingOptions20Extension(soap, tag?tag:"tt:ImagingOptions20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingOptions20Extension * SOAP_FMAC4 soap_get_tt__ImagingOptions20Extension(struct soap *soap, struct tt__ImagingOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalanceOptions20(struct soap *soap, struct tt__WhiteBalanceOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->YrGain = NULL;
	a->YbGain = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalanceOptions20(struct soap *soap, const struct tt__WhiteBalanceOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__WhiteBalanceMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->YrGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->YbGain);
	soap_serialize_PointerTott__WhiteBalanceOptions20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions20(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalanceOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions20), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:YrGain", -1, &a->YrGain, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:YbGain", -1, &a->YbGain, ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalanceOptions20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions20 * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions20(struct soap *soap, const char *tag, struct tt__WhiteBalanceOptions20 *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_YrGain = 1;
	size_t soap_flag_YbGain = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalanceOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions20, sizeof(struct tt__WhiteBalanceOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalanceOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__WhiteBalanceMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__WhiteBalanceMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__WhiteBalanceMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", a->Mode, "tt:WhiteBalanceMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_YrGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YrGain", &a->YrGain, "tt:FloatRange"))
				{	soap_flag_YrGain--;
					continue;
				}
			if (soap_flag_YbGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YbGain", &a->YbGain, "tt:FloatRange"))
				{	soap_flag_YbGain--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions20Extension(soap, "tt:Extension", &a->Extension, "tt:WhiteBalanceOptions20Extension"))
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
			a->Mode = (enum tt__WhiteBalanceMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__WhiteBalanceOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions20, 0, sizeof(struct tt__WhiteBalanceOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalanceOptions20(struct soap *soap, const struct tt__WhiteBalanceOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions20);
	if (soap_out_tt__WhiteBalanceOptions20(soap, tag?tag:"tt:WhiteBalanceOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions20 * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions20(struct soap *soap, struct tt__WhiteBalanceOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WideDynamicRangeOptions20(struct soap *soap, struct tt__WideDynamicRangeOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WideDynamicRangeOptions20(struct soap *soap, const struct tt__WideDynamicRangeOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRangeOptions20(struct soap *soap, const char *tag, int id, const struct tt__WideDynamicRangeOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRangeOptions20), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WideDynamicRangeOptions20 * SOAP_FMAC4 soap_in_tt__WideDynamicRangeOptions20(struct soap *soap, const char *tag, struct tt__WideDynamicRangeOptions20 *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WideDynamicRangeOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRangeOptions20, sizeof(struct tt__WideDynamicRangeOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WideDynamicRangeOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__WideDynamicMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->Mode, "tt:WideDynamicMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &a->Level, "tt:FloatRange"))
				{	soap_flag_Level--;
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
			a->Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__WideDynamicRangeOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRangeOptions20, 0, sizeof(struct tt__WideDynamicRangeOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WideDynamicRangeOptions20(struct soap *soap, const struct tt__WideDynamicRangeOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRangeOptions20);
	if (soap_out_tt__WideDynamicRangeOptions20(soap, tag?tag:"tt:WideDynamicRangeOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WideDynamicRangeOptions20 * SOAP_FMAC4 soap_get_tt__WideDynamicRangeOptions20(struct soap *soap, struct tt__WideDynamicRangeOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRangeOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusOptions20(struct soap *soap, struct tt__FocusOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAutoFocusModes = 0;
	a->AutoFocusModes = NULL;
	a->DefaultSpeed = NULL;
	a->NearLimit = NULL;
	a->FarLimit = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusOptions20(struct soap *soap, const struct tt__FocusOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AutoFocusModes)
	{	int i;
		for (i = 0; i < a->__sizeAutoFocusModes; i++)
		{
			soap_embedded(soap, a->AutoFocusModes + i, SOAP_TYPE_tt__AutoFocusMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->DefaultSpeed);
	soap_serialize_PointerTott__FloatRange(soap, &a->NearLimit);
	soap_serialize_PointerTott__FloatRange(soap, &a->FarLimit);
	soap_serialize_PointerTott__FocusOptions20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions20(struct soap *soap, const char *tag, int id, const struct tt__FocusOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions20), type))
		return soap->error;
	if (a->AutoFocusModes)
	{	int i;
		for (i = 0; i < a->__sizeAutoFocusModes; i++)
			if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusModes", -1, a->AutoFocusModes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:DefaultSpeed", -1, &a->DefaultSpeed, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:NearLimit", -1, &a->NearLimit, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:FarLimit", -1, &a->FarLimit, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusOptions20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusOptions20 * SOAP_FMAC4 soap_in_tt__FocusOptions20(struct soap *soap, const char *tag, struct tt__FocusOptions20 *a, const char *type)
{
	struct soap_blist *soap_blist_AutoFocusModes = NULL;
	size_t soap_flag_DefaultSpeed = 1;
	size_t soap_flag_NearLimit = 1;
	size_t soap_flag_FarLimit = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions20, sizeof(struct tt__FocusOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AutoFocusModes", 1, NULL))
			{	if (a->AutoFocusModes == NULL)
				{	if (soap_blist_AutoFocusModes == NULL)
						soap_blist_AutoFocusModes = soap_new_block(soap);
					a->AutoFocusModes = (enum tt__AutoFocusMode *)soap_push_block(soap, soap_blist_AutoFocusModes, sizeof(enum tt__AutoFocusMode));
					if (a->AutoFocusModes == NULL)
						return NULL;
					soap_default_tt__AutoFocusMode(soap, a->AutoFocusModes);
				}
				soap_revert(soap);
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusModes", a->AutoFocusModes, "tt:AutoFocusMode"))
				{	a->__sizeAutoFocusModes++;
					a->AutoFocusModes = NULL;
					continue;
				}
			}
			if (soap_flag_DefaultSpeed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:DefaultSpeed", &a->DefaultSpeed, "tt:FloatRange"))
				{	soap_flag_DefaultSpeed--;
					continue;
				}
			if (soap_flag_NearLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:NearLimit", &a->NearLimit, "tt:FloatRange"))
				{	soap_flag_NearLimit--;
					continue;
				}
			if (soap_flag_FarLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:FarLimit", &a->FarLimit, "tt:FloatRange"))
				{	soap_flag_FarLimit--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions20Extension(soap, "tt:Extension", &a->Extension, "tt:FocusOptions20Extension"))
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
		if (a->AutoFocusModes)
			soap_pop_block(soap, soap_blist_AutoFocusModes);
		if (a->__sizeAutoFocusModes)
			a->AutoFocusModes = (enum tt__AutoFocusMode *)soap_save_block(soap, soap_blist_AutoFocusModes, NULL, 1);
		else
		{	a->AutoFocusModes = NULL;
			if (soap_blist_AutoFocusModes)
				soap_end_block(soap, soap_blist_AutoFocusModes);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FocusOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions20, 0, sizeof(struct tt__FocusOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusOptions20(struct soap *soap, const struct tt__FocusOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions20);
	if (soap_out_tt__FocusOptions20(soap, tag?tag:"tt:FocusOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusOptions20 * SOAP_FMAC4 soap_get_tt__FocusOptions20(struct soap *soap, struct tt__FocusOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ExposureOptions20(struct soap *soap, struct tt__ExposureOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->__sizePriority = 0;
	a->Priority = NULL;
	a->MinExposureTime = NULL;
	a->MaxExposureTime = NULL;
	a->MinGain = NULL;
	a->MaxGain = NULL;
	a->MinIris = NULL;
	a->MaxIris = NULL;
	a->ExposureTime = NULL;
	a->Gain = NULL;
	a->Iris = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ExposureOptions20(struct soap *soap, const struct tt__ExposureOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__ExposureMode);
		}
	}
	if (a->Priority)
	{	int i;
		for (i = 0; i < a->__sizePriority; i++)
		{
			soap_embedded(soap, a->Priority + i, SOAP_TYPE_tt__ExposurePriority);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->MinExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->MinGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->MinIris);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxIris);
	soap_serialize_PointerTott__FloatRange(soap, &a->ExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->Gain);
	soap_serialize_PointerTott__FloatRange(soap, &a->Iris);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureOptions20(struct soap *soap, const char *tag, int id, const struct tt__ExposureOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposureOptions20), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (a->Priority)
	{	int i;
		for (i = 0; i < a->__sizePriority; i++)
			if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, a->Priority + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinExposureTime", -1, &a->MinExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxExposureTime", -1, &a->MaxExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinGain", -1, &a->MinGain, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxGain", -1, &a->MaxGain, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinIris", -1, &a->MinIris, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxIris", -1, &a->MaxIris, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:ExposureTime", -1, &a->ExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Gain", -1, &a->Gain, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Iris", -1, &a->Iris, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ExposureOptions20 * SOAP_FMAC4 soap_in_tt__ExposureOptions20(struct soap *soap, const char *tag, struct tt__ExposureOptions20 *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	struct soap_blist *soap_blist_Priority = NULL;
	size_t soap_flag_MinExposureTime = 1;
	size_t soap_flag_MaxExposureTime = 1;
	size_t soap_flag_MinGain = 1;
	size_t soap_flag_MaxGain = 1;
	size_t soap_flag_MinIris = 1;
	size_t soap_flag_MaxIris = 1;
	size_t soap_flag_ExposureTime = 1;
	size_t soap_flag_Gain = 1;
	size_t soap_flag_Iris = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ExposureOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureOptions20, sizeof(struct tt__ExposureOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ExposureOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__ExposureMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__ExposureMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__ExposureMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", a->Mode, "tt:ExposureMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Priority", 1, NULL))
			{	if (a->Priority == NULL)
				{	if (soap_blist_Priority == NULL)
						soap_blist_Priority = soap_new_block(soap);
					a->Priority = (enum tt__ExposurePriority *)soap_push_block(soap, soap_blist_Priority, sizeof(enum tt__ExposurePriority));
					if (a->Priority == NULL)
						return NULL;
					soap_default_tt__ExposurePriority(soap, a->Priority);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", a->Priority, "tt:ExposurePriority"))
				{	a->__sizePriority++;
					a->Priority = NULL;
					continue;
				}
			}
			if (soap_flag_MinExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinExposureTime", &a->MinExposureTime, "tt:FloatRange"))
				{	soap_flag_MinExposureTime--;
					continue;
				}
			if (soap_flag_MaxExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxExposureTime", &a->MaxExposureTime, "tt:FloatRange"))
				{	soap_flag_MaxExposureTime--;
					continue;
				}
			if (soap_flag_MinGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinGain", &a->MinGain, "tt:FloatRange"))
				{	soap_flag_MinGain--;
					continue;
				}
			if (soap_flag_MaxGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxGain", &a->MaxGain, "tt:FloatRange"))
				{	soap_flag_MaxGain--;
					continue;
				}
			if (soap_flag_MinIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinIris", &a->MinIris, "tt:FloatRange"))
				{	soap_flag_MinIris--;
					continue;
				}
			if (soap_flag_MaxIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxIris", &a->MaxIris, "tt:FloatRange"))
				{	soap_flag_MaxIris--;
					continue;
				}
			if (soap_flag_ExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ExposureTime", &a->ExposureTime, "tt:FloatRange"))
				{	soap_flag_ExposureTime--;
					continue;
				}
			if (soap_flag_Gain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Gain", &a->Gain, "tt:FloatRange"))
				{	soap_flag_Gain--;
					continue;
				}
			if (soap_flag_Iris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Iris", &a->Iris, "tt:FloatRange"))
				{	soap_flag_Iris--;
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
			a->Mode = (enum tt__ExposureMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (a->Priority)
			soap_pop_block(soap, soap_blist_Priority);
		if (a->__sizePriority)
			a->Priority = (enum tt__ExposurePriority *)soap_save_block(soap, soap_blist_Priority, NULL, 1);
		else
		{	a->Priority = NULL;
			if (soap_blist_Priority)
				soap_end_block(soap, soap_blist_Priority);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ExposureOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposureOptions20, 0, sizeof(struct tt__ExposureOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ExposureOptions20(struct soap *soap, const struct tt__ExposureOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ExposureOptions20);
	if (soap_out_tt__ExposureOptions20(soap, tag?tag:"tt:ExposureOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ExposureOptions20 * SOAP_FMAC4 soap_get_tt__ExposureOptions20(struct soap *soap, struct tt__ExposureOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BacklightCompensationOptions20(struct soap *soap, struct tt__BacklightCompensationOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BacklightCompensationOptions20(struct soap *soap, const struct tt__BacklightCompensationOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__BacklightCompensationMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationOptions20(struct soap *soap, const char *tag, int id, const struct tt__BacklightCompensationOptions20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensationOptions20), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BacklightCompensationOptions20 * SOAP_FMAC4 soap_in_tt__BacklightCompensationOptions20(struct soap *soap, const char *tag, struct tt__BacklightCompensationOptions20 *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BacklightCompensationOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationOptions20, sizeof(struct tt__BacklightCompensationOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BacklightCompensationOptions20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__BacklightCompensationMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__BacklightCompensationMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__BacklightCompensationMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", a->Mode, "tt:BacklightCompensationMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &a->Level, "tt:FloatRange"))
				{	soap_flag_Level--;
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
			a->Mode = (enum tt__BacklightCompensationMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__BacklightCompensationOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensationOptions20, 0, sizeof(struct tt__BacklightCompensationOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BacklightCompensationOptions20(struct soap *soap, const struct tt__BacklightCompensationOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationOptions20);
	if (soap_out_tt__BacklightCompensationOptions20(soap, tag?tag:"tt:BacklightCompensationOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BacklightCompensationOptions20 * SOAP_FMAC4 soap_get_tt__BacklightCompensationOptions20(struct soap *soap, struct tt__BacklightCompensationOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingOptions20(struct soap *soap, struct tt__ImagingOptions20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BacklightCompensation = NULL;
	a->Brightness = NULL;
	a->ColorSaturation = NULL;
	a->Contrast = NULL;
	a->Exposure = NULL;
	a->Focus = NULL;
	a->__sizeIrCutFilterModes = 0;
	a->IrCutFilterModes = NULL;
	a->Sharpness = NULL;
	a->WideDynamicRange = NULL;
	a->WhiteBalance = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingOptions20(struct soap *soap, const struct tt__ImagingOptions20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensationOptions20(soap, &a->BacklightCompensation);
	soap_serialize_PointerTott__FloatRange(soap, &a->Brightness);
	soap_serialize_PointerTott__FloatRange(soap, &a->ColorSaturation);
	soap_serialize_PointerTott__FloatRange(soap, &a->Contrast);
	soap_serialize_PointerTott__ExposureOptions20(soap, &a->Exposure);
	soap_serialize_PointerTott__FocusOptions20(soap, &a->Focus);
	if (a->IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->__sizeIrCutFilterModes; i++)
		{
			soap_embedded(soap, a->IrCutFilterModes + i, SOAP_TYPE_tt__IrCutFilterMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Sharpness);
	soap_serialize_PointerTott__WideDynamicRangeOptions20(soap, &a->WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalanceOptions20(soap, &a->WhiteBalance);
	soap_serialize_PointerTott__ImagingOptions20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20(struct soap *soap, const char *tag, int id, const struct tt__ImagingOptions20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20), type))
		return soap->error;
	if (soap_out_PointerTott__BacklightCompensationOptions20(soap, "tt:BacklightCompensation", -1, &a->BacklightCompensation, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Brightness", -1, &a->Brightness, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:ColorSaturation", -1, &a->ColorSaturation, ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Contrast", -1, &a->Contrast, ""))
		return soap->error;
	if (soap_out_PointerTott__ExposureOptions20(soap, "tt:Exposure", -1, &a->Exposure, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusOptions20(soap, "tt:Focus", -1, &a->Focus, ""))
		return soap->error;
	if (a->IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->__sizeIrCutFilterModes; i++)
			if (soap_out_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", -1, a->IrCutFilterModes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Sharpness", -1, &a->Sharpness, ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRangeOptions20(soap, "tt:WideDynamicRange", -1, &a->WideDynamicRange, ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalanceOptions20(soap, "tt:WhiteBalance", -1, &a->WhiteBalance, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingOptions20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingOptions20 * SOAP_FMAC4 soap_in_tt__ImagingOptions20(struct soap *soap, const char *tag, struct tt__ImagingOptions20 *a, const char *type)
{
	size_t soap_flag_BacklightCompensation = 1;
	size_t soap_flag_Brightness = 1;
	size_t soap_flag_ColorSaturation = 1;
	size_t soap_flag_Contrast = 1;
	size_t soap_flag_Exposure = 1;
	size_t soap_flag_Focus = 1;
	struct soap_blist *soap_blist_IrCutFilterModes = NULL;
	size_t soap_flag_Sharpness = 1;
	size_t soap_flag_WideDynamicRange = 1;
	size_t soap_flag_WhiteBalance = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingOptions20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20, sizeof(struct tt__ImagingOptions20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingOptions20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BacklightCompensation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensationOptions20(soap, "tt:BacklightCompensation", &a->BacklightCompensation, "tt:BacklightCompensationOptions20"))
				{	soap_flag_BacklightCompensation--;
					continue;
				}
			if (soap_flag_Brightness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Brightness", &a->Brightness, "tt:FloatRange"))
				{	soap_flag_Brightness--;
					continue;
				}
			if (soap_flag_ColorSaturation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ColorSaturation", &a->ColorSaturation, "tt:FloatRange"))
				{	soap_flag_ColorSaturation--;
					continue;
				}
			if (soap_flag_Contrast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Contrast", &a->Contrast, "tt:FloatRange"))
				{	soap_flag_Contrast--;
					continue;
				}
			if (soap_flag_Exposure && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposureOptions20(soap, "tt:Exposure", &a->Exposure, "tt:ExposureOptions20"))
				{	soap_flag_Exposure--;
					continue;
				}
			if (soap_flag_Focus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions20(soap, "tt:Focus", &a->Focus, "tt:FocusOptions20"))
				{	soap_flag_Focus--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IrCutFilterModes", 1, NULL))
			{	if (a->IrCutFilterModes == NULL)
				{	if (soap_blist_IrCutFilterModes == NULL)
						soap_blist_IrCutFilterModes = soap_new_block(soap);
					a->IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_push_block(soap, soap_blist_IrCutFilterModes, sizeof(enum tt__IrCutFilterMode));
					if (a->IrCutFilterModes == NULL)
						return NULL;
					soap_default_tt__IrCutFilterMode(soap, a->IrCutFilterModes);
				}
				soap_revert(soap);
				if (soap_in_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", a->IrCutFilterModes, "tt:IrCutFilterMode"))
				{	a->__sizeIrCutFilterModes++;
					a->IrCutFilterModes = NULL;
					continue;
				}
			}
			if (soap_flag_Sharpness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Sharpness", &a->Sharpness, "tt:FloatRange"))
				{	soap_flag_Sharpness--;
					continue;
				}
			if (soap_flag_WideDynamicRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRangeOptions20(soap, "tt:WideDynamicRange", &a->WideDynamicRange, "tt:WideDynamicRangeOptions20"))
				{	soap_flag_WideDynamicRange--;
					continue;
				}
			if (soap_flag_WhiteBalance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions20(soap, "tt:WhiteBalance", &a->WhiteBalance, "tt:WhiteBalanceOptions20"))
				{	soap_flag_WhiteBalance--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingOptions20Extension(soap, "tt:Extension", &a->Extension, "tt:ImagingOptions20Extension"))
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
		if (a->IrCutFilterModes)
			soap_pop_block(soap, soap_blist_IrCutFilterModes);
		if (a->__sizeIrCutFilterModes)
			a->IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_save_block(soap, soap_blist_IrCutFilterModes, NULL, 1);
		else
		{	a->IrCutFilterModes = NULL;
			if (soap_blist_IrCutFilterModes)
				soap_end_block(soap, soap_blist_IrCutFilterModes);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ImagingOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20, 0, sizeof(struct tt__ImagingOptions20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingOptions20(struct soap *soap, const struct tt__ImagingOptions20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20);
	if (soap_out_tt__ImagingOptions20(soap, tag?tag:"tt:ImagingOptions20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingOptions20 * SOAP_FMAC4 soap_get_tt__ImagingOptions20(struct soap *soap, struct tt__ImagingOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImageStabilizationExtension(struct soap *soap, struct tt__ImageStabilizationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImageStabilizationExtension(struct soap *soap, const struct tt__ImageStabilizationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationExtension(struct soap *soap, const char *tag, int id, const struct tt__ImageStabilizationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImageStabilizationExtension * SOAP_FMAC4 soap_in_tt__ImageStabilizationExtension(struct soap *soap, const char *tag, struct tt__ImageStabilizationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImageStabilizationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationExtension, sizeof(struct tt__ImageStabilizationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImageStabilizationExtension(soap, a);
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
	{	a = (struct tt__ImageStabilizationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationExtension, 0, sizeof(struct tt__ImageStabilizationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImageStabilizationExtension(struct soap *soap, const struct tt__ImageStabilizationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationExtension);
	if (soap_out_tt__ImageStabilizationExtension(soap, tag?tag:"tt:ImageStabilizationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImageStabilizationExtension * SOAP_FMAC4 soap_get_tt__ImageStabilizationExtension(struct soap *soap, struct tt__ImageStabilizationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingSettingsExtension202(struct soap *soap, struct tt__ImagingSettingsExtension202 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingSettingsExtension202(struct soap *soap, const struct tt__ImagingSettingsExtension202 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension202(struct soap *soap, const char *tag, int id, const struct tt__ImagingSettingsExtension202 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension202), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension202 * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension202(struct soap *soap, const char *tag, struct tt__ImagingSettingsExtension202 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingSettingsExtension202 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension202, sizeof(struct tt__ImagingSettingsExtension202), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingSettingsExtension202(soap, a);
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
	{	a = (struct tt__ImagingSettingsExtension202 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension202, 0, sizeof(struct tt__ImagingSettingsExtension202), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingSettingsExtension202(struct soap *soap, const struct tt__ImagingSettingsExtension202 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension202);
	if (soap_out_tt__ImagingSettingsExtension202(soap, tag?tag:"tt:ImagingSettingsExtension202", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension202 * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension202(struct soap *soap, struct tt__ImagingSettingsExtension202 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension202(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImageStabilization(struct soap *soap, struct tt__ImageStabilization *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ImageStabilizationMode(soap, &a->Mode);
	a->Level = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImageStabilization(struct soap *soap, const struct tt__ImageStabilization *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__ImageStabilizationMode);
	soap_serialize_PointerTofloat(soap, &a->Level);
	soap_serialize_PointerTott__ImageStabilizationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilization(struct soap *soap, const char *tag, int id, const struct tt__ImageStabilization *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilization), type))
		return soap->error;
	if (soap_out_tt__ImageStabilizationMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	if (soap_out_PointerTott__ImageStabilizationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImageStabilization * SOAP_FMAC4 soap_in_tt__ImageStabilization(struct soap *soap, const char *tag, struct tt__ImageStabilization *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Level = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImageStabilization *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilization, sizeof(struct tt__ImageStabilization), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImageStabilization(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ImageStabilizationMode(soap, "tt:Mode", &a->Mode, "tt:ImageStabilizationMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &a->Level, "xsd:float"))
				{	soap_flag_Level--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationExtension(soap, "tt:Extension", &a->Extension, "tt:ImageStabilizationExtension"))
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
	{	a = (struct tt__ImageStabilization *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilization, 0, sizeof(struct tt__ImageStabilization), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImageStabilization(struct soap *soap, const struct tt__ImageStabilization *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilization);
	if (soap_out_tt__ImageStabilization(soap, tag?tag:"tt:ImageStabilization", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImageStabilization * SOAP_FMAC4 soap_get_tt__ImageStabilization(struct soap *soap, struct tt__ImageStabilization *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilization(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingSettingsExtension20(struct soap *soap, struct tt__ImagingSettingsExtension20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->ImageStabilization = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingSettingsExtension20(struct soap *soap, const struct tt__ImagingSettingsExtension20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImageStabilization(soap, &a->ImageStabilization);
	soap_serialize_PointerTott__ImagingSettingsExtension202(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension20(struct soap *soap, const char *tag, int id, const struct tt__ImagingSettingsExtension20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension20), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ImageStabilization(soap, "tt:ImageStabilization", -1, &a->ImageStabilization, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension202(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension20 * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension20(struct soap *soap, const char *tag, struct tt__ImagingSettingsExtension20 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_ImageStabilization = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingSettingsExtension20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension20, sizeof(struct tt__ImagingSettingsExtension20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingSettingsExtension20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ImageStabilization && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilization(soap, "tt:ImageStabilization", &a->ImageStabilization, "tt:ImageStabilization"))
				{	soap_flag_ImageStabilization--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension202(soap, "tt:Extension", &a->Extension, "tt:ImagingSettingsExtension202"))
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
	{	a = (struct tt__ImagingSettingsExtension20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension20, 0, sizeof(struct tt__ImagingSettingsExtension20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingSettingsExtension20(struct soap *soap, const struct tt__ImagingSettingsExtension20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension20);
	if (soap_out_tt__ImagingSettingsExtension20(soap, tag?tag:"tt:ImagingSettingsExtension20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension20 * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension20(struct soap *soap, struct tt__ImagingSettingsExtension20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalance20(struct soap *soap, struct tt__WhiteBalance20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__WhiteBalanceMode(soap, &a->Mode);
	a->CrGain = NULL;
	a->CbGain = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalance20(struct soap *soap, const struct tt__WhiteBalance20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__WhiteBalanceMode);
	soap_serialize_PointerTofloat(soap, &a->CrGain);
	soap_serialize_PointerTofloat(soap, &a->CbGain);
	soap_serialize_PointerTott__WhiteBalance20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance20(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalance20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance20), type))
		return soap->error;
	if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:CrGain", -1, &a->CrGain, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:CbGain", -1, &a->CbGain, ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalance20 * SOAP_FMAC4 soap_in_tt__WhiteBalance20(struct soap *soap, const char *tag, struct tt__WhiteBalance20 *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_CrGain = 1;
	size_t soap_flag_CbGain = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalance20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance20, sizeof(struct tt__WhiteBalance20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalance20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", &a->Mode, "tt:WhiteBalanceMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_CrGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:CrGain", &a->CrGain, "xsd:float"))
				{	soap_flag_CrGain--;
					continue;
				}
			if (soap_flag_CbGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:CbGain", &a->CbGain, "xsd:float"))
				{	soap_flag_CbGain--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance20Extension(soap, "tt:Extension", &a->Extension, "tt:WhiteBalance20Extension"))
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
	{	a = (struct tt__WhiteBalance20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance20, 0, sizeof(struct tt__WhiteBalance20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalance20(struct soap *soap, const struct tt__WhiteBalance20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance20);
	if (soap_out_tt__WhiteBalance20(soap, tag?tag:"tt:WhiteBalance20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalance20 * SOAP_FMAC4 soap_get_tt__WhiteBalance20(struct soap *soap, struct tt__WhiteBalance20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WideDynamicRange20(struct soap *soap, struct tt__WideDynamicRange20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__WideDynamicMode(soap, &a->Mode);
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WideDynamicRange20(struct soap *soap, const struct tt__WideDynamicRange20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__WideDynamicMode);
	soap_serialize_PointerTofloat(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRange20(struct soap *soap, const char *tag, int id, const struct tt__WideDynamicRange20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRange20), type))
		return soap->error;
	if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WideDynamicRange20 * SOAP_FMAC4 soap_in_tt__WideDynamicRange20(struct soap *soap, const char *tag, struct tt__WideDynamicRange20 *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WideDynamicRange20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRange20, sizeof(struct tt__WideDynamicRange20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WideDynamicRange20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", &a->Mode, "tt:WideDynamicMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &a->Level, "xsd:float"))
				{	soap_flag_Level--;
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
	{	a = (struct tt__WideDynamicRange20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRange20, 0, sizeof(struct tt__WideDynamicRange20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WideDynamicRange20(struct soap *soap, const struct tt__WideDynamicRange20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRange20);
	if (soap_out_tt__WideDynamicRange20(soap, tag?tag:"tt:WideDynamicRange20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WideDynamicRange20 * SOAP_FMAC4 soap_get_tt__WideDynamicRange20(struct soap *soap, struct tt__WideDynamicRange20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRange20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusConfiguration20(struct soap *soap, struct tt__FocusConfiguration20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__AutoFocusMode(soap, &a->AutoFocusMode);
	a->DefaultSpeed = NULL;
	a->NearLimit = NULL;
	a->FarLimit = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusConfiguration20(struct soap *soap, const struct tt__FocusConfiguration20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->AutoFocusMode, SOAP_TYPE_tt__AutoFocusMode);
	soap_serialize_PointerTofloat(soap, &a->DefaultSpeed);
	soap_serialize_PointerTofloat(soap, &a->NearLimit);
	soap_serialize_PointerTofloat(soap, &a->FarLimit);
	soap_serialize_PointerTott__FocusConfiguration20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration20(struct soap *soap, const char *tag, int id, const struct tt__FocusConfiguration20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration20), type))
		return soap->error;
	if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusMode", -1, &a->AutoFocusMode, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:DefaultSpeed", -1, &a->DefaultSpeed, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:NearLimit", -1, &a->NearLimit, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:FarLimit", -1, &a->FarLimit, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusConfiguration20 * SOAP_FMAC4 soap_in_tt__FocusConfiguration20(struct soap *soap, const char *tag, struct tt__FocusConfiguration20 *a, const char *type)
{
	size_t soap_flag_AutoFocusMode = 1;
	size_t soap_flag_DefaultSpeed = 1;
	size_t soap_flag_NearLimit = 1;
	size_t soap_flag_FarLimit = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusConfiguration20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration20, sizeof(struct tt__FocusConfiguration20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusConfiguration20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AutoFocusMode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusMode", &a->AutoFocusMode, "tt:AutoFocusMode"))
				{	soap_flag_AutoFocusMode--;
					continue;
				}
			if (soap_flag_DefaultSpeed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:DefaultSpeed", &a->DefaultSpeed, "xsd:float"))
				{	soap_flag_DefaultSpeed--;
					continue;
				}
			if (soap_flag_NearLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:NearLimit", &a->NearLimit, "xsd:float"))
				{	soap_flag_NearLimit--;
					continue;
				}
			if (soap_flag_FarLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:FarLimit", &a->FarLimit, "xsd:float"))
				{	soap_flag_FarLimit--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration20Extension(soap, "tt:Extension", &a->Extension, "tt:FocusConfiguration20Extension"))
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
	{	a = (struct tt__FocusConfiguration20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration20, 0, sizeof(struct tt__FocusConfiguration20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoFocusMode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusConfiguration20(struct soap *soap, const struct tt__FocusConfiguration20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration20);
	if (soap_out_tt__FocusConfiguration20(soap, tag?tag:"tt:FocusConfiguration20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusConfiguration20 * SOAP_FMAC4 soap_get_tt__FocusConfiguration20(struct soap *soap, struct tt__FocusConfiguration20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Exposure20(struct soap *soap, struct tt__Exposure20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ExposureMode(soap, &a->Mode);
	a->Priority = NULL;
	a->Window = NULL;
	a->MinExposureTime = NULL;
	a->MaxExposureTime = NULL;
	a->MinGain = NULL;
	a->MaxGain = NULL;
	a->MinIris = NULL;
	a->MaxIris = NULL;
	a->ExposureTime = NULL;
	a->Gain = NULL;
	a->Iris = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Exposure20(struct soap *soap, const struct tt__Exposure20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__ExposureMode);
	soap_serialize_PointerTott__ExposurePriority(soap, &a->Priority);
	soap_serialize_PointerTott__Rectangle(soap, &a->Window);
	soap_serialize_PointerTofloat(soap, &a->MinExposureTime);
	soap_serialize_PointerTofloat(soap, &a->MaxExposureTime);
	soap_serialize_PointerTofloat(soap, &a->MinGain);
	soap_serialize_PointerTofloat(soap, &a->MaxGain);
	soap_serialize_PointerTofloat(soap, &a->MinIris);
	soap_serialize_PointerTofloat(soap, &a->MaxIris);
	soap_serialize_PointerTofloat(soap, &a->ExposureTime);
	soap_serialize_PointerTofloat(soap, &a->Gain);
	soap_serialize_PointerTofloat(soap, &a->Iris);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Exposure20(struct soap *soap, const char *tag, int id, const struct tt__Exposure20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Exposure20), type))
		return soap->error;
	if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTott__ExposurePriority(soap, "tt:Priority", -1, &a->Priority, ""))
		return soap->error;
	if (soap_out_PointerTott__Rectangle(soap, "tt:Window", -1, &a->Window, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinExposureTime", -1, &a->MinExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxExposureTime", -1, &a->MaxExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinGain", -1, &a->MinGain, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxGain", -1, &a->MaxGain, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinIris", -1, &a->MinIris, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxIris", -1, &a->MaxIris, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ExposureTime", -1, &a->ExposureTime, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Gain", -1, &a->Gain, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Iris", -1, &a->Iris, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Exposure20 * SOAP_FMAC4 soap_in_tt__Exposure20(struct soap *soap, const char *tag, struct tt__Exposure20 *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Priority = 1;
	size_t soap_flag_Window = 1;
	size_t soap_flag_MinExposureTime = 1;
	size_t soap_flag_MaxExposureTime = 1;
	size_t soap_flag_MinGain = 1;
	size_t soap_flag_MaxGain = 1;
	size_t soap_flag_MinIris = 1;
	size_t soap_flag_MaxIris = 1;
	size_t soap_flag_ExposureTime = 1;
	size_t soap_flag_Gain = 1;
	size_t soap_flag_Iris = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Exposure20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Exposure20, sizeof(struct tt__Exposure20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Exposure20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", &a->Mode, "tt:ExposureMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Priority && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposurePriority(soap, "tt:Priority", &a->Priority, "tt:ExposurePriority"))
				{	soap_flag_Priority--;
					continue;
				}
			if (soap_flag_Window && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Window", &a->Window, "tt:Rectangle"))
				{	soap_flag_Window--;
					continue;
				}
			if (soap_flag_MinExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinExposureTime", &a->MinExposureTime, "xsd:float"))
				{	soap_flag_MinExposureTime--;
					continue;
				}
			if (soap_flag_MaxExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxExposureTime", &a->MaxExposureTime, "xsd:float"))
				{	soap_flag_MaxExposureTime--;
					continue;
				}
			if (soap_flag_MinGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinGain", &a->MinGain, "xsd:float"))
				{	soap_flag_MinGain--;
					continue;
				}
			if (soap_flag_MaxGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxGain", &a->MaxGain, "xsd:float"))
				{	soap_flag_MaxGain--;
					continue;
				}
			if (soap_flag_MinIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinIris", &a->MinIris, "xsd:float"))
				{	soap_flag_MinIris--;
					continue;
				}
			if (soap_flag_MaxIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxIris", &a->MaxIris, "xsd:float"))
				{	soap_flag_MaxIris--;
					continue;
				}
			if (soap_flag_ExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:ExposureTime", &a->ExposureTime, "xsd:float"))
				{	soap_flag_ExposureTime--;
					continue;
				}
			if (soap_flag_Gain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Gain", &a->Gain, "xsd:float"))
				{	soap_flag_Gain--;
					continue;
				}
			if (soap_flag_Iris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Iris", &a->Iris, "xsd:float"))
				{	soap_flag_Iris--;
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
	{	a = (struct tt__Exposure20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Exposure20, 0, sizeof(struct tt__Exposure20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Exposure20(struct soap *soap, const struct tt__Exposure20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Exposure20);
	if (soap_out_tt__Exposure20(soap, tag?tag:"tt:Exposure20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Exposure20 * SOAP_FMAC4 soap_get_tt__Exposure20(struct soap *soap, struct tt__Exposure20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Exposure20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BacklightCompensation20(struct soap *soap, struct tt__BacklightCompensation20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__BacklightCompensationMode(soap, &a->Mode);
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BacklightCompensation20(struct soap *soap, const struct tt__BacklightCompensation20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__BacklightCompensationMode);
	soap_serialize_PointerTofloat(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensation20(struct soap *soap, const char *tag, int id, const struct tt__BacklightCompensation20 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensation20), type))
		return soap->error;
	if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BacklightCompensation20 * SOAP_FMAC4 soap_in_tt__BacklightCompensation20(struct soap *soap, const char *tag, struct tt__BacklightCompensation20 *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BacklightCompensation20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensation20, sizeof(struct tt__BacklightCompensation20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BacklightCompensation20(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", &a->Mode, "tt:BacklightCompensationMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &a->Level, "xsd:float"))
				{	soap_flag_Level--;
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
	{	a = (struct tt__BacklightCompensation20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensation20, 0, sizeof(struct tt__BacklightCompensation20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BacklightCompensation20(struct soap *soap, const struct tt__BacklightCompensation20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensation20);
	if (soap_out_tt__BacklightCompensation20(soap, tag?tag:"tt:BacklightCompensation20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BacklightCompensation20 * SOAP_FMAC4 soap_get_tt__BacklightCompensation20(struct soap *soap, struct tt__BacklightCompensation20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensation20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusStatus20Extension(struct soap *soap, struct tt__FocusStatus20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusStatus20Extension(struct soap *soap, const struct tt__FocusStatus20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus20Extension(struct soap *soap, const char *tag, int id, const struct tt__FocusStatus20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusStatus20Extension * SOAP_FMAC4 soap_in_tt__FocusStatus20Extension(struct soap *soap, const char *tag, struct tt__FocusStatus20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusStatus20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus20Extension, sizeof(struct tt__FocusStatus20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusStatus20Extension(soap, a);
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
	{	a = (struct tt__FocusStatus20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus20Extension, 0, sizeof(struct tt__FocusStatus20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusStatus20Extension(struct soap *soap, const struct tt__FocusStatus20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus20Extension);
	if (soap_out_tt__FocusStatus20Extension(soap, tag?tag:"tt:FocusStatus20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusStatus20Extension * SOAP_FMAC4 soap_get_tt__FocusStatus20Extension(struct soap *soap, struct tt__FocusStatus20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingStatus20Extension(struct soap *soap, struct tt__ImagingStatus20Extension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingStatus20Extension(struct soap *soap, const struct tt__ImagingStatus20Extension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus20Extension(struct soap *soap, const char *tag, int id, const struct tt__ImagingStatus20Extension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus20Extension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingStatus20Extension * SOAP_FMAC4 soap_in_tt__ImagingStatus20Extension(struct soap *soap, const char *tag, struct tt__ImagingStatus20Extension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingStatus20Extension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus20Extension, sizeof(struct tt__ImagingStatus20Extension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingStatus20Extension(soap, a);
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
	{	a = (struct tt__ImagingStatus20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus20Extension, 0, sizeof(struct tt__ImagingStatus20Extension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingStatus20Extension(struct soap *soap, const struct tt__ImagingStatus20Extension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus20Extension);
	if (soap_out_tt__ImagingStatus20Extension(soap, tag?tag:"tt:ImagingStatus20Extension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingStatus20Extension * SOAP_FMAC4 soap_get_tt__ImagingStatus20Extension(struct soap *soap, struct tt__ImagingStatus20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusStatus20(struct soap *soap, struct tt__FocusStatus20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Position);
	soap_default_tt__MoveStatus(soap, &a->MoveStatus);
	soap_default_string(soap, &a->Error);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusStatus20(struct soap *soap, const struct tt__FocusStatus20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Position, SOAP_TYPE_float);
	soap_embedded(soap, &a->MoveStatus, SOAP_TYPE_tt__MoveStatus);
	soap_serialize_string(soap, &a->Error);
	soap_serialize_PointerTott__FocusStatus20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus20(struct soap *soap, const char *tag, int id, const struct tt__FocusStatus20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus20), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Position", -1, &a->Position, ""))
		return soap->error;
	if (soap_out_tt__MoveStatus(soap, "tt:MoveStatus", -1, &a->MoveStatus, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &a->Error, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusStatus20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusStatus20 * SOAP_FMAC4 soap_in_tt__FocusStatus20(struct soap *soap, const char *tag, struct tt__FocusStatus20 *a, const char *type)
{
	size_t soap_flag_Position = 1;
	size_t soap_flag_MoveStatus = 1;
	size_t soap_flag_Error = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusStatus20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus20, sizeof(struct tt__FocusStatus20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusStatus20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &a->Position, "xsd:float"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap_flag_MoveStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__MoveStatus(soap, "tt:MoveStatus", &a->MoveStatus, "tt:MoveStatus"))
				{	soap_flag_MoveStatus--;
					continue;
				}
			if (soap_flag_Error && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &a->Error, "xsd:string"))
				{	soap_flag_Error--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus20Extension(soap, "tt:Extension", &a->Extension, "tt:FocusStatus20Extension"))
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
	{	a = (struct tt__FocusStatus20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus20, 0, sizeof(struct tt__FocusStatus20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position > 0 || soap_flag_MoveStatus > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusStatus20(struct soap *soap, const struct tt__FocusStatus20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus20);
	if (soap_out_tt__FocusStatus20(soap, tag?tag:"tt:FocusStatus20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusStatus20 * SOAP_FMAC4 soap_get_tt__FocusStatus20(struct soap *soap, struct tt__FocusStatus20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingStatus20(struct soap *soap, struct tt__ImagingStatus20 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->FocusStatus20 = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingStatus20(struct soap *soap, const struct tt__ImagingStatus20 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FocusStatus20(soap, &a->FocusStatus20);
	soap_serialize_PointerTott__ImagingStatus20Extension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus20(struct soap *soap, const char *tag, int id, const struct tt__ImagingStatus20 *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus20), type))
		return soap->error;
	if (soap_out_PointerTott__FocusStatus20(soap, "tt:FocusStatus20", -1, &a->FocusStatus20, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingStatus20Extension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingStatus20 * SOAP_FMAC4 soap_in_tt__ImagingStatus20(struct soap *soap, const char *tag, struct tt__ImagingStatus20 *a, const char *type)
{
	size_t soap_flag_FocusStatus20 = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingStatus20 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus20, sizeof(struct tt__ImagingStatus20), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingStatus20(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FocusStatus20 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus20(soap, "tt:FocusStatus20", &a->FocusStatus20, "tt:FocusStatus20"))
				{	soap_flag_FocusStatus20--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingStatus20Extension(soap, "tt:Extension", &a->Extension, "tt:ImagingStatus20Extension"))
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
	{	a = (struct tt__ImagingStatus20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus20, 0, sizeof(struct tt__ImagingStatus20), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingStatus20(struct soap *soap, const struct tt__ImagingStatus20 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus20);
	if (soap_out_tt__ImagingStatus20(soap, tag?tag:"tt:ImagingStatus20", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingStatus20 * SOAP_FMAC4 soap_get_tt__ImagingStatus20(struct soap *soap, struct tt__ImagingStatus20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ContinuousFocusOptions(struct soap *soap, struct tt__ContinuousFocusOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ContinuousFocusOptions(struct soap *soap, const struct tt__ContinuousFocusOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ContinuousFocusOptions(struct soap *soap, const char *tag, int id, const struct tt__ContinuousFocusOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ContinuousFocusOptions), type))
		return soap->error;
	if (a->Speed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->Speed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Speed"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ContinuousFocusOptions * SOAP_FMAC4 soap_in_tt__ContinuousFocusOptions(struct soap *soap, const char *tag, struct tt__ContinuousFocusOptions *a, const char *type)
{
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ContinuousFocusOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ContinuousFocusOptions, sizeof(struct tt__ContinuousFocusOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ContinuousFocusOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &a->Speed, "tt:FloatRange"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__ContinuousFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ContinuousFocusOptions, 0, sizeof(struct tt__ContinuousFocusOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Speed > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ContinuousFocusOptions(struct soap *soap, const struct tt__ContinuousFocusOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ContinuousFocusOptions);
	if (soap_out_tt__ContinuousFocusOptions(soap, tag?tag:"tt:ContinuousFocusOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ContinuousFocusOptions * SOAP_FMAC4 soap_get_tt__ContinuousFocusOptions(struct soap *soap, struct tt__ContinuousFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ContinuousFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelativeFocusOptions(struct soap *soap, struct tt__RelativeFocusOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Distance = NULL;
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RelativeFocusOptions(struct soap *soap, const struct tt__RelativeFocusOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &a->Distance);
	soap_serialize_PointerTott__FloatRange(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocusOptions(struct soap *soap, const char *tag, int id, const struct tt__RelativeFocusOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocusOptions), type))
		return soap->error;
	if (a->Distance)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Distance", -1, &a->Distance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Distance"))
		return soap->error;
	if (a->Speed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->Speed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Speed"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RelativeFocusOptions * SOAP_FMAC4 soap_in_tt__RelativeFocusOptions(struct soap *soap, const char *tag, struct tt__RelativeFocusOptions *a, const char *type)
{
	size_t soap_flag_Distance = 1;
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RelativeFocusOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocusOptions, sizeof(struct tt__RelativeFocusOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RelativeFocusOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Distance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Distance", &a->Distance, "tt:FloatRange"))
				{	soap_flag_Distance--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &a->Speed, "tt:FloatRange"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__RelativeFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocusOptions, 0, sizeof(struct tt__RelativeFocusOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance > 0 || soap_flag_Speed > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelativeFocusOptions(struct soap *soap, const struct tt__RelativeFocusOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocusOptions);
	if (soap_out_tt__RelativeFocusOptions(soap, tag?tag:"tt:RelativeFocusOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RelativeFocusOptions * SOAP_FMAC4 soap_get_tt__RelativeFocusOptions(struct soap *soap, struct tt__RelativeFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AbsoluteFocusOptions(struct soap *soap, struct tt__AbsoluteFocusOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Position = NULL;
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AbsoluteFocusOptions(struct soap *soap, const struct tt__AbsoluteFocusOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &a->Position);
	soap_serialize_PointerTott__FloatRange(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AbsoluteFocusOptions(struct soap *soap, const char *tag, int id, const struct tt__AbsoluteFocusOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AbsoluteFocusOptions), type))
		return soap->error;
	if (a->Position)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Position", -1, &a->Position, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Position"))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AbsoluteFocusOptions * SOAP_FMAC4 soap_in_tt__AbsoluteFocusOptions(struct soap *soap, const char *tag, struct tt__AbsoluteFocusOptions *a, const char *type)
{
	size_t soap_flag_Position = 1;
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AbsoluteFocusOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AbsoluteFocusOptions, sizeof(struct tt__AbsoluteFocusOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AbsoluteFocusOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Position", &a->Position, "tt:FloatRange"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &a->Speed, "tt:FloatRange"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__AbsoluteFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AbsoluteFocusOptions, 0, sizeof(struct tt__AbsoluteFocusOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AbsoluteFocusOptions(struct soap *soap, const struct tt__AbsoluteFocusOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AbsoluteFocusOptions);
	if (soap_out_tt__AbsoluteFocusOptions(soap, tag?tag:"tt:AbsoluteFocusOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AbsoluteFocusOptions * SOAP_FMAC4 soap_get_tt__AbsoluteFocusOptions(struct soap *soap, struct tt__AbsoluteFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AbsoluteFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MoveOptions(struct soap *soap, struct tt__MoveOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Absolute = NULL;
	a->Relative = NULL;
	a->Continuous = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MoveOptions(struct soap *soap, const struct tt__MoveOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocusOptions(soap, &a->Absolute);
	soap_serialize_PointerTott__RelativeFocusOptions(soap, &a->Relative);
	soap_serialize_PointerTott__ContinuousFocusOptions(soap, &a->Continuous);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveOptions(struct soap *soap, const char *tag, int id, const struct tt__MoveOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MoveOptions), type))
		return soap->error;
	if (soap_out_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", -1, &a->Absolute, ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocusOptions(soap, "tt:Relative", -1, &a->Relative, ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", -1, &a->Continuous, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MoveOptions * SOAP_FMAC4 soap_in_tt__MoveOptions(struct soap *soap, const char *tag, struct tt__MoveOptions *a, const char *type)
{
	size_t soap_flag_Absolute = 1;
	size_t soap_flag_Relative = 1;
	size_t soap_flag_Continuous = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MoveOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveOptions, sizeof(struct tt__MoveOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MoveOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Absolute && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", &a->Absolute, "tt:AbsoluteFocusOptions"))
				{	soap_flag_Absolute--;
					continue;
				}
			if (soap_flag_Relative && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocusOptions(soap, "tt:Relative", &a->Relative, "tt:RelativeFocusOptions"))
				{	soap_flag_Relative--;
					continue;
				}
			if (soap_flag_Continuous && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", &a->Continuous, "tt:ContinuousFocusOptions"))
				{	soap_flag_Continuous--;
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
	{	a = (struct tt__MoveOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MoveOptions, 0, sizeof(struct tt__MoveOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MoveOptions(struct soap *soap, const struct tt__MoveOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MoveOptions);
	if (soap_out_tt__MoveOptions(soap, tag?tag:"tt:MoveOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MoveOptions * SOAP_FMAC4 soap_get_tt__MoveOptions(struct soap *soap, struct tt__MoveOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ContinuousFocus(struct soap *soap, struct tt__ContinuousFocus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Speed);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ContinuousFocus(struct soap *soap, const struct tt__ContinuousFocus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Speed, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ContinuousFocus(struct soap *soap, const char *tag, int id, const struct tt__ContinuousFocus *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ContinuousFocus), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ContinuousFocus * SOAP_FMAC4 soap_in_tt__ContinuousFocus(struct soap *soap, const char *tag, struct tt__ContinuousFocus *a, const char *type)
{
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ContinuousFocus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ContinuousFocus, sizeof(struct tt__ContinuousFocus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ContinuousFocus(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Speed", &a->Speed, "xsd:float"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__ContinuousFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ContinuousFocus, 0, sizeof(struct tt__ContinuousFocus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Speed > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ContinuousFocus(struct soap *soap, const struct tt__ContinuousFocus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ContinuousFocus);
	if (soap_out_tt__ContinuousFocus(soap, tag?tag:"tt:ContinuousFocus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ContinuousFocus * SOAP_FMAC4 soap_get_tt__ContinuousFocus(struct soap *soap, struct tt__ContinuousFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ContinuousFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelativeFocus(struct soap *soap, struct tt__RelativeFocus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Distance);
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RelativeFocus(struct soap *soap, const struct tt__RelativeFocus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Distance, SOAP_TYPE_float);
	soap_serialize_PointerTofloat(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocus(struct soap *soap, const char *tag, int id, const struct tt__RelativeFocus *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocus), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Distance", -1, &a->Distance, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RelativeFocus * SOAP_FMAC4 soap_in_tt__RelativeFocus(struct soap *soap, const char *tag, struct tt__RelativeFocus *a, const char *type)
{
	size_t soap_flag_Distance = 1;
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RelativeFocus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocus, sizeof(struct tt__RelativeFocus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RelativeFocus(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Distance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Distance", &a->Distance, "xsd:float"))
				{	soap_flag_Distance--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Speed", &a->Speed, "xsd:float"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__RelativeFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocus, 0, sizeof(struct tt__RelativeFocus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelativeFocus(struct soap *soap, const struct tt__RelativeFocus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocus);
	if (soap_out_tt__RelativeFocus(soap, tag?tag:"tt:RelativeFocus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RelativeFocus * SOAP_FMAC4 soap_get_tt__RelativeFocus(struct soap *soap, struct tt__RelativeFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AbsoluteFocus(struct soap *soap, struct tt__AbsoluteFocus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Position);
	a->Speed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AbsoluteFocus(struct soap *soap, const struct tt__AbsoluteFocus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Position, SOAP_TYPE_float);
	soap_serialize_PointerTofloat(soap, &a->Speed);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AbsoluteFocus(struct soap *soap, const char *tag, int id, const struct tt__AbsoluteFocus *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AbsoluteFocus), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Position", -1, &a->Position, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AbsoluteFocus * SOAP_FMAC4 soap_in_tt__AbsoluteFocus(struct soap *soap, const char *tag, struct tt__AbsoluteFocus *a, const char *type)
{
	size_t soap_flag_Position = 1;
	size_t soap_flag_Speed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AbsoluteFocus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AbsoluteFocus, sizeof(struct tt__AbsoluteFocus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AbsoluteFocus(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &a->Position, "xsd:float"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Speed", &a->Speed, "xsd:float"))
				{	soap_flag_Speed--;
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
	{	a = (struct tt__AbsoluteFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AbsoluteFocus, 0, sizeof(struct tt__AbsoluteFocus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AbsoluteFocus(struct soap *soap, const struct tt__AbsoluteFocus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AbsoluteFocus);
	if (soap_out_tt__AbsoluteFocus(soap, tag?tag:"tt:AbsoluteFocus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AbsoluteFocus * SOAP_FMAC4 soap_get_tt__AbsoluteFocus(struct soap *soap, struct tt__AbsoluteFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AbsoluteFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusMove(struct soap *soap, struct tt__FocusMove *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Absolute = NULL;
	a->Relative = NULL;
	a->Continuous = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusMove(struct soap *soap, const struct tt__FocusMove *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocus(soap, &a->Absolute);
	soap_serialize_PointerTott__RelativeFocus(soap, &a->Relative);
	soap_serialize_PointerTott__ContinuousFocus(soap, &a->Continuous);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusMove(struct soap *soap, const char *tag, int id, const struct tt__FocusMove *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusMove), type))
		return soap->error;
	if (soap_out_PointerTott__AbsoluteFocus(soap, "tt:Absolute", -1, &a->Absolute, ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocus(soap, "tt:Relative", -1, &a->Relative, ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocus(soap, "tt:Continuous", -1, &a->Continuous, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusMove * SOAP_FMAC4 soap_in_tt__FocusMove(struct soap *soap, const char *tag, struct tt__FocusMove *a, const char *type)
{
	size_t soap_flag_Absolute = 1;
	size_t soap_flag_Relative = 1;
	size_t soap_flag_Continuous = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusMove *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusMove, sizeof(struct tt__FocusMove), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusMove(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Absolute && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocus(soap, "tt:Absolute", &a->Absolute, "tt:AbsoluteFocus"))
				{	soap_flag_Absolute--;
					continue;
				}
			if (soap_flag_Relative && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocus(soap, "tt:Relative", &a->Relative, "tt:RelativeFocus"))
				{	soap_flag_Relative--;
					continue;
				}
			if (soap_flag_Continuous && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocus(soap, "tt:Continuous", &a->Continuous, "tt:ContinuousFocus"))
				{	soap_flag_Continuous--;
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
	{	a = (struct tt__FocusMove *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusMove, 0, sizeof(struct tt__FocusMove), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusMove(struct soap *soap, const struct tt__FocusMove *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusMove);
	if (soap_out_tt__FocusMove(soap, tag?tag:"tt:FocusMove", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusMove * SOAP_FMAC4 soap_get_tt__FocusMove(struct soap *soap, struct tt__FocusMove *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusMove(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalanceOptions(struct soap *soap, struct tt__WhiteBalanceOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->YrGain = NULL;
	a->YbGain = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalanceOptions(struct soap *soap, const struct tt__WhiteBalanceOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__WhiteBalanceMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->YrGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->YbGain);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalanceOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (a->YrGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YrGain", -1, &a->YrGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YrGain"))
		return soap->error;
	if (a->YbGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YbGain", -1, &a->YbGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YbGain"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions(struct soap *soap, const char *tag, struct tt__WhiteBalanceOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_YrGain = 1;
	size_t soap_flag_YbGain = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalanceOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions, sizeof(struct tt__WhiteBalanceOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalanceOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__WhiteBalanceMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__WhiteBalanceMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__WhiteBalanceMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", a->Mode, "tt:WhiteBalanceMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_YrGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YrGain", &a->YrGain, "tt:FloatRange"))
				{	soap_flag_YrGain--;
					continue;
				}
			if (soap_flag_YbGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YbGain", &a->YbGain, "tt:FloatRange"))
				{	soap_flag_YbGain--;
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
			a->Mode = (enum tt__WhiteBalanceMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__WhiteBalanceOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions, 0, sizeof(struct tt__WhiteBalanceOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1 || soap_flag_YrGain > 0 || soap_flag_YbGain > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalanceOptions(struct soap *soap, const struct tt__WhiteBalanceOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions);
	if (soap_out_tt__WhiteBalanceOptions(soap, tag?tag:"tt:WhiteBalanceOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalanceOptions * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions(struct soap *soap, struct tt__WhiteBalanceOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WideDynamicRangeOptions(struct soap *soap, struct tt__WideDynamicRangeOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WideDynamicRangeOptions(struct soap *soap, const struct tt__WideDynamicRangeOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRangeOptions(struct soap *soap, const char *tag, int id, const struct tt__WideDynamicRangeOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRangeOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (a->Level)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->Level, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Level"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WideDynamicRangeOptions * SOAP_FMAC4 soap_in_tt__WideDynamicRangeOptions(struct soap *soap, const char *tag, struct tt__WideDynamicRangeOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WideDynamicRangeOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRangeOptions, sizeof(struct tt__WideDynamicRangeOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WideDynamicRangeOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__WideDynamicMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->Mode, "tt:WideDynamicMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &a->Level, "tt:FloatRange"))
				{	soap_flag_Level--;
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
			a->Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__WideDynamicRangeOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRangeOptions, 0, sizeof(struct tt__WideDynamicRangeOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1 || soap_flag_Level > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WideDynamicRangeOptions(struct soap *soap, const struct tt__WideDynamicRangeOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRangeOptions);
	if (soap_out_tt__WideDynamicRangeOptions(soap, tag?tag:"tt:WideDynamicRangeOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WideDynamicRangeOptions * SOAP_FMAC4 soap_get_tt__WideDynamicRangeOptions(struct soap *soap, struct tt__WideDynamicRangeOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRangeOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusOptions(struct soap *soap, struct tt__FocusOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAutoFocusModes = 0;
	a->AutoFocusModes = NULL;
	a->DefaultSpeed = NULL;
	a->NearLimit = NULL;
	a->FarLimit = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusOptions(struct soap *soap, const struct tt__FocusOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AutoFocusModes)
	{	int i;
		for (i = 0; i < a->__sizeAutoFocusModes; i++)
		{
			soap_embedded(soap, a->AutoFocusModes + i, SOAP_TYPE_tt__AutoFocusMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->DefaultSpeed);
	soap_serialize_PointerTott__FloatRange(soap, &a->NearLimit);
	soap_serialize_PointerTott__FloatRange(soap, &a->FarLimit);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions(struct soap *soap, const char *tag, int id, const struct tt__FocusOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions), type))
		return soap->error;
	if (a->AutoFocusModes)
	{	int i;
		for (i = 0; i < a->__sizeAutoFocusModes; i++)
			if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusModes", -1, a->AutoFocusModes + i, ""))
				return soap->error;
	}
	if (a->DefaultSpeed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:DefaultSpeed", -1, &a->DefaultSpeed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:DefaultSpeed"))
		return soap->error;
	if (a->NearLimit)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:NearLimit", -1, &a->NearLimit, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:NearLimit"))
		return soap->error;
	if (a->FarLimit)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:FarLimit", -1, &a->FarLimit, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FarLimit"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusOptions * SOAP_FMAC4 soap_in_tt__FocusOptions(struct soap *soap, const char *tag, struct tt__FocusOptions *a, const char *type)
{
	struct soap_blist *soap_blist_AutoFocusModes = NULL;
	size_t soap_flag_DefaultSpeed = 1;
	size_t soap_flag_NearLimit = 1;
	size_t soap_flag_FarLimit = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions, sizeof(struct tt__FocusOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AutoFocusModes", 1, NULL))
			{	if (a->AutoFocusModes == NULL)
				{	if (soap_blist_AutoFocusModes == NULL)
						soap_blist_AutoFocusModes = soap_new_block(soap);
					a->AutoFocusModes = (enum tt__AutoFocusMode *)soap_push_block(soap, soap_blist_AutoFocusModes, sizeof(enum tt__AutoFocusMode));
					if (a->AutoFocusModes == NULL)
						return NULL;
					soap_default_tt__AutoFocusMode(soap, a->AutoFocusModes);
				}
				soap_revert(soap);
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusModes", a->AutoFocusModes, "tt:AutoFocusMode"))
				{	a->__sizeAutoFocusModes++;
					a->AutoFocusModes = NULL;
					continue;
				}
			}
			if (soap_flag_DefaultSpeed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:DefaultSpeed", &a->DefaultSpeed, "tt:FloatRange"))
				{	soap_flag_DefaultSpeed--;
					continue;
				}
			if (soap_flag_NearLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:NearLimit", &a->NearLimit, "tt:FloatRange"))
				{	soap_flag_NearLimit--;
					continue;
				}
			if (soap_flag_FarLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:FarLimit", &a->FarLimit, "tt:FloatRange"))
				{	soap_flag_FarLimit--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->AutoFocusModes)
			soap_pop_block(soap, soap_blist_AutoFocusModes);
		if (a->__sizeAutoFocusModes)
			a->AutoFocusModes = (enum tt__AutoFocusMode *)soap_save_block(soap, soap_blist_AutoFocusModes, NULL, 1);
		else
		{	a->AutoFocusModes = NULL;
			if (soap_blist_AutoFocusModes)
				soap_end_block(soap, soap_blist_AutoFocusModes);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions, 0, sizeof(struct tt__FocusOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DefaultSpeed > 0 || soap_flag_NearLimit > 0 || soap_flag_FarLimit > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusOptions(struct soap *soap, const struct tt__FocusOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions);
	if (soap_out_tt__FocusOptions(soap, tag?tag:"tt:FocusOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusOptions * SOAP_FMAC4 soap_get_tt__FocusOptions(struct soap *soap, struct tt__FocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ExposureOptions(struct soap *soap, struct tt__ExposureOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->__sizePriority = 0;
	a->Priority = NULL;
	a->MinExposureTime = NULL;
	a->MaxExposureTime = NULL;
	a->MinGain = NULL;
	a->MaxGain = NULL;
	a->MinIris = NULL;
	a->MaxIris = NULL;
	a->ExposureTime = NULL;
	a->Gain = NULL;
	a->Iris = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ExposureOptions(struct soap *soap, const struct tt__ExposureOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__ExposureMode);
		}
	}
	if (a->Priority)
	{	int i;
		for (i = 0; i < a->__sizePriority; i++)
		{
			soap_embedded(soap, a->Priority + i, SOAP_TYPE_tt__ExposurePriority);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->MinExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->MinGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxGain);
	soap_serialize_PointerTott__FloatRange(soap, &a->MinIris);
	soap_serialize_PointerTott__FloatRange(soap, &a->MaxIris);
	soap_serialize_PointerTott__FloatRange(soap, &a->ExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &a->Gain);
	soap_serialize_PointerTott__FloatRange(soap, &a->Iris);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureOptions(struct soap *soap, const char *tag, int id, const struct tt__ExposureOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposureOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (a->Priority)
	{	int i;
		for (i = 0; i < a->__sizePriority; i++)
			if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, a->Priority + i, ""))
				return soap->error;
	}
	if (a->MinExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinExposureTime", -1, &a->MinExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinExposureTime"))
		return soap->error;
	if (a->MaxExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxExposureTime", -1, &a->MaxExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxExposureTime"))
		return soap->error;
	if (a->MinGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinGain", -1, &a->MinGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinGain"))
		return soap->error;
	if (a->MaxGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxGain", -1, &a->MaxGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxGain"))
		return soap->error;
	if (a->MinIris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinIris", -1, &a->MinIris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinIris"))
		return soap->error;
	if (a->MaxIris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxIris", -1, &a->MaxIris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxIris"))
		return soap->error;
	if (a->ExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:ExposureTime", -1, &a->ExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ExposureTime"))
		return soap->error;
	if (a->Gain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Gain", -1, &a->Gain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Gain"))
		return soap->error;
	if (a->Iris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Iris", -1, &a->Iris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Iris"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ExposureOptions * SOAP_FMAC4 soap_in_tt__ExposureOptions(struct soap *soap, const char *tag, struct tt__ExposureOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	struct soap_blist *soap_blist_Priority = NULL;
	size_t soap_flag_MinExposureTime = 1;
	size_t soap_flag_MaxExposureTime = 1;
	size_t soap_flag_MinGain = 1;
	size_t soap_flag_MaxGain = 1;
	size_t soap_flag_MinIris = 1;
	size_t soap_flag_MaxIris = 1;
	size_t soap_flag_ExposureTime = 1;
	size_t soap_flag_Gain = 1;
	size_t soap_flag_Iris = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ExposureOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureOptions, sizeof(struct tt__ExposureOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ExposureOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__ExposureMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__ExposureMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__ExposureMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", a->Mode, "tt:ExposureMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Priority", 1, NULL))
			{	if (a->Priority == NULL)
				{	if (soap_blist_Priority == NULL)
						soap_blist_Priority = soap_new_block(soap);
					a->Priority = (enum tt__ExposurePriority *)soap_push_block(soap, soap_blist_Priority, sizeof(enum tt__ExposurePriority));
					if (a->Priority == NULL)
						return NULL;
					soap_default_tt__ExposurePriority(soap, a->Priority);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", a->Priority, "tt:ExposurePriority"))
				{	a->__sizePriority++;
					a->Priority = NULL;
					continue;
				}
			}
			if (soap_flag_MinExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinExposureTime", &a->MinExposureTime, "tt:FloatRange"))
				{	soap_flag_MinExposureTime--;
					continue;
				}
			if (soap_flag_MaxExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxExposureTime", &a->MaxExposureTime, "tt:FloatRange"))
				{	soap_flag_MaxExposureTime--;
					continue;
				}
			if (soap_flag_MinGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinGain", &a->MinGain, "tt:FloatRange"))
				{	soap_flag_MinGain--;
					continue;
				}
			if (soap_flag_MaxGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxGain", &a->MaxGain, "tt:FloatRange"))
				{	soap_flag_MaxGain--;
					continue;
				}
			if (soap_flag_MinIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinIris", &a->MinIris, "tt:FloatRange"))
				{	soap_flag_MinIris--;
					continue;
				}
			if (soap_flag_MaxIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxIris", &a->MaxIris, "tt:FloatRange"))
				{	soap_flag_MaxIris--;
					continue;
				}
			if (soap_flag_ExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ExposureTime", &a->ExposureTime, "tt:FloatRange"))
				{	soap_flag_ExposureTime--;
					continue;
				}
			if (soap_flag_Gain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Gain", &a->Gain, "tt:FloatRange"))
				{	soap_flag_Gain--;
					continue;
				}
			if (soap_flag_Iris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Iris", &a->Iris, "tt:FloatRange"))
				{	soap_flag_Iris--;
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
			a->Mode = (enum tt__ExposureMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (a->Priority)
			soap_pop_block(soap, soap_blist_Priority);
		if (a->__sizePriority)
			a->Priority = (enum tt__ExposurePriority *)soap_save_block(soap, soap_blist_Priority, NULL, 1);
		else
		{	a->Priority = NULL;
			if (soap_blist_Priority)
				soap_end_block(soap, soap_blist_Priority);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ExposureOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposureOptions, 0, sizeof(struct tt__ExposureOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1 || a->__sizePriority < 1 || soap_flag_MinExposureTime > 0 || soap_flag_MaxExposureTime > 0 || soap_flag_MinGain > 0 || soap_flag_MaxGain > 0 || soap_flag_MinIris > 0 || soap_flag_MaxIris > 0 || soap_flag_ExposureTime > 0 || soap_flag_Gain > 0 || soap_flag_Iris > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ExposureOptions(struct soap *soap, const struct tt__ExposureOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ExposureOptions);
	if (soap_out_tt__ExposureOptions(soap, tag?tag:"tt:ExposureOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ExposureOptions * SOAP_FMAC4 soap_get_tt__ExposureOptions(struct soap *soap, struct tt__ExposureOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BacklightCompensationOptions(struct soap *soap, struct tt__BacklightCompensationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Level = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BacklightCompensationOptions(struct soap *soap, const struct tt__BacklightCompensationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Level);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationOptions(struct soap *soap, const char *tag, int id, const struct tt__BacklightCompensationOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensationOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (a->Level)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->Level, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Level"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BacklightCompensationOptions * SOAP_FMAC4 soap_in_tt__BacklightCompensationOptions(struct soap *soap, const char *tag, struct tt__BacklightCompensationOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BacklightCompensationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationOptions, sizeof(struct tt__BacklightCompensationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BacklightCompensationOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__WideDynamicMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->Mode, "tt:WideDynamicMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &a->Level, "tt:FloatRange"))
				{	soap_flag_Level--;
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
			a->Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__BacklightCompensationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensationOptions, 0, sizeof(struct tt__BacklightCompensationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1 || soap_flag_Level > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BacklightCompensationOptions(struct soap *soap, const struct tt__BacklightCompensationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationOptions);
	if (soap_out_tt__BacklightCompensationOptions(soap, tag?tag:"tt:BacklightCompensationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BacklightCompensationOptions * SOAP_FMAC4 soap_get_tt__BacklightCompensationOptions(struct soap *soap, struct tt__BacklightCompensationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingOptions(struct soap *soap, struct tt__ImagingOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BacklightCompensation = NULL;
	a->Brightness = NULL;
	a->ColorSaturation = NULL;
	a->Contrast = NULL;
	a->Exposure = NULL;
	a->Focus = NULL;
	a->__sizeIrCutFilterModes = 0;
	a->IrCutFilterModes = NULL;
	a->Sharpness = NULL;
	a->WideDynamicRange = NULL;
	a->WhiteBalance = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingOptions(struct soap *soap, const struct tt__ImagingOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensationOptions(soap, &a->BacklightCompensation);
	soap_serialize_PointerTott__FloatRange(soap, &a->Brightness);
	soap_serialize_PointerTott__FloatRange(soap, &a->ColorSaturation);
	soap_serialize_PointerTott__FloatRange(soap, &a->Contrast);
	soap_serialize_PointerTott__ExposureOptions(soap, &a->Exposure);
	soap_serialize_PointerTott__FocusOptions(soap, &a->Focus);
	if (a->IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->__sizeIrCutFilterModes; i++)
		{
			soap_embedded(soap, a->IrCutFilterModes + i, SOAP_TYPE_tt__IrCutFilterMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &a->Sharpness);
	soap_serialize_PointerTott__WideDynamicRangeOptions(soap, &a->WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalanceOptions(soap, &a->WhiteBalance);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions(struct soap *soap, const char *tag, int id, const struct tt__ImagingOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions), type))
		return soap->error;
	if (a->BacklightCompensation)
	{	if (soap_out_PointerTott__BacklightCompensationOptions(soap, "tt:BacklightCompensation", -1, &a->BacklightCompensation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BacklightCompensation"))
		return soap->error;
	if (a->Brightness)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Brightness", -1, &a->Brightness, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Brightness"))
		return soap->error;
	if (a->ColorSaturation)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:ColorSaturation", -1, &a->ColorSaturation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ColorSaturation"))
		return soap->error;
	if (a->Contrast)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Contrast", -1, &a->Contrast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Contrast"))
		return soap->error;
	if (a->Exposure)
	{	if (soap_out_PointerTott__ExposureOptions(soap, "tt:Exposure", -1, &a->Exposure, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Exposure"))
		return soap->error;
	if (a->Focus)
	{	if (soap_out_PointerTott__FocusOptions(soap, "tt:Focus", -1, &a->Focus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Focus"))
		return soap->error;
	if (a->IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->__sizeIrCutFilterModes; i++)
			if (soap_out_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", -1, a->IrCutFilterModes + i, ""))
				return soap->error;
	}
	if (a->Sharpness)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Sharpness", -1, &a->Sharpness, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Sharpness"))
		return soap->error;
	if (a->WideDynamicRange)
	{	if (soap_out_PointerTott__WideDynamicRangeOptions(soap, "tt:WideDynamicRange", -1, &a->WideDynamicRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:WideDynamicRange"))
		return soap->error;
	if (a->WhiteBalance)
	{	if (soap_out_PointerTott__WhiteBalanceOptions(soap, "tt:WhiteBalance", -1, &a->WhiteBalance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:WhiteBalance"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingOptions * SOAP_FMAC4 soap_in_tt__ImagingOptions(struct soap *soap, const char *tag, struct tt__ImagingOptions *a, const char *type)
{
	size_t soap_flag_BacklightCompensation = 1;
	size_t soap_flag_Brightness = 1;
	size_t soap_flag_ColorSaturation = 1;
	size_t soap_flag_Contrast = 1;
	size_t soap_flag_Exposure = 1;
	size_t soap_flag_Focus = 1;
	struct soap_blist *soap_blist_IrCutFilterModes = NULL;
	size_t soap_flag_Sharpness = 1;
	size_t soap_flag_WideDynamicRange = 1;
	size_t soap_flag_WhiteBalance = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions, sizeof(struct tt__ImagingOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BacklightCompensation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensationOptions(soap, "tt:BacklightCompensation", &a->BacklightCompensation, "tt:BacklightCompensationOptions"))
				{	soap_flag_BacklightCompensation--;
					continue;
				}
			if (soap_flag_Brightness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Brightness", &a->Brightness, "tt:FloatRange"))
				{	soap_flag_Brightness--;
					continue;
				}
			if (soap_flag_ColorSaturation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ColorSaturation", &a->ColorSaturation, "tt:FloatRange"))
				{	soap_flag_ColorSaturation--;
					continue;
				}
			if (soap_flag_Contrast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Contrast", &a->Contrast, "tt:FloatRange"))
				{	soap_flag_Contrast--;
					continue;
				}
			if (soap_flag_Exposure && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposureOptions(soap, "tt:Exposure", &a->Exposure, "tt:ExposureOptions"))
				{	soap_flag_Exposure--;
					continue;
				}
			if (soap_flag_Focus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions(soap, "tt:Focus", &a->Focus, "tt:FocusOptions"))
				{	soap_flag_Focus--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IrCutFilterModes", 1, NULL))
			{	if (a->IrCutFilterModes == NULL)
				{	if (soap_blist_IrCutFilterModes == NULL)
						soap_blist_IrCutFilterModes = soap_new_block(soap);
					a->IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_push_block(soap, soap_blist_IrCutFilterModes, sizeof(enum tt__IrCutFilterMode));
					if (a->IrCutFilterModes == NULL)
						return NULL;
					soap_default_tt__IrCutFilterMode(soap, a->IrCutFilterModes);
				}
				soap_revert(soap);
				if (soap_in_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", a->IrCutFilterModes, "tt:IrCutFilterMode"))
				{	a->__sizeIrCutFilterModes++;
					a->IrCutFilterModes = NULL;
					continue;
				}
			}
			if (soap_flag_Sharpness && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Sharpness", &a->Sharpness, "tt:FloatRange"))
				{	soap_flag_Sharpness--;
					continue;
				}
			if (soap_flag_WideDynamicRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRangeOptions(soap, "tt:WideDynamicRange", &a->WideDynamicRange, "tt:WideDynamicRangeOptions"))
				{	soap_flag_WideDynamicRange--;
					continue;
				}
			if (soap_flag_WhiteBalance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions(soap, "tt:WhiteBalance", &a->WhiteBalance, "tt:WhiteBalanceOptions"))
				{	soap_flag_WhiteBalance--;
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
		if (a->IrCutFilterModes)
			soap_pop_block(soap, soap_blist_IrCutFilterModes);
		if (a->__sizeIrCutFilterModes)
			a->IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_save_block(soap, soap_blist_IrCutFilterModes, NULL, 1);
		else
		{	a->IrCutFilterModes = NULL;
			if (soap_blist_IrCutFilterModes)
				soap_end_block(soap, soap_blist_IrCutFilterModes);
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
	{	a = (struct tt__ImagingOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions, 0, sizeof(struct tt__ImagingOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BacklightCompensation > 0 || soap_flag_Brightness > 0 || soap_flag_ColorSaturation > 0 || soap_flag_Contrast > 0 || soap_flag_Exposure > 0 || soap_flag_Focus > 0 || a->__sizeIrCutFilterModes < 1 || soap_flag_Sharpness > 0 || soap_flag_WideDynamicRange > 0 || soap_flag_WhiteBalance > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingOptions(struct soap *soap, const struct tt__ImagingOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions);
	if (soap_out_tt__ImagingOptions(soap, tag?tag:"tt:ImagingOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingOptions * SOAP_FMAC4 soap_get_tt__ImagingOptions(struct soap *soap, struct tt__ImagingOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Rectangle(struct soap *soap, struct tt__Rectangle *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->bottom = NULL;
	a->top = NULL;
	a->right = NULL;
	a->left = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Rectangle(struct soap *soap, const struct tt__Rectangle *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Rectangle(struct soap *soap, const char *tag, int id, const struct tt__Rectangle *a, const char *type)
{
	if (a->bottom)
		soap_set_attr(soap, "bottom", soap_float2s(soap, *a->bottom), 1);
	if (a->top)
		soap_set_attr(soap, "top", soap_float2s(soap, *a->top), 1);
	if (a->right)
		soap_set_attr(soap, "right", soap_float2s(soap, *a->right), 1);
	if (a->left)
		soap_set_attr(soap, "left", soap_float2s(soap, *a->left), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Rectangle), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Rectangle * SOAP_FMAC4 soap_in_tt__Rectangle(struct soap *soap, const char *tag, struct tt__Rectangle *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Rectangle *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Rectangle, sizeof(struct tt__Rectangle), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Rectangle(soap, a);
	{	const char *t = soap_attr_value(soap, "bottom", 0);
		if (t)
		{
			if (!(a->bottom = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->bottom))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "top", 0);
		if (t)
		{
			if (!(a->top = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->top))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "right", 0);
		if (t)
		{
			if (!(a->right = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->right))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "left", 0);
		if (t)
		{
			if (!(a->left = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, a->left))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
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
	{	a = (struct tt__Rectangle *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Rectangle, 0, sizeof(struct tt__Rectangle), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Rectangle(struct soap *soap, const struct tt__Rectangle *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Rectangle);
	if (soap_out_tt__Rectangle(soap, tag?tag:"tt:Rectangle", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Rectangle * SOAP_FMAC4 soap_get_tt__Rectangle(struct soap *soap, struct tt__Rectangle *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Rectangle(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingSettingsExtension(struct soap *soap, struct tt__ImagingSettingsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingSettingsExtension(struct soap *soap, const struct tt__ImagingSettingsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension(struct soap *soap, const char *tag, int id, const struct tt__ImagingSettingsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension(struct soap *soap, const char *tag, struct tt__ImagingSettingsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingSettingsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension, sizeof(struct tt__ImagingSettingsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingSettingsExtension(soap, a);
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
	{	a = (struct tt__ImagingSettingsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension, 0, sizeof(struct tt__ImagingSettingsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingSettingsExtension(struct soap *soap, const struct tt__ImagingSettingsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension);
	if (soap_out_tt__ImagingSettingsExtension(soap, tag?tag:"tt:ImagingSettingsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingSettingsExtension * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension(struct soap *soap, struct tt__ImagingSettingsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalance(struct soap *soap, struct tt__WhiteBalance *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__WhiteBalanceMode(soap, &a->Mode);
	soap_default_float(soap, &a->CrGain);
	soap_default_float(soap, &a->CbGain);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WhiteBalance(struct soap *soap, const struct tt__WhiteBalance *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__WhiteBalanceMode);
	soap_embedded(soap, &a->CrGain, SOAP_TYPE_float);
	soap_embedded(soap, &a->CbGain, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance(struct soap *soap, const char *tag, int id, const struct tt__WhiteBalance *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance), type))
		return soap->error;
	if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:CrGain", -1, &a->CrGain, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:CbGain", -1, &a->CbGain, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WhiteBalance * SOAP_FMAC4 soap_in_tt__WhiteBalance(struct soap *soap, const char *tag, struct tt__WhiteBalance *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_CrGain = 1;
	size_t soap_flag_CbGain = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WhiteBalance *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance, sizeof(struct tt__WhiteBalance), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WhiteBalance(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", &a->Mode, "tt:WhiteBalanceMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_CrGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:CrGain", &a->CrGain, "xsd:float"))
				{	soap_flag_CrGain--;
					continue;
				}
			if (soap_flag_CbGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:CbGain", &a->CbGain, "xsd:float"))
				{	soap_flag_CbGain--;
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
	{	a = (struct tt__WhiteBalance *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance, 0, sizeof(struct tt__WhiteBalance), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_CrGain > 0 || soap_flag_CbGain > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalance(struct soap *soap, const struct tt__WhiteBalance *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance);
	if (soap_out_tt__WhiteBalance(soap, tag?tag:"tt:WhiteBalance", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WhiteBalance * SOAP_FMAC4 soap_get_tt__WhiteBalance(struct soap *soap, struct tt__WhiteBalance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WideDynamicRange(struct soap *soap, struct tt__WideDynamicRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__WideDynamicMode(soap, &a->Mode);
	soap_default_float(soap, &a->Level);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__WideDynamicRange(struct soap *soap, const struct tt__WideDynamicRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__WideDynamicMode);
	soap_embedded(soap, &a->Level, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRange(struct soap *soap, const char *tag, int id, const struct tt__WideDynamicRange *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRange), type))
		return soap->error;
	if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__WideDynamicRange * SOAP_FMAC4 soap_in_tt__WideDynamicRange(struct soap *soap, const char *tag, struct tt__WideDynamicRange *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__WideDynamicRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRange, sizeof(struct tt__WideDynamicRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__WideDynamicRange(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", &a->Mode, "tt:WideDynamicMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Level", &a->Level, "xsd:float"))
				{	soap_flag_Level--;
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
	{	a = (struct tt__WideDynamicRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRange, 0, sizeof(struct tt__WideDynamicRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_Level > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WideDynamicRange(struct soap *soap, const struct tt__WideDynamicRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRange);
	if (soap_out_tt__WideDynamicRange(soap, tag?tag:"tt:WideDynamicRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__WideDynamicRange * SOAP_FMAC4 soap_get_tt__WideDynamicRange(struct soap *soap, struct tt__WideDynamicRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Exposure(struct soap *soap, struct tt__Exposure *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ExposureMode(soap, &a->Mode);
	soap_default_tt__ExposurePriority(soap, &a->Priority);
	a->Window = NULL;
	soap_default_float(soap, &a->MinExposureTime);
	soap_default_float(soap, &a->MaxExposureTime);
	soap_default_float(soap, &a->MinGain);
	soap_default_float(soap, &a->MaxGain);
	soap_default_float(soap, &a->MinIris);
	soap_default_float(soap, &a->MaxIris);
	soap_default_float(soap, &a->ExposureTime);
	soap_default_float(soap, &a->Gain);
	soap_default_float(soap, &a->Iris);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Exposure(struct soap *soap, const struct tt__Exposure *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__ExposureMode);
	soap_embedded(soap, &a->Priority, SOAP_TYPE_tt__ExposurePriority);
	soap_serialize_PointerTott__Rectangle(soap, &a->Window);
	soap_embedded(soap, &a->MinExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &a->MaxExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &a->MinGain, SOAP_TYPE_float);
	soap_embedded(soap, &a->MaxGain, SOAP_TYPE_float);
	soap_embedded(soap, &a->MinIris, SOAP_TYPE_float);
	soap_embedded(soap, &a->MaxIris, SOAP_TYPE_float);
	soap_embedded(soap, &a->ExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &a->Gain, SOAP_TYPE_float);
	soap_embedded(soap, &a->Iris, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Exposure(struct soap *soap, const char *tag, int id, const struct tt__Exposure *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Exposure), type))
		return soap->error;
	if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, &a->Priority, ""))
		return soap->error;
	if (a->Window)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:Window", -1, &a->Window, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Window"))
		return soap->error;
	if (soap_out_float(soap, "tt:MinExposureTime", -1, &a->MinExposureTime, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxExposureTime", -1, &a->MaxExposureTime, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MinGain", -1, &a->MinGain, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxGain", -1, &a->MaxGain, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MinIris", -1, &a->MinIris, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxIris", -1, &a->MaxIris, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:ExposureTime", -1, &a->ExposureTime, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Gain", -1, &a->Gain, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Iris", -1, &a->Iris, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Exposure * SOAP_FMAC4 soap_in_tt__Exposure(struct soap *soap, const char *tag, struct tt__Exposure *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Priority = 1;
	size_t soap_flag_Window = 1;
	size_t soap_flag_MinExposureTime = 1;
	size_t soap_flag_MaxExposureTime = 1;
	size_t soap_flag_MinGain = 1;
	size_t soap_flag_MaxGain = 1;
	size_t soap_flag_MinIris = 1;
	size_t soap_flag_MaxIris = 1;
	size_t soap_flag_ExposureTime = 1;
	size_t soap_flag_Gain = 1;
	size_t soap_flag_Iris = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Exposure *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Exposure, sizeof(struct tt__Exposure), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Exposure(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", &a->Mode, "tt:ExposureMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Priority && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", &a->Priority, "tt:ExposurePriority"))
				{	soap_flag_Priority--;
					continue;
				}
			if (soap_flag_Window && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Window", &a->Window, "tt:Rectangle"))
				{	soap_flag_Window--;
					continue;
				}
			if (soap_flag_MinExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinExposureTime", &a->MinExposureTime, "xsd:float"))
				{	soap_flag_MinExposureTime--;
					continue;
				}
			if (soap_flag_MaxExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxExposureTime", &a->MaxExposureTime, "xsd:float"))
				{	soap_flag_MaxExposureTime--;
					continue;
				}
			if (soap_flag_MinGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinGain", &a->MinGain, "xsd:float"))
				{	soap_flag_MinGain--;
					continue;
				}
			if (soap_flag_MaxGain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxGain", &a->MaxGain, "xsd:float"))
				{	soap_flag_MaxGain--;
					continue;
				}
			if (soap_flag_MinIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinIris", &a->MinIris, "xsd:float"))
				{	soap_flag_MinIris--;
					continue;
				}
			if (soap_flag_MaxIris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxIris", &a->MaxIris, "xsd:float"))
				{	soap_flag_MaxIris--;
					continue;
				}
			if (soap_flag_ExposureTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:ExposureTime", &a->ExposureTime, "xsd:float"))
				{	soap_flag_ExposureTime--;
					continue;
				}
			if (soap_flag_Gain && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Gain", &a->Gain, "xsd:float"))
				{	soap_flag_Gain--;
					continue;
				}
			if (soap_flag_Iris && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Iris", &a->Iris, "xsd:float"))
				{	soap_flag_Iris--;
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
	{	a = (struct tt__Exposure *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Exposure, 0, sizeof(struct tt__Exposure), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_Priority > 0 || soap_flag_Window > 0 || soap_flag_MinExposureTime > 0 || soap_flag_MaxExposureTime > 0 || soap_flag_MinGain > 0 || soap_flag_MaxGain > 0 || soap_flag_MinIris > 0 || soap_flag_MaxIris > 0 || soap_flag_ExposureTime > 0 || soap_flag_Gain > 0 || soap_flag_Iris > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Exposure(struct soap *soap, const struct tt__Exposure *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Exposure);
	if (soap_out_tt__Exposure(soap, tag?tag:"tt:Exposure", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Exposure * SOAP_FMAC4 soap_get_tt__Exposure(struct soap *soap, struct tt__Exposure *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Exposure(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BacklightCompensation(struct soap *soap, struct tt__BacklightCompensation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__BacklightCompensationMode(soap, &a->Mode);
	soap_default_float(soap, &a->Level);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BacklightCompensation(struct soap *soap, const struct tt__BacklightCompensation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__BacklightCompensationMode);
	soap_embedded(soap, &a->Level, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensation(struct soap *soap, const char *tag, int id, const struct tt__BacklightCompensation *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensation), type))
		return soap->error;
	if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Level", -1, &a->Level, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BacklightCompensation * SOAP_FMAC4 soap_in_tt__BacklightCompensation(struct soap *soap, const char *tag, struct tt__BacklightCompensation *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Level = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BacklightCompensation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensation, sizeof(struct tt__BacklightCompensation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BacklightCompensation(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", &a->Mode, "tt:BacklightCompensationMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Level && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Level", &a->Level, "xsd:float"))
				{	soap_flag_Level--;
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
	{	a = (struct tt__BacklightCompensation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensation, 0, sizeof(struct tt__BacklightCompensation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_Level > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BacklightCompensation(struct soap *soap, const struct tt__BacklightCompensation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensation);
	if (soap_out_tt__BacklightCompensation(soap, tag?tag:"tt:BacklightCompensation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BacklightCompensation * SOAP_FMAC4 soap_get_tt__BacklightCompensation(struct soap *soap, struct tt__BacklightCompensation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingSettings(struct soap *soap, struct tt__ImagingSettings *a)
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

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingSettings(struct soap *soap, const struct tt__ImagingSettings *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensation(soap, &a->BacklightCompensation);
	soap_serialize_PointerTofloat(soap, &a->Brightness);
	soap_serialize_PointerTofloat(soap, &a->ColorSaturation);
	soap_serialize_PointerTofloat(soap, &a->Contrast);
	soap_serialize_PointerTott__Exposure(soap, &a->Exposure);
	soap_serialize_PointerTott__FocusConfiguration(soap, &a->Focus);
	soap_serialize_PointerTott__IrCutFilterMode(soap, &a->IrCutFilter);
	soap_serialize_PointerTofloat(soap, &a->Sharpness);
	soap_serialize_PointerTott__WideDynamicRange(soap, &a->WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalance(soap, &a->WhiteBalance);
	soap_serialize_PointerTott__ImagingSettingsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettings(struct soap *soap, const char *tag, int id, const struct tt__ImagingSettings *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettings), type))
		return soap->error;
	if (soap_out_PointerTott__BacklightCompensation(soap, "tt:BacklightCompensation", -1, &a->BacklightCompensation, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Brightness", -1, &a->Brightness, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ColorSaturation", -1, &a->ColorSaturation, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Contrast", -1, &a->Contrast, ""))
		return soap->error;
	if (soap_out_PointerTott__Exposure(soap, "tt:Exposure", -1, &a->Exposure, ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration(soap, "tt:Focus", -1, &a->Focus, ""))
		return soap->error;
	if (soap_out_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", -1, &a->IrCutFilter, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Sharpness", -1, &a->Sharpness, ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRange(soap, "tt:WideDynamicRange", -1, &a->WideDynamicRange, ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance(soap, "tt:WhiteBalance", -1, &a->WhiteBalance, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingSettings * SOAP_FMAC4 soap_in_tt__ImagingSettings(struct soap *soap, const char *tag, struct tt__ImagingSettings *a, const char *type)
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
	a = (struct tt__ImagingSettings *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettings, sizeof(struct tt__ImagingSettings), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingSettings(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BacklightCompensation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensation(soap, "tt:BacklightCompensation", &a->BacklightCompensation, "tt:BacklightCompensation"))
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
				if (soap_in_PointerTott__Exposure(soap, "tt:Exposure", &a->Exposure, "tt:Exposure"))
				{	soap_flag_Exposure--;
					continue;
				}
			if (soap_flag_Focus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration(soap, "tt:Focus", &a->Focus, "tt:FocusConfiguration"))
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
				if (soap_in_PointerTott__WideDynamicRange(soap, "tt:WideDynamicRange", &a->WideDynamicRange, "tt:WideDynamicRange"))
				{	soap_flag_WideDynamicRange--;
					continue;
				}
			if (soap_flag_WhiteBalance && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance(soap, "tt:WhiteBalance", &a->WhiteBalance, "tt:WhiteBalance"))
				{	soap_flag_WhiteBalance--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension(soap, "tt:Extension", &a->Extension, "tt:ImagingSettingsExtension"))
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
	{	a = (struct tt__ImagingSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettings, 0, sizeof(struct tt__ImagingSettings), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingSettings(struct soap *soap, const struct tt__ImagingSettings *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettings);
	if (soap_out_tt__ImagingSettings(soap, tag?tag:"tt:ImagingSettings", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingSettings * SOAP_FMAC4 soap_get_tt__ImagingSettings(struct soap *soap, struct tt__ImagingSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusConfiguration(struct soap *soap, struct tt__FocusConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__AutoFocusMode(soap, &a->AutoFocusMode);
	soap_default_float(soap, &a->DefaultSpeed);
	soap_default_float(soap, &a->NearLimit);
	soap_default_float(soap, &a->FarLimit);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusConfiguration(struct soap *soap, const struct tt__FocusConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->AutoFocusMode, SOAP_TYPE_tt__AutoFocusMode);
	soap_embedded(soap, &a->DefaultSpeed, SOAP_TYPE_float);
	soap_embedded(soap, &a->NearLimit, SOAP_TYPE_float);
	soap_embedded(soap, &a->FarLimit, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration(struct soap *soap, const char *tag, int id, const struct tt__FocusConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration), type))
		return soap->error;
	if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusMode", -1, &a->AutoFocusMode, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:DefaultSpeed", -1, &a->DefaultSpeed, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:NearLimit", -1, &a->NearLimit, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:FarLimit", -1, &a->FarLimit, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusConfiguration * SOAP_FMAC4 soap_in_tt__FocusConfiguration(struct soap *soap, const char *tag, struct tt__FocusConfiguration *a, const char *type)
{
	size_t soap_flag_AutoFocusMode = 1;
	size_t soap_flag_DefaultSpeed = 1;
	size_t soap_flag_NearLimit = 1;
	size_t soap_flag_FarLimit = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration, sizeof(struct tt__FocusConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AutoFocusMode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusMode", &a->AutoFocusMode, "tt:AutoFocusMode"))
				{	soap_flag_AutoFocusMode--;
					continue;
				}
			if (soap_flag_DefaultSpeed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:DefaultSpeed", &a->DefaultSpeed, "xsd:float"))
				{	soap_flag_DefaultSpeed--;
					continue;
				}
			if (soap_flag_NearLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:NearLimit", &a->NearLimit, "xsd:float"))
				{	soap_flag_NearLimit--;
					continue;
				}
			if (soap_flag_FarLimit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:FarLimit", &a->FarLimit, "xsd:float"))
				{	soap_flag_FarLimit--;
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
	{	a = (struct tt__FocusConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration, 0, sizeof(struct tt__FocusConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoFocusMode > 0 || soap_flag_DefaultSpeed > 0 || soap_flag_NearLimit > 0 || soap_flag_FarLimit > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusConfiguration(struct soap *soap, const struct tt__FocusConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration);
	if (soap_out_tt__FocusConfiguration(soap, tag?tag:"tt:FocusConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusConfiguration * SOAP_FMAC4 soap_get_tt__FocusConfiguration(struct soap *soap, struct tt__FocusConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FocusStatus(struct soap *soap, struct tt__FocusStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->Position);
	soap_default_tt__MoveStatus(soap, &a->MoveStatus);
	soap_default_string(soap, &a->Error);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FocusStatus(struct soap *soap, const struct tt__FocusStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Position, SOAP_TYPE_float);
	soap_embedded(soap, &a->MoveStatus, SOAP_TYPE_tt__MoveStatus);
	soap_serialize_string(soap, &a->Error);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus(struct soap *soap, const char *tag, int id, const struct tt__FocusStatus *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus), type))
		return soap->error;
	if (soap_out_float(soap, "tt:Position", -1, &a->Position, ""))
		return soap->error;
	if (soap_out_tt__MoveStatus(soap, "tt:MoveStatus", -1, &a->MoveStatus, ""))
		return soap->error;
	if (a->Error)
	{	if (soap_out_string(soap, "tt:Error", -1, &a->Error, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Error"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FocusStatus * SOAP_FMAC4 soap_in_tt__FocusStatus(struct soap *soap, const char *tag, struct tt__FocusStatus *a, const char *type)
{
	size_t soap_flag_Position = 1;
	size_t soap_flag_MoveStatus = 1;
	size_t soap_flag_Error = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FocusStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus, sizeof(struct tt__FocusStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FocusStatus(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &a->Position, "xsd:float"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap_flag_MoveStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__MoveStatus(soap, "tt:MoveStatus", &a->MoveStatus, "tt:MoveStatus"))
				{	soap_flag_MoveStatus--;
					continue;
				}
			if (soap_flag_Error && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &a->Error, "xsd:string"))
				{	soap_flag_Error--;
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
	{	a = (struct tt__FocusStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus, 0, sizeof(struct tt__FocusStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position > 0 || soap_flag_MoveStatus > 0 || soap_flag_Error > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FocusStatus(struct soap *soap, const struct tt__FocusStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus);
	if (soap_out_tt__FocusStatus(soap, tag?tag:"tt:FocusStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FocusStatus * SOAP_FMAC4 soap_get_tt__FocusStatus(struct soap *soap, struct tt__FocusStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingStatus(struct soap *soap, struct tt__ImagingStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->FocusStatus = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingStatus(struct soap *soap, const struct tt__ImagingStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FocusStatus(soap, &a->FocusStatus);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus(struct soap *soap, const char *tag, int id, const struct tt__ImagingStatus *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus), type))
		return soap->error;
	if (a->FocusStatus)
	{	if (soap_out_PointerTott__FocusStatus(soap, "tt:FocusStatus", -1, &a->FocusStatus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FocusStatus"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingStatus * SOAP_FMAC4 soap_in_tt__ImagingStatus(struct soap *soap, const char *tag, struct tt__ImagingStatus *a, const char *type)
{
	size_t soap_flag_FocusStatus = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus, sizeof(struct tt__ImagingStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingStatus(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FocusStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus(soap, "tt:FocusStatus", &a->FocusStatus, "tt:FocusStatus"))
				{	soap_flag_FocusStatus--;
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
	{	a = (struct tt__ImagingStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus, 0, sizeof(struct tt__ImagingStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FocusStatus > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingStatus(struct soap *soap, const struct tt__ImagingStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus);
	if (soap_out_tt__ImagingStatus(soap, tag?tag:"tt:ImagingStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingStatus * SOAP_FMAC4 soap_get_tt__ImagingStatus(struct soap *soap, struct tt__ImagingStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, struct tt__PTZPresetTourStartingConditionOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const struct tt__PTZPresetTourStartingConditionOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStartingConditionOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourStartingConditionOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStartingConditionOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension, sizeof(struct tt__PTZPresetTourStartingConditionOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStartingConditionOptionsExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourStartingConditionOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension, 0, sizeof(struct tt__PTZPresetTourStartingConditionOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const struct tt__PTZPresetTourStartingConditionOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension);
	if (soap_out_tt__PTZPresetTourStartingConditionOptionsExtension(soap, tag?tag:"tt:PTZPresetTourStartingConditionOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, struct tt__PTZPresetTourStartingConditionOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, struct tt__PTZPresetTourPresetDetailOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const struct tt__PTZPresetTourPresetDetailOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourPresetDetailOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetailOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourPresetDetailOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourPresetDetailOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension, sizeof(struct tt__PTZPresetTourPresetDetailOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourPresetDetailOptionsExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourPresetDetailOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension, 0, sizeof(struct tt__PTZPresetTourPresetDetailOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const struct tt__PTZPresetTourPresetDetailOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension);
	if (soap_out_tt__PTZPresetTourPresetDetailOptionsExtension(soap, tag?tag:"tt:PTZPresetTourPresetDetailOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetailOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, struct tt__PTZPresetTourPresetDetailOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetailOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, struct tt__PTZPresetTourPresetDetailOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizePresetToken = 0;
	a->PresetToken = NULL;
	a->Home = NULL;
	a->PanTiltPositionSpace = NULL;
	a->ZoomPositionSpace = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const struct tt__PTZPresetTourPresetDetailOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->PresetToken)
	{	int i;
		for (i = 0; i < a->__sizePresetToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->PresetToken + i);
		}
	}
	soap_serialize_PointerToxsd__boolean(soap, &a->Home);
	soap_serialize_PointerTott__Space2DDescription(soap, &a->PanTiltPositionSpace);
	soap_serialize_PointerTott__Space1DDescription(soap, &a->ZoomPositionSpace);
	soap_serialize_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourPresetDetailOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions), type))
		return soap->error;
	if (a->PresetToken)
	{	int i;
		for (i = 0; i < a->__sizePresetToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:PresetToken", -1, a->PresetToken + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:Home", -1, &a->Home, ""))
		return soap->error;
	if (soap_out_PointerTott__Space2DDescription(soap, "tt:PanTiltPositionSpace", -1, &a->PanTiltPositionSpace, ""))
		return soap->error;
	if (soap_out_PointerTott__Space1DDescription(soap, "tt:ZoomPositionSpace", -1, &a->ZoomPositionSpace, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetailOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const char *tag, struct tt__PTZPresetTourPresetDetailOptions *a, const char *type)
{
	struct soap_blist *soap_blist_PresetToken = NULL;
	size_t soap_flag_Home = 1;
	size_t soap_flag_PanTiltPositionSpace = 1;
	size_t soap_flag_ZoomPositionSpace = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourPresetDetailOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions, sizeof(struct tt__PTZPresetTourPresetDetailOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourPresetDetailOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PresetToken", 1, NULL))
			{	if (a->PresetToken == NULL)
				{	if (soap_blist_PresetToken == NULL)
						soap_blist_PresetToken = soap_new_block(soap);
					a->PresetToken = (char **)soap_push_block(soap, soap_blist_PresetToken, sizeof(char *));
					if (a->PresetToken == NULL)
						return NULL;
					*a->PresetToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:PresetToken", a->PresetToken, "tt:ReferenceToken"))
				{	a->__sizePresetToken++;
					a->PresetToken = NULL;
					continue;
				}
			}
			if (soap_flag_Home && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Home", &a->Home, "xsd:boolean"))
				{	soap_flag_Home--;
					continue;
				}
			if (soap_flag_PanTiltPositionSpace && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:PanTiltPositionSpace", &a->PanTiltPositionSpace, "tt:Space2DDescription"))
				{	soap_flag_PanTiltPositionSpace--;
					continue;
				}
			if (soap_flag_ZoomPositionSpace && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:ZoomPositionSpace", &a->ZoomPositionSpace, "tt:Space1DDescription"))
				{	soap_flag_ZoomPositionSpace--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourPresetDetailOptionsExtension"))
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
		if (a->PresetToken)
			soap_pop_block(soap, soap_blist_PresetToken);
		if (a->__sizePresetToken)
			a->PresetToken = (char **)soap_save_block(soap, soap_blist_PresetToken, NULL, 1);
		else
		{	a->PresetToken = NULL;
			if (soap_blist_PresetToken)
				soap_end_block(soap, soap_blist_PresetToken);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZPresetTourPresetDetailOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions, 0, sizeof(struct tt__PTZPresetTourPresetDetailOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const struct tt__PTZPresetTourPresetDetailOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions);
	if (soap_out_tt__PTZPresetTourPresetDetailOptions(soap, tag?tag:"tt:PTZPresetTourPresetDetailOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetailOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, struct tt__PTZPresetTourPresetDetailOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetailOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourSpotOptions(struct soap *soap, struct tt__PTZPresetTourSpotOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PresetDetail = NULL;
	a->StayTime = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourSpotOptions(struct soap *soap, const struct tt__PTZPresetTourSpotOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourPresetDetailOptions(soap, &a->PresetDetail);
	soap_serialize_PointerTott__DurationRange(soap, &a->StayTime);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpotOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourSpotOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpotOptions), type))
		return soap->error;
	if (a->PresetDetail)
	{	if (soap_out_PointerTott__PTZPresetTourPresetDetailOptions(soap, "tt:PresetDetail", -1, &a->PresetDetail, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PresetDetail"))
		return soap->error;
	if (a->StayTime)
	{	if (soap_out_PointerTott__DurationRange(soap, "tt:StayTime", -1, &a->StayTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StayTime"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpotOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpotOptions(struct soap *soap, const char *tag, struct tt__PTZPresetTourSpotOptions *a, const char *type)
{
	size_t soap_flag_PresetDetail = 1;
	size_t soap_flag_StayTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourSpotOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpotOptions, sizeof(struct tt__PTZPresetTourSpotOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourSpotOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PresetDetail && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetailOptions(soap, "tt:PresetDetail", &a->PresetDetail, "tt:PTZPresetTourPresetDetailOptions"))
				{	soap_flag_PresetDetail--;
					continue;
				}
			if (soap_flag_StayTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:StayTime", &a->StayTime, "tt:DurationRange"))
				{	soap_flag_StayTime--;
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
	{	a = (struct tt__PTZPresetTourSpotOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpotOptions, 0, sizeof(struct tt__PTZPresetTourSpotOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetDetail > 0 || soap_flag_StayTime > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourSpotOptions(struct soap *soap, const struct tt__PTZPresetTourSpotOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpotOptions);
	if (soap_out_tt__PTZPresetTourSpotOptions(soap, tag?tag:"tt:PTZPresetTourSpotOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpotOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpotOptions(struct soap *soap, struct tt__PTZPresetTourSpotOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpotOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, struct tt__PTZPresetTourStartingConditionOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->RecurringTime = NULL;
	a->RecurringDuration = NULL;
	a->__sizeDirection = 0;
	a->Direction = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const struct tt__PTZPresetTourStartingConditionOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntRange(soap, &a->RecurringTime);
	soap_serialize_PointerTott__DurationRange(soap, &a->RecurringDuration);
	if (a->Direction)
	{	int i;
		for (i = 0; i < a->__sizeDirection; i++)
		{
			soap_embedded(soap, a->Direction + i, SOAP_TYPE_tt__PTZPresetTourDirection);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStartingConditionOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions), type))
		return soap->error;
	if (soap_out_PointerTott__IntRange(soap, "tt:RecurringTime", -1, &a->RecurringTime, ""))
		return soap->error;
	if (soap_out_PointerTott__DurationRange(soap, "tt:RecurringDuration", -1, &a->RecurringDuration, ""))
		return soap->error;
	if (a->Direction)
	{	int i;
		for (i = 0; i < a->__sizeDirection; i++)
			if (soap_out_tt__PTZPresetTourDirection(soap, "tt:Direction", -1, a->Direction + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const char *tag, struct tt__PTZPresetTourStartingConditionOptions *a, const char *type)
{
	size_t soap_flag_RecurringTime = 1;
	size_t soap_flag_RecurringDuration = 1;
	struct soap_blist *soap_blist_Direction = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStartingConditionOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions, sizeof(struct tt__PTZPresetTourStartingConditionOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStartingConditionOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecurringTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:RecurringTime", &a->RecurringTime, "tt:IntRange"))
				{	soap_flag_RecurringTime--;
					continue;
				}
			if (soap_flag_RecurringDuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:RecurringDuration", &a->RecurringDuration, "tt:DurationRange"))
				{	soap_flag_RecurringDuration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Direction", 1, NULL))
			{	if (a->Direction == NULL)
				{	if (soap_blist_Direction == NULL)
						soap_blist_Direction = soap_new_block(soap);
					a->Direction = (enum tt__PTZPresetTourDirection *)soap_push_block(soap, soap_blist_Direction, sizeof(enum tt__PTZPresetTourDirection));
					if (a->Direction == NULL)
						return NULL;
					soap_default_tt__PTZPresetTourDirection(soap, a->Direction);
				}
				soap_revert(soap);
				if (soap_in_tt__PTZPresetTourDirection(soap, "tt:Direction", a->Direction, "tt:PTZPresetTourDirection"))
				{	a->__sizeDirection++;
					a->Direction = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourStartingConditionOptionsExtension"))
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
		if (a->Direction)
			soap_pop_block(soap, soap_blist_Direction);
		if (a->__sizeDirection)
			a->Direction = (enum tt__PTZPresetTourDirection *)soap_save_block(soap, soap_blist_Direction, NULL, 1);
		else
		{	a->Direction = NULL;
			if (soap_blist_Direction)
				soap_end_block(soap, soap_blist_Direction);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZPresetTourStartingConditionOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions, 0, sizeof(struct tt__PTZPresetTourStartingConditionOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const struct tt__PTZPresetTourStartingConditionOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions);
	if (soap_out_tt__PTZPresetTourStartingConditionOptions(soap, tag?tag:"tt:PTZPresetTourStartingConditionOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, struct tt__PTZPresetTourStartingConditionOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourOptions(struct soap *soap, struct tt__PTZPresetTourOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->AutoStart);
	a->StartingCondition = NULL;
	a->TourSpot = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourOptions(struct soap *soap, const struct tt__PTZPresetTourOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->AutoStart, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__PTZPresetTourStartingConditionOptions(soap, &a->StartingCondition);
	soap_serialize_PointerTott__PTZPresetTourSpotOptions(soap, &a->TourSpot);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourOptions), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AutoStart", -1, &a->AutoStart, ""))
		return soap->error;
	if (a->StartingCondition)
	{	if (soap_out_PointerTott__PTZPresetTourStartingConditionOptions(soap, "tt:StartingCondition", -1, &a->StartingCondition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StartingCondition"))
		return soap->error;
	if (a->TourSpot)
	{	if (soap_out_PointerTott__PTZPresetTourSpotOptions(soap, "tt:TourSpot", -1, &a->TourSpot, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TourSpot"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourOptions(struct soap *soap, const char *tag, struct tt__PTZPresetTourOptions *a, const char *type)
{
	size_t soap_flag_AutoStart = 1;
	size_t soap_flag_StartingCondition = 1;
	size_t soap_flag_TourSpot = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourOptions, sizeof(struct tt__PTZPresetTourOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AutoStart && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AutoStart", &a->AutoStart, "xsd:boolean"))
				{	soap_flag_AutoStart--;
					continue;
				}
			if (soap_flag_StartingCondition && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionOptions(soap, "tt:StartingCondition", &a->StartingCondition, "tt:PTZPresetTourStartingConditionOptions"))
				{	soap_flag_StartingCondition--;
					continue;
				}
			if (soap_flag_TourSpot && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpotOptions(soap, "tt:TourSpot", &a->TourSpot, "tt:PTZPresetTourSpotOptions"))
				{	soap_flag_TourSpot--;
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
	{	a = (struct tt__PTZPresetTourOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourOptions, 0, sizeof(struct tt__PTZPresetTourOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoStart > 0 || soap_flag_StartingCondition > 0 || soap_flag_TourSpot > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourOptions(struct soap *soap, const struct tt__PTZPresetTourOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourOptions);
	if (soap_out_tt__PTZPresetTourOptions(soap, tag?tag:"tt:PTZPresetTourOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourOptions(struct soap *soap, struct tt__PTZPresetTourOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, struct tt__PTZPresetTourStartingConditionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const struct tt__PTZPresetTourStartingConditionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStartingConditionExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourStartingConditionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStartingConditionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension, sizeof(struct tt__PTZPresetTourStartingConditionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStartingConditionExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourStartingConditionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension, 0, sizeof(struct tt__PTZPresetTourStartingConditionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const struct tt__PTZPresetTourStartingConditionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension);
	if (soap_out_tt__PTZPresetTourStartingConditionExtension(soap, tag?tag:"tt:PTZPresetTourStartingConditionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingConditionExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, struct tt__PTZPresetTourStartingConditionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStatusExtension(struct soap *soap, struct tt__PTZPresetTourStatusExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStatusExtension(struct soap *soap, const struct tt__PTZPresetTourStatusExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStatusExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStatusExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStatusExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStatusExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStatusExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourStatusExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStatusExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStatusExtension, sizeof(struct tt__PTZPresetTourStatusExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStatusExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourStatusExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStatusExtension, 0, sizeof(struct tt__PTZPresetTourStatusExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStatusExtension(struct soap *soap, const struct tt__PTZPresetTourStatusExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStatusExtension);
	if (soap_out_tt__PTZPresetTourStatusExtension(soap, tag?tag:"tt:PTZPresetTourStatusExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStatusExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStatusExtension(struct soap *soap, struct tt__PTZPresetTourStatusExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStatusExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourTypeExtension(struct soap *soap, struct tt__PTZPresetTourTypeExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourTypeExtension(struct soap *soap, const struct tt__PTZPresetTourTypeExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourTypeExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourTypeExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourTypeExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourTypeExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourTypeExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourTypeExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourTypeExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourTypeExtension, sizeof(struct tt__PTZPresetTourTypeExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourTypeExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourTypeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourTypeExtension, 0, sizeof(struct tt__PTZPresetTourTypeExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourTypeExtension(struct soap *soap, const struct tt__PTZPresetTourTypeExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourTypeExtension);
	if (soap_out_tt__PTZPresetTourTypeExtension(soap, tag?tag:"tt:PTZPresetTourTypeExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourTypeExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourTypeExtension(struct soap *soap, struct tt__PTZPresetTourTypeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourTypeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourSpotExtension(struct soap *soap, struct tt__PTZPresetTourSpotExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourSpotExtension(struct soap *soap, const struct tt__PTZPresetTourSpotExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpotExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourSpotExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpotExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpotExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpotExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourSpotExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourSpotExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpotExtension, sizeof(struct tt__PTZPresetTourSpotExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourSpotExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourSpotExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpotExtension, 0, sizeof(struct tt__PTZPresetTourSpotExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourSpotExtension(struct soap *soap, const struct tt__PTZPresetTourSpotExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpotExtension);
	if (soap_out_tt__PTZPresetTourSpotExtension(soap, tag?tag:"tt:PTZPresetTourSpotExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpotExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpotExtension(struct soap *soap, struct tt__PTZPresetTourSpotExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpotExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourPresetDetail(struct soap *soap, struct tt__PTZPresetTourPresetDetail *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_PTZPresetTourPresetDetail = 0;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourPresetDetail(struct soap *soap, const struct tt__PTZPresetTourPresetDetail *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tt__union_PTZPresetTourPresetDetail(soap, a->__union_PTZPresetTourPresetDetail, &a->union_PTZPresetTourPresetDetail);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetail(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourPresetDetail *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetail), type))
		return soap->error;
	if (soap_out__tt__union_PTZPresetTourPresetDetail(soap, a->__union_PTZPresetTourPresetDetail, &a->union_PTZPresetTourPresetDetail))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetail * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetail(struct soap *soap, const char *tag, struct tt__PTZPresetTourPresetDetail *a, const char *type)
{
	size_t soap_flag_union_PTZPresetTourPresetDetail = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourPresetDetail *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetail, sizeof(struct tt__PTZPresetTourPresetDetail), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourPresetDetail(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_union_PTZPresetTourPresetDetail && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__tt__union_PTZPresetTourPresetDetail(soap, &a->__union_PTZPresetTourPresetDetail, &a->union_PTZPresetTourPresetDetail))
				{	soap_flag_union_PTZPresetTourPresetDetail = 0;
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
	{	a = (struct tt__PTZPresetTourPresetDetail *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetail, 0, sizeof(struct tt__PTZPresetTourPresetDetail), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_union_PTZPresetTourPresetDetail))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourPresetDetail(struct soap *soap, const struct tt__PTZPresetTourPresetDetail *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetail);
	if (soap_out_tt__PTZPresetTourPresetDetail(soap, tag?tag:"tt:PTZPresetTourPresetDetail", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourPresetDetail * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetail(struct soap *soap, struct tt__PTZPresetTourPresetDetail *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetail(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourExtension(struct soap *soap, struct tt__PTZPresetTourExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourExtension(struct soap *soap, const struct tt__PTZPresetTourExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourExtension, sizeof(struct tt__PTZPresetTourExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourExtension, 0, sizeof(struct tt__PTZPresetTourExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourExtension(struct soap *soap, const struct tt__PTZPresetTourExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourExtension);
	if (soap_out_tt__PTZPresetTourExtension(soap, tag?tag:"tt:PTZPresetTourExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourExtension(struct soap *soap, struct tt__PTZPresetTourExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourSpot(struct soap *soap, struct tt__PTZPresetTourSpot *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PresetDetail = NULL;
	a->Speed = NULL;
	a->StayTime = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourSpot(struct soap *soap, const struct tt__PTZPresetTourSpot *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourPresetDetail(soap, &a->PresetDetail);
	soap_serialize_PointerTott__PTZSpeed(soap, &a->Speed);
	soap_serialize_PointerToxsd__duration(soap, &a->StayTime);
	soap_serialize_PointerTott__PTZPresetTourSpotExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpot(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourSpot *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpot), type))
		return soap->error;
	if (a->PresetDetail)
	{	if (soap_out_PointerTott__PTZPresetTourPresetDetail(soap, "tt:PresetDetail", -1, &a->PresetDetail, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PresetDetail"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tt:Speed", -1, &a->Speed, ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:StayTime", -1, &a->StayTime, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourSpotExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpot * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpot(struct soap *soap, const char *tag, struct tt__PTZPresetTourSpot *a, const char *type)
{
	size_t soap_flag_PresetDetail = 1;
	size_t soap_flag_Speed = 1;
	size_t soap_flag_StayTime = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourSpot *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpot, sizeof(struct tt__PTZPresetTourSpot), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourSpot(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PresetDetail && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetail(soap, "tt:PresetDetail", &a->PresetDetail, "tt:PTZPresetTourPresetDetail"))
				{	soap_flag_PresetDetail--;
					continue;
				}
			if (soap_flag_Speed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tt:Speed", &a->Speed, "tt:PTZSpeed"))
				{	soap_flag_Speed--;
					continue;
				}
			if (soap_flag_StayTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:StayTime", &a->StayTime, "xsd:duration"))
				{	soap_flag_StayTime--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpotExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourSpotExtension"))
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
	{	a = (struct tt__PTZPresetTourSpot *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpot, 0, sizeof(struct tt__PTZPresetTourSpot), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetDetail > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourSpot(struct soap *soap, const struct tt__PTZPresetTourSpot *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpot);
	if (soap_out_tt__PTZPresetTourSpot(soap, tag?tag:"tt:PTZPresetTourSpot", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourSpot * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpot(struct soap *soap, struct tt__PTZPresetTourSpot *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpot(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStartingCondition(struct soap *soap, struct tt__PTZPresetTourStartingCondition *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->RecurringTime = NULL;
	a->RecurringDuration = NULL;
	a->Direction = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStartingCondition(struct soap *soap, const struct tt__PTZPresetTourStartingCondition *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &a->RecurringTime);
	soap_serialize_PointerToxsd__duration(soap, &a->RecurringDuration);
	soap_serialize_PointerTott__PTZPresetTourDirection(soap, &a->Direction);
	soap_serialize_PointerTott__PTZPresetTourStartingConditionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingCondition(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStartingCondition *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingCondition), type))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:RecurringTime", -1, &a->RecurringTime, ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:RecurringDuration", -1, &a->RecurringDuration, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourDirection(soap, "tt:Direction", -1, &a->Direction, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourStartingConditionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingCondition * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingCondition(struct soap *soap, const char *tag, struct tt__PTZPresetTourStartingCondition *a, const char *type)
{
	size_t soap_flag_RecurringTime = 1;
	size_t soap_flag_RecurringDuration = 1;
	size_t soap_flag_Direction = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStartingCondition *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingCondition, sizeof(struct tt__PTZPresetTourStartingCondition), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStartingCondition(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecurringTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:RecurringTime", &a->RecurringTime, "xsd:int"))
				{	soap_flag_RecurringTime--;
					continue;
				}
			if (soap_flag_RecurringDuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:RecurringDuration", &a->RecurringDuration, "xsd:duration"))
				{	soap_flag_RecurringDuration--;
					continue;
				}
			if (soap_flag_Direction && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourDirection(soap, "tt:Direction", &a->Direction, "tt:PTZPresetTourDirection"))
				{	soap_flag_Direction--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourStartingConditionExtension"))
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
	{	a = (struct tt__PTZPresetTourStartingCondition *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingCondition, 0, sizeof(struct tt__PTZPresetTourStartingCondition), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStartingCondition(struct soap *soap, const struct tt__PTZPresetTourStartingCondition *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingCondition);
	if (soap_out_tt__PTZPresetTourStartingCondition(soap, tag?tag:"tt:PTZPresetTourStartingCondition", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStartingCondition * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingCondition(struct soap *soap, struct tt__PTZPresetTourStartingCondition *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingCondition(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourStatus(struct soap *soap, struct tt__PTZPresetTourStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__PTZPresetTourState(soap, &a->State);
	a->CurrentTourSpot = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourStatus(struct soap *soap, const struct tt__PTZPresetTourStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourSpot(soap, &a->CurrentTourSpot);
	soap_serialize_PointerTott__PTZPresetTourStatusExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStatus(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourStatus *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStatus), type))
		return soap->error;
	if (soap_out_tt__PTZPresetTourState(soap, "tt:State", -1, &a->State, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourSpot(soap, "tt:CurrentTourSpot", -1, &a->CurrentTourSpot, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourStatusExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourStatus * SOAP_FMAC4 soap_in_tt__PTZPresetTourStatus(struct soap *soap, const char *tag, struct tt__PTZPresetTourStatus *a, const char *type)
{
	size_t soap_flag_State = 1;
	size_t soap_flag_CurrentTourSpot = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStatus, sizeof(struct tt__PTZPresetTourStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourStatus(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_State && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__PTZPresetTourState(soap, "tt:State", &a->State, "tt:PTZPresetTourState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap_flag_CurrentTourSpot && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpot(soap, "tt:CurrentTourSpot", &a->CurrentTourSpot, "tt:PTZPresetTourSpot"))
				{	soap_flag_CurrentTourSpot--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStatusExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourStatusExtension"))
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
	{	a = (struct tt__PTZPresetTourStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStatus, 0, sizeof(struct tt__PTZPresetTourStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourStatus(struct soap *soap, const struct tt__PTZPresetTourStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStatus);
	if (soap_out_tt__PTZPresetTourStatus(soap, tag?tag:"tt:PTZPresetTourStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourStatus * SOAP_FMAC4 soap_get_tt__PTZPresetTourStatus(struct soap *soap, struct tt__PTZPresetTourStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PresetTour(struct soap *soap, struct tt__PresetTour *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	a->Status = NULL;
	soap_default_xsd__boolean(soap, &a->AutoStart);
	a->StartingCondition = NULL;
	a->__sizeTourSpot = 0;
	a->TourSpot = NULL;
	a->Extension = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PresetTour(struct soap *soap, const struct tt__PresetTour *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_serialize_PointerTott__PTZPresetTourStatus(soap, &a->Status);
	soap_embedded(soap, &a->AutoStart, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__PTZPresetTourStartingCondition(soap, &a->StartingCondition);
	if (a->TourSpot)
	{	int i;
		for (i = 0; i < a->__sizeTourSpot; i++)
		{
			soap_embedded(soap, a->TourSpot + i, SOAP_TYPE_tt__PTZPresetTourSpot);
			soap_serialize_tt__PTZPresetTourSpot(soap, a->TourSpot + i);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PresetTour(struct soap *soap, const char *tag, int id, const struct tt__PresetTour *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PresetTour), type))
		return soap->error;
	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (a->Status)
	{	if (soap_out_PointerTott__PTZPresetTourStatus(soap, "tt:Status", -1, &a->Status, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Status"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AutoStart", -1, &a->AutoStart, ""))
		return soap->error;
	if (a->StartingCondition)
	{	if (soap_out_PointerTott__PTZPresetTourStartingCondition(soap, "tt:StartingCondition", -1, &a->StartingCondition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StartingCondition"))
		return soap->error;
	if (a->TourSpot)
	{	int i;
		for (i = 0; i < a->__sizeTourSpot; i++)
			if (soap_out_tt__PTZPresetTourSpot(soap, "tt:TourSpot", -1, a->TourSpot + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PresetTour * SOAP_FMAC4 soap_in_tt__PresetTour(struct soap *soap, const char *tag, struct tt__PresetTour *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_Status = 1;
	size_t soap_flag_AutoStart = 1;
	size_t soap_flag_StartingCondition = 1;
	struct soap_blist *soap_blist_TourSpot = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PresetTour *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PresetTour, sizeof(struct tt__PresetTour), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PresetTour(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 0), &a->token, 0, 64))
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
			if (soap_flag_Status && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStatus(soap, "tt:Status", &a->Status, "tt:PTZPresetTourStatus"))
				{	soap_flag_Status--;
					continue;
				}
			if (soap_flag_AutoStart && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AutoStart", &a->AutoStart, "xsd:boolean"))
				{	soap_flag_AutoStart--;
					continue;
				}
			if (soap_flag_StartingCondition && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingCondition(soap, "tt:StartingCondition", &a->StartingCondition, "tt:PTZPresetTourStartingCondition"))
				{	soap_flag_StartingCondition--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:TourSpot", 1, NULL))
			{	if (a->TourSpot == NULL)
				{	if (soap_blist_TourSpot == NULL)
						soap_blist_TourSpot = soap_new_block(soap);
					a->TourSpot = (struct tt__PTZPresetTourSpot *)soap_push_block(soap, soap_blist_TourSpot, sizeof(struct tt__PTZPresetTourSpot));
					if (a->TourSpot == NULL)
						return NULL;
					soap_default_tt__PTZPresetTourSpot(soap, a->TourSpot);
				}
				soap_revert(soap);
				if (soap_in_tt__PTZPresetTourSpot(soap, "tt:TourSpot", a->TourSpot, "tt:PTZPresetTourSpot"))
				{	a->__sizeTourSpot++;
					a->TourSpot = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourExtension"))
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
		if (a->TourSpot)
			soap_pop_block(soap, soap_blist_TourSpot);
		if (a->__sizeTourSpot)
			a->TourSpot = (struct tt__PTZPresetTourSpot *)soap_save_block(soap, soap_blist_TourSpot, NULL, 1);
		else
		{	a->TourSpot = NULL;
			if (soap_blist_TourSpot)
				soap_end_block(soap, soap_blist_TourSpot);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PresetTour, 0, sizeof(struct tt__PresetTour), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Status > 0 || soap_flag_AutoStart > 0 || soap_flag_StartingCondition > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PresetTour(struct soap *soap, const struct tt__PresetTour *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PresetTour);
	if (soap_out_tt__PresetTour(soap, tag?tag:"tt:PresetTour", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PresetTour * SOAP_FMAC4 soap_get_tt__PresetTour(struct soap *soap, struct tt__PresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPreset(struct soap *soap, struct tt__PTZPreset *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	a->PTZPosition = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPreset(struct soap *soap, const struct tt__PTZPreset *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_serialize_PointerTott__PTZVector(soap, &a->PTZPosition);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPreset(struct soap *soap, const char *tag, int id, const struct tt__PTZPreset *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPreset), type))
		return soap->error;
	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZVector(soap, "tt:PTZPosition", -1, &a->PTZPosition, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPreset * SOAP_FMAC4 soap_in_tt__PTZPreset(struct soap *soap, const char *tag, struct tt__PTZPreset *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_PTZPosition = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPreset *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPreset, sizeof(struct tt__PTZPreset), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPreset(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 0), &a->token, 0, 64))
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
			if (soap_flag_PTZPosition && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:PTZPosition", &a->PTZPosition, "tt:PTZVector"))
				{	soap_flag_PTZPosition--;
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
	{	a = (struct tt__PTZPreset *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPreset, 0, sizeof(struct tt__PTZPreset), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPreset(struct soap *soap, const struct tt__PTZPreset *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPreset);
	if (soap_out_tt__PTZPreset(soap, tag?tag:"tt:PTZPreset", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPreset * SOAP_FMAC4 soap_get_tt__PTZPreset(struct soap *soap, struct tt__PTZPreset *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPreset(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZMoveStatus(struct soap *soap, struct tt__PTZMoveStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PanTilt = NULL;
	a->Zoom = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZMoveStatus(struct soap *soap, const struct tt__PTZMoveStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MoveStatus(soap, &a->PanTilt);
	soap_serialize_PointerTott__MoveStatus(soap, &a->Zoom);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZMoveStatus(struct soap *soap, const char *tag, int id, const struct tt__PTZMoveStatus *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZMoveStatus), type))
		return soap->error;
	if (soap_out_PointerTott__MoveStatus(soap, "tt:PanTilt", -1, &a->PanTilt, ""))
		return soap->error;
	if (soap_out_PointerTott__MoveStatus(soap, "tt:Zoom", -1, &a->Zoom, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZMoveStatus * SOAP_FMAC4 soap_in_tt__PTZMoveStatus(struct soap *soap, const char *tag, struct tt__PTZMoveStatus *a, const char *type)
{
	size_t soap_flag_PanTilt = 1;
	size_t soap_flag_Zoom = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZMoveStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZMoveStatus, sizeof(struct tt__PTZMoveStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZMoveStatus(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PanTilt && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MoveStatus(soap, "tt:PanTilt", &a->PanTilt, "tt:MoveStatus"))
				{	soap_flag_PanTilt--;
					continue;
				}
			if (soap_flag_Zoom && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MoveStatus(soap, "tt:Zoom", &a->Zoom, "tt:MoveStatus"))
				{	soap_flag_Zoom--;
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
	{	a = (struct tt__PTZMoveStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZMoveStatus, 0, sizeof(struct tt__PTZMoveStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZMoveStatus(struct soap *soap, const struct tt__PTZMoveStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZMoveStatus);
	if (soap_out_tt__PTZMoveStatus(soap, tag?tag:"tt:PTZMoveStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZMoveStatus * SOAP_FMAC4 soap_get_tt__PTZMoveStatus(struct soap *soap, struct tt__PTZMoveStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZMoveStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZStatus(struct soap *soap, struct tt__PTZStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Position = NULL;
	a->MoveStatus = NULL;
	soap_default_string(soap, &a->Error);
	soap_default_time(soap, &a->UtcTime);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZStatus(struct soap *soap, const struct tt__PTZStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZVector(soap, &a->Position);
	soap_serialize_PointerTott__PTZMoveStatus(soap, &a->MoveStatus);
	soap_serialize_string(soap, &a->Error);
	soap_embedded(soap, &a->UtcTime, SOAP_TYPE_time);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatus(struct soap *soap, const char *tag, int id, const struct tt__PTZStatus *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatus), type))
		return soap->error;
	if (soap_out_PointerTott__PTZVector(soap, "tt:Position", -1, &a->Position, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZMoveStatus(soap, "tt:MoveStatus", -1, &a->MoveStatus, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &a->Error, ""))
		return soap->error;
	if (soap_out_time(soap, "tt:UtcTime", -1, &a->UtcTime, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZStatus * SOAP_FMAC4 soap_in_tt__PTZStatus(struct soap *soap, const char *tag, struct tt__PTZStatus *a, const char *type)
{
	size_t soap_flag_Position = 1;
	size_t soap_flag_MoveStatus = 1;
	size_t soap_flag_Error = 1;
	size_t soap_flag_UtcTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatus, sizeof(struct tt__PTZStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZStatus(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:Position", &a->Position, "tt:PTZVector"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap_flag_MoveStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZMoveStatus(soap, "tt:MoveStatus", &a->MoveStatus, "tt:PTZMoveStatus"))
				{	soap_flag_MoveStatus--;
					continue;
				}
			if (soap_flag_Error && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &a->Error, "xsd:string"))
				{	soap_flag_Error--;
					continue;
				}
			if (soap_flag_UtcTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:UtcTime", &a->UtcTime, "xsd:dateTime"))
				{	soap_flag_UtcTime--;
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
	{	a = (struct tt__PTZStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatus, 0, sizeof(struct tt__PTZStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_UtcTime > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZStatus(struct soap *soap, const struct tt__PTZStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZStatus);
	if (soap_out_tt__PTZStatus(soap, tag?tag:"tt:PTZStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZStatus * SOAP_FMAC4 soap_get_tt__PTZStatus(struct soap *soap, struct tt__PTZStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZSpeed(struct soap *soap, struct tt__PTZSpeed *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PanTilt = NULL;
	a->Zoom = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZSpeed(struct soap *soap, const struct tt__PTZSpeed *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector2D(soap, &a->PanTilt);
	soap_serialize_PointerTott__Vector1D(soap, &a->Zoom);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpeed(struct soap *soap, const char *tag, int id, const struct tt__PTZSpeed *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpeed), type))
		return soap->error;
	if (soap_out_PointerTott__Vector2D(soap, "tt:PanTilt", -1, &a->PanTilt, ""))
		return soap->error;
	if (soap_out_PointerTott__Vector1D(soap, "tt:Zoom", -1, &a->Zoom, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZSpeed * SOAP_FMAC4 soap_in_tt__PTZSpeed(struct soap *soap, const char *tag, struct tt__PTZSpeed *a, const char *type)
{
	size_t soap_flag_PanTilt = 1;
	size_t soap_flag_Zoom = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZSpeed *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpeed, sizeof(struct tt__PTZSpeed), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZSpeed(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PanTilt && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector2D(soap, "tt:PanTilt", &a->PanTilt, "tt:Vector2D"))
				{	soap_flag_PanTilt--;
					continue;
				}
			if (soap_flag_Zoom && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector1D(soap, "tt:Zoom", &a->Zoom, "tt:Vector1D"))
				{	soap_flag_Zoom--;
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
	{	a = (struct tt__PTZSpeed *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpeed, 0, sizeof(struct tt__PTZSpeed), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZSpeed(struct soap *soap, const struct tt__PTZSpeed *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZSpeed);
	if (soap_out_tt__PTZSpeed(soap, tag?tag:"tt:PTZSpeed", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZSpeed * SOAP_FMAC4 soap_get_tt__PTZSpeed(struct soap *soap, struct tt__PTZSpeed *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpeed(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZVector(struct soap *soap, struct tt__PTZVector *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PanTilt = NULL;
	a->Zoom = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZVector(struct soap *soap, const struct tt__PTZVector *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector2D(soap, &a->PanTilt);
	soap_serialize_PointerTott__Vector1D(soap, &a->Zoom);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZVector(struct soap *soap, const char *tag, int id, const struct tt__PTZVector *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZVector), type))
		return soap->error;
	if (soap_out_PointerTott__Vector2D(soap, "tt:PanTilt", -1, &a->PanTilt, ""))
		return soap->error;
	if (soap_out_PointerTott__Vector1D(soap, "tt:Zoom", -1, &a->Zoom, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZVector * SOAP_FMAC4 soap_in_tt__PTZVector(struct soap *soap, const char *tag, struct tt__PTZVector *a, const char *type)
{
	size_t soap_flag_PanTilt = 1;
	size_t soap_flag_Zoom = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZVector *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZVector, sizeof(struct tt__PTZVector), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZVector(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PanTilt && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector2D(soap, "tt:PanTilt", &a->PanTilt, "tt:Vector2D"))
				{	soap_flag_PanTilt--;
					continue;
				}
			if (soap_flag_Zoom && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector1D(soap, "tt:Zoom", &a->Zoom, "tt:Vector1D"))
				{	soap_flag_Zoom--;
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
	{	a = (struct tt__PTZVector *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZVector, 0, sizeof(struct tt__PTZVector), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZVector(struct soap *soap, const struct tt__PTZVector *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZVector);
	if (soap_out_tt__PTZVector(soap, tag?tag:"tt:PTZVector", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZVector * SOAP_FMAC4 soap_get_tt__PTZVector(struct soap *soap, struct tt__PTZVector *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZVector(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Vector1D(struct soap *soap, struct tt__Vector1D *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->x);
	soap_default_xsd__anyURI(soap, &a->space);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Vector1D(struct soap *soap, const struct tt__Vector1D *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector1D(struct soap *soap, const char *tag, int id, const struct tt__Vector1D *a, const char *type)
{
	soap_set_attr(soap, "x", soap_float2s(soap, a->x), 1);
	if (a->space)
		soap_set_attr(soap, "space", a->space, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Vector1D), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Vector1D * SOAP_FMAC4 soap_in_tt__Vector1D(struct soap *soap, const char *tag, struct tt__Vector1D *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Vector1D *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector1D, sizeof(struct tt__Vector1D), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Vector1D(soap, a);
	if (soap_s2float(soap, soap_attr_value(soap, "x", 1), &a->x))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "space", 0), &a->space, 0, -1))
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
	{	a = (struct tt__Vector1D *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Vector1D, 0, sizeof(struct tt__Vector1D), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Vector1D(struct soap *soap, const struct tt__Vector1D *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Vector1D);
	if (soap_out_tt__Vector1D(soap, tag?tag:"tt:Vector1D", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Vector1D * SOAP_FMAC4 soap_get_tt__Vector1D(struct soap *soap, struct tt__Vector1D *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector1D(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Vector2D(struct soap *soap, struct tt__Vector2D *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_float(soap, &a->x);
	soap_default_float(soap, &a->y);
	soap_default_xsd__anyURI(soap, &a->space);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Vector2D(struct soap *soap, const struct tt__Vector2D *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector2D(struct soap *soap, const char *tag, int id, const struct tt__Vector2D *a, const char *type)
{
	soap_set_attr(soap, "x", soap_float2s(soap, a->x), 1);
	soap_set_attr(soap, "y", soap_float2s(soap, a->y), 1);
	if (a->space)
		soap_set_attr(soap, "space", a->space, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Vector2D), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Vector2D * SOAP_FMAC4 soap_in_tt__Vector2D(struct soap *soap, const char *tag, struct tt__Vector2D *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Vector2D *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector2D, sizeof(struct tt__Vector2D), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Vector2D(soap, a);
	if (soap_s2float(soap, soap_attr_value(soap, "x", 1), &a->x))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "y", 1), &a->y))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "space", 0), &a->space, 0, -1))
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
	{	a = (struct tt__Vector2D *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Vector2D, 0, sizeof(struct tt__Vector2D), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Vector2D(struct soap *soap, const struct tt__Vector2D *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Vector2D);
	if (soap_out_tt__Vector2D(soap, tag?tag:"tt:Vector2D", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Vector2D * SOAP_FMAC4 soap_get_tt__Vector2D(struct soap *soap, struct tt__Vector2D *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector2D(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZSpacesExtension(struct soap *soap, struct tt__PTZSpacesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZSpacesExtension(struct soap *soap, const struct tt__PTZSpacesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpacesExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZSpacesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpacesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZSpacesExtension * SOAP_FMAC4 soap_in_tt__PTZSpacesExtension(struct soap *soap, const char *tag, struct tt__PTZSpacesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZSpacesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpacesExtension, sizeof(struct tt__PTZSpacesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZSpacesExtension(soap, a);
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
	{	a = (struct tt__PTZSpacesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpacesExtension, 0, sizeof(struct tt__PTZSpacesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZSpacesExtension(struct soap *soap, const struct tt__PTZSpacesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZSpacesExtension);
	if (soap_out_tt__PTZSpacesExtension(soap, tag?tag:"tt:PTZSpacesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZSpacesExtension * SOAP_FMAC4 soap_get_tt__PTZSpacesExtension(struct soap *soap, struct tt__PTZSpacesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpacesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Space1DDescription(struct soap *soap, struct tt__Space1DDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->URI);
	a->XRange = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Space1DDescription(struct soap *soap, const struct tt__Space1DDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->URI);
	soap_serialize_PointerTott__FloatRange(soap, &a->XRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Space1DDescription(struct soap *soap, const char *tag, int id, const struct tt__Space1DDescription *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Space1DDescription), type))
		return soap->error;
	if (a->URI)
	{	if (soap_out_xsd__anyURI(soap, "tt:URI", -1, &a->URI, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:URI"))
		return soap->error;
	if (a->XRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:XRange", -1, &a->XRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Space1DDescription * SOAP_FMAC4 soap_in_tt__Space1DDescription(struct soap *soap, const char *tag, struct tt__Space1DDescription *a, const char *type)
{
	size_t soap_flag_URI = 1;
	size_t soap_flag_XRange = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Space1DDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Space1DDescription, sizeof(struct tt__Space1DDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Space1DDescription(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_URI && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:URI", &a->URI, "xsd:anyURI"))
				{	soap_flag_URI--;
					continue;
				}
			if (soap_flag_XRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:XRange", &a->XRange, "tt:FloatRange"))
				{	soap_flag_XRange--;
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
	{	a = (struct tt__Space1DDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Space1DDescription, 0, sizeof(struct tt__Space1DDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_URI > 0 || soap_flag_XRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Space1DDescription(struct soap *soap, const struct tt__Space1DDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Space1DDescription);
	if (soap_out_tt__Space1DDescription(soap, tag?tag:"tt:Space1DDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Space1DDescription * SOAP_FMAC4 soap_get_tt__Space1DDescription(struct soap *soap, struct tt__Space1DDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Space1DDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ZoomLimits(struct soap *soap, struct tt__ZoomLimits *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Range = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ZoomLimits(struct soap *soap, const struct tt__ZoomLimits *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Space1DDescription(soap, &a->Range);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ZoomLimits(struct soap *soap, const char *tag, int id, const struct tt__ZoomLimits *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ZoomLimits), type))
		return soap->error;
	if (a->Range)
	{	if (soap_out_PointerTott__Space1DDescription(soap, "tt:Range", -1, &a->Range, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Range"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ZoomLimits * SOAP_FMAC4 soap_in_tt__ZoomLimits(struct soap *soap, const char *tag, struct tt__ZoomLimits *a, const char *type)
{
	size_t soap_flag_Range = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ZoomLimits *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ZoomLimits, sizeof(struct tt__ZoomLimits), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ZoomLimits(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Range && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:Range", &a->Range, "tt:Space1DDescription"))
				{	soap_flag_Range--;
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
	{	a = (struct tt__ZoomLimits *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ZoomLimits, 0, sizeof(struct tt__ZoomLimits), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Range > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ZoomLimits(struct soap *soap, const struct tt__ZoomLimits *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ZoomLimits);
	if (soap_out_tt__ZoomLimits(soap, tag?tag:"tt:ZoomLimits", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ZoomLimits * SOAP_FMAC4 soap_get_tt__ZoomLimits(struct soap *soap, struct tt__ZoomLimits *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ZoomLimits(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Space2DDescription(struct soap *soap, struct tt__Space2DDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->URI);
	a->XRange = NULL;
	a->YRange = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Space2DDescription(struct soap *soap, const struct tt__Space2DDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->URI);
	soap_serialize_PointerTott__FloatRange(soap, &a->XRange);
	soap_serialize_PointerTott__FloatRange(soap, &a->YRange);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Space2DDescription(struct soap *soap, const char *tag, int id, const struct tt__Space2DDescription *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Space2DDescription), type))
		return soap->error;
	if (a->URI)
	{	if (soap_out_xsd__anyURI(soap, "tt:URI", -1, &a->URI, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:URI"))
		return soap->error;
	if (a->XRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:XRange", -1, &a->XRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XRange"))
		return soap->error;
	if (a->YRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YRange", -1, &a->YRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Space2DDescription * SOAP_FMAC4 soap_in_tt__Space2DDescription(struct soap *soap, const char *tag, struct tt__Space2DDescription *a, const char *type)
{
	size_t soap_flag_URI = 1;
	size_t soap_flag_XRange = 1;
	size_t soap_flag_YRange = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Space2DDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Space2DDescription, sizeof(struct tt__Space2DDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Space2DDescription(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_URI && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:URI", &a->URI, "xsd:anyURI"))
				{	soap_flag_URI--;
					continue;
				}
			if (soap_flag_XRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:XRange", &a->XRange, "tt:FloatRange"))
				{	soap_flag_XRange--;
					continue;
				}
			if (soap_flag_YRange && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YRange", &a->YRange, "tt:FloatRange"))
				{	soap_flag_YRange--;
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
	{	a = (struct tt__Space2DDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Space2DDescription, 0, sizeof(struct tt__Space2DDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_URI > 0 || soap_flag_XRange > 0 || soap_flag_YRange > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Space2DDescription(struct soap *soap, const struct tt__Space2DDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Space2DDescription);
	if (soap_out_tt__Space2DDescription(soap, tag?tag:"tt:Space2DDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Space2DDescription * SOAP_FMAC4 soap_get_tt__Space2DDescription(struct soap *soap, struct tt__Space2DDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Space2DDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PanTiltLimits(struct soap *soap, struct tt__PanTiltLimits *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Range = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PanTiltLimits(struct soap *soap, const struct tt__PanTiltLimits *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Space2DDescription(soap, &a->Range);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PanTiltLimits(struct soap *soap, const char *tag, int id, const struct tt__PanTiltLimits *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PanTiltLimits), type))
		return soap->error;
	if (a->Range)
	{	if (soap_out_PointerTott__Space2DDescription(soap, "tt:Range", -1, &a->Range, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Range"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PanTiltLimits * SOAP_FMAC4 soap_in_tt__PanTiltLimits(struct soap *soap, const char *tag, struct tt__PanTiltLimits *a, const char *type)
{
	size_t soap_flag_Range = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PanTiltLimits *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PanTiltLimits, sizeof(struct tt__PanTiltLimits), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PanTiltLimits(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Range && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:Range", &a->Range, "tt:Space2DDescription"))
				{	soap_flag_Range--;
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
	{	a = (struct tt__PanTiltLimits *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PanTiltLimits, 0, sizeof(struct tt__PanTiltLimits), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Range > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PanTiltLimits(struct soap *soap, const struct tt__PanTiltLimits *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PanTiltLimits);
	if (soap_out_tt__PanTiltLimits(soap, tag?tag:"tt:PanTiltLimits", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PanTiltLimits * SOAP_FMAC4 soap_get_tt__PanTiltLimits(struct soap *soap, struct tt__PanTiltLimits *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PanTiltLimits(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReverseOptionsExtension(struct soap *soap, struct tt__ReverseOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReverseOptionsExtension(struct soap *soap, const struct tt__ReverseOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__ReverseOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReverseOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReverseOptionsExtension * SOAP_FMAC4 soap_in_tt__ReverseOptionsExtension(struct soap *soap, const char *tag, struct tt__ReverseOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReverseOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseOptionsExtension, sizeof(struct tt__ReverseOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReverseOptionsExtension(soap, a);
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
	{	a = (struct tt__ReverseOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReverseOptionsExtension, 0, sizeof(struct tt__ReverseOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReverseOptionsExtension(struct soap *soap, const struct tt__ReverseOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReverseOptionsExtension);
	if (soap_out_tt__ReverseOptionsExtension(soap, tag?tag:"tt:ReverseOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReverseOptionsExtension * SOAP_FMAC4 soap_get_tt__ReverseOptionsExtension(struct soap *soap, struct tt__ReverseOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EFlipOptionsExtension(struct soap *soap, struct tt__EFlipOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EFlipOptionsExtension(struct soap *soap, const struct tt__EFlipOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__EFlipOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlipOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EFlipOptionsExtension * SOAP_FMAC4 soap_in_tt__EFlipOptionsExtension(struct soap *soap, const char *tag, struct tt__EFlipOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EFlipOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipOptionsExtension, sizeof(struct tt__EFlipOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EFlipOptionsExtension(soap, a);
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
	{	a = (struct tt__EFlipOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlipOptionsExtension, 0, sizeof(struct tt__EFlipOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EFlipOptionsExtension(struct soap *soap, const struct tt__EFlipOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EFlipOptionsExtension);
	if (soap_out_tt__EFlipOptionsExtension(soap, tag?tag:"tt:EFlipOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EFlipOptionsExtension * SOAP_FMAC4 soap_get_tt__EFlipOptionsExtension(struct soap *soap, struct tt__EFlipOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTControlDirectionOptionsExtension(struct soap *soap, struct tt__PTControlDirectionOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTControlDirectionOptionsExtension(struct soap *soap, const struct tt__PTControlDirectionOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__PTControlDirectionOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTControlDirectionOptionsExtension * SOAP_FMAC4 soap_in_tt__PTControlDirectionOptionsExtension(struct soap *soap, const char *tag, struct tt__PTControlDirectionOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTControlDirectionOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionOptionsExtension, sizeof(struct tt__PTControlDirectionOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTControlDirectionOptionsExtension(soap, a);
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
	{	a = (struct tt__PTControlDirectionOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionOptionsExtension, 0, sizeof(struct tt__PTControlDirectionOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTControlDirectionOptionsExtension(struct soap *soap, const struct tt__PTControlDirectionOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionOptionsExtension);
	if (soap_out_tt__PTControlDirectionOptionsExtension(soap, tag?tag:"tt:PTControlDirectionOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTControlDirectionOptionsExtension * SOAP_FMAC4 soap_get_tt__PTControlDirectionOptionsExtension(struct soap *soap, struct tt__PTControlDirectionOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReverseOptions(struct soap *soap, struct tt__ReverseOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReverseOptions(struct soap *soap, const struct tt__ReverseOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__ReverseMode);
		}
	}
	soap_serialize_PointerTott__ReverseOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseOptions(struct soap *soap, const char *tag, int id, const struct tt__ReverseOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReverseOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__ReverseMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ReverseOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReverseOptions * SOAP_FMAC4 soap_in_tt__ReverseOptions(struct soap *soap, const char *tag, struct tt__ReverseOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReverseOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseOptions, sizeof(struct tt__ReverseOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReverseOptions(soap, a);
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
					a->Mode = (enum tt__ReverseMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__ReverseMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__ReverseMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ReverseMode(soap, "tt:Mode", a->Mode, "tt:ReverseMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReverseOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:ReverseOptionsExtension"))
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
			a->Mode = (enum tt__ReverseMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ReverseOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReverseOptions, 0, sizeof(struct tt__ReverseOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReverseOptions(struct soap *soap, const struct tt__ReverseOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReverseOptions);
	if (soap_out_tt__ReverseOptions(soap, tag?tag:"tt:ReverseOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReverseOptions * SOAP_FMAC4 soap_get_tt__ReverseOptions(struct soap *soap, struct tt__ReverseOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EFlipOptions(struct soap *soap, struct tt__EFlipOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EFlipOptions(struct soap *soap, const struct tt__EFlipOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__EFlipMode);
		}
	}
	soap_serialize_PointerTott__EFlipOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipOptions(struct soap *soap, const char *tag, int id, const struct tt__EFlipOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlipOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__EFlipMode(soap, "tt:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__EFlipOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EFlipOptions * SOAP_FMAC4 soap_in_tt__EFlipOptions(struct soap *soap, const char *tag, struct tt__EFlipOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EFlipOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipOptions, sizeof(struct tt__EFlipOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EFlipOptions(soap, a);
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
					a->Mode = (enum tt__EFlipMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__EFlipMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__EFlipMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__EFlipMode(soap, "tt:Mode", a->Mode, "tt:EFlipMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlipOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:EFlipOptionsExtension"))
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
			a->Mode = (enum tt__EFlipMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__EFlipOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlipOptions, 0, sizeof(struct tt__EFlipOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EFlipOptions(struct soap *soap, const struct tt__EFlipOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EFlipOptions);
	if (soap_out_tt__EFlipOptions(soap, tag?tag:"tt:EFlipOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EFlipOptions * SOAP_FMAC4 soap_get_tt__EFlipOptions(struct soap *soap, struct tt__EFlipOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZConfigurationOptions2(struct soap *soap, struct tt__PTZConfigurationOptions2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZConfigurationOptions2(struct soap *soap, const struct tt__PTZConfigurationOptions2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationOptions2(struct soap *soap, const char *tag, int id, const struct tt__PTZConfigurationOptions2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationOptions2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZConfigurationOptions2 * SOAP_FMAC4 soap_in_tt__PTZConfigurationOptions2(struct soap *soap, const char *tag, struct tt__PTZConfigurationOptions2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZConfigurationOptions2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationOptions2, sizeof(struct tt__PTZConfigurationOptions2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZConfigurationOptions2(soap, a);
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
	{	a = (struct tt__PTZConfigurationOptions2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationOptions2, 0, sizeof(struct tt__PTZConfigurationOptions2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZConfigurationOptions2(struct soap *soap, const struct tt__PTZConfigurationOptions2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationOptions2);
	if (soap_out_tt__PTZConfigurationOptions2(soap, tag?tag:"tt:PTZConfigurationOptions2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZConfigurationOptions2 * SOAP_FMAC4 soap_get_tt__PTZConfigurationOptions2(struct soap *soap, struct tt__PTZConfigurationOptions2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationOptions2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTControlDirectionOptions(struct soap *soap, struct tt__PTControlDirectionOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->EFlip = NULL;
	a->Reverse = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTControlDirectionOptions(struct soap *soap, const struct tt__PTControlDirectionOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__EFlipOptions(soap, &a->EFlip);
	soap_serialize_PointerTott__ReverseOptions(soap, &a->Reverse);
	soap_serialize_PointerTott__PTControlDirectionOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionOptions(struct soap *soap, const char *tag, int id, const struct tt__PTControlDirectionOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionOptions), type))
		return soap->error;
	if (soap_out_PointerTott__EFlipOptions(soap, "tt:EFlip", -1, &a->EFlip, ""))
		return soap->error;
	if (soap_out_PointerTott__ReverseOptions(soap, "tt:Reverse", -1, &a->Reverse, ""))
		return soap->error;
	if (soap_out_PointerTott__PTControlDirectionOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTControlDirectionOptions * SOAP_FMAC4 soap_in_tt__PTControlDirectionOptions(struct soap *soap, const char *tag, struct tt__PTControlDirectionOptions *a, const char *type)
{
	size_t soap_flag_EFlip = 1;
	size_t soap_flag_Reverse = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTControlDirectionOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionOptions, sizeof(struct tt__PTControlDirectionOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTControlDirectionOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_EFlip && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlipOptions(soap, "tt:EFlip", &a->EFlip, "tt:EFlipOptions"))
				{	soap_flag_EFlip--;
					continue;
				}
			if (soap_flag_Reverse && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReverseOptions(soap, "tt:Reverse", &a->Reverse, "tt:ReverseOptions"))
				{	soap_flag_Reverse--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:PTControlDirectionOptionsExtension"))
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
	{	a = (struct tt__PTControlDirectionOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionOptions, 0, sizeof(struct tt__PTControlDirectionOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTControlDirectionOptions(struct soap *soap, const struct tt__PTControlDirectionOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionOptions);
	if (soap_out_tt__PTControlDirectionOptions(soap, tag?tag:"tt:PTControlDirectionOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTControlDirectionOptions * SOAP_FMAC4 soap_get_tt__PTControlDirectionOptions(struct soap *soap, struct tt__PTControlDirectionOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZSpaces(struct soap *soap, struct tt__PTZSpaces *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAbsolutePanTiltPositionSpace = 0;
	a->AbsolutePanTiltPositionSpace = NULL;
	a->__sizeAbsoluteZoomPositionSpace = 0;
	a->AbsoluteZoomPositionSpace = NULL;
	a->__sizeRelativePanTiltTranslationSpace = 0;
	a->RelativePanTiltTranslationSpace = NULL;
	a->__sizeRelativeZoomTranslationSpace = 0;
	a->RelativeZoomTranslationSpace = NULL;
	a->__sizeContinuousPanTiltVelocitySpace = 0;
	a->ContinuousPanTiltVelocitySpace = NULL;
	a->__sizeContinuousZoomVelocitySpace = 0;
	a->ContinuousZoomVelocitySpace = NULL;
	a->__sizePanTiltSpeedSpace = 0;
	a->PanTiltSpeedSpace = NULL;
	a->__sizeZoomSpeedSpace = 0;
	a->ZoomSpeedSpace = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZSpaces(struct soap *soap, const struct tt__PTZSpaces *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AbsolutePanTiltPositionSpace)
	{	int i;
		for (i = 0; i < a->__sizeAbsolutePanTiltPositionSpace; i++)
		{
			soap_embedded(soap, a->AbsolutePanTiltPositionSpace + i, SOAP_TYPE_tt__Space2DDescription);
			soap_serialize_tt__Space2DDescription(soap, a->AbsolutePanTiltPositionSpace + i);
		}
	}
	if (a->AbsoluteZoomPositionSpace)
	{	int i;
		for (i = 0; i < a->__sizeAbsoluteZoomPositionSpace; i++)
		{
			soap_embedded(soap, a->AbsoluteZoomPositionSpace + i, SOAP_TYPE_tt__Space1DDescription);
			soap_serialize_tt__Space1DDescription(soap, a->AbsoluteZoomPositionSpace + i);
		}
	}
	if (a->RelativePanTiltTranslationSpace)
	{	int i;
		for (i = 0; i < a->__sizeRelativePanTiltTranslationSpace; i++)
		{
			soap_embedded(soap, a->RelativePanTiltTranslationSpace + i, SOAP_TYPE_tt__Space2DDescription);
			soap_serialize_tt__Space2DDescription(soap, a->RelativePanTiltTranslationSpace + i);
		}
	}
	if (a->RelativeZoomTranslationSpace)
	{	int i;
		for (i = 0; i < a->__sizeRelativeZoomTranslationSpace; i++)
		{
			soap_embedded(soap, a->RelativeZoomTranslationSpace + i, SOAP_TYPE_tt__Space1DDescription);
			soap_serialize_tt__Space1DDescription(soap, a->RelativeZoomTranslationSpace + i);
		}
	}
	if (a->ContinuousPanTiltVelocitySpace)
	{	int i;
		for (i = 0; i < a->__sizeContinuousPanTiltVelocitySpace; i++)
		{
			soap_embedded(soap, a->ContinuousPanTiltVelocitySpace + i, SOAP_TYPE_tt__Space2DDescription);
			soap_serialize_tt__Space2DDescription(soap, a->ContinuousPanTiltVelocitySpace + i);
		}
	}
	if (a->ContinuousZoomVelocitySpace)
	{	int i;
		for (i = 0; i < a->__sizeContinuousZoomVelocitySpace; i++)
		{
			soap_embedded(soap, a->ContinuousZoomVelocitySpace + i, SOAP_TYPE_tt__Space1DDescription);
			soap_serialize_tt__Space1DDescription(soap, a->ContinuousZoomVelocitySpace + i);
		}
	}
	if (a->PanTiltSpeedSpace)
	{	int i;
		for (i = 0; i < a->__sizePanTiltSpeedSpace; i++)
		{
			soap_embedded(soap, a->PanTiltSpeedSpace + i, SOAP_TYPE_tt__Space1DDescription);
			soap_serialize_tt__Space1DDescription(soap, a->PanTiltSpeedSpace + i);
		}
	}
	if (a->ZoomSpeedSpace)
	{	int i;
		for (i = 0; i < a->__sizeZoomSpeedSpace; i++)
		{
			soap_embedded(soap, a->ZoomSpeedSpace + i, SOAP_TYPE_tt__Space1DDescription);
			soap_serialize_tt__Space1DDescription(soap, a->ZoomSpeedSpace + i);
		}
	}
	soap_serialize_PointerTott__PTZSpacesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpaces(struct soap *soap, const char *tag, int id, const struct tt__PTZSpaces *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpaces), type))
		return soap->error;
	if (a->AbsolutePanTiltPositionSpace)
	{	int i;
		for (i = 0; i < a->__sizeAbsolutePanTiltPositionSpace; i++)
			if (soap_out_tt__Space2DDescription(soap, "tt:AbsolutePanTiltPositionSpace", -1, a->AbsolutePanTiltPositionSpace + i, ""))
				return soap->error;
	}
	if (a->AbsoluteZoomPositionSpace)
	{	int i;
		for (i = 0; i < a->__sizeAbsoluteZoomPositionSpace; i++)
			if (soap_out_tt__Space1DDescription(soap, "tt:AbsoluteZoomPositionSpace", -1, a->AbsoluteZoomPositionSpace + i, ""))
				return soap->error;
	}
	if (a->RelativePanTiltTranslationSpace)
	{	int i;
		for (i = 0; i < a->__sizeRelativePanTiltTranslationSpace; i++)
			if (soap_out_tt__Space2DDescription(soap, "tt:RelativePanTiltTranslationSpace", -1, a->RelativePanTiltTranslationSpace + i, ""))
				return soap->error;
	}
	if (a->RelativeZoomTranslationSpace)
	{	int i;
		for (i = 0; i < a->__sizeRelativeZoomTranslationSpace; i++)
			if (soap_out_tt__Space1DDescription(soap, "tt:RelativeZoomTranslationSpace", -1, a->RelativeZoomTranslationSpace + i, ""))
				return soap->error;
	}
	if (a->ContinuousPanTiltVelocitySpace)
	{	int i;
		for (i = 0; i < a->__sizeContinuousPanTiltVelocitySpace; i++)
			if (soap_out_tt__Space2DDescription(soap, "tt:ContinuousPanTiltVelocitySpace", -1, a->ContinuousPanTiltVelocitySpace + i, ""))
				return soap->error;
	}
	if (a->ContinuousZoomVelocitySpace)
	{	int i;
		for (i = 0; i < a->__sizeContinuousZoomVelocitySpace; i++)
			if (soap_out_tt__Space1DDescription(soap, "tt:ContinuousZoomVelocitySpace", -1, a->ContinuousZoomVelocitySpace + i, ""))
				return soap->error;
	}
	if (a->PanTiltSpeedSpace)
	{	int i;
		for (i = 0; i < a->__sizePanTiltSpeedSpace; i++)
			if (soap_out_tt__Space1DDescription(soap, "tt:PanTiltSpeedSpace", -1, a->PanTiltSpeedSpace + i, ""))
				return soap->error;
	}
	if (a->ZoomSpeedSpace)
	{	int i;
		for (i = 0; i < a->__sizeZoomSpeedSpace; i++)
			if (soap_out_tt__Space1DDescription(soap, "tt:ZoomSpeedSpace", -1, a->ZoomSpeedSpace + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZSpacesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZSpaces * SOAP_FMAC4 soap_in_tt__PTZSpaces(struct soap *soap, const char *tag, struct tt__PTZSpaces *a, const char *type)
{
	struct soap_blist *soap_blist_AbsolutePanTiltPositionSpace = NULL;
	struct soap_blist *soap_blist_AbsoluteZoomPositionSpace = NULL;
	struct soap_blist *soap_blist_RelativePanTiltTranslationSpace = NULL;
	struct soap_blist *soap_blist_RelativeZoomTranslationSpace = NULL;
	struct soap_blist *soap_blist_ContinuousPanTiltVelocitySpace = NULL;
	struct soap_blist *soap_blist_ContinuousZoomVelocitySpace = NULL;
	struct soap_blist *soap_blist_PanTiltSpeedSpace = NULL;
	struct soap_blist *soap_blist_ZoomSpeedSpace = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZSpaces *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpaces, sizeof(struct tt__PTZSpaces), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZSpaces(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AbsolutePanTiltPositionSpace", 1, NULL))
			{	if (a->AbsolutePanTiltPositionSpace == NULL)
				{	if (soap_blist_AbsolutePanTiltPositionSpace == NULL)
						soap_blist_AbsolutePanTiltPositionSpace = soap_new_block(soap);
					a->AbsolutePanTiltPositionSpace = (struct tt__Space2DDescription *)soap_push_block(soap, soap_blist_AbsolutePanTiltPositionSpace, sizeof(struct tt__Space2DDescription));
					if (a->AbsolutePanTiltPositionSpace == NULL)
						return NULL;
					soap_default_tt__Space2DDescription(soap, a->AbsolutePanTiltPositionSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space2DDescription(soap, "tt:AbsolutePanTiltPositionSpace", a->AbsolutePanTiltPositionSpace, "tt:Space2DDescription"))
				{	a->__sizeAbsolutePanTiltPositionSpace++;
					a->AbsolutePanTiltPositionSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AbsoluteZoomPositionSpace", 1, NULL))
			{	if (a->AbsoluteZoomPositionSpace == NULL)
				{	if (soap_blist_AbsoluteZoomPositionSpace == NULL)
						soap_blist_AbsoluteZoomPositionSpace = soap_new_block(soap);
					a->AbsoluteZoomPositionSpace = (struct tt__Space1DDescription *)soap_push_block(soap, soap_blist_AbsoluteZoomPositionSpace, sizeof(struct tt__Space1DDescription));
					if (a->AbsoluteZoomPositionSpace == NULL)
						return NULL;
					soap_default_tt__Space1DDescription(soap, a->AbsoluteZoomPositionSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space1DDescription(soap, "tt:AbsoluteZoomPositionSpace", a->AbsoluteZoomPositionSpace, "tt:Space1DDescription"))
				{	a->__sizeAbsoluteZoomPositionSpace++;
					a->AbsoluteZoomPositionSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RelativePanTiltTranslationSpace", 1, NULL))
			{	if (a->RelativePanTiltTranslationSpace == NULL)
				{	if (soap_blist_RelativePanTiltTranslationSpace == NULL)
						soap_blist_RelativePanTiltTranslationSpace = soap_new_block(soap);
					a->RelativePanTiltTranslationSpace = (struct tt__Space2DDescription *)soap_push_block(soap, soap_blist_RelativePanTiltTranslationSpace, sizeof(struct tt__Space2DDescription));
					if (a->RelativePanTiltTranslationSpace == NULL)
						return NULL;
					soap_default_tt__Space2DDescription(soap, a->RelativePanTiltTranslationSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space2DDescription(soap, "tt:RelativePanTiltTranslationSpace", a->RelativePanTiltTranslationSpace, "tt:Space2DDescription"))
				{	a->__sizeRelativePanTiltTranslationSpace++;
					a->RelativePanTiltTranslationSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RelativeZoomTranslationSpace", 1, NULL))
			{	if (a->RelativeZoomTranslationSpace == NULL)
				{	if (soap_blist_RelativeZoomTranslationSpace == NULL)
						soap_blist_RelativeZoomTranslationSpace = soap_new_block(soap);
					a->RelativeZoomTranslationSpace = (struct tt__Space1DDescription *)soap_push_block(soap, soap_blist_RelativeZoomTranslationSpace, sizeof(struct tt__Space1DDescription));
					if (a->RelativeZoomTranslationSpace == NULL)
						return NULL;
					soap_default_tt__Space1DDescription(soap, a->RelativeZoomTranslationSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space1DDescription(soap, "tt:RelativeZoomTranslationSpace", a->RelativeZoomTranslationSpace, "tt:Space1DDescription"))
				{	a->__sizeRelativeZoomTranslationSpace++;
					a->RelativeZoomTranslationSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ContinuousPanTiltVelocitySpace", 1, NULL))
			{	if (a->ContinuousPanTiltVelocitySpace == NULL)
				{	if (soap_blist_ContinuousPanTiltVelocitySpace == NULL)
						soap_blist_ContinuousPanTiltVelocitySpace = soap_new_block(soap);
					a->ContinuousPanTiltVelocitySpace = (struct tt__Space2DDescription *)soap_push_block(soap, soap_blist_ContinuousPanTiltVelocitySpace, sizeof(struct tt__Space2DDescription));
					if (a->ContinuousPanTiltVelocitySpace == NULL)
						return NULL;
					soap_default_tt__Space2DDescription(soap, a->ContinuousPanTiltVelocitySpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space2DDescription(soap, "tt:ContinuousPanTiltVelocitySpace", a->ContinuousPanTiltVelocitySpace, "tt:Space2DDescription"))
				{	a->__sizeContinuousPanTiltVelocitySpace++;
					a->ContinuousPanTiltVelocitySpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ContinuousZoomVelocitySpace", 1, NULL))
			{	if (a->ContinuousZoomVelocitySpace == NULL)
				{	if (soap_blist_ContinuousZoomVelocitySpace == NULL)
						soap_blist_ContinuousZoomVelocitySpace = soap_new_block(soap);
					a->ContinuousZoomVelocitySpace = (struct tt__Space1DDescription *)soap_push_block(soap, soap_blist_ContinuousZoomVelocitySpace, sizeof(struct tt__Space1DDescription));
					if (a->ContinuousZoomVelocitySpace == NULL)
						return NULL;
					soap_default_tt__Space1DDescription(soap, a->ContinuousZoomVelocitySpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space1DDescription(soap, "tt:ContinuousZoomVelocitySpace", a->ContinuousZoomVelocitySpace, "tt:Space1DDescription"))
				{	a->__sizeContinuousZoomVelocitySpace++;
					a->ContinuousZoomVelocitySpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PanTiltSpeedSpace", 1, NULL))
			{	if (a->PanTiltSpeedSpace == NULL)
				{	if (soap_blist_PanTiltSpeedSpace == NULL)
						soap_blist_PanTiltSpeedSpace = soap_new_block(soap);
					a->PanTiltSpeedSpace = (struct tt__Space1DDescription *)soap_push_block(soap, soap_blist_PanTiltSpeedSpace, sizeof(struct tt__Space1DDescription));
					if (a->PanTiltSpeedSpace == NULL)
						return NULL;
					soap_default_tt__Space1DDescription(soap, a->PanTiltSpeedSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space1DDescription(soap, "tt:PanTiltSpeedSpace", a->PanTiltSpeedSpace, "tt:Space1DDescription"))
				{	a->__sizePanTiltSpeedSpace++;
					a->PanTiltSpeedSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ZoomSpeedSpace", 1, NULL))
			{	if (a->ZoomSpeedSpace == NULL)
				{	if (soap_blist_ZoomSpeedSpace == NULL)
						soap_blist_ZoomSpeedSpace = soap_new_block(soap);
					a->ZoomSpeedSpace = (struct tt__Space1DDescription *)soap_push_block(soap, soap_blist_ZoomSpeedSpace, sizeof(struct tt__Space1DDescription));
					if (a->ZoomSpeedSpace == NULL)
						return NULL;
					soap_default_tt__Space1DDescription(soap, a->ZoomSpeedSpace);
				}
				soap_revert(soap);
				if (soap_in_tt__Space1DDescription(soap, "tt:ZoomSpeedSpace", a->ZoomSpeedSpace, "tt:Space1DDescription"))
				{	a->__sizeZoomSpeedSpace++;
					a->ZoomSpeedSpace = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpacesExtension(soap, "tt:Extension", &a->Extension, "tt:PTZSpacesExtension"))
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
		if (a->AbsolutePanTiltPositionSpace)
			soap_pop_block(soap, soap_blist_AbsolutePanTiltPositionSpace);
		if (a->__sizeAbsolutePanTiltPositionSpace)
			a->AbsolutePanTiltPositionSpace = (struct tt__Space2DDescription *)soap_save_block(soap, soap_blist_AbsolutePanTiltPositionSpace, NULL, 1);
		else
		{	a->AbsolutePanTiltPositionSpace = NULL;
			if (soap_blist_AbsolutePanTiltPositionSpace)
				soap_end_block(soap, soap_blist_AbsolutePanTiltPositionSpace);
		}
		if (a->AbsoluteZoomPositionSpace)
			soap_pop_block(soap, soap_blist_AbsoluteZoomPositionSpace);
		if (a->__sizeAbsoluteZoomPositionSpace)
			a->AbsoluteZoomPositionSpace = (struct tt__Space1DDescription *)soap_save_block(soap, soap_blist_AbsoluteZoomPositionSpace, NULL, 1);
		else
		{	a->AbsoluteZoomPositionSpace = NULL;
			if (soap_blist_AbsoluteZoomPositionSpace)
				soap_end_block(soap, soap_blist_AbsoluteZoomPositionSpace);
		}
		if (a->RelativePanTiltTranslationSpace)
			soap_pop_block(soap, soap_blist_RelativePanTiltTranslationSpace);
		if (a->__sizeRelativePanTiltTranslationSpace)
			a->RelativePanTiltTranslationSpace = (struct tt__Space2DDescription *)soap_save_block(soap, soap_blist_RelativePanTiltTranslationSpace, NULL, 1);
		else
		{	a->RelativePanTiltTranslationSpace = NULL;
			if (soap_blist_RelativePanTiltTranslationSpace)
				soap_end_block(soap, soap_blist_RelativePanTiltTranslationSpace);
		}
		if (a->RelativeZoomTranslationSpace)
			soap_pop_block(soap, soap_blist_RelativeZoomTranslationSpace);
		if (a->__sizeRelativeZoomTranslationSpace)
			a->RelativeZoomTranslationSpace = (struct tt__Space1DDescription *)soap_save_block(soap, soap_blist_RelativeZoomTranslationSpace, NULL, 1);
		else
		{	a->RelativeZoomTranslationSpace = NULL;
			if (soap_blist_RelativeZoomTranslationSpace)
				soap_end_block(soap, soap_blist_RelativeZoomTranslationSpace);
		}
		if (a->ContinuousPanTiltVelocitySpace)
			soap_pop_block(soap, soap_blist_ContinuousPanTiltVelocitySpace);
		if (a->__sizeContinuousPanTiltVelocitySpace)
			a->ContinuousPanTiltVelocitySpace = (struct tt__Space2DDescription *)soap_save_block(soap, soap_blist_ContinuousPanTiltVelocitySpace, NULL, 1);
		else
		{	a->ContinuousPanTiltVelocitySpace = NULL;
			if (soap_blist_ContinuousPanTiltVelocitySpace)
				soap_end_block(soap, soap_blist_ContinuousPanTiltVelocitySpace);
		}
		if (a->ContinuousZoomVelocitySpace)
			soap_pop_block(soap, soap_blist_ContinuousZoomVelocitySpace);
		if (a->__sizeContinuousZoomVelocitySpace)
			a->ContinuousZoomVelocitySpace = (struct tt__Space1DDescription *)soap_save_block(soap, soap_blist_ContinuousZoomVelocitySpace, NULL, 1);
		else
		{	a->ContinuousZoomVelocitySpace = NULL;
			if (soap_blist_ContinuousZoomVelocitySpace)
				soap_end_block(soap, soap_blist_ContinuousZoomVelocitySpace);
		}
		if (a->PanTiltSpeedSpace)
			soap_pop_block(soap, soap_blist_PanTiltSpeedSpace);
		if (a->__sizePanTiltSpeedSpace)
			a->PanTiltSpeedSpace = (struct tt__Space1DDescription *)soap_save_block(soap, soap_blist_PanTiltSpeedSpace, NULL, 1);
		else
		{	a->PanTiltSpeedSpace = NULL;
			if (soap_blist_PanTiltSpeedSpace)
				soap_end_block(soap, soap_blist_PanTiltSpeedSpace);
		}
		if (a->ZoomSpeedSpace)
			soap_pop_block(soap, soap_blist_ZoomSpeedSpace);
		if (a->__sizeZoomSpeedSpace)
			a->ZoomSpeedSpace = (struct tt__Space1DDescription *)soap_save_block(soap, soap_blist_ZoomSpeedSpace, NULL, 1);
		else
		{	a->ZoomSpeedSpace = NULL;
			if (soap_blist_ZoomSpeedSpace)
				soap_end_block(soap, soap_blist_ZoomSpeedSpace);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZSpaces *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpaces, 0, sizeof(struct tt__PTZSpaces), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZSpaces(struct soap *soap, const struct tt__PTZSpaces *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZSpaces);
	if (soap_out_tt__PTZSpaces(soap, tag?tag:"tt:PTZSpaces", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZSpaces * SOAP_FMAC4 soap_get_tt__PTZSpaces(struct soap *soap, struct tt__PTZSpaces *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpaces(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZConfigurationOptions(struct soap *soap, struct tt__PTZConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Spaces = NULL;
	a->PTZTimeout = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->PTControlDirection = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZConfigurationOptions(struct soap *soap, const struct tt__PTZConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZSpaces(soap, &a->Spaces);
	soap_serialize_PointerTott__DurationRange(soap, &a->PTZTimeout);
	soap_serialize_PointerTott__PTControlDirectionOptions(soap, &a->PTControlDirection);
	soap_serialize_PointerTott__PTZConfigurationOptions2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tt__PTZConfigurationOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationOptions), type))
		return soap->error;
	if (a->Spaces)
	{	if (soap_out_PointerTott__PTZSpaces(soap, "tt:Spaces", -1, &a->Spaces, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Spaces"))
		return soap->error;
	if (a->PTZTimeout)
	{	if (soap_out_PointerTott__DurationRange(soap, "tt:PTZTimeout", -1, &a->PTZTimeout, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PTZTimeout"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTControlDirectionOptions(soap, "tt:PTControlDirection", -1, &a->PTControlDirection, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationOptions2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZConfigurationOptions * SOAP_FMAC4 soap_in_tt__PTZConfigurationOptions(struct soap *soap, const char *tag, struct tt__PTZConfigurationOptions *a, const char *type)
{
	size_t soap_flag_Spaces = 1;
	size_t soap_flag_PTZTimeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_PTControlDirection = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationOptions, sizeof(struct tt__PTZConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Spaces && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpaces(soap, "tt:Spaces", &a->Spaces, "tt:PTZSpaces"))
				{	soap_flag_Spaces--;
					continue;
				}
			if (soap_flag_PTZTimeout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:PTZTimeout", &a->PTZTimeout, "tt:DurationRange"))
				{	soap_flag_PTZTimeout--;
					continue;
				}
			if (soap_flag_PTControlDirection && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionOptions(soap, "tt:PTControlDirection", &a->PTControlDirection, "tt:PTControlDirectionOptions"))
				{	soap_flag_PTControlDirection--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationOptions2(soap, "tt:Extension", &a->Extension, "tt:PTZConfigurationOptions2"))
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
	{	a = (struct tt__PTZConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationOptions, 0, sizeof(struct tt__PTZConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Spaces > 0 || soap_flag_PTZTimeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZConfigurationOptions(struct soap *soap, const struct tt__PTZConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationOptions);
	if (soap_out_tt__PTZConfigurationOptions(soap, tag?tag:"tt:PTZConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZConfigurationOptions * SOAP_FMAC4 soap_get_tt__PTZConfigurationOptions(struct soap *soap, struct tt__PTZConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTControlDirectionExtension(struct soap *soap, struct tt__PTControlDirectionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTControlDirectionExtension(struct soap *soap, const struct tt__PTControlDirectionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionExtension(struct soap *soap, const char *tag, int id, const struct tt__PTControlDirectionExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTControlDirectionExtension * SOAP_FMAC4 soap_in_tt__PTControlDirectionExtension(struct soap *soap, const char *tag, struct tt__PTControlDirectionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTControlDirectionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionExtension, sizeof(struct tt__PTControlDirectionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTControlDirectionExtension(soap, a);
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
	{	a = (struct tt__PTControlDirectionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionExtension, 0, sizeof(struct tt__PTControlDirectionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTControlDirectionExtension(struct soap *soap, const struct tt__PTControlDirectionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionExtension);
	if (soap_out_tt__PTControlDirectionExtension(soap, tag?tag:"tt:PTControlDirectionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTControlDirectionExtension * SOAP_FMAC4 soap_get_tt__PTControlDirectionExtension(struct soap *soap, struct tt__PTControlDirectionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Reverse(struct soap *soap, struct tt__Reverse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReverseMode(soap, &a->Mode);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Reverse(struct soap *soap, const struct tt__Reverse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__ReverseMode);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Reverse(struct soap *soap, const char *tag, int id, const struct tt__Reverse *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Reverse), type))
		return soap->error;
	if (soap_out_tt__ReverseMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Reverse * SOAP_FMAC4 soap_in_tt__Reverse(struct soap *soap, const char *tag, struct tt__Reverse *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Reverse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Reverse, sizeof(struct tt__Reverse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Reverse(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReverseMode(soap, "tt:Mode", &a->Mode, "tt:ReverseMode"))
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
	{	a = (struct tt__Reverse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Reverse, 0, sizeof(struct tt__Reverse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Reverse(struct soap *soap, const struct tt__Reverse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Reverse);
	if (soap_out_tt__Reverse(soap, tag?tag:"tt:Reverse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Reverse * SOAP_FMAC4 soap_get_tt__Reverse(struct soap *soap, struct tt__Reverse *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Reverse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EFlip(struct soap *soap, struct tt__EFlip *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__EFlipMode(soap, &a->Mode);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EFlip(struct soap *soap, const struct tt__EFlip *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__EFlipMode);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlip(struct soap *soap, const char *tag, int id, const struct tt__EFlip *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlip), type))
		return soap->error;
	if (soap_out_tt__EFlipMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EFlip * SOAP_FMAC4 soap_in_tt__EFlip(struct soap *soap, const char *tag, struct tt__EFlip *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EFlip *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlip, sizeof(struct tt__EFlip), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EFlip(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__EFlipMode(soap, "tt:Mode", &a->Mode, "tt:EFlipMode"))
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
	{	a = (struct tt__EFlip *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlip, 0, sizeof(struct tt__EFlip), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EFlip(struct soap *soap, const struct tt__EFlip *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EFlip);
	if (soap_out_tt__EFlip(soap, tag?tag:"tt:EFlip", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EFlip * SOAP_FMAC4 soap_get_tt__EFlip(struct soap *soap, struct tt__EFlip *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlip(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZConfigurationExtension2(struct soap *soap, struct tt__PTZConfigurationExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZConfigurationExtension2(struct soap *soap, const struct tt__PTZConfigurationExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationExtension2(struct soap *soap, const char *tag, int id, const struct tt__PTZConfigurationExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__PTZConfigurationExtension2(struct soap *soap, const char *tag, struct tt__PTZConfigurationExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZConfigurationExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationExtension2, sizeof(struct tt__PTZConfigurationExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZConfigurationExtension2(soap, a);
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
	{	a = (struct tt__PTZConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationExtension2, 0, sizeof(struct tt__PTZConfigurationExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZConfigurationExtension2(struct soap *soap, const struct tt__PTZConfigurationExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationExtension2);
	if (soap_out_tt__PTZConfigurationExtension2(soap, tag?tag:"tt:PTZConfigurationExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__PTZConfigurationExtension2(struct soap *soap, struct tt__PTZConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTControlDirection(struct soap *soap, struct tt__PTControlDirection *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->EFlip = NULL;
	a->Reverse = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTControlDirection(struct soap *soap, const struct tt__PTControlDirection *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__EFlip(soap, &a->EFlip);
	soap_serialize_PointerTott__Reverse(soap, &a->Reverse);
	soap_serialize_PointerTott__PTControlDirectionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirection(struct soap *soap, const char *tag, int id, const struct tt__PTControlDirection *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirection), type))
		return soap->error;
	if (soap_out_PointerTott__EFlip(soap, "tt:EFlip", -1, &a->EFlip, ""))
		return soap->error;
	if (soap_out_PointerTott__Reverse(soap, "tt:Reverse", -1, &a->Reverse, ""))
		return soap->error;
	if (soap_out_PointerTott__PTControlDirectionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTControlDirection * SOAP_FMAC4 soap_in_tt__PTControlDirection(struct soap *soap, const char *tag, struct tt__PTControlDirection *a, const char *type)
{
	size_t soap_flag_EFlip = 1;
	size_t soap_flag_Reverse = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTControlDirection *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirection, sizeof(struct tt__PTControlDirection), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTControlDirection(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_EFlip && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlip(soap, "tt:EFlip", &a->EFlip, "tt:EFlip"))
				{	soap_flag_EFlip--;
					continue;
				}
			if (soap_flag_Reverse && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Reverse(soap, "tt:Reverse", &a->Reverse, "tt:Reverse"))
				{	soap_flag_Reverse--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionExtension(soap, "tt:Extension", &a->Extension, "tt:PTControlDirectionExtension"))
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
	{	a = (struct tt__PTControlDirection *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirection, 0, sizeof(struct tt__PTControlDirection), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTControlDirection(struct soap *soap, const struct tt__PTControlDirection *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirection);
	if (soap_out_tt__PTControlDirection(soap, tag?tag:"tt:PTControlDirection", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTControlDirection * SOAP_FMAC4 soap_get_tt__PTControlDirection(struct soap *soap, struct tt__PTControlDirection *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirection(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZConfigurationExtension(struct soap *soap, struct tt__PTZConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->PTControlDirection = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZConfigurationExtension(struct soap *soap, const struct tt__PTZConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTControlDirection(soap, &a->PTControlDirection);
	soap_serialize_PointerTott__PTZConfigurationExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTControlDirection(soap, "tt:PTControlDirection", -1, &a->PTControlDirection, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZConfigurationExtension * SOAP_FMAC4 soap_in_tt__PTZConfigurationExtension(struct soap *soap, const char *tag, struct tt__PTZConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_PTControlDirection = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationExtension, sizeof(struct tt__PTZConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTControlDirection && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirection(soap, "tt:PTControlDirection", &a->PTControlDirection, "tt:PTControlDirection"))
				{	soap_flag_PTControlDirection--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationExtension2(soap, "tt:Extension", &a->Extension, "tt:PTZConfigurationExtension2"))
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
	{	a = (struct tt__PTZConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationExtension, 0, sizeof(struct tt__PTZConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZConfigurationExtension(struct soap *soap, const struct tt__PTZConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationExtension);
	if (soap_out_tt__PTZConfigurationExtension(soap, tag?tag:"tt:PTZConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZConfigurationExtension * SOAP_FMAC4 soap_get_tt__PTZConfigurationExtension(struct soap *soap, struct tt__PTZConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourSupportedExtension(struct soap *soap, struct tt__PTZPresetTourSupportedExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourSupportedExtension(struct soap *soap, const struct tt__PTZPresetTourSupportedExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSupportedExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourSupportedExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSupportedExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourSupportedExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourSupportedExtension(struct soap *soap, const char *tag, struct tt__PTZPresetTourSupportedExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourSupportedExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSupportedExtension, sizeof(struct tt__PTZPresetTourSupportedExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourSupportedExtension(soap, a);
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
	{	a = (struct tt__PTZPresetTourSupportedExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSupportedExtension, 0, sizeof(struct tt__PTZPresetTourSupportedExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourSupportedExtension(struct soap *soap, const struct tt__PTZPresetTourSupportedExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSupportedExtension);
	if (soap_out_tt__PTZPresetTourSupportedExtension(soap, tag?tag:"tt:PTZPresetTourSupportedExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourSupportedExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourSupportedExtension(struct soap *soap, struct tt__PTZPresetTourSupportedExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSupportedExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZNodeExtension2(struct soap *soap, struct tt__PTZNodeExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZNodeExtension2(struct soap *soap, const struct tt__PTZNodeExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZNodeExtension2(struct soap *soap, const char *tag, int id, const struct tt__PTZNodeExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZNodeExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZNodeExtension2 * SOAP_FMAC4 soap_in_tt__PTZNodeExtension2(struct soap *soap, const char *tag, struct tt__PTZNodeExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZNodeExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZNodeExtension2, sizeof(struct tt__PTZNodeExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZNodeExtension2(soap, a);
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
	{	a = (struct tt__PTZNodeExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZNodeExtension2, 0, sizeof(struct tt__PTZNodeExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZNodeExtension2(struct soap *soap, const struct tt__PTZNodeExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZNodeExtension2);
	if (soap_out_tt__PTZNodeExtension2(soap, tag?tag:"tt:PTZNodeExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZNodeExtension2 * SOAP_FMAC4 soap_get_tt__PTZNodeExtension2(struct soap *soap, struct tt__PTZNodeExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZNodeExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourSupported(struct soap *soap, struct tt__PTZPresetTourSupported *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->MaximumNumberOfPresetTours);
	a->__sizePTZPresetTourOperation = 0;
	a->PTZPresetTourOperation = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPresetTourSupported(struct soap *soap, const struct tt__PTZPresetTourSupported *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->MaximumNumberOfPresetTours, SOAP_TYPE_int);
	if (a->PTZPresetTourOperation)
	{	int i;
		for (i = 0; i < a->__sizePTZPresetTourOperation; i++)
		{
			soap_embedded(soap, a->PTZPresetTourOperation + i, SOAP_TYPE_tt__PTZPresetTourOperation);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourSupportedExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSupported(struct soap *soap, const char *tag, int id, const struct tt__PTZPresetTourSupported *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSupported), type))
		return soap->error;
	if (soap_out_int(soap, "tt:MaximumNumberOfPresetTours", -1, &a->MaximumNumberOfPresetTours, ""))
		return soap->error;
	if (a->PTZPresetTourOperation)
	{	int i;
		for (i = 0; i < a->__sizePTZPresetTourOperation; i++)
			if (soap_out_tt__PTZPresetTourOperation(soap, "tt:PTZPresetTourOperation", -1, a->PTZPresetTourOperation + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourSupportedExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPresetTourSupported * SOAP_FMAC4 soap_in_tt__PTZPresetTourSupported(struct soap *soap, const char *tag, struct tt__PTZPresetTourSupported *a, const char *type)
{
	size_t soap_flag_MaximumNumberOfPresetTours = 1;
	struct soap_blist *soap_blist_PTZPresetTourOperation = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPresetTourSupported *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSupported, sizeof(struct tt__PTZPresetTourSupported), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPresetTourSupported(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MaximumNumberOfPresetTours && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumNumberOfPresetTours", &a->MaximumNumberOfPresetTours, "xsd:int"))
				{	soap_flag_MaximumNumberOfPresetTours--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PTZPresetTourOperation", 1, NULL))
			{	if (a->PTZPresetTourOperation == NULL)
				{	if (soap_blist_PTZPresetTourOperation == NULL)
						soap_blist_PTZPresetTourOperation = soap_new_block(soap);
					a->PTZPresetTourOperation = (enum tt__PTZPresetTourOperation *)soap_push_block(soap, soap_blist_PTZPresetTourOperation, sizeof(enum tt__PTZPresetTourOperation));
					if (a->PTZPresetTourOperation == NULL)
						return NULL;
					soap_default_tt__PTZPresetTourOperation(soap, a->PTZPresetTourOperation);
				}
				soap_revert(soap);
				if (soap_in_tt__PTZPresetTourOperation(soap, "tt:PTZPresetTourOperation", a->PTZPresetTourOperation, "tt:PTZPresetTourOperation"))
				{	a->__sizePTZPresetTourOperation++;
					a->PTZPresetTourOperation = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSupportedExtension(soap, "tt:Extension", &a->Extension, "tt:PTZPresetTourSupportedExtension"))
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
		if (a->PTZPresetTourOperation)
			soap_pop_block(soap, soap_blist_PTZPresetTourOperation);
		if (a->__sizePTZPresetTourOperation)
			a->PTZPresetTourOperation = (enum tt__PTZPresetTourOperation *)soap_save_block(soap, soap_blist_PTZPresetTourOperation, NULL, 1);
		else
		{	a->PTZPresetTourOperation = NULL;
			if (soap_blist_PTZPresetTourOperation)
				soap_end_block(soap, soap_blist_PTZPresetTourOperation);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZPresetTourSupported *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSupported, 0, sizeof(struct tt__PTZPresetTourSupported), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MaximumNumberOfPresetTours > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourSupported(struct soap *soap, const struct tt__PTZPresetTourSupported *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSupported);
	if (soap_out_tt__PTZPresetTourSupported(soap, tag?tag:"tt:PTZPresetTourSupported", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPresetTourSupported * SOAP_FMAC4 soap_get_tt__PTZPresetTourSupported(struct soap *soap, struct tt__PTZPresetTourSupported *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSupported(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZNodeExtension(struct soap *soap, struct tt__PTZNodeExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->SupportedPresetTour = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZNodeExtension(struct soap *soap, const struct tt__PTZNodeExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourSupported(soap, &a->SupportedPresetTour);
	soap_serialize_PointerTott__PTZNodeExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZNodeExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZNodeExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZNodeExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (a->SupportedPresetTour)
	{	if (soap_out_PointerTott__PTZPresetTourSupported(soap, "tt:SupportedPresetTour", -1, &a->SupportedPresetTour, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedPresetTour"))
		return soap->error;
	if (soap_out_PointerTott__PTZNodeExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZNodeExtension * SOAP_FMAC4 soap_in_tt__PTZNodeExtension(struct soap *soap, const char *tag, struct tt__PTZNodeExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_SupportedPresetTour = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZNodeExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZNodeExtension, sizeof(struct tt__PTZNodeExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZNodeExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SupportedPresetTour && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSupported(soap, "tt:SupportedPresetTour", &a->SupportedPresetTour, "tt:PTZPresetTourSupported"))
				{	soap_flag_SupportedPresetTour--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZNodeExtension2(soap, "tt:Extension", &a->Extension, "tt:PTZNodeExtension2"))
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
	{	a = (struct tt__PTZNodeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZNodeExtension, 0, sizeof(struct tt__PTZNodeExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedPresetTour > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZNodeExtension(struct soap *soap, const struct tt__PTZNodeExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZNodeExtension);
	if (soap_out_tt__PTZNodeExtension(soap, tag?tag:"tt:PTZNodeExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZNodeExtension * SOAP_FMAC4 soap_get_tt__PTZNodeExtension(struct soap *soap, struct tt__PTZNodeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZNodeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelayOutputSettings(struct soap *soap, struct tt__RelayOutputSettings *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RelayMode(soap, &a->Mode);
	soap_default_xsd__duration(soap, &a->DelayTime);
	soap_default_tt__RelayIdleState(soap, &a->IdleState);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RelayOutputSettings(struct soap *soap, const struct tt__RelayOutputSettings *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Mode, SOAP_TYPE_tt__RelayMode);
	soap_embedded(soap, &a->DelayTime, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayOutputSettings(struct soap *soap, const char *tag, int id, const struct tt__RelayOutputSettings *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayOutputSettings), type))
		return soap->error;
	if (soap_out_tt__RelayMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:DelayTime", -1, &a->DelayTime, ""))
		return soap->error;
	if (soap_out_tt__RelayIdleState(soap, "tt:IdleState", -1, &a->IdleState, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RelayOutputSettings * SOAP_FMAC4 soap_in_tt__RelayOutputSettings(struct soap *soap, const char *tag, struct tt__RelayOutputSettings *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_DelayTime = 1;
	size_t soap_flag_IdleState = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RelayOutputSettings *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayOutputSettings, sizeof(struct tt__RelayOutputSettings), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RelayOutputSettings(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RelayMode(soap, "tt:Mode", &a->Mode, "tt:RelayMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_DelayTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:DelayTime", &a->DelayTime, "xsd:duration"))
				{	soap_flag_DelayTime--;
					continue;
				}
			if (soap_flag_IdleState && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RelayIdleState(soap, "tt:IdleState", &a->IdleState, "tt:RelayIdleState"))
				{	soap_flag_IdleState--;
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
	{	a = (struct tt__RelayOutputSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayOutputSettings, 0, sizeof(struct tt__RelayOutputSettings), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_DelayTime > 0 || soap_flag_IdleState > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelayOutputSettings(struct soap *soap, const struct tt__RelayOutputSettings *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelayOutputSettings);
	if (soap_out_tt__RelayOutputSettings(soap, tag?tag:"tt:RelayOutputSettings", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RelayOutputSettings * SOAP_FMAC4 soap_get_tt__RelayOutputSettings(struct soap *soap, struct tt__RelayOutputSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayOutputSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__GenericEapPwdConfigurationExtension(struct soap *soap, struct tt__GenericEapPwdConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const struct tt__GenericEapPwdConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__GenericEapPwdConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__GenericEapPwdConfigurationExtension * SOAP_FMAC4 soap_in_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const char *tag, struct tt__GenericEapPwdConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__GenericEapPwdConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension, sizeof(struct tt__GenericEapPwdConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__GenericEapPwdConfigurationExtension(soap, a);
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
	{	a = (struct tt__GenericEapPwdConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension, 0, sizeof(struct tt__GenericEapPwdConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const struct tt__GenericEapPwdConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension);
	if (soap_out_tt__GenericEapPwdConfigurationExtension(soap, tag?tag:"tt:GenericEapPwdConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__GenericEapPwdConfigurationExtension * SOAP_FMAC4 soap_get_tt__GenericEapPwdConfigurationExtension(struct soap *soap, struct tt__GenericEapPwdConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GenericEapPwdConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EapMethodExtension(struct soap *soap, struct tt__EapMethodExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EapMethodExtension(struct soap *soap, const struct tt__EapMethodExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EapMethodExtension(struct soap *soap, const char *tag, int id, const struct tt__EapMethodExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EapMethodExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EapMethodExtension * SOAP_FMAC4 soap_in_tt__EapMethodExtension(struct soap *soap, const char *tag, struct tt__EapMethodExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EapMethodExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EapMethodExtension, sizeof(struct tt__EapMethodExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EapMethodExtension(soap, a);
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
	{	a = (struct tt__EapMethodExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EapMethodExtension, 0, sizeof(struct tt__EapMethodExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EapMethodExtension(struct soap *soap, const struct tt__EapMethodExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EapMethodExtension);
	if (soap_out_tt__EapMethodExtension(soap, tag?tag:"tt:EapMethodExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EapMethodExtension * SOAP_FMAC4 soap_get_tt__EapMethodExtension(struct soap *soap, struct tt__EapMethodExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EapMethodExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TLSConfiguration(struct soap *soap, struct tt__TLSConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TLSConfiguration(struct soap *soap, const struct tt__TLSConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TLSConfiguration(struct soap *soap, const char *tag, int id, const struct tt__TLSConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TLSConfiguration), type))
		return soap->error;
	if (a->CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TLSConfiguration * SOAP_FMAC4 soap_in_tt__TLSConfiguration(struct soap *soap, const char *tag, struct tt__TLSConfiguration *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TLSConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TLSConfiguration, sizeof(struct tt__TLSConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TLSConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
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
	{	a = (struct tt__TLSConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TLSConfiguration, 0, sizeof(struct tt__TLSConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TLSConfiguration(struct soap *soap, const struct tt__TLSConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TLSConfiguration);
	if (soap_out_tt__TLSConfiguration(soap, tag?tag:"tt:TLSConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TLSConfiguration * SOAP_FMAC4 soap_get_tt__TLSConfiguration(struct soap *soap, struct tt__TLSConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TLSConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot1XConfigurationExtension(struct soap *soap, struct tt__Dot1XConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot1XConfigurationExtension(struct soap *soap, const struct tt__Dot1XConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot1XConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__Dot1XConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot1XConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot1XConfigurationExtension * SOAP_FMAC4 soap_in_tt__Dot1XConfigurationExtension(struct soap *soap, const char *tag, struct tt__Dot1XConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot1XConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot1XConfigurationExtension, sizeof(struct tt__Dot1XConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot1XConfigurationExtension(soap, a);
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
	{	a = (struct tt__Dot1XConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot1XConfigurationExtension, 0, sizeof(struct tt__Dot1XConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot1XConfigurationExtension(struct soap *soap, const struct tt__Dot1XConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot1XConfigurationExtension);
	if (soap_out_tt__Dot1XConfigurationExtension(soap, tag?tag:"tt:Dot1XConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot1XConfigurationExtension * SOAP_FMAC4 soap_get_tt__Dot1XConfigurationExtension(struct soap *soap, struct tt__Dot1XConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot1XConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EAPMethodConfiguration(struct soap *soap, struct tt__EAPMethodConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->TLSConfiguration = NULL;
	soap_default_string(soap, &a->Password);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EAPMethodConfiguration(struct soap *soap, const struct tt__EAPMethodConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__TLSConfiguration(soap, &a->TLSConfiguration);
	soap_serialize_string(soap, &a->Password);
	soap_serialize_PointerTott__EapMethodExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EAPMethodConfiguration(struct soap *soap, const char *tag, int id, const struct tt__EAPMethodConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EAPMethodConfiguration), type))
		return soap->error;
	if (soap_out_PointerTott__TLSConfiguration(soap, "tt:TLSConfiguration", -1, &a->TLSConfiguration, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &a->Password, ""))
		return soap->error;
	if (soap_out_PointerTott__EapMethodExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EAPMethodConfiguration * SOAP_FMAC4 soap_in_tt__EAPMethodConfiguration(struct soap *soap, const char *tag, struct tt__EAPMethodConfiguration *a, const char *type)
{
	size_t soap_flag_TLSConfiguration = 1;
	size_t soap_flag_Password = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EAPMethodConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EAPMethodConfiguration, sizeof(struct tt__EAPMethodConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EAPMethodConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TLSConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TLSConfiguration(soap, "tt:TLSConfiguration", &a->TLSConfiguration, "tt:TLSConfiguration"))
				{	soap_flag_TLSConfiguration--;
					continue;
				}
			if (soap_flag_Password && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &a->Password, "xsd:string"))
				{	soap_flag_Password--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EapMethodExtension(soap, "tt:Extension", &a->Extension, "tt:EapMethodExtension"))
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
	{	a = (struct tt__EAPMethodConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EAPMethodConfiguration, 0, sizeof(struct tt__EAPMethodConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EAPMethodConfiguration(struct soap *soap, const struct tt__EAPMethodConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EAPMethodConfiguration);
	if (soap_out_tt__EAPMethodConfiguration(soap, tag?tag:"tt:EAPMethodConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EAPMethodConfiguration * SOAP_FMAC4 soap_get_tt__EAPMethodConfiguration(struct soap *soap, struct tt__EAPMethodConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EAPMethodConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot1XConfiguration(struct soap *soap, struct tt__Dot1XConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->Dot1XConfigurationToken);
	soap_default_string(soap, &a->Identity);
	soap_default_string(soap, &a->AnonymousID);
	soap_default_int(soap, &a->EAPMethod);
	a->__sizeCACertificateID = 0;
	a->CACertificateID = NULL;
	a->EAPMethodConfiguration = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot1XConfiguration(struct soap *soap, const struct tt__Dot1XConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->Dot1XConfigurationToken);
	soap_serialize_string(soap, &a->Identity);
	soap_serialize_string(soap, &a->AnonymousID);
	soap_embedded(soap, &a->EAPMethod, SOAP_TYPE_int);
	if (a->CACertificateID)
	{	int i;
		for (i = 0; i < a->__sizeCACertificateID; i++)
		{
			soap_serialize_xsd__token(soap, a->CACertificateID + i);
		}
	}
	soap_serialize_PointerTott__EAPMethodConfiguration(soap, &a->EAPMethodConfiguration);
	soap_serialize_PointerTott__Dot1XConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot1XConfiguration(struct soap *soap, const char *tag, int id, const struct tt__Dot1XConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot1XConfiguration), type))
		return soap->error;
	if (a->Dot1XConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Dot1XConfigurationToken", -1, &a->Dot1XConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Dot1XConfigurationToken"))
		return soap->error;
	if (a->Identity)
	{	if (soap_out_string(soap, "tt:Identity", -1, &a->Identity, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Identity"))
		return soap->error;
	if (soap_out_string(soap, "tt:AnonymousID", -1, &a->AnonymousID, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:EAPMethod", -1, &a->EAPMethod, ""))
		return soap->error;
	if (a->CACertificateID)
	{	int i;
		for (i = 0; i < a->__sizeCACertificateID; i++)
			if (soap_out_xsd__token(soap, "tt:CACertificateID", -1, a->CACertificateID + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__EAPMethodConfiguration(soap, "tt:EAPMethodConfiguration", -1, &a->EAPMethodConfiguration, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot1XConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot1XConfiguration * SOAP_FMAC4 soap_in_tt__Dot1XConfiguration(struct soap *soap, const char *tag, struct tt__Dot1XConfiguration *a, const char *type)
{
	size_t soap_flag_Dot1XConfigurationToken = 1;
	size_t soap_flag_Identity = 1;
	size_t soap_flag_AnonymousID = 1;
	size_t soap_flag_EAPMethod = 1;
	struct soap_blist *soap_blist_CACertificateID = NULL;
	size_t soap_flag_EAPMethodConfiguration = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot1XConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot1XConfiguration, sizeof(struct tt__Dot1XConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot1XConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Dot1XConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Dot1XConfigurationToken", &a->Dot1XConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_Dot1XConfigurationToken--;
					continue;
				}
			if (soap_flag_Identity && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Identity", &a->Identity, "xsd:string"))
				{	soap_flag_Identity--;
					continue;
				}
			if (soap_flag_AnonymousID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:AnonymousID", &a->AnonymousID, "xsd:string"))
				{	soap_flag_AnonymousID--;
					continue;
				}
			if (soap_flag_EAPMethod && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:EAPMethod", &a->EAPMethod, "xsd:int"))
				{	soap_flag_EAPMethod--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:CACertificateID", 1, NULL))
			{	if (a->CACertificateID == NULL)
				{	if (soap_blist_CACertificateID == NULL)
						soap_blist_CACertificateID = soap_new_block(soap);
					a->CACertificateID = (char **)soap_push_block(soap, soap_blist_CACertificateID, sizeof(char *));
					if (a->CACertificateID == NULL)
						return NULL;
					*a->CACertificateID = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__token(soap, "tt:CACertificateID", a->CACertificateID, "xsd:token"))
				{	a->__sizeCACertificateID++;
					a->CACertificateID = NULL;
					continue;
				}
			}
			if (soap_flag_EAPMethodConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EAPMethodConfiguration(soap, "tt:EAPMethodConfiguration", &a->EAPMethodConfiguration, "tt:EAPMethodConfiguration"))
				{	soap_flag_EAPMethodConfiguration--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot1XConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:Dot1XConfigurationExtension"))
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
		if (a->CACertificateID)
			soap_pop_block(soap, soap_blist_CACertificateID);
		if (a->__sizeCACertificateID)
			a->CACertificateID = (char **)soap_save_block(soap, soap_blist_CACertificateID, NULL, 1);
		else
		{	a->CACertificateID = NULL;
			if (soap_blist_CACertificateID)
				soap_end_block(soap, soap_blist_CACertificateID);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Dot1XConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot1XConfiguration, 0, sizeof(struct tt__Dot1XConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Dot1XConfigurationToken > 0 || soap_flag_Identity > 0 || soap_flag_EAPMethod > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot1XConfiguration(struct soap *soap, const struct tt__Dot1XConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot1XConfiguration);
	if (soap_out_tt__Dot1XConfiguration(soap, tag?tag:"tt:Dot1XConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot1XConfiguration * SOAP_FMAC4 soap_get_tt__Dot1XConfiguration(struct soap *soap, struct tt__Dot1XConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot1XConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateInformationExtension(struct soap *soap, struct tt__CertificateInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateInformationExtension(struct soap *soap, const struct tt__CertificateInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__CertificateInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateInformationExtension * SOAP_FMAC4 soap_in_tt__CertificateInformationExtension(struct soap *soap, const char *tag, struct tt__CertificateInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateInformationExtension, sizeof(struct tt__CertificateInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateInformationExtension(soap, a);
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
	{	a = (struct tt__CertificateInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateInformationExtension, 0, sizeof(struct tt__CertificateInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateInformationExtension(struct soap *soap, const struct tt__CertificateInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateInformationExtension);
	if (soap_out_tt__CertificateInformationExtension(soap, tag?tag:"tt:CertificateInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateInformationExtension * SOAP_FMAC4 soap_get_tt__CertificateInformationExtension(struct soap *soap, struct tt__CertificateInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DateTimeRange(struct soap *soap, struct tt__DateTimeRange *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_time(soap, &a->From);
	soap_default_time(soap, &a->Until);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DateTimeRange(struct soap *soap, const struct tt__DateTimeRange *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->From, SOAP_TYPE_time);
	soap_embedded(soap, &a->Until, SOAP_TYPE_time);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DateTimeRange(struct soap *soap, const char *tag, int id, const struct tt__DateTimeRange *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DateTimeRange), type))
		return soap->error;
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

SOAP_FMAC3 struct tt__DateTimeRange * SOAP_FMAC4 soap_in_tt__DateTimeRange(struct soap *soap, const char *tag, struct tt__DateTimeRange *a, const char *type)
{
	size_t soap_flag_From = 1;
	size_t soap_flag_Until = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DateTimeRange *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DateTimeRange, sizeof(struct tt__DateTimeRange), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DateTimeRange(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
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
	{	a = (struct tt__DateTimeRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DateTimeRange, 0, sizeof(struct tt__DateTimeRange), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_From > 0 || soap_flag_Until > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DateTimeRange(struct soap *soap, const struct tt__DateTimeRange *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DateTimeRange);
	if (soap_out_tt__DateTimeRange(soap, tag?tag:"tt:DateTimeRange", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DateTimeRange * SOAP_FMAC4 soap_get_tt__DateTimeRange(struct soap *soap, struct tt__DateTimeRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DateTimeRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateUsage(struct soap *soap, struct tt__CertificateUsage *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->__item);
	soap_default_xsd__boolean(soap, &a->Critical);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateUsage(struct soap *soap, const struct tt__CertificateUsage *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->__item);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateUsage(struct soap *soap, const char *tag, int id, const struct tt__CertificateUsage *a, const char *type)
{
	soap_set_attr(soap, "Critical", soap_xsd__boolean2s(soap, a->Critical), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	return soap_out_string(soap, tag, id, &a->__item, "");
}

SOAP_FMAC3 struct tt__CertificateUsage * SOAP_FMAC4 soap_in_tt__CertificateUsage(struct soap *soap, const char *tag, struct tt__CertificateUsage *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (struct tt__CertificateUsage *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateUsage, sizeof(struct tt__CertificateUsage), 0, NULL, NULL, NULL)))
		return NULL;
	soap_revert(soap);
	*soap->id = '\0';
	soap_default_tt__CertificateUsage(soap, a);
	if (soap_s2xsd__boolean(soap, soap_attr_value(soap, "Critical", 1), &a->Critical))
		return NULL;
	if (!soap_in_string(soap, tag, &a->__item, "tt:CertificateUsage"))
		return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateUsage(struct soap *soap, const struct tt__CertificateUsage *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateUsage);
	if (soap_out_tt__CertificateUsage(soap, tag?tag:"tt:CertificateUsage", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateUsage * SOAP_FMAC4 soap_get_tt__CertificateUsage(struct soap *soap, struct tt__CertificateUsage *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateUsage(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateInformation(struct soap *soap, struct tt__CertificateInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	soap_default_string(soap, &a->IssuerDN);
	soap_default_string(soap, &a->SubjectDN);
	a->KeyUsage = NULL;
	a->ExtendedKeyUsage = NULL;
	a->KeyLength = NULL;
	soap_default_string(soap, &a->Version);
	soap_default_string(soap, &a->SerialNum);
	soap_default_string(soap, &a->SignatureAlgorithm);
	a->Validity = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateInformation(struct soap *soap, const struct tt__CertificateInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
	soap_serialize_string(soap, &a->IssuerDN);
	soap_serialize_string(soap, &a->SubjectDN);
	soap_serialize_PointerTott__CertificateUsage(soap, &a->KeyUsage);
	soap_serialize_PointerTott__CertificateUsage(soap, &a->ExtendedKeyUsage);
	soap_serialize_PointerToint(soap, &a->KeyLength);
	soap_serialize_string(soap, &a->Version);
	soap_serialize_string(soap, &a->SerialNum);
	soap_serialize_string(soap, &a->SignatureAlgorithm);
	soap_serialize_PointerTott__DateTimeRange(soap, &a->Validity);
	soap_serialize_PointerTott__CertificateInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateInformation(struct soap *soap, const char *tag, int id, const struct tt__CertificateInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateInformation), type))
		return soap->error;
	if (a->CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (soap_out_string(soap, "tt:IssuerDN", -1, &a->IssuerDN, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SubjectDN", -1, &a->SubjectDN, ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateUsage(soap, "tt:KeyUsage", -1, &a->KeyUsage, ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateUsage(soap, "tt:ExtendedKeyUsage", -1, &a->ExtendedKeyUsage, ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:KeyLength", -1, &a->KeyLength, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Version", -1, &a->Version, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SerialNum", -1, &a->SerialNum, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SignatureAlgorithm", -1, &a->SignatureAlgorithm, ""))
		return soap->error;
	if (soap_out_PointerTott__DateTimeRange(soap, "tt:Validity", -1, &a->Validity, ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateInformation * SOAP_FMAC4 soap_in_tt__CertificateInformation(struct soap *soap, const char *tag, struct tt__CertificateInformation *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	size_t soap_flag_IssuerDN = 1;
	size_t soap_flag_SubjectDN = 1;
	size_t soap_flag_KeyUsage = 1;
	size_t soap_flag_ExtendedKeyUsage = 1;
	size_t soap_flag_KeyLength = 1;
	size_t soap_flag_Version = 1;
	size_t soap_flag_SerialNum = 1;
	size_t soap_flag_SignatureAlgorithm = 1;
	size_t soap_flag_Validity = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateInformation, sizeof(struct tt__CertificateInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
					continue;
				}
			if (soap_flag_IssuerDN && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:IssuerDN", &a->IssuerDN, "xsd:string"))
				{	soap_flag_IssuerDN--;
					continue;
				}
			if (soap_flag_SubjectDN && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SubjectDN", &a->SubjectDN, "xsd:string"))
				{	soap_flag_SubjectDN--;
					continue;
				}
			if (soap_flag_KeyUsage && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateUsage(soap, "tt:KeyUsage", &a->KeyUsage, "tt:CertificateUsage"))
				{	soap_flag_KeyUsage--;
					continue;
				}
			if (soap_flag_ExtendedKeyUsage && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateUsage(soap, "tt:ExtendedKeyUsage", &a->ExtendedKeyUsage, "tt:CertificateUsage"))
				{	soap_flag_ExtendedKeyUsage--;
					continue;
				}
			if (soap_flag_KeyLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:KeyLength", &a->KeyLength, "xsd:int"))
				{	soap_flag_KeyLength--;
					continue;
				}
			if (soap_flag_Version && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Version", &a->Version, "xsd:string"))
				{	soap_flag_Version--;
					continue;
				}
			if (soap_flag_SerialNum && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SerialNum", &a->SerialNum, "xsd:string"))
				{	soap_flag_SerialNum--;
					continue;
				}
			if (soap_flag_SignatureAlgorithm && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SignatureAlgorithm", &a->SignatureAlgorithm, "xsd:string"))
				{	soap_flag_SignatureAlgorithm--;
					continue;
				}
			if (soap_flag_Validity && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTimeRange(soap, "tt:Validity", &a->Validity, "tt:DateTimeRange"))
				{	soap_flag_Validity--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateInformationExtension(soap, "tt:Extension", &a->Extension, "tt:CertificateInformationExtension"))
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
	{	a = (struct tt__CertificateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateInformation, 0, sizeof(struct tt__CertificateInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateInformation(struct soap *soap, const struct tt__CertificateInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateInformation);
	if (soap_out_tt__CertificateInformation(soap, tag?tag:"tt:CertificateInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateInformation * SOAP_FMAC4 soap_get_tt__CertificateInformation(struct soap *soap, struct tt__CertificateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateWithPrivateKey(struct soap *soap, struct tt__CertificateWithPrivateKey *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	a->Certificate = NULL;
	a->PrivateKey = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateWithPrivateKey(struct soap *soap, const struct tt__CertificateWithPrivateKey *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
	soap_serialize_PointerTott__BinaryData(soap, &a->Certificate);
	soap_serialize_PointerTott__BinaryData(soap, &a->PrivateKey);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateWithPrivateKey(struct soap *soap, const char *tag, int id, const struct tt__CertificateWithPrivateKey *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateWithPrivateKey), type))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
		return soap->error;
	if (a->Certificate)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:Certificate", -1, &a->Certificate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Certificate"))
		return soap->error;
	if (a->PrivateKey)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:PrivateKey", -1, &a->PrivateKey, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PrivateKey"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateWithPrivateKey * SOAP_FMAC4 soap_in_tt__CertificateWithPrivateKey(struct soap *soap, const char *tag, struct tt__CertificateWithPrivateKey *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	size_t soap_flag_Certificate = 1;
	size_t soap_flag_PrivateKey = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateWithPrivateKey *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateWithPrivateKey, sizeof(struct tt__CertificateWithPrivateKey), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateWithPrivateKey(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
					continue;
				}
			if (soap_flag_Certificate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:Certificate", &a->Certificate, "tt:BinaryData"))
				{	soap_flag_Certificate--;
					continue;
				}
			if (soap_flag_PrivateKey && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:PrivateKey", &a->PrivateKey, "tt:BinaryData"))
				{	soap_flag_PrivateKey--;
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
	{	a = (struct tt__CertificateWithPrivateKey *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateWithPrivateKey, 0, sizeof(struct tt__CertificateWithPrivateKey), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Certificate > 0 || soap_flag_PrivateKey > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateWithPrivateKey(struct soap *soap, const struct tt__CertificateWithPrivateKey *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateWithPrivateKey);
	if (soap_out_tt__CertificateWithPrivateKey(soap, tag?tag:"tt:CertificateWithPrivateKey", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateWithPrivateKey * SOAP_FMAC4 soap_get_tt__CertificateWithPrivateKey(struct soap *soap, struct tt__CertificateWithPrivateKey *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateWithPrivateKey(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateStatus(struct soap *soap, struct tt__CertificateStatus *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	soap_default_xsd__boolean(soap, &a->Status);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateStatus(struct soap *soap, const struct tt__CertificateStatus *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
	soap_embedded(soap, &a->Status, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateStatus(struct soap *soap, const char *tag, int id, const struct tt__CertificateStatus *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateStatus), type))
		return soap->error;
	if (a->CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Status", -1, &a->Status, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateStatus * SOAP_FMAC4 soap_in_tt__CertificateStatus(struct soap *soap, const char *tag, struct tt__CertificateStatus *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	size_t soap_flag_Status = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateStatus, sizeof(struct tt__CertificateStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateStatus(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
					continue;
				}
			if (soap_flag_Status && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Status", &a->Status, "xsd:boolean"))
				{	soap_flag_Status--;
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
	{	a = (struct tt__CertificateStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateStatus, 0, sizeof(struct tt__CertificateStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID > 0 || soap_flag_Status > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateStatus(struct soap *soap, const struct tt__CertificateStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateStatus);
	if (soap_out_tt__CertificateStatus(soap, tag?tag:"tt:CertificateStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateStatus * SOAP_FMAC4 soap_get_tt__CertificateStatus(struct soap *soap, struct tt__CertificateStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Certificate(struct soap *soap, struct tt__Certificate *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	a->Certificate = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Certificate(struct soap *soap, const struct tt__Certificate *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
	soap_serialize_PointerTott__BinaryData(soap, &a->Certificate);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Certificate(struct soap *soap, const char *tag, int id, const struct tt__Certificate *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Certificate), type))
		return soap->error;
	if (a->CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (a->Certificate)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:Certificate", -1, &a->Certificate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Certificate"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Certificate * SOAP_FMAC4 soap_in_tt__Certificate(struct soap *soap, const char *tag, struct tt__Certificate *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	size_t soap_flag_Certificate = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Certificate *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Certificate, sizeof(struct tt__Certificate), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Certificate(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
					continue;
				}
			if (soap_flag_Certificate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:Certificate", &a->Certificate, "tt:BinaryData"))
				{	soap_flag_Certificate--;
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
	{	a = (struct tt__Certificate *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Certificate, 0, sizeof(struct tt__Certificate), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID > 0 || soap_flag_Certificate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Certificate(struct soap *soap, const struct tt__Certificate *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Certificate);
	if (soap_out_tt__Certificate(soap, tag?tag:"tt:Certificate", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Certificate * SOAP_FMAC4 soap_get_tt__Certificate(struct soap *soap, struct tt__Certificate *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Certificate(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateGenerationParametersExtension(struct soap *soap, struct tt__CertificateGenerationParametersExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateGenerationParametersExtension(struct soap *soap, const struct tt__CertificateGenerationParametersExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateGenerationParametersExtension(struct soap *soap, const char *tag, int id, const struct tt__CertificateGenerationParametersExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateGenerationParametersExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateGenerationParametersExtension * SOAP_FMAC4 soap_in_tt__CertificateGenerationParametersExtension(struct soap *soap, const char *tag, struct tt__CertificateGenerationParametersExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateGenerationParametersExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateGenerationParametersExtension, sizeof(struct tt__CertificateGenerationParametersExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateGenerationParametersExtension(soap, a);
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
	{	a = (struct tt__CertificateGenerationParametersExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateGenerationParametersExtension, 0, sizeof(struct tt__CertificateGenerationParametersExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateGenerationParametersExtension(struct soap *soap, const struct tt__CertificateGenerationParametersExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateGenerationParametersExtension);
	if (soap_out_tt__CertificateGenerationParametersExtension(soap, tag?tag:"tt:CertificateGenerationParametersExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateGenerationParametersExtension * SOAP_FMAC4 soap_get_tt__CertificateGenerationParametersExtension(struct soap *soap, struct tt__CertificateGenerationParametersExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateGenerationParametersExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CertificateGenerationParameters(struct soap *soap, struct tt__CertificateGenerationParameters *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->CertificateID);
	soap_default_string(soap, &a->Subject);
	soap_default_xsd__token(soap, &a->ValidNotBefore);
	soap_default_xsd__token(soap, &a->ValidNotAfter);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CertificateGenerationParameters(struct soap *soap, const struct tt__CertificateGenerationParameters *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->CertificateID);
	soap_serialize_string(soap, &a->Subject);
	soap_serialize_xsd__token(soap, &a->ValidNotBefore);
	soap_serialize_xsd__token(soap, &a->ValidNotAfter);
	soap_serialize_PointerTott__CertificateGenerationParametersExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateGenerationParameters(struct soap *soap, const char *tag, int id, const struct tt__CertificateGenerationParameters *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateGenerationParameters), type))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->CertificateID, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Subject", -1, &a->Subject, ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:ValidNotBefore", -1, &a->ValidNotBefore, ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:ValidNotAfter", -1, &a->ValidNotAfter, ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateGenerationParametersExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CertificateGenerationParameters * SOAP_FMAC4 soap_in_tt__CertificateGenerationParameters(struct soap *soap, const char *tag, struct tt__CertificateGenerationParameters *a, const char *type)
{
	size_t soap_flag_CertificateID = 1;
	size_t soap_flag_Subject = 1;
	size_t soap_flag_ValidNotBefore = 1;
	size_t soap_flag_ValidNotAfter = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CertificateGenerationParameters *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateGenerationParameters, sizeof(struct tt__CertificateGenerationParameters), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CertificateGenerationParameters(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CertificateID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &a->CertificateID, "xsd:token"))
				{	soap_flag_CertificateID--;
					continue;
				}
			if (soap_flag_Subject && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Subject", &a->Subject, "xsd:string"))
				{	soap_flag_Subject--;
					continue;
				}
			if (soap_flag_ValidNotBefore && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:ValidNotBefore", &a->ValidNotBefore, "xsd:token"))
				{	soap_flag_ValidNotBefore--;
					continue;
				}
			if (soap_flag_ValidNotAfter && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:ValidNotAfter", &a->ValidNotAfter, "xsd:token"))
				{	soap_flag_ValidNotAfter--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateGenerationParametersExtension(soap, "tt:Extension", &a->Extension, "tt:CertificateGenerationParametersExtension"))
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
	{	a = (struct tt__CertificateGenerationParameters *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateGenerationParameters, 0, sizeof(struct tt__CertificateGenerationParameters), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CertificateGenerationParameters(struct soap *soap, const struct tt__CertificateGenerationParameters *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CertificateGenerationParameters);
	if (soap_out_tt__CertificateGenerationParameters(soap, tag?tag:"tt:CertificateGenerationParameters", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CertificateGenerationParameters * SOAP_FMAC4 soap_get_tt__CertificateGenerationParameters(struct soap *soap, struct tt__CertificateGenerationParameters *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateGenerationParameters(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__UserExtension(struct soap *soap, struct tt__UserExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__UserExtension(struct soap *soap, const struct tt__UserExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__UserExtension(struct soap *soap, const char *tag, int id, const struct tt__UserExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__UserExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__UserExtension * SOAP_FMAC4 soap_in_tt__UserExtension(struct soap *soap, const char *tag, struct tt__UserExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__UserExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__UserExtension, sizeof(struct tt__UserExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__UserExtension(soap, a);
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
	{	a = (struct tt__UserExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__UserExtension, 0, sizeof(struct tt__UserExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__UserExtension(struct soap *soap, const struct tt__UserExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__UserExtension);
	if (soap_out_tt__UserExtension(soap, tag?tag:"tt:UserExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__UserExtension * SOAP_FMAC4 soap_get_tt__UserExtension(struct soap *soap, struct tt__UserExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__UserExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__User(struct soap *soap, struct tt__User *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Username);
	soap_default_string(soap, &a->Password);
	soap_default_tt__UserLevel(soap, &a->UserLevel);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__User(struct soap *soap, const struct tt__User *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Username);
	soap_serialize_string(soap, &a->Password);
	soap_serialize_PointerTott__UserExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__User(struct soap *soap, const char *tag, int id, const struct tt__User *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__User), type))
		return soap->error;
	if (a->Username)
	{	if (soap_out_string(soap, "tt:Username", -1, &a->Username, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Username"))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &a->Password, ""))
		return soap->error;
	if (soap_out_tt__UserLevel(soap, "tt:UserLevel", -1, &a->UserLevel, ""))
		return soap->error;
	if (soap_out_PointerTott__UserExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__User * SOAP_FMAC4 soap_in_tt__User(struct soap *soap, const char *tag, struct tt__User *a, const char *type)
{
	size_t soap_flag_Username = 1;
	size_t soap_flag_Password = 1;
	size_t soap_flag_UserLevel = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__User *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__User, sizeof(struct tt__User), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__User(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Username && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Username", &a->Username, "xsd:string"))
				{	soap_flag_Username--;
					continue;
				}
			if (soap_flag_Password && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &a->Password, "xsd:string"))
				{	soap_flag_Password--;
					continue;
				}
			if (soap_flag_UserLevel && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__UserLevel(soap, "tt:UserLevel", &a->UserLevel, "tt:UserLevel"))
				{	soap_flag_UserLevel--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__UserExtension(soap, "tt:Extension", &a->Extension, "tt:UserExtension"))
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
	{	a = (struct tt__User *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__User, 0, sizeof(struct tt__User), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Username > 0 || soap_flag_UserLevel > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__User(struct soap *soap, const struct tt__User *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__User);
	if (soap_out_tt__User(soap, tag?tag:"tt:User", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__User * SOAP_FMAC4 soap_get_tt__User(struct soap *soap, struct tt__User *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__User(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RemoteUser(struct soap *soap, struct tt__RemoteUser *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Username);
	soap_default_string(soap, &a->Password);
	soap_default_xsd__boolean(soap, &a->UseDerivedPassword);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RemoteUser(struct soap *soap, const struct tt__RemoteUser *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Username);
	soap_serialize_string(soap, &a->Password);
	soap_embedded(soap, &a->UseDerivedPassword, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RemoteUser(struct soap *soap, const char *tag, int id, const struct tt__RemoteUser *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RemoteUser), type))
		return soap->error;
	if (a->Username)
	{	if (soap_out_string(soap, "tt:Username", -1, &a->Username, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Username"))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &a->Password, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:UseDerivedPassword", -1, &a->UseDerivedPassword, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RemoteUser * SOAP_FMAC4 soap_in_tt__RemoteUser(struct soap *soap, const char *tag, struct tt__RemoteUser *a, const char *type)
{
	size_t soap_flag_Username = 1;
	size_t soap_flag_Password = 1;
	size_t soap_flag_UseDerivedPassword = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RemoteUser *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RemoteUser, sizeof(struct tt__RemoteUser), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RemoteUser(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Username && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Username", &a->Username, "xsd:string"))
				{	soap_flag_Username--;
					continue;
				}
			if (soap_flag_Password && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &a->Password, "xsd:string"))
				{	soap_flag_Password--;
					continue;
				}
			if (soap_flag_UseDerivedPassword && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:UseDerivedPassword", &a->UseDerivedPassword, "xsd:boolean"))
				{	soap_flag_UseDerivedPassword--;
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
	{	a = (struct tt__RemoteUser *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RemoteUser, 0, sizeof(struct tt__RemoteUser), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Username > 0 || soap_flag_UseDerivedPassword > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RemoteUser(struct soap *soap, const struct tt__RemoteUser *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RemoteUser);
	if (soap_out_tt__RemoteUser(soap, tag?tag:"tt:RemoteUser", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RemoteUser * SOAP_FMAC4 soap_get_tt__RemoteUser(struct soap *soap, struct tt__RemoteUser *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RemoteUser(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Date(struct soap *soap, struct tt__Date *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->Year);
	soap_default_int(soap, &a->Month);
	soap_default_int(soap, &a->Day);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Date(struct soap *soap, const struct tt__Date *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Year, SOAP_TYPE_int);
	soap_embedded(soap, &a->Month, SOAP_TYPE_int);
	soap_embedded(soap, &a->Day, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Date(struct soap *soap, const char *tag, int id, const struct tt__Date *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Date), type))
		return soap->error;
	if (soap_out_int(soap, "tt:Year", -1, &a->Year, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Month", -1, &a->Month, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Day", -1, &a->Day, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Date * SOAP_FMAC4 soap_in_tt__Date(struct soap *soap, const char *tag, struct tt__Date *a, const char *type)
{
	size_t soap_flag_Year = 1;
	size_t soap_flag_Month = 1;
	size_t soap_flag_Day = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Date *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Date, sizeof(struct tt__Date), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Date(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Year && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Year", &a->Year, "xsd:int"))
				{	soap_flag_Year--;
					continue;
				}
			if (soap_flag_Month && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Month", &a->Month, "xsd:int"))
				{	soap_flag_Month--;
					continue;
				}
			if (soap_flag_Day && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Day", &a->Day, "xsd:int"))
				{	soap_flag_Day--;
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
	{	a = (struct tt__Date *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Date, 0, sizeof(struct tt__Date), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Year > 0 || soap_flag_Month > 0 || soap_flag_Day > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Date(struct soap *soap, const struct tt__Date *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Date);
	if (soap_out_tt__Date(soap, tag?tag:"tt:Date", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Date * SOAP_FMAC4 soap_get_tt__Date(struct soap *soap, struct tt__Date *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Date(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Time(struct soap *soap, struct tt__Time *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->Hour);
	soap_default_int(soap, &a->Minute);
	soap_default_int(soap, &a->Second);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Time(struct soap *soap, const struct tt__Time *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Hour, SOAP_TYPE_int);
	soap_embedded(soap, &a->Minute, SOAP_TYPE_int);
	soap_embedded(soap, &a->Second, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Time(struct soap *soap, const char *tag, int id, const struct tt__Time *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Time), type))
		return soap->error;
	if (soap_out_int(soap, "tt:Hour", -1, &a->Hour, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Minute", -1, &a->Minute, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Second", -1, &a->Second, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Time * SOAP_FMAC4 soap_in_tt__Time(struct soap *soap, const char *tag, struct tt__Time *a, const char *type)
{
	size_t soap_flag_Hour = 1;
	size_t soap_flag_Minute = 1;
	size_t soap_flag_Second = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Time *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Time, sizeof(struct tt__Time), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Time(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Hour && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Hour", &a->Hour, "xsd:int"))
				{	soap_flag_Hour--;
					continue;
				}
			if (soap_flag_Minute && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Minute", &a->Minute, "xsd:int"))
				{	soap_flag_Minute--;
					continue;
				}
			if (soap_flag_Second && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Second", &a->Second, "xsd:int"))
				{	soap_flag_Second--;
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
	{	a = (struct tt__Time *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Time, 0, sizeof(struct tt__Time), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Hour > 0 || soap_flag_Minute > 0 || soap_flag_Second > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Time(struct soap *soap, const struct tt__Time *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Time);
	if (soap_out_tt__Time(soap, tag?tag:"tt:Time", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Time * SOAP_FMAC4 soap_get_tt__Time(struct soap *soap, struct tt__Time *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Time(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemDateTimeExtension(struct soap *soap, struct tt__SystemDateTimeExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemDateTimeExtension(struct soap *soap, const struct tt__SystemDateTimeExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemDateTimeExtension(struct soap *soap, const char *tag, int id, const struct tt__SystemDateTimeExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemDateTimeExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemDateTimeExtension * SOAP_FMAC4 soap_in_tt__SystemDateTimeExtension(struct soap *soap, const char *tag, struct tt__SystemDateTimeExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemDateTimeExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemDateTimeExtension, sizeof(struct tt__SystemDateTimeExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemDateTimeExtension(soap, a);
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
	{	a = (struct tt__SystemDateTimeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemDateTimeExtension, 0, sizeof(struct tt__SystemDateTimeExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemDateTimeExtension(struct soap *soap, const struct tt__SystemDateTimeExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemDateTimeExtension);
	if (soap_out_tt__SystemDateTimeExtension(soap, tag?tag:"tt:SystemDateTimeExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemDateTimeExtension * SOAP_FMAC4 soap_get_tt__SystemDateTimeExtension(struct soap *soap, struct tt__SystemDateTimeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemDateTimeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DateTime(struct soap *soap, struct tt__DateTime *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Time = NULL;
	a->Date = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DateTime(struct soap *soap, const struct tt__DateTime *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Time(soap, &a->Time);
	soap_serialize_PointerTott__Date(soap, &a->Date);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DateTime(struct soap *soap, const char *tag, int id, const struct tt__DateTime *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DateTime), type))
		return soap->error;
	if (a->Time)
	{	if (soap_out_PointerTott__Time(soap, "tt:Time", -1, &a->Time, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Time"))
		return soap->error;
	if (a->Date)
	{	if (soap_out_PointerTott__Date(soap, "tt:Date", -1, &a->Date, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Date"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DateTime * SOAP_FMAC4 soap_in_tt__DateTime(struct soap *soap, const char *tag, struct tt__DateTime *a, const char *type)
{
	size_t soap_flag_Time = 1;
	size_t soap_flag_Date = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DateTime *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DateTime, sizeof(struct tt__DateTime), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DateTime(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Time && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Time(soap, "tt:Time", &a->Time, "tt:Time"))
				{	soap_flag_Time--;
					continue;
				}
			if (soap_flag_Date && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Date(soap, "tt:Date", &a->Date, "tt:Date"))
				{	soap_flag_Date--;
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
	{	a = (struct tt__DateTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DateTime, 0, sizeof(struct tt__DateTime), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Time > 0 || soap_flag_Date > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DateTime(struct soap *soap, const struct tt__DateTime *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DateTime);
	if (soap_out_tt__DateTime(soap, tag?tag:"tt:DateTime", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DateTime * SOAP_FMAC4 soap_get_tt__DateTime(struct soap *soap, struct tt__DateTime *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DateTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TimeZone(struct soap *soap, struct tt__TimeZone *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__token(soap, &a->TZ);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TimeZone(struct soap *soap, const struct tt__TimeZone *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &a->TZ);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TimeZone(struct soap *soap, const char *tag, int id, const struct tt__TimeZone *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TimeZone), type))
		return soap->error;
	if (a->TZ)
	{	if (soap_out_xsd__token(soap, "tt:TZ", -1, &a->TZ, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TZ"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TimeZone * SOAP_FMAC4 soap_in_tt__TimeZone(struct soap *soap, const char *tag, struct tt__TimeZone *a, const char *type)
{
	size_t soap_flag_TZ = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TimeZone *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TimeZone, sizeof(struct tt__TimeZone), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TimeZone(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TZ && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:TZ", &a->TZ, "xsd:token"))
				{	soap_flag_TZ--;
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
	{	a = (struct tt__TimeZone *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TimeZone, 0, sizeof(struct tt__TimeZone), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TZ > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TimeZone(struct soap *soap, const struct tt__TimeZone *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TimeZone);
	if (soap_out_tt__TimeZone(soap, tag?tag:"tt:TimeZone", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TimeZone * SOAP_FMAC4 soap_get_tt__TimeZone(struct soap *soap, struct tt__TimeZone *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TimeZone(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemDateTime(struct soap *soap, struct tt__SystemDateTime *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SetDateTimeType(soap, &a->DateTimeType);
	soap_default_xsd__boolean(soap, &a->DaylightSavings);
	a->TimeZone = NULL;
	a->UTCDateTime = NULL;
	a->LocalDateTime = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemDateTime(struct soap *soap, const struct tt__SystemDateTime *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->DaylightSavings, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__TimeZone(soap, &a->TimeZone);
	soap_serialize_PointerTott__DateTime(soap, &a->UTCDateTime);
	soap_serialize_PointerTott__DateTime(soap, &a->LocalDateTime);
	soap_serialize_PointerTott__SystemDateTimeExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemDateTime(struct soap *soap, const char *tag, int id, const struct tt__SystemDateTime *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemDateTime), type))
		return soap->error;
	if (soap_out_tt__SetDateTimeType(soap, "tt:DateTimeType", -1, &a->DateTimeType, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DaylightSavings", -1, &a->DaylightSavings, ""))
		return soap->error;
	if (soap_out_PointerTott__TimeZone(soap, "tt:TimeZone", -1, &a->TimeZone, ""))
		return soap->error;
	if (soap_out_PointerTott__DateTime(soap, "tt:UTCDateTime", -1, &a->UTCDateTime, ""))
		return soap->error;
	if (soap_out_PointerTott__DateTime(soap, "tt:LocalDateTime", -1, &a->LocalDateTime, ""))
		return soap->error;
	if (soap_out_PointerTott__SystemDateTimeExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemDateTime * SOAP_FMAC4 soap_in_tt__SystemDateTime(struct soap *soap, const char *tag, struct tt__SystemDateTime *a, const char *type)
{
	size_t soap_flag_DateTimeType = 1;
	size_t soap_flag_DaylightSavings = 1;
	size_t soap_flag_TimeZone = 1;
	size_t soap_flag_UTCDateTime = 1;
	size_t soap_flag_LocalDateTime = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemDateTime *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemDateTime, sizeof(struct tt__SystemDateTime), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemDateTime(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DateTimeType && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SetDateTimeType(soap, "tt:DateTimeType", &a->DateTimeType, "tt:SetDateTimeType"))
				{	soap_flag_DateTimeType--;
					continue;
				}
			if (soap_flag_DaylightSavings && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DaylightSavings", &a->DaylightSavings, "xsd:boolean"))
				{	soap_flag_DaylightSavings--;
					continue;
				}
			if (soap_flag_TimeZone && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TimeZone(soap, "tt:TimeZone", &a->TimeZone, "tt:TimeZone"))
				{	soap_flag_TimeZone--;
					continue;
				}
			if (soap_flag_UTCDateTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTime(soap, "tt:UTCDateTime", &a->UTCDateTime, "tt:DateTime"))
				{	soap_flag_UTCDateTime--;
					continue;
				}
			if (soap_flag_LocalDateTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTime(soap, "tt:LocalDateTime", &a->LocalDateTime, "tt:DateTime"))
				{	soap_flag_LocalDateTime--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemDateTimeExtension(soap, "tt:Extension", &a->Extension, "tt:SystemDateTimeExtension"))
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
	{	a = (struct tt__SystemDateTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemDateTime, 0, sizeof(struct tt__SystemDateTime), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DateTimeType > 0 || soap_flag_DaylightSavings > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemDateTime(struct soap *soap, const struct tt__SystemDateTime *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemDateTime);
	if (soap_out_tt__SystemDateTime(soap, tag?tag:"tt:SystemDateTime", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemDateTime * SOAP_FMAC4 soap_get_tt__SystemDateTime(struct soap *soap, struct tt__SystemDateTime *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemDateTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemLogUri(struct soap *soap, struct tt__SystemLogUri *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SystemLogType(soap, &a->Type);
	soap_default_xsd__anyURI(soap, &a->Uri);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemLogUri(struct soap *soap, const struct tt__SystemLogUri *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->Uri);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogUri(struct soap *soap, const char *tag, int id, const struct tt__SystemLogUri *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLogUri), type))
		return soap->error;
	if (soap_out_tt__SystemLogType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (a->Uri)
	{	if (soap_out_xsd__anyURI(soap, "tt:Uri", -1, &a->Uri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Uri"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemLogUri * SOAP_FMAC4 soap_in_tt__SystemLogUri(struct soap *soap, const char *tag, struct tt__SystemLogUri *a, const char *type)
{
	size_t soap_flag_Type = 1;
	size_t soap_flag_Uri = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemLogUri *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogUri, sizeof(struct tt__SystemLogUri), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemLogUri(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SystemLogType(soap, "tt:Type", &a->Type, "tt:SystemLogType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap_flag_Uri && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Uri", &a->Uri, "xsd:anyURI"))
				{	soap_flag_Uri--;
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
	{	a = (struct tt__SystemLogUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLogUri, 0, sizeof(struct tt__SystemLogUri), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0 || soap_flag_Uri > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemLogUri(struct soap *soap, const struct tt__SystemLogUri *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemLogUri);
	if (soap_out_tt__SystemLogUri(soap, tag?tag:"tt:SystemLogUri", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemLogUri * SOAP_FMAC4 soap_get_tt__SystemLogUri(struct soap *soap, struct tt__SystemLogUri *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemLogUriList(struct soap *soap, struct tt__SystemLogUriList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeSystemLog = 0;
	a->SystemLog = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemLogUriList(struct soap *soap, const struct tt__SystemLogUriList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->SystemLog)
	{	int i;
		for (i = 0; i < a->__sizeSystemLog; i++)
		{
			soap_embedded(soap, a->SystemLog + i, SOAP_TYPE_tt__SystemLogUri);
			soap_serialize_tt__SystemLogUri(soap, a->SystemLog + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogUriList(struct soap *soap, const char *tag, int id, const struct tt__SystemLogUriList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLogUriList), type))
		return soap->error;
	if (a->SystemLog)
	{	int i;
		for (i = 0; i < a->__sizeSystemLog; i++)
			if (soap_out_tt__SystemLogUri(soap, "tt:SystemLog", -1, a->SystemLog + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemLogUriList * SOAP_FMAC4 soap_in_tt__SystemLogUriList(struct soap *soap, const char *tag, struct tt__SystemLogUriList *a, const char *type)
{
	struct soap_blist *soap_blist_SystemLog = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemLogUriList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogUriList, sizeof(struct tt__SystemLogUriList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemLogUriList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SystemLog", 1, NULL))
			{	if (a->SystemLog == NULL)
				{	if (soap_blist_SystemLog == NULL)
						soap_blist_SystemLog = soap_new_block(soap);
					a->SystemLog = (struct tt__SystemLogUri *)soap_push_block(soap, soap_blist_SystemLog, sizeof(struct tt__SystemLogUri));
					if (a->SystemLog == NULL)
						return NULL;
					soap_default_tt__SystemLogUri(soap, a->SystemLog);
				}
				soap_revert(soap);
				if (soap_in_tt__SystemLogUri(soap, "tt:SystemLog", a->SystemLog, "tt:SystemLogUri"))
				{	a->__sizeSystemLog++;
					a->SystemLog = NULL;
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
		if (a->SystemLog)
			soap_pop_block(soap, soap_blist_SystemLog);
		if (a->__sizeSystemLog)
			a->SystemLog = (struct tt__SystemLogUri *)soap_save_block(soap, soap_blist_SystemLog, NULL, 1);
		else
		{	a->SystemLog = NULL;
			if (soap_blist_SystemLog)
				soap_end_block(soap, soap_blist_SystemLog);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SystemLogUriList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLogUriList, 0, sizeof(struct tt__SystemLogUriList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemLogUriList(struct soap *soap, const struct tt__SystemLogUriList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemLogUriList);
	if (soap_out_tt__SystemLogUriList(soap, tag?tag:"tt:SystemLogUriList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemLogUriList * SOAP_FMAC4 soap_get_tt__SystemLogUriList(struct soap *soap, struct tt__SystemLogUriList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogUriList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BackupFile(struct soap *soap, struct tt__BackupFile *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	a->Data = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BackupFile(struct soap *soap, const struct tt__BackupFile *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Name);
	soap_serialize_PointerTott__AttachmentData(soap, &a->Data);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BackupFile(struct soap *soap, const char *tag, int id, const struct tt__BackupFile *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BackupFile), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_string(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->Data)
	{	if (soap_out_PointerTott__AttachmentData(soap, "tt:Data", -1, &a->Data, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Data"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BackupFile * SOAP_FMAC4 soap_in_tt__BackupFile(struct soap *soap, const char *tag, struct tt__BackupFile *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_Data = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BackupFile *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BackupFile, sizeof(struct tt__BackupFile), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BackupFile(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &a->Name, "xsd:string"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_Data && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Data", &a->Data, "tt:AttachmentData"))
				{	soap_flag_Data--;
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
	{	a = (struct tt__BackupFile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BackupFile, 0, sizeof(struct tt__BackupFile), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_Data > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BackupFile(struct soap *soap, const struct tt__BackupFile *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BackupFile);
	if (soap_out_tt__BackupFile(soap, tag?tag:"tt:BackupFile", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BackupFile * SOAP_FMAC4 soap_get_tt__BackupFile(struct soap *soap, struct tt__BackupFile *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BackupFile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BinaryData(struct soap *soap, struct tt__BinaryData *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__base64Binary(soap, &a->Data);
	soap_default_string(soap, &a->xmime__contentType);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BinaryData(struct soap *soap, const struct tt__BinaryData *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Data, SOAP_TYPE_xsd__base64Binary);
	soap_serialize_xsd__base64Binary(soap, &a->Data);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BinaryData(struct soap *soap, const char *tag, int id, const struct tt__BinaryData *a, const char *type)
{
	if (a->xmime__contentType)
		soap_set_attr(soap, "xmime:contentType", a->xmime__contentType, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BinaryData), type))
		return soap->error;
	if (soap_out_xsd__base64Binary(soap, "tt:Data", -1, &a->Data, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BinaryData * SOAP_FMAC4 soap_in_tt__BinaryData(struct soap *soap, const char *tag, struct tt__BinaryData *a, const char *type)
{
	size_t soap_flag_Data = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BinaryData *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BinaryData, sizeof(struct tt__BinaryData), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BinaryData(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "xmime:contentType", 0), &a->xmime__contentType, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Data && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__base64Binary(soap, "tt:Data", &a->Data, "xsd:base64Binary"))
				{	soap_flag_Data--;
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
	{	a = (struct tt__BinaryData *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BinaryData, 0, sizeof(struct tt__BinaryData), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Data > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BinaryData(struct soap *soap, const struct tt__BinaryData *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BinaryData);
	if (soap_out_tt__BinaryData(soap, tag?tag:"tt:BinaryData", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BinaryData * SOAP_FMAC4 soap_get_tt__BinaryData(struct soap *soap, struct tt__BinaryData *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BinaryData(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SupportInformation(struct soap *soap, struct tt__SupportInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Binary = NULL;
	soap_default_string(soap, &a->String);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SupportInformation(struct soap *soap, const struct tt__SupportInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AttachmentData(soap, &a->Binary);
	soap_serialize_string(soap, &a->String);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportInformation(struct soap *soap, const char *tag, int id, const struct tt__SupportInformation *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportInformation), type))
		return soap->error;
	if (soap_out_PointerTott__AttachmentData(soap, "tt:Binary", -1, &a->Binary, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:String", -1, &a->String, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SupportInformation * SOAP_FMAC4 soap_in_tt__SupportInformation(struct soap *soap, const char *tag, struct tt__SupportInformation *a, const char *type)
{
	size_t soap_flag_Binary = 1;
	size_t soap_flag_String = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SupportInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportInformation, sizeof(struct tt__SupportInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SupportInformation(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Binary && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Binary", &a->Binary, "tt:AttachmentData"))
				{	soap_flag_Binary--;
					continue;
				}
			if (soap_flag_String && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:String", &a->String, "xsd:string"))
				{	soap_flag_String--;
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
	{	a = (struct tt__SupportInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportInformation, 0, sizeof(struct tt__SupportInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SupportInformation(struct soap *soap, const struct tt__SupportInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SupportInformation);
	if (soap_out_tt__SupportInformation(soap, tag?tag:"tt:SupportInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SupportInformation * SOAP_FMAC4 soap_get_tt__SupportInformation(struct soap *soap, struct tt__SupportInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AttachmentData(struct soap *soap, struct tt__AttachmentData *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default__xop__Include(soap, &a->xop__Include);
	soap_default_string(soap, &a->xmime__contentType);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AttachmentData(struct soap *soap, const struct tt__AttachmentData *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__xop__Include(soap, &a->xop__Include);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AttachmentData(struct soap *soap, const char *tag, int id, const struct tt__AttachmentData *a, const char *type)
{
	if (a->xmime__contentType)
		soap_set_attr(soap, "xmime:contentType", a->xmime__contentType, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AttachmentData), type))
		return soap->error;
	if (soap_out__xop__Include(soap, "xop:Include", -1, &a->xop__Include, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AttachmentData * SOAP_FMAC4 soap_in_tt__AttachmentData(struct soap *soap, const char *tag, struct tt__AttachmentData *a, const char *type)
{
	size_t soap_flag_xop__Include = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AttachmentData *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AttachmentData, sizeof(struct tt__AttachmentData), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AttachmentData(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "xmime:contentType", 0), &a->xmime__contentType, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_xop__Include && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__xop__Include(soap, "xop:Include", &a->xop__Include, ""))
				{	soap_flag_xop__Include--;
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
	{	a = (struct tt__AttachmentData *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AttachmentData, 0, sizeof(struct tt__AttachmentData), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_xop__Include > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AttachmentData(struct soap *soap, const struct tt__AttachmentData *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AttachmentData);
	if (soap_out_tt__AttachmentData(soap, tag?tag:"tt:AttachmentData", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AttachmentData * SOAP_FMAC4 soap_get_tt__AttachmentData(struct soap *soap, struct tt__AttachmentData *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AttachmentData(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemLog(struct soap *soap, struct tt__SystemLog *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Binary = NULL;
	soap_default_string(soap, &a->String);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemLog(struct soap *soap, const struct tt__SystemLog *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AttachmentData(soap, &a->Binary);
	soap_serialize_string(soap, &a->String);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLog(struct soap *soap, const char *tag, int id, const struct tt__SystemLog *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLog), type))
		return soap->error;
	if (soap_out_PointerTott__AttachmentData(soap, "tt:Binary", -1, &a->Binary, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:String", -1, &a->String, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemLog * SOAP_FMAC4 soap_in_tt__SystemLog(struct soap *soap, const char *tag, struct tt__SystemLog *a, const char *type)
{
	size_t soap_flag_Binary = 1;
	size_t soap_flag_String = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemLog *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLog, sizeof(struct tt__SystemLog), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemLog(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Binary && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Binary", &a->Binary, "tt:AttachmentData"))
				{	soap_flag_Binary--;
					continue;
				}
			if (soap_flag_String && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:String", &a->String, "xsd:string"))
				{	soap_flag_String--;
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
	{	a = (struct tt__SystemLog *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLog, 0, sizeof(struct tt__SystemLog), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemLog(struct soap *soap, const struct tt__SystemLog *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemLog);
	if (soap_out_tt__SystemLog(soap, tag?tag:"tt:SystemLog", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemLog * SOAP_FMAC4 soap_get_tt__SystemLog(struct soap *soap, struct tt__SystemLog *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLog(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsDeviceExtension(struct soap *soap, struct tt__AnalyticsDeviceExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsDeviceExtension(struct soap *soap, const struct tt__AnalyticsDeviceExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceExtension(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsDeviceExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceExtension * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceExtension(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsDeviceExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceExtension, sizeof(struct tt__AnalyticsDeviceExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsDeviceExtension(soap, a);
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
	{	a = (struct tt__AnalyticsDeviceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceExtension, 0, sizeof(struct tt__AnalyticsDeviceExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsDeviceExtension(struct soap *soap, const struct tt__AnalyticsDeviceExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceExtension);
	if (soap_out_tt__AnalyticsDeviceExtension(soap, tag?tag:"tt:AnalyticsDeviceExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceExtension * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceExtension(struct soap *soap, struct tt__AnalyticsDeviceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilitiesExtension2(struct soap *soap, const struct tt__SystemCapabilitiesExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilitiesExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2, sizeof(struct tt__SystemCapabilitiesExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemCapabilitiesExtension2(soap, a);
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
	{	a = (struct tt__SystemCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension2, 0, sizeof(struct tt__SystemCapabilitiesExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilitiesExtension2(struct soap *soap, const struct tt__SystemCapabilitiesExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension2);
	if (soap_out_tt__SystemCapabilitiesExtension2(soap, tag?tag:"tt:SystemCapabilitiesExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->HttpFirmwareUpgrade = NULL;
	a->HttpSystemBackup = NULL;
	a->HttpSystemLogging = NULL;
	a->HttpSupportInformation = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilitiesExtension(struct soap *soap, const struct tt__SystemCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->HttpFirmwareUpgrade);
	soap_serialize_PointerToxsd__boolean(soap, &a->HttpSystemBackup);
	soap_serialize_PointerToxsd__boolean(soap, &a->HttpSystemLogging);
	soap_serialize_PointerToxsd__boolean(soap, &a->HttpSupportInformation);
	soap_serialize_PointerTott__SystemCapabilitiesExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:HttpFirmwareUpgrade", -1, &a->HttpFirmwareUpgrade, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSystemBackup", -1, &a->HttpSystemBackup, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSystemLogging", -1, &a->HttpSystemLogging, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSupportInformation", -1, &a->HttpSupportInformation, ""))
		return soap->error;
	if (soap_out_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_HttpFirmwareUpgrade = 1;
	size_t soap_flag_HttpSystemBackup = 1;
	size_t soap_flag_HttpSystemLogging = 1;
	size_t soap_flag_HttpSupportInformation = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension, sizeof(struct tt__SystemCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemCapabilitiesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_HttpFirmwareUpgrade && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:HttpFirmwareUpgrade", &a->HttpFirmwareUpgrade, "xsd:boolean"))
				{	soap_flag_HttpFirmwareUpgrade--;
					continue;
				}
			if (soap_flag_HttpSystemBackup && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSystemBackup", &a->HttpSystemBackup, "xsd:boolean"))
				{	soap_flag_HttpSystemBackup--;
					continue;
				}
			if (soap_flag_HttpSystemLogging && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSystemLogging", &a->HttpSystemLogging, "xsd:boolean"))
				{	soap_flag_HttpSystemLogging--;
					continue;
				}
			if (soap_flag_HttpSupportInformation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSupportInformation", &a->HttpSupportInformation, "xsd:boolean"))
				{	soap_flag_HttpSupportInformation--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:SystemCapabilitiesExtension2"))
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
	{	a = (struct tt__SystemCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension, 0, sizeof(struct tt__SystemCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilitiesExtension(struct soap *soap, const struct tt__SystemCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension);
	if (soap_out_tt__SystemCapabilitiesExtension(soap, tag?tag:"tt:SystemCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__OnvifVersion(struct soap *soap, struct tt__OnvifVersion *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->Major);
	soap_default_int(soap, &a->Minor);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__OnvifVersion(struct soap *soap, const struct tt__OnvifVersion *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Major, SOAP_TYPE_int);
	soap_embedded(soap, &a->Minor, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__OnvifVersion(struct soap *soap, const char *tag, int id, const struct tt__OnvifVersion *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__OnvifVersion), type))
		return soap->error;
	if (soap_out_int(soap, "tt:Major", -1, &a->Major, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Minor", -1, &a->Minor, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__OnvifVersion * SOAP_FMAC4 soap_in_tt__OnvifVersion(struct soap *soap, const char *tag, struct tt__OnvifVersion *a, const char *type)
{
	size_t soap_flag_Major = 1;
	size_t soap_flag_Minor = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__OnvifVersion *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__OnvifVersion, sizeof(struct tt__OnvifVersion), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__OnvifVersion(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Major && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Major", &a->Major, "xsd:int"))
				{	soap_flag_Major--;
					continue;
				}
			if (soap_flag_Minor && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Minor", &a->Minor, "xsd:int"))
				{	soap_flag_Minor--;
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
	{	a = (struct tt__OnvifVersion *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__OnvifVersion, 0, sizeof(struct tt__OnvifVersion), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Major > 0 || soap_flag_Minor > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__OnvifVersion(struct soap *soap, const struct tt__OnvifVersion *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__OnvifVersion);
	if (soap_out_tt__OnvifVersion(soap, tag?tag:"tt:OnvifVersion", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__OnvifVersion * SOAP_FMAC4 soap_get_tt__OnvifVersion(struct soap *soap, struct tt__OnvifVersion *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__OnvifVersion(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->Dot1X);
	a->__sizeSupportedEAPMethod = 0;
	a->SupportedEAPMethod = NULL;
	soap_default_xsd__boolean(soap, &a->RemoteUserHandling);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilitiesExtension2(struct soap *soap, const struct tt__SecurityCapabilitiesExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Dot1X, SOAP_TYPE_xsd__boolean);
	if (a->SupportedEAPMethod)
	{	int i;
		for (i = 0; i < a->__sizeSupportedEAPMethod; i++)
		{
			soap_embedded(soap, a->SupportedEAPMethod + i, SOAP_TYPE_int);
		}
	}
	soap_embedded(soap, &a->RemoteUserHandling, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Dot1X", -1, &a->Dot1X, ""))
		return soap->error;
	if (a->SupportedEAPMethod)
	{	int i;
		for (i = 0; i < a->__sizeSupportedEAPMethod; i++)
			if (soap_out_int(soap, "tt:SupportedEAPMethod", -1, a->SupportedEAPMethod + i, ""))
				return soap->error;
	}
	if (soap_out_xsd__boolean(soap, "tt:RemoteUserHandling", -1, &a->RemoteUserHandling, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
	size_t soap_flag_Dot1X = 1;
	struct soap_blist *soap_blist_SupportedEAPMethod = NULL;
	size_t soap_flag_RemoteUserHandling = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SecurityCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, sizeof(struct tt__SecurityCapabilitiesExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SecurityCapabilitiesExtension2(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Dot1X && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Dot1X", &a->Dot1X, "xsd:boolean"))
				{	soap_flag_Dot1X--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedEAPMethod", 1, NULL))
			{	if (a->SupportedEAPMethod == NULL)
				{	if (soap_blist_SupportedEAPMethod == NULL)
						soap_blist_SupportedEAPMethod = soap_new_block(soap);
					a->SupportedEAPMethod = (int *)soap_push_block(soap, soap_blist_SupportedEAPMethod, sizeof(int));
					if (a->SupportedEAPMethod == NULL)
						return NULL;
					soap_default_int(soap, a->SupportedEAPMethod);
				}
				soap_revert(soap);
				if (soap_in_int(soap, "tt:SupportedEAPMethod", a->SupportedEAPMethod, "xsd:int"))
				{	a->__sizeSupportedEAPMethod++;
					a->SupportedEAPMethod = NULL;
					continue;
				}
			}
			if (soap_flag_RemoteUserHandling && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RemoteUserHandling", &a->RemoteUserHandling, "xsd:boolean"))
				{	soap_flag_RemoteUserHandling--;
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
		if (a->SupportedEAPMethod)
			soap_pop_block(soap, soap_blist_SupportedEAPMethod);
		if (a->__sizeSupportedEAPMethod)
			a->SupportedEAPMethod = (int *)soap_save_block(soap, soap_blist_SupportedEAPMethod, NULL, 1);
		else
		{	a->SupportedEAPMethod = NULL;
			if (soap_blist_SupportedEAPMethod)
				soap_end_block(soap, soap_blist_SupportedEAPMethod);
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
	{	a = (struct tt__SecurityCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, 0, sizeof(struct tt__SecurityCapabilitiesExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Dot1X > 0 || soap_flag_RemoteUserHandling > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilitiesExtension2(struct soap *soap, const struct tt__SecurityCapabilitiesExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension2);
	if (soap_out_tt__SecurityCapabilitiesExtension2(soap, tag?tag:"tt:SecurityCapabilitiesExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->TLS1_x002e0);
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilitiesExtension(struct soap *soap, const struct tt__SecurityCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->TLS1_x002e0, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__SecurityCapabilitiesExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:TLS1.0", -1, &a->TLS1_x002e0, ""))
		return soap->error;
	if (soap_out_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension *a, const char *type)
{
	size_t soap_flag_TLS1_x002e0 = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SecurityCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension, sizeof(struct tt__SecurityCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SecurityCapabilitiesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TLS1_x002e0 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:TLS1.0", &a->TLS1_x002e0, "xsd:boolean"))
				{	soap_flag_TLS1_x002e0--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:SecurityCapabilitiesExtension2"))
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
	{	a = (struct tt__SecurityCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension, 0, sizeof(struct tt__SecurityCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e0 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilitiesExtension(struct soap *soap, const struct tt__SecurityCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension);
	if (soap_out_tt__SecurityCapabilitiesExtension(soap, tag?tag:"tt:SecurityCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilitiesExtension2(struct soap *soap, const struct tt__NetworkCapabilitiesExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, sizeof(struct tt__NetworkCapabilitiesExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkCapabilitiesExtension2(soap, a);
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
	{	a = (struct tt__NetworkCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, 0, sizeof(struct tt__NetworkCapabilitiesExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilitiesExtension2(struct soap *soap, const struct tt__NetworkCapabilitiesExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension2);
	if (soap_out_tt__NetworkCapabilitiesExtension2(soap, tag?tag:"tt:NetworkCapabilitiesExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->Dot11Configuration = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilitiesExtension(struct soap *soap, const struct tt__NetworkCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->Dot11Configuration);
	soap_serialize_PointerTott__NetworkCapabilitiesExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:Dot11Configuration", -1, &a->Dot11Configuration, ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Dot11Configuration = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension, sizeof(struct tt__NetworkCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkCapabilitiesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Dot11Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Dot11Configuration", &a->Dot11Configuration, "xsd:boolean"))
				{	soap_flag_Dot11Configuration--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:NetworkCapabilitiesExtension2"))
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
	{	a = (struct tt__NetworkCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension, 0, sizeof(struct tt__NetworkCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilitiesExtension(struct soap *soap, const struct tt__NetworkCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension);
	if (soap_out_tt__NetworkCapabilitiesExtension(soap, tag?tag:"tt:NetworkCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const struct tt__RealTimeStreamingCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RealTimeStreamingCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RealTimeStreamingCapabilitiesExtension(soap, a);
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
	{	a = (struct tt__RealTimeStreamingCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, 0, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension);
	if (soap_out_tt__RealTimeStreamingCapabilitiesExtension(soap, tag?tag:"tt:RealTimeStreamingCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->MaximumNumberOfProfiles);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ProfileCapabilities(struct soap *soap, const struct tt__ProfileCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->MaximumNumberOfProfiles, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ProfileCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ProfileCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ProfileCapabilities), type))
		return soap->error;
	if (soap_out_int(soap, "tt:MaximumNumberOfProfiles", -1, &a->MaximumNumberOfProfiles, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ProfileCapabilities * SOAP_FMAC4 soap_in_tt__ProfileCapabilities(struct soap *soap, const char *tag, struct tt__ProfileCapabilities *a, const char *type)
{
	size_t soap_flag_MaximumNumberOfProfiles = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ProfileCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ProfileCapabilities, sizeof(struct tt__ProfileCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ProfileCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MaximumNumberOfProfiles && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumNumberOfProfiles", &a->MaximumNumberOfProfiles, "xsd:int"))
				{	soap_flag_MaximumNumberOfProfiles--;
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
	{	a = (struct tt__ProfileCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ProfileCapabilities, 0, sizeof(struct tt__ProfileCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MaximumNumberOfProfiles > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ProfileCapabilities(struct soap *soap, const struct tt__ProfileCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ProfileCapabilities);
	if (soap_out_tt__ProfileCapabilities(soap, tag?tag:"tt:ProfileCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ProfileCapabilities * SOAP_FMAC4 soap_get_tt__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ProfileCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->ProfileCapabilities = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaCapabilitiesExtension(struct soap *soap, const struct tt__MediaCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ProfileCapabilities(soap, &a->ProfileCapabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__MediaCapabilitiesExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension), type))
		return soap->error;
	if (a->ProfileCapabilities)
	{	if (soap_out_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", -1, &a->ProfileCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ProfileCapabilities"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__MediaCapabilitiesExtension *a, const char *type)
{
	size_t soap_flag_ProfileCapabilities = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MediaCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension, sizeof(struct tt__MediaCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MediaCapabilitiesExtension(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileCapabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", &a->ProfileCapabilities, "tt:ProfileCapabilities"))
				{	soap_flag_ProfileCapabilities--;
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
	{	a = (struct tt__MediaCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilitiesExtension, 0, sizeof(struct tt__MediaCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileCapabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaCapabilitiesExtension(struct soap *soap, const struct tt__MediaCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilitiesExtension);
	if (soap_out_tt__MediaCapabilitiesExtension(soap, tag?tag:"tt:MediaCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->RTPMulticast = NULL;
	a->RTP_USCORETCP = NULL;
	a->RTP_USCORERTSP_USCORETCP = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RealTimeStreamingCapabilities(struct soap *soap, const struct tt__RealTimeStreamingCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->RTPMulticast);
	soap_serialize_PointerToxsd__boolean(soap, &a->RTP_USCORETCP);
	soap_serialize_PointerToxsd__boolean(soap, &a->RTP_USCORERTSP_USCORETCP);
	soap_serialize_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__RealTimeStreamingCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:RTPMulticast", -1, &a->RTPMulticast, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:RTP_TCP", -1, &a->RTP_USCORETCP, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:RTP_RTSP_TCP", -1, &a->RTP_USCORERTSP_USCORETCP, ""))
		return soap->error;
	if (soap_out_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilities *a, const char *type)
{
	size_t soap_flag_RTPMulticast = 1;
	size_t soap_flag_RTP_USCORETCP = 1;
	size_t soap_flag_RTP_USCORERTSP_USCORETCP = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RealTimeStreamingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities, sizeof(struct tt__RealTimeStreamingCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RealTimeStreamingCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RTPMulticast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:RTPMulticast", &a->RTPMulticast, "xsd:boolean"))
				{	soap_flag_RTPMulticast--;
					continue;
				}
			if (soap_flag_RTP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:RTP_TCP", &a->RTP_USCORETCP, "xsd:boolean"))
				{	soap_flag_RTP_USCORETCP--;
					continue;
				}
			if (soap_flag_RTP_USCORERTSP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:RTP_RTSP_TCP", &a->RTP_USCORERTSP_USCORETCP, "xsd:boolean"))
				{	soap_flag_RTP_USCORERTSP_USCORETCP--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:RealTimeStreamingCapabilitiesExtension"))
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
	{	a = (struct tt__RealTimeStreamingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilities, 0, sizeof(struct tt__RealTimeStreamingCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RealTimeStreamingCapabilities(struct soap *soap, const struct tt__RealTimeStreamingCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilities);
	if (soap_out_tt__RealTimeStreamingCapabilities(soap, tag?tag:"tt:RealTimeStreamingCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RealTimeStreamingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilitiesExtension2(struct soap *soap, const struct tt__IOCapabilitiesExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilitiesExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IOCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2, sizeof(struct tt__IOCapabilitiesExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IOCapabilitiesExtension2(soap, a);
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
	{	a = (struct tt__IOCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension2, 0, sizeof(struct tt__IOCapabilitiesExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilitiesExtension2(struct soap *soap, const struct tt__IOCapabilitiesExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension2);
	if (soap_out_tt__IOCapabilitiesExtension2(soap, tag?tag:"tt:IOCapabilitiesExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->Auxiliary = NULL;
	a->__sizeAuxiliaryCommands = 0;
	a->AuxiliaryCommands = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilitiesExtension(struct soap *soap, const struct tt__IOCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->Auxiliary);
	if (a->AuxiliaryCommands)
	{	int i;
		for (i = 0; i < a->__sizeAuxiliaryCommands; i++)
		{
			soap_serialize_tt__AuxiliaryData(soap, a->AuxiliaryCommands + i);
		}
	}
	soap_serialize_PointerTott__IOCapabilitiesExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilitiesExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "tt:Auxiliary", -1, &a->Auxiliary, ""))
		return soap->error;
	if (a->AuxiliaryCommands)
	{	int i;
		for (i = 0; i < a->__sizeAuxiliaryCommands; i++)
			if (soap_out_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", -1, a->AuxiliaryCommands + i, ""))
				return soap->error;
	}
	if (a->Extension)
	{	if (soap_out_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Extension"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Auxiliary = 1;
	struct soap_blist *soap_blist_AuxiliaryCommands = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IOCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension, sizeof(struct tt__IOCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IOCapabilitiesExtension(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Auxiliary && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:Auxiliary", &a->Auxiliary, "xsd:boolean"))
				{	soap_flag_Auxiliary--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuxiliaryCommands", 1, NULL))
			{	if (a->AuxiliaryCommands == NULL)
				{	if (soap_blist_AuxiliaryCommands == NULL)
						soap_blist_AuxiliaryCommands = soap_new_block(soap);
					a->AuxiliaryCommands = (char **)soap_push_block(soap, soap_blist_AuxiliaryCommands, sizeof(char *));
					if (a->AuxiliaryCommands == NULL)
						return NULL;
					*a->AuxiliaryCommands = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", a->AuxiliaryCommands, "tt:AuxiliaryData"))
				{	a->__sizeAuxiliaryCommands++;
					a->AuxiliaryCommands = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:IOCapabilitiesExtension2"))
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
		if (a->AuxiliaryCommands)
			soap_pop_block(soap, soap_blist_AuxiliaryCommands);
		if (a->__sizeAuxiliaryCommands)
			a->AuxiliaryCommands = (char **)soap_save_block(soap, soap_blist_AuxiliaryCommands, NULL, 1);
		else
		{	a->AuxiliaryCommands = NULL;
			if (soap_blist_AuxiliaryCommands)
				soap_end_block(soap, soap_blist_AuxiliaryCommands);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IOCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension, 0, sizeof(struct tt__IOCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Extension > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilitiesExtension(struct soap *soap, const struct tt__IOCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension);
	if (soap_out_tt__IOCapabilitiesExtension(soap, tag?tag:"tt:IOCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceCapabilitiesExtension(struct soap *soap, const struct tt__DeviceCapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__DeviceCapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__DeviceCapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DeviceCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension, sizeof(struct tt__DeviceCapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DeviceCapabilitiesExtension(soap, a);
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
	{	a = (struct tt__DeviceCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilitiesExtension, 0, sizeof(struct tt__DeviceCapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceCapabilitiesExtension(struct soap *soap, const struct tt__DeviceCapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilitiesExtension);
	if (soap_out_tt__DeviceCapabilitiesExtension(soap, tag?tag:"tt:DeviceCapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->TLS1_x002e1);
	soap_default_xsd__boolean(soap, &a->TLS1_x002e2);
	soap_default_xsd__boolean(soap, &a->OnboardKeyGeneration);
	soap_default_xsd__boolean(soap, &a->AccessPolicyConfig);
	soap_default_xsd__boolean(soap, &a->X_x002e509Token);
	soap_default_xsd__boolean(soap, &a->SAMLToken);
	soap_default_xsd__boolean(soap, &a->KerberosToken);
	soap_default_xsd__boolean(soap, &a->RELToken);
	a->__size = 0;
	a->__any = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilities(struct soap *soap, const struct tt__SecurityCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->TLS1_x002e1, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->TLS1_x002e2, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->OnboardKeyGeneration, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->AccessPolicyConfig, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->X_x002e509Token, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->SAMLToken, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->KerberosToken, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->RELToken, SOAP_TYPE_xsd__boolean);
	soap_serialize_PointerTott__SecurityCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilities), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:TLS1.1", -1, &a->TLS1_x002e1, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:TLS1.2", -1, &a->TLS1_x002e2, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:OnboardKeyGeneration", -1, &a->OnboardKeyGeneration, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AccessPolicyConfig", -1, &a->AccessPolicyConfig, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:X.509Token", -1, &a->X_x002e509Token, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:SAMLToken", -1, &a->SAMLToken, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:KerberosToken", -1, &a->KerberosToken, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RELToken", -1, &a->RELToken, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilities * SOAP_FMAC4 soap_in_tt__SecurityCapabilities(struct soap *soap, const char *tag, struct tt__SecurityCapabilities *a, const char *type)
{
	size_t soap_flag_TLS1_x002e1 = 1;
	size_t soap_flag_TLS1_x002e2 = 1;
	size_t soap_flag_OnboardKeyGeneration = 1;
	size_t soap_flag_AccessPolicyConfig = 1;
	size_t soap_flag_X_x002e509Token = 1;
	size_t soap_flag_SAMLToken = 1;
	size_t soap_flag_KerberosToken = 1;
	size_t soap_flag_RELToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SecurityCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilities, sizeof(struct tt__SecurityCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SecurityCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TLS1_x002e1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:TLS1.1", &a->TLS1_x002e1, "xsd:boolean"))
				{	soap_flag_TLS1_x002e1--;
					continue;
				}
			if (soap_flag_TLS1_x002e2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:TLS1.2", &a->TLS1_x002e2, "xsd:boolean"))
				{	soap_flag_TLS1_x002e2--;
					continue;
				}
			if (soap_flag_OnboardKeyGeneration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:OnboardKeyGeneration", &a->OnboardKeyGeneration, "xsd:boolean"))
				{	soap_flag_OnboardKeyGeneration--;
					continue;
				}
			if (soap_flag_AccessPolicyConfig && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AccessPolicyConfig", &a->AccessPolicyConfig, "xsd:boolean"))
				{	soap_flag_AccessPolicyConfig--;
					continue;
				}
			if (soap_flag_X_x002e509Token && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:X.509Token", &a->X_x002e509Token, "xsd:boolean"))
				{	soap_flag_X_x002e509Token--;
					continue;
				}
			if (soap_flag_SAMLToken && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:SAMLToken", &a->SAMLToken, "xsd:boolean"))
				{	soap_flag_SAMLToken--;
					continue;
				}
			if (soap_flag_KerberosToken && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:KerberosToken", &a->KerberosToken, "xsd:boolean"))
				{	soap_flag_KerberosToken--;
					continue;
				}
			if (soap_flag_RELToken && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RELToken", &a->RELToken, "xsd:boolean"))
				{	soap_flag_RELToken--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:SecurityCapabilitiesExtension"))
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
	{	a = (struct tt__SecurityCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilities, 0, sizeof(struct tt__SecurityCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e1 > 0 || soap_flag_TLS1_x002e2 > 0 || soap_flag_OnboardKeyGeneration > 0 || soap_flag_AccessPolicyConfig > 0 || soap_flag_X_x002e509Token > 0 || soap_flag_SAMLToken > 0 || soap_flag_KerberosToken > 0 || soap_flag_RELToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilities(struct soap *soap, const struct tt__SecurityCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilities);
	if (soap_out_tt__SecurityCapabilities(soap, tag?tag:"tt:SecurityCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilities * SOAP_FMAC4 soap_get_tt__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->InputConnectors = NULL;
	a->RelayOutputs = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilities(struct soap *soap, const struct tt__IOCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &a->InputConnectors);
	soap_serialize_PointerToint(soap, &a->RelayOutputs);
	soap_serialize_PointerTott__IOCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilities(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilities), type))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:InputConnectors", -1, &a->InputConnectors, ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:RelayOutputs", -1, &a->RelayOutputs, ""))
		return soap->error;
	if (soap_out_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilities * SOAP_FMAC4 soap_in_tt__IOCapabilities(struct soap *soap, const char *tag, struct tt__IOCapabilities *a, const char *type)
{
	size_t soap_flag_InputConnectors = 1;
	size_t soap_flag_RelayOutputs = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IOCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilities, sizeof(struct tt__IOCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IOCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_InputConnectors && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:InputConnectors", &a->InputConnectors, "xsd:int"))
				{	soap_flag_InputConnectors--;
					continue;
				}
			if (soap_flag_RelayOutputs && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:RelayOutputs", &a->RelayOutputs, "xsd:int"))
				{	soap_flag_RelayOutputs--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:IOCapabilitiesExtension"))
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
	{	a = (struct tt__IOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilities, 0, sizeof(struct tt__IOCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilities(struct soap *soap, const struct tt__IOCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilities);
	if (soap_out_tt__IOCapabilities(soap, tag?tag:"tt:IOCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilities * SOAP_FMAC4 soap_get_tt__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->DiscoveryResolve);
	soap_default_xsd__boolean(soap, &a->DiscoveryBye);
	soap_default_xsd__boolean(soap, &a->RemoteDiscovery);
	soap_default_xsd__boolean(soap, &a->SystemBackup);
	soap_default_xsd__boolean(soap, &a->SystemLogging);
	soap_default_xsd__boolean(soap, &a->FirmwareUpgrade);
	a->__sizeSupportedVersions = 0;
	a->SupportedVersions = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilities(struct soap *soap, const struct tt__SystemCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->DiscoveryResolve, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->DiscoveryBye, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->RemoteDiscovery, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->SystemBackup, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->SystemLogging, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->FirmwareUpgrade, SOAP_TYPE_xsd__boolean);
	if (a->SupportedVersions)
	{	int i;
		for (i = 0; i < a->__sizeSupportedVersions; i++)
		{
			soap_embedded(soap, a->SupportedVersions + i, SOAP_TYPE_tt__OnvifVersion);
			soap_serialize_tt__OnvifVersion(soap, a->SupportedVersions + i);
		}
	}
	soap_serialize_PointerTott__SystemCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilities), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DiscoveryResolve", -1, &a->DiscoveryResolve, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DiscoveryBye", -1, &a->DiscoveryBye, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RemoteDiscovery", -1, &a->RemoteDiscovery, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:SystemBackup", -1, &a->SystemBackup, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:SystemLogging", -1, &a->SystemLogging, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:FirmwareUpgrade", -1, &a->FirmwareUpgrade, ""))
		return soap->error;
	if (a->SupportedVersions)
	{	int i;
		for (i = 0; i < a->__sizeSupportedVersions; i++)
			if (soap_out_tt__OnvifVersion(soap, "tt:SupportedVersions", -1, a->SupportedVersions + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemCapabilities * SOAP_FMAC4 soap_in_tt__SystemCapabilities(struct soap *soap, const char *tag, struct tt__SystemCapabilities *a, const char *type)
{
	size_t soap_flag_DiscoveryResolve = 1;
	size_t soap_flag_DiscoveryBye = 1;
	size_t soap_flag_RemoteDiscovery = 1;
	size_t soap_flag_SystemBackup = 1;
	size_t soap_flag_SystemLogging = 1;
	size_t soap_flag_FirmwareUpgrade = 1;
	struct soap_blist *soap_blist_SupportedVersions = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SystemCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilities, sizeof(struct tt__SystemCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SystemCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DiscoveryResolve && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DiscoveryResolve", &a->DiscoveryResolve, "xsd:boolean"))
				{	soap_flag_DiscoveryResolve--;
					continue;
				}
			if (soap_flag_DiscoveryBye && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DiscoveryBye", &a->DiscoveryBye, "xsd:boolean"))
				{	soap_flag_DiscoveryBye--;
					continue;
				}
			if (soap_flag_RemoteDiscovery && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RemoteDiscovery", &a->RemoteDiscovery, "xsd:boolean"))
				{	soap_flag_RemoteDiscovery--;
					continue;
				}
			if (soap_flag_SystemBackup && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:SystemBackup", &a->SystemBackup, "xsd:boolean"))
				{	soap_flag_SystemBackup--;
					continue;
				}
			if (soap_flag_SystemLogging && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:SystemLogging", &a->SystemLogging, "xsd:boolean"))
				{	soap_flag_SystemLogging--;
					continue;
				}
			if (soap_flag_FirmwareUpgrade && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:FirmwareUpgrade", &a->FirmwareUpgrade, "xsd:boolean"))
				{	soap_flag_FirmwareUpgrade--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedVersions", 1, NULL))
			{	if (a->SupportedVersions == NULL)
				{	if (soap_blist_SupportedVersions == NULL)
						soap_blist_SupportedVersions = soap_new_block(soap);
					a->SupportedVersions = (struct tt__OnvifVersion *)soap_push_block(soap, soap_blist_SupportedVersions, sizeof(struct tt__OnvifVersion));
					if (a->SupportedVersions == NULL)
						return NULL;
					soap_default_tt__OnvifVersion(soap, a->SupportedVersions);
				}
				soap_revert(soap);
				if (soap_in_tt__OnvifVersion(soap, "tt:SupportedVersions", a->SupportedVersions, "tt:OnvifVersion"))
				{	a->__sizeSupportedVersions++;
					a->SupportedVersions = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:SystemCapabilitiesExtension"))
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
		if (a->SupportedVersions)
			soap_pop_block(soap, soap_blist_SupportedVersions);
		if (a->__sizeSupportedVersions)
			a->SupportedVersions = (struct tt__OnvifVersion *)soap_save_block(soap, soap_blist_SupportedVersions, NULL, 1);
		else
		{	a->SupportedVersions = NULL;
			if (soap_blist_SupportedVersions)
				soap_end_block(soap, soap_blist_SupportedVersions);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SystemCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilities, 0, sizeof(struct tt__SystemCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DiscoveryResolve > 0 || soap_flag_DiscoveryBye > 0 || soap_flag_RemoteDiscovery > 0 || soap_flag_SystemBackup > 0 || soap_flag_SystemLogging > 0 || soap_flag_FirmwareUpgrade > 0 || a->__sizeSupportedVersions < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilities(struct soap *soap, const struct tt__SystemCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilities);
	if (soap_out_tt__SystemCapabilities(soap, tag?tag:"tt:SystemCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilities * SOAP_FMAC4 soap_get_tt__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->IPFilter = NULL;
	a->ZeroConfiguration = NULL;
	a->IPVersion6 = NULL;
	a->DynDNS = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilities(struct soap *soap, const struct tt__NetworkCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->IPFilter);
	soap_serialize_PointerToxsd__boolean(soap, &a->ZeroConfiguration);
	soap_serialize_PointerToxsd__boolean(soap, &a->IPVersion6);
	soap_serialize_PointerToxsd__boolean(soap, &a->DynDNS);
	soap_serialize_PointerTott__NetworkCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilities(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilities), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:IPFilter", -1, &a->IPFilter, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:ZeroConfiguration", -1, &a->ZeroConfiguration, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:IPVersion6", -1, &a->IPVersion6, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:DynDNS", -1, &a->DynDNS, ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilities * SOAP_FMAC4 soap_in_tt__NetworkCapabilities(struct soap *soap, const char *tag, struct tt__NetworkCapabilities *a, const char *type)
{
	size_t soap_flag_IPFilter = 1;
	size_t soap_flag_ZeroConfiguration = 1;
	size_t soap_flag_IPVersion6 = 1;
	size_t soap_flag_DynDNS = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilities, sizeof(struct tt__NetworkCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_IPFilter && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:IPFilter", &a->IPFilter, "xsd:boolean"))
				{	soap_flag_IPFilter--;
					continue;
				}
			if (soap_flag_ZeroConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:ZeroConfiguration", &a->ZeroConfiguration, "xsd:boolean"))
				{	soap_flag_ZeroConfiguration--;
					continue;
				}
			if (soap_flag_IPVersion6 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:IPVersion6", &a->IPVersion6, "xsd:boolean"))
				{	soap_flag_IPVersion6--;
					continue;
				}
			if (soap_flag_DynDNS && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:DynDNS", &a->DynDNS, "xsd:boolean"))
				{	soap_flag_DynDNS--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkCapabilitiesExtension"))
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
	{	a = (struct tt__NetworkCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilities, 0, sizeof(struct tt__NetworkCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilities(struct soap *soap, const struct tt__NetworkCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilities);
	if (soap_out_tt__NetworkCapabilities(soap, tag?tag:"tt:NetworkCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilities * SOAP_FMAC4 soap_get_tt__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CapabilitiesExtension2(struct soap *soap, const struct tt__CapabilitiesExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__CapabilitiesExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension2, sizeof(struct tt__CapabilitiesExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CapabilitiesExtension2(soap, a);
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
	{	a = (struct tt__CapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension2, 0, sizeof(struct tt__CapabilitiesExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CapabilitiesExtension2(struct soap *soap, const struct tt__CapabilitiesExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension2);
	if (soap_out_tt__CapabilitiesExtension2(soap, tag?tag:"tt:CapabilitiesExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->RuleSupport = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsDeviceCapabilities(struct soap *soap, const struct tt__AnalyticsDeviceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_serialize_PointerToxsd__boolean(soap, &a->RuleSupport);
	soap_serialize_PointerTott__AnalyticsDeviceExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsDeviceCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:RuleSupport", -1, &a->RuleSupport, ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_RuleSupport = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsDeviceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, sizeof(struct tt__AnalyticsDeviceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsDeviceCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_RuleSupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:RuleSupport", &a->RuleSupport, "xsd:boolean"))
				{	soap_flag_RuleSupport--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", &a->Extension, "tt:AnalyticsDeviceExtension"))
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
	{	a = (struct tt__AnalyticsDeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, 0, sizeof(struct tt__AnalyticsDeviceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsDeviceCapabilities(struct soap *soap, const struct tt__AnalyticsDeviceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceCapabilities);
	if (soap_out_tt__AnalyticsDeviceCapabilities(soap, tag?tag:"tt:AnalyticsDeviceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->RTP_USCOREMulticast);
	soap_default_xsd__boolean(soap, &a->RTP_USCORETCP);
	soap_default_xsd__boolean(soap, &a->RTP_USCORERTSP_USCORETCP);
	soap_default_int(soap, &a->SupportedReceivers);
	soap_default_int(soap, &a->MaximumRTSPURILength);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReceiverCapabilities(struct soap *soap, const struct tt__ReceiverCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->RTP_USCOREMulticast, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->RTP_USCORETCP, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->RTP_USCORERTSP_USCORETCP, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->SupportedReceivers, SOAP_TYPE_int);
	soap_embedded(soap, &a->MaximumRTSPURILength, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ReceiverCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RTP_Multicast", -1, &a->RTP_USCOREMulticast, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RTP_TCP", -1, &a->RTP_USCORETCP, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RTP_RTSP_TCP", -1, &a->RTP_USCORERTSP_USCORETCP, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:SupportedReceivers", -1, &a->SupportedReceivers, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:MaximumRTSPURILength", -1, &a->MaximumRTSPURILength, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities * SOAP_FMAC4 soap_in_tt__ReceiverCapabilities(struct soap *soap, const char *tag, struct tt__ReceiverCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_RTP_USCOREMulticast = 1;
	size_t soap_flag_RTP_USCORETCP = 1;
	size_t soap_flag_RTP_USCORERTSP_USCORETCP = 1;
	size_t soap_flag_SupportedReceivers = 1;
	size_t soap_flag_MaximumRTSPURILength = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReceiverCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverCapabilities, sizeof(struct tt__ReceiverCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReceiverCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_RTP_USCOREMulticast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RTP_Multicast", &a->RTP_USCOREMulticast, "xsd:boolean"))
				{	soap_flag_RTP_USCOREMulticast--;
					continue;
				}
			if (soap_flag_RTP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RTP_TCP", &a->RTP_USCORETCP, "xsd:boolean"))
				{	soap_flag_RTP_USCORETCP--;
					continue;
				}
			if (soap_flag_RTP_USCORERTSP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RTP_RTSP_TCP", &a->RTP_USCORERTSP_USCORETCP, "xsd:boolean"))
				{	soap_flag_RTP_USCORERTSP_USCORETCP--;
					continue;
				}
			if (soap_flag_SupportedReceivers && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:SupportedReceivers", &a->SupportedReceivers, "xsd:int"))
				{	soap_flag_SupportedReceivers--;
					continue;
				}
			if (soap_flag_MaximumRTSPURILength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumRTSPURILength", &a->MaximumRTSPURILength, "xsd:int"))
				{	soap_flag_MaximumRTSPURILength--;
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
	{	a = (struct tt__ReceiverCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverCapabilities, 0, sizeof(struct tt__ReceiverCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_RTP_USCOREMulticast > 0 || soap_flag_RTP_USCORETCP > 0 || soap_flag_RTP_USCORERTSP_USCORETCP > 0 || soap_flag_SupportedReceivers > 0 || soap_flag_MaximumRTSPURILength > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverCapabilities(struct soap *soap, const struct tt__ReceiverCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverCapabilities);
	if (soap_out_tt__ReceiverCapabilities(soap, tag?tag:"tt:ReceiverCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities * SOAP_FMAC4 soap_get_tt__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReplayCapabilities(struct soap *soap, const struct tt__ReplayCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReplayCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ReplayCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReplayCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReplayCapabilities * SOAP_FMAC4 soap_in_tt__ReplayCapabilities(struct soap *soap, const char *tag, struct tt__ReplayCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReplayCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReplayCapabilities, sizeof(struct tt__ReplayCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReplayCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
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
	{	a = (struct tt__ReplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReplayCapabilities, 0, sizeof(struct tt__ReplayCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReplayCapabilities(struct soap *soap, const struct tt__ReplayCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReplayCapabilities);
	if (soap_out_tt__ReplayCapabilities(soap, tag?tag:"tt:ReplayCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReplayCapabilities * SOAP_FMAC4 soap_get_tt__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReplayCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->MetadataSearch);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SearchCapabilities(struct soap *soap, const struct tt__SearchCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->MetadataSearch, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SearchCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:MetadataSearch", -1, &a->MetadataSearch, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SearchCapabilities * SOAP_FMAC4 soap_in_tt__SearchCapabilities(struct soap *soap, const char *tag, struct tt__SearchCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_MetadataSearch = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SearchCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchCapabilities, sizeof(struct tt__SearchCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SearchCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_MetadataSearch && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:MetadataSearch", &a->MetadataSearch, "xsd:boolean"))
				{	soap_flag_MetadataSearch--;
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
	{	a = (struct tt__SearchCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchCapabilities, 0, sizeof(struct tt__SearchCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_MetadataSearch > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SearchCapabilities(struct soap *soap, const struct tt__SearchCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SearchCapabilities);
	if (soap_out_tt__SearchCapabilities(soap, tag?tag:"tt:SearchCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SearchCapabilities * SOAP_FMAC4 soap_get_tt__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->ReceiverSource);
	soap_default_xsd__boolean(soap, &a->MediaProfileSource);
	soap_default_xsd__boolean(soap, &a->DynamicRecordings);
	soap_default_xsd__boolean(soap, &a->DynamicTracks);
	soap_default_int(soap, &a->MaxStringLength);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingCapabilities(struct soap *soap, const struct tt__RecordingCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->ReceiverSource, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->MediaProfileSource, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->DynamicRecordings, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->DynamicTracks, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->MaxStringLength, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__RecordingCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:ReceiverSource", -1, &a->ReceiverSource, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:MediaProfileSource", -1, &a->MediaProfileSource, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DynamicRecordings", -1, &a->DynamicRecordings, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:DynamicTracks", -1, &a->DynamicTracks, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:MaxStringLength", -1, &a->MaxStringLength, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingCapabilities * SOAP_FMAC4 soap_in_tt__RecordingCapabilities(struct soap *soap, const char *tag, struct tt__RecordingCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_ReceiverSource = 1;
	size_t soap_flag_MediaProfileSource = 1;
	size_t soap_flag_DynamicRecordings = 1;
	size_t soap_flag_DynamicTracks = 1;
	size_t soap_flag_MaxStringLength = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingCapabilities, sizeof(struct tt__RecordingCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_ReceiverSource && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:ReceiverSource", &a->ReceiverSource, "xsd:boolean"))
				{	soap_flag_ReceiverSource--;
					continue;
				}
			if (soap_flag_MediaProfileSource && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:MediaProfileSource", &a->MediaProfileSource, "xsd:boolean"))
				{	soap_flag_MediaProfileSource--;
					continue;
				}
			if (soap_flag_DynamicRecordings && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DynamicRecordings", &a->DynamicRecordings, "xsd:boolean"))
				{	soap_flag_DynamicRecordings--;
					continue;
				}
			if (soap_flag_DynamicTracks && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:DynamicTracks", &a->DynamicTracks, "xsd:boolean"))
				{	soap_flag_DynamicTracks--;
					continue;
				}
			if (soap_flag_MaxStringLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaxStringLength", &a->MaxStringLength, "xsd:int"))
				{	soap_flag_MaxStringLength--;
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
	{	a = (struct tt__RecordingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingCapabilities, 0, sizeof(struct tt__RecordingCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_ReceiverSource > 0 || soap_flag_MediaProfileSource > 0 || soap_flag_DynamicRecordings > 0 || soap_flag_DynamicTracks > 0 || soap_flag_MaxStringLength > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingCapabilities(struct soap *soap, const struct tt__RecordingCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingCapabilities);
	if (soap_out_tt__RecordingCapabilities(soap, tag?tag:"tt:RecordingCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingCapabilities * SOAP_FMAC4 soap_get_tt__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->FixedLayout);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DisplayCapabilities(struct soap *soap, const struct tt__DisplayCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->FixedLayout, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DisplayCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DisplayCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DisplayCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:FixedLayout", -1, &a->FixedLayout, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DisplayCapabilities * SOAP_FMAC4 soap_in_tt__DisplayCapabilities(struct soap *soap, const char *tag, struct tt__DisplayCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_FixedLayout = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DisplayCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DisplayCapabilities, sizeof(struct tt__DisplayCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DisplayCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_FixedLayout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:FixedLayout", &a->FixedLayout, "xsd:boolean"))
				{	soap_flag_FixedLayout--;
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
	{	a = (struct tt__DisplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DisplayCapabilities, 0, sizeof(struct tt__DisplayCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_FixedLayout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DisplayCapabilities(struct soap *soap, const struct tt__DisplayCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DisplayCapabilities);
	if (soap_out_tt__DisplayCapabilities(soap, tag?tag:"tt:DisplayCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DisplayCapabilities * SOAP_FMAC4 soap_get_tt__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DisplayCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_int(soap, &a->VideoSources);
	soap_default_int(soap, &a->VideoOutputs);
	soap_default_int(soap, &a->AudioSources);
	soap_default_int(soap, &a->AudioOutputs);
	soap_default_int(soap, &a->RelayOutputs);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceIOCapabilities(struct soap *soap, const struct tt__DeviceIOCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->VideoSources, SOAP_TYPE_int);
	soap_embedded(soap, &a->VideoOutputs, SOAP_TYPE_int);
	soap_embedded(soap, &a->AudioSources, SOAP_TYPE_int);
	soap_embedded(soap, &a->AudioOutputs, SOAP_TYPE_int);
	soap_embedded(soap, &a->RelayOutputs, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DeviceIOCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceIOCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_int(soap, "tt:VideoSources", -1, &a->VideoSources, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:VideoOutputs", -1, &a->VideoOutputs, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:AudioSources", -1, &a->AudioSources, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:AudioOutputs", -1, &a->AudioOutputs, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:RelayOutputs", -1, &a->RelayOutputs, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities * SOAP_FMAC4 soap_in_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, struct tt__DeviceIOCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_VideoSources = 1;
	size_t soap_flag_VideoOutputs = 1;
	size_t soap_flag_AudioSources = 1;
	size_t soap_flag_AudioOutputs = 1;
	size_t soap_flag_RelayOutputs = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DeviceIOCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceIOCapabilities, sizeof(struct tt__DeviceIOCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DeviceIOCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_VideoSources && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:VideoSources", &a->VideoSources, "xsd:int"))
				{	soap_flag_VideoSources--;
					continue;
				}
			if (soap_flag_VideoOutputs && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:VideoOutputs", &a->VideoOutputs, "xsd:int"))
				{	soap_flag_VideoOutputs--;
					continue;
				}
			if (soap_flag_AudioSources && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:AudioSources", &a->AudioSources, "xsd:int"))
				{	soap_flag_AudioSources--;
					continue;
				}
			if (soap_flag_AudioOutputs && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:AudioOutputs", &a->AudioOutputs, "xsd:int"))
				{	soap_flag_AudioOutputs--;
					continue;
				}
			if (soap_flag_RelayOutputs && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:RelayOutputs", &a->RelayOutputs, "xsd:int"))
				{	soap_flag_RelayOutputs--;
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
	{	a = (struct tt__DeviceIOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceIOCapabilities, 0, sizeof(struct tt__DeviceIOCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_VideoSources > 0 || soap_flag_VideoOutputs > 0 || soap_flag_AudioSources > 0 || soap_flag_AudioOutputs > 0 || soap_flag_RelayOutputs > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceIOCapabilities(struct soap *soap, const struct tt__DeviceIOCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceIOCapabilities);
	if (soap_out_tt__DeviceIOCapabilities(soap, tag?tag:"tt:DeviceIOCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities * SOAP_FMAC4 soap_get_tt__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceIOCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->DeviceIO = NULL;
	a->Display = NULL;
	a->Recording = NULL;
	a->Search = NULL;
	a->Replay = NULL;
	a->Receiver = NULL;
	a->AnalyticsDevice = NULL;
	a->Extensions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CapabilitiesExtension(struct soap *soap, const struct tt__CapabilitiesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__DeviceIOCapabilities(soap, &a->DeviceIO);
	soap_serialize_PointerTott__DisplayCapabilities(soap, &a->Display);
	soap_serialize_PointerTott__RecordingCapabilities(soap, &a->Recording);
	soap_serialize_PointerTott__SearchCapabilities(soap, &a->Search);
	soap_serialize_PointerTott__ReplayCapabilities(soap, &a->Replay);
	soap_serialize_PointerTott__ReceiverCapabilities(soap, &a->Receiver);
	soap_serialize_PointerTott__AnalyticsDeviceCapabilities(soap, &a->AnalyticsDevice);
	soap_serialize_PointerTott__CapabilitiesExtension2(soap, &a->Extensions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__CapabilitiesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", -1, &a->DeviceIO, ""))
		return soap->error;
	if (soap_out_PointerTott__DisplayCapabilities(soap, "tt:Display", -1, &a->Display, ""))
		return soap->error;
	if (soap_out_PointerTott__RecordingCapabilities(soap, "tt:Recording", -1, &a->Recording, ""))
		return soap->error;
	if (soap_out_PointerTott__SearchCapabilities(soap, "tt:Search", -1, &a->Search, ""))
		return soap->error;
	if (soap_out_PointerTott__ReplayCapabilities(soap, "tt:Replay", -1, &a->Replay, ""))
		return soap->error;
	if (soap_out_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", -1, &a->Receiver, ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", -1, &a->AnalyticsDevice, ""))
		return soap->error;
	if (soap_out_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", -1, &a->Extensions, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_DeviceIO = 1;
	size_t soap_flag_Display = 1;
	size_t soap_flag_Recording = 1;
	size_t soap_flag_Search = 1;
	size_t soap_flag_Replay = 1;
	size_t soap_flag_Receiver = 1;
	size_t soap_flag_AnalyticsDevice = 1;
	size_t soap_flag_Extensions = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension, sizeof(struct tt__CapabilitiesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CapabilitiesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DeviceIO && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", &a->DeviceIO, "tt:DeviceIOCapabilities"))
				{	soap_flag_DeviceIO--;
					continue;
				}
			if (soap_flag_Display && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DisplayCapabilities(soap, "tt:Display", &a->Display, "tt:DisplayCapabilities"))
				{	soap_flag_Display--;
					continue;
				}
			if (soap_flag_Recording && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingCapabilities(soap, "tt:Recording", &a->Recording, "tt:RecordingCapabilities"))
				{	soap_flag_Recording--;
					continue;
				}
			if (soap_flag_Search && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SearchCapabilities(soap, "tt:Search", &a->Search, "tt:SearchCapabilities"))
				{	soap_flag_Search--;
					continue;
				}
			if (soap_flag_Replay && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReplayCapabilities(soap, "tt:Replay", &a->Replay, "tt:ReplayCapabilities"))
				{	soap_flag_Replay--;
					continue;
				}
			if (soap_flag_Receiver && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", &a->Receiver, "tt:ReceiverCapabilities"))
				{	soap_flag_Receiver--;
					continue;
				}
			if (soap_flag_AnalyticsDevice && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", &a->AnalyticsDevice, "tt:AnalyticsDeviceCapabilities"))
				{	soap_flag_AnalyticsDevice--;
					continue;
				}
			if (soap_flag_Extensions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", &a->Extensions, "tt:CapabilitiesExtension2"))
				{	soap_flag_Extensions--;
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
	{	a = (struct tt__CapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension, 0, sizeof(struct tt__CapabilitiesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CapabilitiesExtension(struct soap *soap, const struct tt__CapabilitiesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension);
	if (soap_out_tt__CapabilitiesExtension(soap, tag?tag:"tt:CapabilitiesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZCapabilities(struct soap *soap, const struct tt__PTZCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZCapabilities(struct soap *soap, const char *tag, int id, const struct tt__PTZCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZCapabilities * SOAP_FMAC4 soap_in_tt__PTZCapabilities(struct soap *soap, const char *tag, struct tt__PTZCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZCapabilities, sizeof(struct tt__PTZCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
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
	{	a = (struct tt__PTZCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZCapabilities, 0, sizeof(struct tt__PTZCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZCapabilities(struct soap *soap, const struct tt__PTZCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZCapabilities);
	if (soap_out_tt__PTZCapabilities(soap, tag?tag:"tt:PTZCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZCapabilities * SOAP_FMAC4 soap_get_tt__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->StreamingCapabilities = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaCapabilities(struct soap *soap, const struct tt__MediaCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_serialize_PointerTott__RealTimeStreamingCapabilities(soap, &a->StreamingCapabilities);
	soap_serialize_PointerTott__MediaCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilities(struct soap *soap, const char *tag, int id, const struct tt__MediaCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->StreamingCapabilities)
	{	if (soap_out_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", -1, &a->StreamingCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StreamingCapabilities"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaCapabilities * SOAP_FMAC4 soap_in_tt__MediaCapabilities(struct soap *soap, const char *tag, struct tt__MediaCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_StreamingCapabilities = 1;
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MediaCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilities, sizeof(struct tt__MediaCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MediaCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_StreamingCapabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", &a->StreamingCapabilities, "tt:RealTimeStreamingCapabilities"))
				{	soap_flag_StreamingCapabilities--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:MediaCapabilitiesExtension"))
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
	{	a = (struct tt__MediaCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilities, 0, sizeof(struct tt__MediaCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_StreamingCapabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaCapabilities(struct soap *soap, const struct tt__MediaCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilities);
	if (soap_out_tt__MediaCapabilities(soap, tag?tag:"tt:MediaCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilities * SOAP_FMAC4 soap_get_tt__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingCapabilities(struct soap *soap, const struct tt__ImagingCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ImagingCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingCapabilities * SOAP_FMAC4 soap_in_tt__ImagingCapabilities(struct soap *soap, const char *tag, struct tt__ImagingCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ImagingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingCapabilities, sizeof(struct tt__ImagingCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ImagingCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
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
	{	a = (struct tt__ImagingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingCapabilities, 0, sizeof(struct tt__ImagingCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingCapabilities(struct soap *soap, const struct tt__ImagingCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingCapabilities);
	if (soap_out_tt__ImagingCapabilities(soap, tag?tag:"tt:ImagingCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingCapabilities * SOAP_FMAC4 soap_get_tt__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->WSSubscriptionPolicySupport);
	soap_default_xsd__boolean(soap, &a->WSPullPointSupport);
	soap_default_xsd__boolean(soap, &a->WSPausableSubscriptionManagerInterfaceSupport);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EventCapabilities(struct soap *soap, const struct tt__EventCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->WSSubscriptionPolicySupport, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->WSPullPointSupport, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->WSPausableSubscriptionManagerInterfaceSupport, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventCapabilities(struct soap *soap, const char *tag, int id, const struct tt__EventCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:WSSubscriptionPolicySupport", -1, &a->WSSubscriptionPolicySupport, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:WSPullPointSupport", -1, &a->WSPullPointSupport, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", -1, &a->WSPausableSubscriptionManagerInterfaceSupport, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EventCapabilities * SOAP_FMAC4 soap_in_tt__EventCapabilities(struct soap *soap, const char *tag, struct tt__EventCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_WSSubscriptionPolicySupport = 1;
	size_t soap_flag_WSPullPointSupport = 1;
	size_t soap_flag_WSPausableSubscriptionManagerInterfaceSupport = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EventCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventCapabilities, sizeof(struct tt__EventCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EventCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_WSSubscriptionPolicySupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:WSSubscriptionPolicySupport", &a->WSSubscriptionPolicySupport, "xsd:boolean"))
				{	soap_flag_WSSubscriptionPolicySupport--;
					continue;
				}
			if (soap_flag_WSPullPointSupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:WSPullPointSupport", &a->WSPullPointSupport, "xsd:boolean"))
				{	soap_flag_WSPullPointSupport--;
					continue;
				}
			if (soap_flag_WSPausableSubscriptionManagerInterfaceSupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", &a->WSPausableSubscriptionManagerInterfaceSupport, "xsd:boolean"))
				{	soap_flag_WSPausableSubscriptionManagerInterfaceSupport--;
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
	{	a = (struct tt__EventCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventCapabilities, 0, sizeof(struct tt__EventCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_WSSubscriptionPolicySupport > 0 || soap_flag_WSPullPointSupport > 0 || soap_flag_WSPausableSubscriptionManagerInterfaceSupport > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EventCapabilities(struct soap *soap, const struct tt__EventCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EventCapabilities);
	if (soap_out_tt__EventCapabilities(soap, tag?tag:"tt:EventCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventCapabilities * SOAP_FMAC4 soap_get_tt__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	a->Network = NULL;
	a->System = NULL;
	a->IO = NULL;
	a->Security = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceCapabilities(struct soap *soap, const struct tt__DeviceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_serialize_PointerTott__NetworkCapabilities(soap, &a->Network);
	soap_serialize_PointerTott__SystemCapabilities(soap, &a->System);
	soap_serialize_PointerTott__IOCapabilities(soap, &a->IO);
	soap_serialize_PointerTott__SecurityCapabilities(soap, &a->Security);
	soap_serialize_PointerTott__DeviceCapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DeviceCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilities(soap, "tt:Network", -1, &a->Network, ""))
		return soap->error;
	if (soap_out_PointerTott__SystemCapabilities(soap, "tt:System", -1, &a->System, ""))
		return soap->error;
	if (soap_out_PointerTott__IOCapabilities(soap, "tt:IO", -1, &a->IO, ""))
		return soap->error;
	if (soap_out_PointerTott__SecurityCapabilities(soap, "tt:Security", -1, &a->Security, ""))
		return soap->error;
	if (soap_out_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceCapabilities * SOAP_FMAC4 soap_in_tt__DeviceCapabilities(struct soap *soap, const char *tag, struct tt__DeviceCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_Network = 1;
	size_t soap_flag_System = 1;
	size_t soap_flag_IO = 1;
	size_t soap_flag_Security = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__DeviceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilities, sizeof(struct tt__DeviceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__DeviceCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_Network && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilities(soap, "tt:Network", &a->Network, "tt:NetworkCapabilities"))
				{	soap_flag_Network--;
					continue;
				}
			if (soap_flag_System && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilities(soap, "tt:System", &a->System, "tt:SystemCapabilities"))
				{	soap_flag_System--;
					continue;
				}
			if (soap_flag_IO && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilities(soap, "tt:IO", &a->IO, "tt:IOCapabilities"))
				{	soap_flag_IO--;
					continue;
				}
			if (soap_flag_Security && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilities(soap, "tt:Security", &a->Security, "tt:SecurityCapabilities"))
				{	soap_flag_Security--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:DeviceCapabilitiesExtension"))
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
	{	a = (struct tt__DeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilities, 0, sizeof(struct tt__DeviceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceCapabilities(struct soap *soap, const struct tt__DeviceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilities);
	if (soap_out_tt__DeviceCapabilities(soap, tag?tag:"tt:DeviceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilities * SOAP_FMAC4 soap_get_tt__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->XAddr);
	soap_default_xsd__boolean(soap, &a->RuleSupport);
	soap_default_xsd__boolean(soap, &a->AnalyticsModuleSupport);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsCapabilities(struct soap *soap, const struct tt__AnalyticsCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->XAddr);
	soap_embedded(soap, &a->RuleSupport, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->AnalyticsModuleSupport, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsCapabilities), type))
		return soap->error;
	if (a->XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:RuleSupport", -1, &a->RuleSupport, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AnalyticsModuleSupport", -1, &a->AnalyticsModuleSupport, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsCapabilities *a, const char *type)
{
	size_t soap_flag_XAddr = 1;
	size_t soap_flag_RuleSupport = 1;
	size_t soap_flag_AnalyticsModuleSupport = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsCapabilities, sizeof(struct tt__AnalyticsCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
				{	soap_flag_XAddr--;
					continue;
				}
			if (soap_flag_RuleSupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:RuleSupport", &a->RuleSupport, "xsd:boolean"))
				{	soap_flag_RuleSupport--;
					continue;
				}
			if (soap_flag_AnalyticsModuleSupport && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AnalyticsModuleSupport", &a->AnalyticsModuleSupport, "xsd:boolean"))
				{	soap_flag_AnalyticsModuleSupport--;
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
	{	a = (struct tt__AnalyticsCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsCapabilities, 0, sizeof(struct tt__AnalyticsCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_RuleSupport > 0 || soap_flag_AnalyticsModuleSupport > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsCapabilities(struct soap *soap, const struct tt__AnalyticsCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsCapabilities);
	if (soap_out_tt__AnalyticsCapabilities(soap, tag?tag:"tt:AnalyticsCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Capabilities(struct soap *soap, struct tt__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Analytics = NULL;
	a->Device = NULL;
	a->Events = NULL;
	a->Imaging = NULL;
	a->Media = NULL;
	a->PTZ = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Capabilities(struct soap *soap, const struct tt__Capabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsCapabilities(soap, &a->Analytics);
	soap_serialize_PointerTott__DeviceCapabilities(soap, &a->Device);
	soap_serialize_PointerTott__EventCapabilities(soap, &a->Events);
	soap_serialize_PointerTott__ImagingCapabilities(soap, &a->Imaging);
	soap_serialize_PointerTott__MediaCapabilities(soap, &a->Media);
	soap_serialize_PointerTott__PTZCapabilities(soap, &a->PTZ);
	soap_serialize_PointerTott__CapabilitiesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Capabilities(struct soap *soap, const char *tag, int id, const struct tt__Capabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Capabilities), type))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", -1, &a->Analytics, ""))
		return soap->error;
	if (soap_out_PointerTott__DeviceCapabilities(soap, "tt:Device", -1, &a->Device, ""))
		return soap->error;
	if (soap_out_PointerTott__EventCapabilities(soap, "tt:Events", -1, &a->Events, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingCapabilities(soap, "tt:Imaging", -1, &a->Imaging, ""))
		return soap->error;
	if (soap_out_PointerTott__MediaCapabilities(soap, "tt:Media", -1, &a->Media, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZCapabilities(soap, "tt:PTZ", -1, &a->PTZ, ""))
		return soap->error;
	if (soap_out_PointerTott__CapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Capabilities * SOAP_FMAC4 soap_in_tt__Capabilities(struct soap *soap, const char *tag, struct tt__Capabilities *a, const char *type)
{
	size_t soap_flag_Analytics = 1;
	size_t soap_flag_Device = 1;
	size_t soap_flag_Events = 1;
	size_t soap_flag_Imaging = 1;
	size_t soap_flag_Media = 1;
	size_t soap_flag_PTZ = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Capabilities, sizeof(struct tt__Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Capabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Analytics && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", &a->Analytics, "tt:AnalyticsCapabilities"))
				{	soap_flag_Analytics--;
					continue;
				}
			if (soap_flag_Device && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceCapabilities(soap, "tt:Device", &a->Device, "tt:DeviceCapabilities"))
				{	soap_flag_Device--;
					continue;
				}
			if (soap_flag_Events && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EventCapabilities(soap, "tt:Events", &a->Events, "tt:EventCapabilities"))
				{	soap_flag_Events--;
					continue;
				}
			if (soap_flag_Imaging && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingCapabilities(soap, "tt:Imaging", &a->Imaging, "tt:ImagingCapabilities"))
				{	soap_flag_Imaging--;
					continue;
				}
			if (soap_flag_Media && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaCapabilities(soap, "tt:Media", &a->Media, "tt:MediaCapabilities"))
				{	soap_flag_Media--;
					continue;
				}
			if (soap_flag_PTZ && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZCapabilities(soap, "tt:PTZ", &a->PTZ, "tt:PTZCapabilities"))
				{	soap_flag_PTZ--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:CapabilitiesExtension"))
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
	{	a = (struct tt__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Capabilities, 0, sizeof(struct tt__Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Capabilities(struct soap *soap, const struct tt__Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Capabilities);
	if (soap_out_tt__Capabilities(soap, tag?tag:"tt:Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Capabilities * SOAP_FMAC4 soap_get_tt__Capabilities(struct soap *soap, struct tt__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11AvailableNetworksExtension(struct soap *soap, struct tt__Dot11AvailableNetworksExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11AvailableNetworksExtension(struct soap *soap, const struct tt__Dot11AvailableNetworksExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AvailableNetworksExtension(struct soap *soap, const char *tag, int id, const struct tt__Dot11AvailableNetworksExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11AvailableNetworksExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11AvailableNetworksExtension * SOAP_FMAC4 soap_in_tt__Dot11AvailableNetworksExtension(struct soap *soap, const char *tag, struct tt__Dot11AvailableNetworksExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11AvailableNetworksExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AvailableNetworksExtension, sizeof(struct tt__Dot11AvailableNetworksExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11AvailableNetworksExtension(soap, a);
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
	{	a = (struct tt__Dot11AvailableNetworksExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11AvailableNetworksExtension, 0, sizeof(struct tt__Dot11AvailableNetworksExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11AvailableNetworksExtension(struct soap *soap, const struct tt__Dot11AvailableNetworksExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11AvailableNetworksExtension);
	if (soap_out_tt__Dot11AvailableNetworksExtension(soap, tag?tag:"tt:Dot11AvailableNetworksExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11AvailableNetworksExtension * SOAP_FMAC4 soap_get_tt__Dot11AvailableNetworksExtension(struct soap *soap, struct tt__Dot11AvailableNetworksExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AvailableNetworksExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11AvailableNetworks(struct soap *soap, struct tt__Dot11AvailableNetworks *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Dot11SSIDType(soap, &a->SSID);
	soap_default_string(soap, &a->BSSID);
	a->__sizeAuthAndMangementSuite = 0;
	a->AuthAndMangementSuite = NULL;
	a->__sizePairCipher = 0;
	a->PairCipher = NULL;
	a->__sizeGroupCipher = 0;
	a->GroupCipher = NULL;
	a->SignalStrength = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11AvailableNetworks(struct soap *soap, const struct tt__Dot11AvailableNetworks *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &a->SSID);
	soap_serialize_string(soap, &a->BSSID);
	if (a->AuthAndMangementSuite)
	{	int i;
		for (i = 0; i < a->__sizeAuthAndMangementSuite; i++)
		{
			soap_embedded(soap, a->AuthAndMangementSuite + i, SOAP_TYPE_tt__Dot11AuthAndMangementSuite);
		}
	}
	if (a->PairCipher)
	{	int i;
		for (i = 0; i < a->__sizePairCipher; i++)
		{
			soap_embedded(soap, a->PairCipher + i, SOAP_TYPE_tt__Dot11Cipher);
		}
	}
	if (a->GroupCipher)
	{	int i;
		for (i = 0; i < a->__sizeGroupCipher; i++)
		{
			soap_embedded(soap, a->GroupCipher + i, SOAP_TYPE_tt__Dot11Cipher);
		}
	}
	soap_serialize_PointerTott__Dot11SignalStrength(soap, &a->SignalStrength);
	soap_serialize_PointerTott__Dot11AvailableNetworksExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AvailableNetworks(struct soap *soap, const char *tag, int id, const struct tt__Dot11AvailableNetworks *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11AvailableNetworks), type))
		return soap->error;
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &a->SSID, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:BSSID", -1, &a->BSSID, ""))
		return soap->error;
	if (a->AuthAndMangementSuite)
	{	int i;
		for (i = 0; i < a->__sizeAuthAndMangementSuite; i++)
			if (soap_out_tt__Dot11AuthAndMangementSuite(soap, "tt:AuthAndMangementSuite", -1, a->AuthAndMangementSuite + i, ""))
				return soap->error;
	}
	if (a->PairCipher)
	{	int i;
		for (i = 0; i < a->__sizePairCipher; i++)
			if (soap_out_tt__Dot11Cipher(soap, "tt:PairCipher", -1, a->PairCipher + i, ""))
				return soap->error;
	}
	if (a->GroupCipher)
	{	int i;
		for (i = 0; i < a->__sizeGroupCipher; i++)
			if (soap_out_tt__Dot11Cipher(soap, "tt:GroupCipher", -1, a->GroupCipher + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", -1, &a->SignalStrength, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11AvailableNetworksExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11AvailableNetworks * SOAP_FMAC4 soap_in_tt__Dot11AvailableNetworks(struct soap *soap, const char *tag, struct tt__Dot11AvailableNetworks *a, const char *type)
{
	size_t soap_flag_SSID = 1;
	size_t soap_flag_BSSID = 1;
	struct soap_blist *soap_blist_AuthAndMangementSuite = NULL;
	struct soap_blist *soap_blist_PairCipher = NULL;
	struct soap_blist *soap_blist_GroupCipher = NULL;
	size_t soap_flag_SignalStrength = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11AvailableNetworks *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AvailableNetworks, sizeof(struct tt__Dot11AvailableNetworks), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11AvailableNetworks(soap, a);
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
			if (soap_flag_BSSID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:BSSID", &a->BSSID, "xsd:string"))
				{	soap_flag_BSSID--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuthAndMangementSuite", 1, NULL))
			{	if (a->AuthAndMangementSuite == NULL)
				{	if (soap_blist_AuthAndMangementSuite == NULL)
						soap_blist_AuthAndMangementSuite = soap_new_block(soap);
					a->AuthAndMangementSuite = (enum tt__Dot11AuthAndMangementSuite *)soap_push_block(soap, soap_blist_AuthAndMangementSuite, sizeof(enum tt__Dot11AuthAndMangementSuite));
					if (a->AuthAndMangementSuite == NULL)
						return NULL;
					soap_default_tt__Dot11AuthAndMangementSuite(soap, a->AuthAndMangementSuite);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11AuthAndMangementSuite(soap, "tt:AuthAndMangementSuite", a->AuthAndMangementSuite, "tt:Dot11AuthAndMangementSuite"))
				{	a->__sizeAuthAndMangementSuite++;
					a->AuthAndMangementSuite = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PairCipher", 1, NULL))
			{	if (a->PairCipher == NULL)
				{	if (soap_blist_PairCipher == NULL)
						soap_blist_PairCipher = soap_new_block(soap);
					a->PairCipher = (enum tt__Dot11Cipher *)soap_push_block(soap, soap_blist_PairCipher, sizeof(enum tt__Dot11Cipher));
					if (a->PairCipher == NULL)
						return NULL;
					soap_default_tt__Dot11Cipher(soap, a->PairCipher);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11Cipher(soap, "tt:PairCipher", a->PairCipher, "tt:Dot11Cipher"))
				{	a->__sizePairCipher++;
					a->PairCipher = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:GroupCipher", 1, NULL))
			{	if (a->GroupCipher == NULL)
				{	if (soap_blist_GroupCipher == NULL)
						soap_blist_GroupCipher = soap_new_block(soap);
					a->GroupCipher = (enum tt__Dot11Cipher *)soap_push_block(soap, soap_blist_GroupCipher, sizeof(enum tt__Dot11Cipher));
					if (a->GroupCipher == NULL)
						return NULL;
					soap_default_tt__Dot11Cipher(soap, a->GroupCipher);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11Cipher(soap, "tt:GroupCipher", a->GroupCipher, "tt:Dot11Cipher"))
				{	a->__sizeGroupCipher++;
					a->GroupCipher = NULL;
					continue;
				}
			}
			if (soap_flag_SignalStrength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", &a->SignalStrength, "tt:Dot11SignalStrength"))
				{	soap_flag_SignalStrength--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11AvailableNetworksExtension(soap, "tt:Extension", &a->Extension, "tt:Dot11AvailableNetworksExtension"))
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
		if (a->AuthAndMangementSuite)
			soap_pop_block(soap, soap_blist_AuthAndMangementSuite);
		if (a->__sizeAuthAndMangementSuite)
			a->AuthAndMangementSuite = (enum tt__Dot11AuthAndMangementSuite *)soap_save_block(soap, soap_blist_AuthAndMangementSuite, NULL, 1);
		else
		{	a->AuthAndMangementSuite = NULL;
			if (soap_blist_AuthAndMangementSuite)
				soap_end_block(soap, soap_blist_AuthAndMangementSuite);
		}
		if (a->PairCipher)
			soap_pop_block(soap, soap_blist_PairCipher);
		if (a->__sizePairCipher)
			a->PairCipher = (enum tt__Dot11Cipher *)soap_save_block(soap, soap_blist_PairCipher, NULL, 1);
		else
		{	a->PairCipher = NULL;
			if (soap_blist_PairCipher)
				soap_end_block(soap, soap_blist_PairCipher);
		}
		if (a->GroupCipher)
			soap_pop_block(soap, soap_blist_GroupCipher);
		if (a->__sizeGroupCipher)
			a->GroupCipher = (enum tt__Dot11Cipher *)soap_save_block(soap, soap_blist_GroupCipher, NULL, 1);
		else
		{	a->GroupCipher = NULL;
			if (soap_blist_GroupCipher)
				soap_end_block(soap, soap_blist_GroupCipher);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Dot11AvailableNetworks *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11AvailableNetworks, 0, sizeof(struct tt__Dot11AvailableNetworks), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11AvailableNetworks(struct soap *soap, const struct tt__Dot11AvailableNetworks *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11AvailableNetworks);
	if (soap_out_tt__Dot11AvailableNetworks(soap, tag?tag:"tt:Dot11AvailableNetworks", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11AvailableNetworks * SOAP_FMAC4 soap_get_tt__Dot11AvailableNetworks(struct soap *soap, struct tt__Dot11AvailableNetworks *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AvailableNetworks(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11Status(struct soap *soap, struct tt__Dot11Status *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Dot11SSIDType(soap, &a->SSID);
	soap_default_string(soap, &a->BSSID);
	a->PairCipher = NULL;
	a->GroupCipher = NULL;
	a->SignalStrength = NULL;
	soap_default_tt__ReferenceToken(soap, &a->ActiveConfigAlias);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11Status(struct soap *soap, const struct tt__Dot11Status *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &a->SSID);
	soap_serialize_string(soap, &a->BSSID);
	soap_serialize_PointerTott__Dot11Cipher(soap, &a->PairCipher);
	soap_serialize_PointerTott__Dot11Cipher(soap, &a->GroupCipher);
	soap_serialize_PointerTott__Dot11SignalStrength(soap, &a->SignalStrength);
	soap_serialize_tt__ReferenceToken(soap, &a->ActiveConfigAlias);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Status(struct soap *soap, const char *tag, int id, const struct tt__Dot11Status *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Status), type))
		return soap->error;
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &a->SSID, ""))
		return soap->error;
	if (soap_out_string(soap, "tt:BSSID", -1, &a->BSSID, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:PairCipher", -1, &a->PairCipher, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:GroupCipher", -1, &a->GroupCipher, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", -1, &a->SignalStrength, ""))
		return soap->error;
	if (a->ActiveConfigAlias)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:ActiveConfigAlias", -1, &a->ActiveConfigAlias, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ActiveConfigAlias"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11Status * SOAP_FMAC4 soap_in_tt__Dot11Status(struct soap *soap, const char *tag, struct tt__Dot11Status *a, const char *type)
{
	size_t soap_flag_SSID = 1;
	size_t soap_flag_BSSID = 1;
	size_t soap_flag_PairCipher = 1;
	size_t soap_flag_GroupCipher = 1;
	size_t soap_flag_SignalStrength = 1;
	size_t soap_flag_ActiveConfigAlias = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11Status *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Status, sizeof(struct tt__Dot11Status), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11Status(soap, a);
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
			if (soap_flag_BSSID && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:BSSID", &a->BSSID, "xsd:string"))
				{	soap_flag_BSSID--;
					continue;
				}
			if (soap_flag_PairCipher && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:PairCipher", &a->PairCipher, "tt:Dot11Cipher"))
				{	soap_flag_PairCipher--;
					continue;
				}
			if (soap_flag_GroupCipher && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:GroupCipher", &a->GroupCipher, "tt:Dot11Cipher"))
				{	soap_flag_GroupCipher--;
					continue;
				}
			if (soap_flag_SignalStrength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", &a->SignalStrength, "tt:Dot11SignalStrength"))
				{	soap_flag_SignalStrength--;
					continue;
				}
			if (soap_flag_ActiveConfigAlias && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:ActiveConfigAlias", &a->ActiveConfigAlias, "tt:ReferenceToken"))
				{	soap_flag_ActiveConfigAlias--;
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
	{	a = (struct tt__Dot11Status *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Status, 0, sizeof(struct tt__Dot11Status), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID > 0 || soap_flag_ActiveConfigAlias > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11Status(struct soap *soap, const struct tt__Dot11Status *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11Status);
	if (soap_out_tt__Dot11Status(soap, tag?tag:"tt:Dot11Status", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11Status * SOAP_FMAC4 soap_get_tt__Dot11Status(struct soap *soap, struct tt__Dot11Status *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Status(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11Capabilities(struct soap *soap, struct tt__Dot11Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->TKIP);
	soap_default_xsd__boolean(soap, &a->ScanAvailableNetworks);
	soap_default_xsd__boolean(soap, &a->MultipleConfiguration);
	soap_default_xsd__boolean(soap, &a->AdHocStationMode);
	soap_default_xsd__boolean(soap, &a->WEP);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11Capabilities(struct soap *soap, const struct tt__Dot11Capabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->TKIP, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->ScanAvailableNetworks, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->MultipleConfiguration, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->AdHocStationMode, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->WEP, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Capabilities(struct soap *soap, const char *tag, int id, const struct tt__Dot11Capabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Capabilities), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:TKIP", -1, &a->TKIP, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:ScanAvailableNetworks", -1, &a->ScanAvailableNetworks, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:MultipleConfiguration", -1, &a->MultipleConfiguration, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AdHocStationMode", -1, &a->AdHocStationMode, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:WEP", -1, &a->WEP, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11Capabilities * SOAP_FMAC4 soap_in_tt__Dot11Capabilities(struct soap *soap, const char *tag, struct tt__Dot11Capabilities *a, const char *type)
{
	size_t soap_flag_TKIP = 1;
	size_t soap_flag_ScanAvailableNetworks = 1;
	size_t soap_flag_MultipleConfiguration = 1;
	size_t soap_flag_AdHocStationMode = 1;
	size_t soap_flag_WEP = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Capabilities, sizeof(struct tt__Dot11Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11Capabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TKIP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:TKIP", &a->TKIP, "xsd:boolean"))
				{	soap_flag_TKIP--;
					continue;
				}
			if (soap_flag_ScanAvailableNetworks && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:ScanAvailableNetworks", &a->ScanAvailableNetworks, "xsd:boolean"))
				{	soap_flag_ScanAvailableNetworks--;
					continue;
				}
			if (soap_flag_MultipleConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:MultipleConfiguration", &a->MultipleConfiguration, "xsd:boolean"))
				{	soap_flag_MultipleConfiguration--;
					continue;
				}
			if (soap_flag_AdHocStationMode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AdHocStationMode", &a->AdHocStationMode, "xsd:boolean"))
				{	soap_flag_AdHocStationMode--;
					continue;
				}
			if (soap_flag_WEP && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:WEP", &a->WEP, "xsd:boolean"))
				{	soap_flag_WEP--;
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
	{	a = (struct tt__Dot11Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Capabilities, 0, sizeof(struct tt__Dot11Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TKIP > 0 || soap_flag_ScanAvailableNetworks > 0 || soap_flag_MultipleConfiguration > 0 || soap_flag_AdHocStationMode > 0 || soap_flag_WEP > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11Capabilities(struct soap *soap, const struct tt__Dot11Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11Capabilities);
	if (soap_out_tt__Dot11Capabilities(soap, tag?tag:"tt:Dot11Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11Capabilities * SOAP_FMAC4 soap_get_tt__Dot11Capabilities(struct soap *soap, struct tt__Dot11Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11PSKSetExtension(struct soap *soap, struct tt__Dot11PSKSetExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11PSKSetExtension(struct soap *soap, const struct tt__Dot11PSKSetExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSKSetExtension(struct soap *soap, const char *tag, int id, const struct tt__Dot11PSKSetExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11PSKSetExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11PSKSetExtension * SOAP_FMAC4 soap_in_tt__Dot11PSKSetExtension(struct soap *soap, const char *tag, struct tt__Dot11PSKSetExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11PSKSetExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSKSetExtension, sizeof(struct tt__Dot11PSKSetExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11PSKSetExtension(soap, a);
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
	{	a = (struct tt__Dot11PSKSetExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSKSetExtension, 0, sizeof(struct tt__Dot11PSKSetExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11PSKSetExtension(struct soap *soap, const struct tt__Dot11PSKSetExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSKSetExtension);
	if (soap_out_tt__Dot11PSKSetExtension(soap, tag?tag:"tt:Dot11PSKSetExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11PSKSetExtension * SOAP_FMAC4 soap_get_tt__Dot11PSKSetExtension(struct soap *soap, struct tt__Dot11PSKSetExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSKSetExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11SecurityConfigurationExtension(struct soap *soap, struct tt__Dot11SecurityConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const struct tt__Dot11SecurityConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__Dot11SecurityConfigurationExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11SecurityConfigurationExtension * SOAP_FMAC4 soap_in_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const char *tag, struct tt__Dot11SecurityConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11SecurityConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension, sizeof(struct tt__Dot11SecurityConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11SecurityConfigurationExtension(soap, a);
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
	{	a = (struct tt__Dot11SecurityConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension, 0, sizeof(struct tt__Dot11SecurityConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const struct tt__Dot11SecurityConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension);
	if (soap_out_tt__Dot11SecurityConfigurationExtension(soap, tag?tag:"tt:Dot11SecurityConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11SecurityConfigurationExtension * SOAP_FMAC4 soap_get_tt__Dot11SecurityConfigurationExtension(struct soap *soap, struct tt__Dot11SecurityConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11PSKSet(struct soap *soap, struct tt__Dot11PSKSet *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Key = NULL;
	soap_default_tt__Dot11PSKPassphrase(soap, &a->Passphrase);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11PSKSet(struct soap *soap, const struct tt__Dot11PSKSet *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Dot11PSK(soap, &a->Key);
	soap_serialize_tt__Dot11PSKPassphrase(soap, &a->Passphrase);
	soap_serialize_PointerTott__Dot11PSKSetExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSKSet(struct soap *soap, const char *tag, int id, const struct tt__Dot11PSKSet *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11PSKSet), type))
		return soap->error;
	if (soap_out_PointerTott__Dot11PSK(soap, "tt:Key", -1, &a->Key, ""))
		return soap->error;
	if (soap_out_tt__Dot11PSKPassphrase(soap, "tt:Passphrase", -1, &a->Passphrase, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11PSKSetExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11PSKSet * SOAP_FMAC4 soap_in_tt__Dot11PSKSet(struct soap *soap, const char *tag, struct tt__Dot11PSKSet *a, const char *type)
{
	size_t soap_flag_Key = 1;
	size_t soap_flag_Passphrase = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11PSKSet *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSKSet, sizeof(struct tt__Dot11PSKSet), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11PSKSet(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Key && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSK(soap, "tt:Key", &a->Key, "tt:Dot11PSK"))
				{	soap_flag_Key--;
					continue;
				}
			if (soap_flag_Passphrase && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Dot11PSKPassphrase(soap, "tt:Passphrase", &a->Passphrase, "tt:Dot11PSKPassphrase"))
				{	soap_flag_Passphrase--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSKSetExtension(soap, "tt:Extension", &a->Extension, "tt:Dot11PSKSetExtension"))
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
	{	a = (struct tt__Dot11PSKSet *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSKSet, 0, sizeof(struct tt__Dot11PSKSet), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11PSKSet(struct soap *soap, const struct tt__Dot11PSKSet *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSKSet);
	if (soap_out_tt__Dot11PSKSet(soap, tag?tag:"tt:Dot11PSKSet", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11PSKSet * SOAP_FMAC4 soap_get_tt__Dot11PSKSet(struct soap *soap, struct tt__Dot11PSKSet *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSKSet(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11SecurityConfiguration(struct soap *soap, struct tt__Dot11SecurityConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Dot11SecurityMode(soap, &a->Mode);
	a->Algorithm = NULL;
	a->PSK = NULL;
	soap_default_tt__ReferenceToken(soap, &a->Dot1X);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Dot11SecurityConfiguration(struct soap *soap, const struct tt__Dot11SecurityConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Dot11Cipher(soap, &a->Algorithm);
	soap_serialize_PointerTott__Dot11PSKSet(soap, &a->PSK);
	soap_serialize_tt__ReferenceToken(soap, &a->Dot1X);
	soap_serialize_PointerTott__Dot11SecurityConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityConfiguration(struct soap *soap, const char *tag, int id, const struct tt__Dot11SecurityConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SecurityConfiguration), type))
		return soap->error;
	if (soap_out_tt__Dot11SecurityMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:Algorithm", -1, &a->Algorithm, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11PSKSet(soap, "tt:PSK", -1, &a->PSK, ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:Dot1X", -1, &a->Dot1X, ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11SecurityConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Dot11SecurityConfiguration * SOAP_FMAC4 soap_in_tt__Dot11SecurityConfiguration(struct soap *soap, const char *tag, struct tt__Dot11SecurityConfiguration *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Algorithm = 1;
	size_t soap_flag_PSK = 1;
	size_t soap_flag_Dot1X = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Dot11SecurityConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityConfiguration, sizeof(struct tt__Dot11SecurityConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Dot11SecurityConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SecurityMode(soap, "tt:Mode", &a->Mode, "tt:Dot11SecurityMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Algorithm && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:Algorithm", &a->Algorithm, "tt:Dot11Cipher"))
				{	soap_flag_Algorithm--;
					continue;
				}
			if (soap_flag_PSK && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSKSet(soap, "tt:PSK", &a->PSK, "tt:Dot11PSKSet"))
				{	soap_flag_PSK--;
					continue;
				}
			if (soap_flag_Dot1X && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Dot1X", &a->Dot1X, "tt:ReferenceToken"))
				{	soap_flag_Dot1X--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SecurityConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:Dot11SecurityConfigurationExtension"))
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
	{	a = (struct tt__Dot11SecurityConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SecurityConfiguration, 0, sizeof(struct tt__Dot11SecurityConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SecurityConfiguration(struct soap *soap, const struct tt__Dot11SecurityConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityConfiguration);
	if (soap_out_tt__Dot11SecurityConfiguration(soap, tag?tag:"tt:Dot11SecurityConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Dot11SecurityConfiguration * SOAP_FMAC4 soap_get_tt__Dot11SecurityConfiguration(struct soap *soap, struct tt__Dot11SecurityConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPAddressFilterExtension(struct soap *soap, struct tt__IPAddressFilterExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPAddressFilterExtension(struct soap *soap, const struct tt__IPAddressFilterExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilterExtension(struct soap *soap, const char *tag, int id, const struct tt__IPAddressFilterExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddressFilterExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPAddressFilterExtension * SOAP_FMAC4 soap_in_tt__IPAddressFilterExtension(struct soap *soap, const char *tag, struct tt__IPAddressFilterExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPAddressFilterExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilterExtension, sizeof(struct tt__IPAddressFilterExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPAddressFilterExtension(soap, a);
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
	{	a = (struct tt__IPAddressFilterExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddressFilterExtension, 0, sizeof(struct tt__IPAddressFilterExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPAddressFilterExtension(struct soap *soap, const struct tt__IPAddressFilterExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilterExtension);
	if (soap_out_tt__IPAddressFilterExtension(soap, tag?tag:"tt:IPAddressFilterExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPAddressFilterExtension * SOAP_FMAC4 soap_get_tt__IPAddressFilterExtension(struct soap *soap, struct tt__IPAddressFilterExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilterExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPAddressFilter(struct soap *soap, struct tt__IPAddressFilter *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__IPAddressFilterType(soap, &a->Type);
	a->__sizeIPv4Address = 0;
	a->IPv4Address = NULL;
	a->__sizeIPv6Address = 0;
	a->IPv6Address = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPAddressFilter(struct soap *soap, const struct tt__IPAddressFilter *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->IPv4Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv4Address; i++)
		{
			soap_embedded(soap, a->IPv4Address + i, SOAP_TYPE_tt__PrefixedIPv4Address);
			soap_serialize_tt__PrefixedIPv4Address(soap, a->IPv4Address + i);
		}
	}
	if (a->IPv6Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv6Address; i++)
		{
			soap_embedded(soap, a->IPv6Address + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->IPv6Address + i);
		}
	}
	soap_serialize_PointerTott__IPAddressFilterExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilter(struct soap *soap, const char *tag, int id, const struct tt__IPAddressFilter *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddressFilter), type))
		return soap->error;
	if (soap_out_tt__IPAddressFilterType(soap, "tt:Type", -1, &a->Type, ""))
		return soap->error;
	if (a->IPv4Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv4Address; i++)
			if (soap_out_tt__PrefixedIPv4Address(soap, "tt:IPv4Address", -1, a->IPv4Address + i, ""))
				return soap->error;
	}
	if (a->IPv6Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv6Address; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:IPv6Address", -1, a->IPv6Address + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPAddressFilterExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IPAddressFilter * SOAP_FMAC4 soap_in_tt__IPAddressFilter(struct soap *soap, const char *tag, struct tt__IPAddressFilter *a, const char *type)
{
	size_t soap_flag_Type = 1;
	struct soap_blist *soap_blist_IPv4Address = NULL;
	struct soap_blist *soap_blist_IPv6Address = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__IPAddressFilter *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilter, sizeof(struct tt__IPAddressFilter), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__IPAddressFilter(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPAddressFilterType(soap, "tt:Type", &a->Type, "tt:IPAddressFilterType"))
				{	soap_flag_Type--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv4Address", 1, NULL))
			{	if (a->IPv4Address == NULL)
				{	if (soap_blist_IPv4Address == NULL)
						soap_blist_IPv4Address = soap_new_block(soap);
					a->IPv4Address = (struct tt__PrefixedIPv4Address *)soap_push_block(soap, soap_blist_IPv4Address, sizeof(struct tt__PrefixedIPv4Address));
					if (a->IPv4Address == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv4Address(soap, a->IPv4Address);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv4Address(soap, "tt:IPv4Address", a->IPv4Address, "tt:PrefixedIPv4Address"))
				{	a->__sizeIPv4Address++;
					a->IPv4Address = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv6Address", 1, NULL))
			{	if (a->IPv6Address == NULL)
				{	if (soap_blist_IPv6Address == NULL)
						soap_blist_IPv6Address = soap_new_block(soap);
					a->IPv6Address = (struct tt__PrefixedIPv6Address *)soap_push_block(soap, soap_blist_IPv6Address, sizeof(struct tt__PrefixedIPv6Address));
					if (a->IPv6Address == NULL)
						return NULL;
					soap_default_tt__PrefixedIPv6Address(soap, a->IPv6Address);
				}
				soap_revert(soap);
				if (soap_in_tt__PrefixedIPv6Address(soap, "tt:IPv6Address", a->IPv6Address, "tt:PrefixedIPv6Address"))
				{	a->__sizeIPv6Address++;
					a->IPv6Address = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPAddressFilterExtension(soap, "tt:Extension", &a->Extension, "tt:IPAddressFilterExtension"))
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
		if (a->IPv4Address)
			soap_pop_block(soap, soap_blist_IPv4Address);
		if (a->__sizeIPv4Address)
			a->IPv4Address = (struct tt__PrefixedIPv4Address *)soap_save_block(soap, soap_blist_IPv4Address, NULL, 1);
		else
		{	a->IPv4Address = NULL;
			if (soap_blist_IPv4Address)
				soap_end_block(soap, soap_blist_IPv4Address);
		}
		if (a->IPv6Address)
			soap_pop_block(soap, soap_blist_IPv6Address);
		if (a->__sizeIPv6Address)
			a->IPv6Address = (struct tt__PrefixedIPv6Address *)soap_save_block(soap, soap_blist_IPv6Address, NULL, 1);
		else
		{	a->IPv6Address = NULL;
			if (soap_blist_IPv6Address)
				soap_end_block(soap, soap_blist_IPv6Address);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__IPAddressFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddressFilter, 0, sizeof(struct tt__IPAddressFilter), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPAddressFilter(struct soap *soap, const struct tt__IPAddressFilter *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilter);
	if (soap_out_tt__IPAddressFilter(soap, tag?tag:"tt:IPAddressFilter", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IPAddressFilter * SOAP_FMAC4 soap_get_tt__IPAddressFilter(struct soap *soap, struct tt__IPAddressFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkZeroConfigurationExtension2(struct soap *soap, struct tt__NetworkZeroConfigurationExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const struct tt__NetworkZeroConfigurationExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const char *tag, int id, const struct tt__NetworkZeroConfigurationExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkZeroConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const char *tag, struct tt__NetworkZeroConfigurationExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkZeroConfigurationExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2, sizeof(struct tt__NetworkZeroConfigurationExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkZeroConfigurationExtension2(soap, a);
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
	{	a = (struct tt__NetworkZeroConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2, 0, sizeof(struct tt__NetworkZeroConfigurationExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const struct tt__NetworkZeroConfigurationExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2);
	if (soap_out_tt__NetworkZeroConfigurationExtension2(soap, tag?tag:"tt:NetworkZeroConfigurationExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkZeroConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__NetworkZeroConfigurationExtension2(struct soap *soap, struct tt__NetworkZeroConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkZeroConfigurationExtension(struct soap *soap, struct tt__NetworkZeroConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__sizeAdditional = 0;
	a->Additional = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkZeroConfigurationExtension(struct soap *soap, const struct tt__NetworkZeroConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Additional)
	{	int i;
		for (i = 0; i < a->__sizeAdditional; i++)
		{
			soap_embedded(soap, a->Additional + i, SOAP_TYPE_tt__NetworkZeroConfiguration);
			soap_serialize_tt__NetworkZeroConfiguration(soap, a->Additional + i);
		}
	}
	soap_serialize_PointerTott__NetworkZeroConfigurationExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkZeroConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (a->Additional)
	{	int i;
		for (i = 0; i < a->__sizeAdditional; i++)
			if (soap_out_tt__NetworkZeroConfiguration(soap, "tt:Additional", -1, a->Additional + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkZeroConfigurationExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkZeroConfigurationExtension * SOAP_FMAC4 soap_in_tt__NetworkZeroConfigurationExtension(struct soap *soap, const char *tag, struct tt__NetworkZeroConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	struct soap_blist *soap_blist_Additional = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkZeroConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension, sizeof(struct tt__NetworkZeroConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkZeroConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Additional", 1, NULL))
			{	if (a->Additional == NULL)
				{	if (soap_blist_Additional == NULL)
						soap_blist_Additional = soap_new_block(soap);
					a->Additional = (struct tt__NetworkZeroConfiguration *)soap_push_block(soap, soap_blist_Additional, sizeof(struct tt__NetworkZeroConfiguration));
					if (a->Additional == NULL)
						return NULL;
					soap_default_tt__NetworkZeroConfiguration(soap, a->Additional);
				}
				soap_revert(soap);
				if (soap_in_tt__NetworkZeroConfiguration(soap, "tt:Additional", a->Additional, "tt:NetworkZeroConfiguration"))
				{	a->__sizeAdditional++;
					a->Additional = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkZeroConfigurationExtension2(soap, "tt:Extension", &a->Extension, "tt:NetworkZeroConfigurationExtension2"))
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
		if (a->Additional)
			soap_pop_block(soap, soap_blist_Additional);
		if (a->__sizeAdditional)
			a->Additional = (struct tt__NetworkZeroConfiguration *)soap_save_block(soap, soap_blist_Additional, NULL, 1);
		else
		{	a->Additional = NULL;
			if (soap_blist_Additional)
				soap_end_block(soap, soap_blist_Additional);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NetworkZeroConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfigurationExtension, 0, sizeof(struct tt__NetworkZeroConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkZeroConfigurationExtension(struct soap *soap, const struct tt__NetworkZeroConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfigurationExtension);
	if (soap_out_tt__NetworkZeroConfigurationExtension(soap, tag?tag:"tt:NetworkZeroConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkZeroConfigurationExtension * SOAP_FMAC4 soap_get_tt__NetworkZeroConfigurationExtension(struct soap *soap, struct tt__NetworkZeroConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkZeroConfiguration(struct soap *soap, struct tt__NetworkZeroConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->InterfaceToken);
	soap_default_xsd__boolean(soap, &a->Enabled);
	a->__sizeAddresses = 0;
	a->Addresses = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkZeroConfiguration(struct soap *soap, const struct tt__NetworkZeroConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->InterfaceToken);
	soap_embedded(soap, &a->Enabled, SOAP_TYPE_xsd__boolean);
	if (a->Addresses)
	{	int i;
		for (i = 0; i < a->__sizeAddresses; i++)
		{
			soap_serialize_tt__IPv4Address(soap, a->Addresses + i);
		}
	}
	soap_serialize_PointerTott__NetworkZeroConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfiguration(struct soap *soap, const char *tag, int id, const struct tt__NetworkZeroConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfiguration), type))
		return soap->error;
	if (a->InterfaceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:InterfaceToken", -1, &a->InterfaceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:InterfaceToken"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (a->Addresses)
	{	int i;
		for (i = 0; i < a->__sizeAddresses; i++)
			if (soap_out_tt__IPv4Address(soap, "tt:Addresses", -1, a->Addresses + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkZeroConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkZeroConfiguration * SOAP_FMAC4 soap_in_tt__NetworkZeroConfiguration(struct soap *soap, const char *tag, struct tt__NetworkZeroConfiguration *a, const char *type)
{
	size_t soap_flag_InterfaceToken = 1;
	size_t soap_flag_Enabled = 1;
	struct soap_blist *soap_blist_Addresses = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkZeroConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfiguration, sizeof(struct tt__NetworkZeroConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkZeroConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_InterfaceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:InterfaceToken", &a->InterfaceToken, "tt:ReferenceToken"))
				{	soap_flag_InterfaceToken--;
					continue;
				}
			if (soap_flag_Enabled && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:Enabled", &a->Enabled, "xsd:boolean"))
				{	soap_flag_Enabled--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Addresses", 1, NULL))
			{	if (a->Addresses == NULL)
				{	if (soap_blist_Addresses == NULL)
						soap_blist_Addresses = soap_new_block(soap);
					a->Addresses = (char **)soap_push_block(soap, soap_blist_Addresses, sizeof(char *));
					if (a->Addresses == NULL)
						return NULL;
					*a->Addresses = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv4Address(soap, "tt:Addresses", a->Addresses, "tt:IPv4Address"))
				{	a->__sizeAddresses++;
					a->Addresses = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkZeroConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkZeroConfigurationExtension"))
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
		if (a->Addresses)
			soap_pop_block(soap, soap_blist_Addresses);
		if (a->__sizeAddresses)
			a->Addresses = (char **)soap_save_block(soap, soap_blist_Addresses, NULL, 1);
		else
		{	a->Addresses = NULL;
			if (soap_blist_Addresses)
				soap_end_block(soap, soap_blist_Addresses);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NetworkZeroConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfiguration, 0, sizeof(struct tt__NetworkZeroConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_InterfaceToken > 0 || soap_flag_Enabled > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkZeroConfiguration(struct soap *soap, const struct tt__NetworkZeroConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfiguration);
	if (soap_out_tt__NetworkZeroConfiguration(soap, tag?tag:"tt:NetworkZeroConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkZeroConfiguration * SOAP_FMAC4 soap_get_tt__NetworkZeroConfiguration(struct soap *soap, struct tt__NetworkZeroConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkGateway(struct soap *soap, struct tt__NetworkGateway *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeIPv4Address = 0;
	a->IPv4Address = NULL;
	a->__sizeIPv6Address = 0;
	a->IPv6Address = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkGateway(struct soap *soap, const struct tt__NetworkGateway *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->IPv4Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv4Address; i++)
		{
			soap_serialize_tt__IPv4Address(soap, a->IPv4Address + i);
		}
	}
	if (a->IPv6Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv6Address; i++)
		{
			soap_serialize_tt__IPv6Address(soap, a->IPv6Address + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkGateway(struct soap *soap, const char *tag, int id, const struct tt__NetworkGateway *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkGateway), type))
		return soap->error;
	if (a->IPv4Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv4Address; i++)
			if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, a->IPv4Address + i, ""))
				return soap->error;
	}
	if (a->IPv6Address)
	{	int i;
		for (i = 0; i < a->__sizeIPv6Address; i++)
			if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, a->IPv6Address + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkGateway * SOAP_FMAC4 soap_in_tt__NetworkGateway(struct soap *soap, const char *tag, struct tt__NetworkGateway *a, const char *type)
{
	struct soap_blist *soap_blist_IPv4Address = NULL;
	struct soap_blist *soap_blist_IPv6Address = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkGateway *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkGateway, sizeof(struct tt__NetworkGateway), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkGateway(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv4Address", 1, NULL))
			{	if (a->IPv4Address == NULL)
				{	if (soap_blist_IPv4Address == NULL)
						soap_blist_IPv4Address = soap_new_block(soap);
					a->IPv4Address = (char **)soap_push_block(soap, soap_blist_IPv4Address, sizeof(char *));
					if (a->IPv4Address == NULL)
						return NULL;
					*a->IPv4Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", a->IPv4Address, "tt:IPv4Address"))
				{	a->__sizeIPv4Address++;
					a->IPv4Address = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv6Address", 1, NULL))
			{	if (a->IPv6Address == NULL)
				{	if (soap_blist_IPv6Address == NULL)
						soap_blist_IPv6Address = soap_new_block(soap);
					a->IPv6Address = (char **)soap_push_block(soap, soap_blist_IPv6Address, sizeof(char *));
					if (a->IPv6Address == NULL)
						return NULL;
					*a->IPv6Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", a->IPv6Address, "tt:IPv6Address"))
				{	a->__sizeIPv6Address++;
					a->IPv6Address = NULL;
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
		if (a->IPv4Address)
			soap_pop_block(soap, soap_blist_IPv4Address);
		if (a->__sizeIPv4Address)
			a->IPv4Address = (char **)soap_save_block(soap, soap_blist_IPv4Address, NULL, 1);
		else
		{	a->IPv4Address = NULL;
			if (soap_blist_IPv4Address)
				soap_end_block(soap, soap_blist_IPv4Address);
		}
		if (a->IPv6Address)
			soap_pop_block(soap, soap_blist_IPv6Address);
		if (a->__sizeIPv6Address)
			a->IPv6Address = (char **)soap_save_block(soap, soap_blist_IPv6Address, NULL, 1);
		else
		{	a->IPv6Address = NULL;
			if (soap_blist_IPv6Address)
				soap_end_block(soap, soap_blist_IPv6Address);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__NetworkGateway *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkGateway, 0, sizeof(struct tt__NetworkGateway), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkGateway(struct soap *soap, const struct tt__NetworkGateway *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkGateway);
	if (soap_out_tt__NetworkGateway(soap, tag?tag:"tt:NetworkGateway", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkGateway * SOAP_FMAC4 soap_get_tt__NetworkGateway(struct soap *soap, struct tt__NetworkGateway *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkGateway(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, struct tt__NetworkInterfaceSetConfigurationExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const struct tt__NetworkInterfaceSetConfigurationExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceSetConfigurationExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const char *tag, struct tt__NetworkInterfaceSetConfigurationExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceSetConfigurationExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2, sizeof(struct tt__NetworkInterfaceSetConfigurationExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceSetConfigurationExtension2(soap, a);
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
	{	a = (struct tt__NetworkInterfaceSetConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2, 0, sizeof(struct tt__NetworkInterfaceSetConfigurationExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const struct tt__NetworkInterfaceSetConfigurationExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2);
	if (soap_out_tt__NetworkInterfaceSetConfigurationExtension2(soap, tag?tag:"tt:NetworkInterfaceSetConfigurationExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, struct tt__NetworkInterfaceSetConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, struct tt__NetworkInterfaceSetConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__sizeDot3 = 0;
	a->Dot3 = NULL;
	a->__sizeDot11 = 0;
	a->Dot11 = NULL;
	a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const struct tt__NetworkInterfaceSetConfigurationExtension *a)
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
	soap_serialize_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkInterfaceSetConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
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
	if (soap_out_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfigurationExtension * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const char *tag, struct tt__NetworkInterfaceSetConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	struct soap_blist *soap_blist_Dot3 = NULL;
	struct soap_blist *soap_blist_Dot11 = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__NetworkInterfaceSetConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension, sizeof(struct tt__NetworkInterfaceSetConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__NetworkInterfaceSetConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
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
				if (soap_in_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, "tt:Extension", &a->Extension, "tt:NetworkInterfaceSetConfigurationExtension2"))
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
	{	a = (struct tt__NetworkInterfaceSetConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension, 0, sizeof(struct tt__NetworkInterfaceSetConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const struct tt__NetworkInterfaceSetConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension);
	if (soap_out_tt__NetworkInterfaceSetConfigurationExtension(soap, tag?tag:"tt:NetworkInterfaceSetConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkInterfaceSetConfigurationExtension * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, struct tt__NetworkInterfaceSetConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, struct tt__IPv6NetworkInterfaceSetConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Enabled = NULL;
	a->AcceptRouterAdvert = NULL;
	a->__sizeManual = 0;
	a->Manual = NULL;
	a->DHCP = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const struct tt__IPv6NetworkInterfaceSetConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToxsd__boolean(soap, &a->Enabled);
	soap_serialize_PointerToxsd__boolean(soap, &a->AcceptRouterAdvert);
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
		{
			soap_embedded(soap, a->Manual + i, SOAP_TYPE_tt__PrefixedIPv6Address);
			soap_serialize_tt__PrefixedIPv6Address(soap, a->Manual + i);
		}
	}
	soap_serialize_PointerTott__IPv6DHCPConfiguration(soap, &a->DHCP);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const struct tt__IPv6NetworkInterfaceSetConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration), type))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:Enabled", -1, &a->Enabled, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:AcceptRouterAdvert", -1, &a->AcceptRouterAdvert, ""))
		return soap->error;
	if (a->Manual)
	{	int i;
		for (i = 0; i < a->__sizeManual; i++)
			if (soap_out_tt__PrefixedIPv6Address(soap, "tt:Manual", -1, a->Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPv6DHCPConfiguration(soap, "tt:DHCP", -1, &a->DHCP, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

#ifdef __cplusplus
}
#endif

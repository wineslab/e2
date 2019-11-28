/*
 * Copyright 2019 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This source code is part of the near-RT RIC (RAN Intelligent Controller)
 * platform project (RICP).
 */



/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "DLResourceBitmapULandDLSharing.h"

int
DLResourceBitmapULandDLSharing_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const DataTrafficResources_t *st = (const DataTrafficResources_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 17600)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using DataTrafficResources,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_DLResourceBitmapULandDLSharing_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 15,  15,  6,  17600 }	/* (SIZE(6..17600)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_DLResourceBitmapULandDLSharing_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DLResourceBitmapULandDLSharing = {
	"DLResourceBitmapULandDLSharing",
	"DLResourceBitmapULandDLSharing",
	&asn_OP_BIT_STRING,
	asn_DEF_DLResourceBitmapULandDLSharing_tags_1,
	sizeof(asn_DEF_DLResourceBitmapULandDLSharing_tags_1)
		/sizeof(asn_DEF_DLResourceBitmapULandDLSharing_tags_1[0]), /* 1 */
	asn_DEF_DLResourceBitmapULandDLSharing_tags_1,	/* Same as above */
	sizeof(asn_DEF_DLResourceBitmapULandDLSharing_tags_1)
		/sizeof(asn_DEF_DLResourceBitmapULandDLSharing_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_DLResourceBitmapULandDLSharing_constr_1, DLResourceBitmapULandDLSharing_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};


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

#ifndef	_ReportIntervalMDT_H_
#define	_ReportIntervalMDT_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportIntervalMDT {
	ReportIntervalMDT_ms120	= 0,
	ReportIntervalMDT_ms240	= 1,
	ReportIntervalMDT_ms480	= 2,
	ReportIntervalMDT_ms640	= 3,
	ReportIntervalMDT_ms1024	= 4,
	ReportIntervalMDT_ms2048	= 5,
	ReportIntervalMDT_ms5120	= 6,
	ReportIntervalMDT_ms10240	= 7,
	ReportIntervalMDT_min1	= 8,
	ReportIntervalMDT_min6	= 9,
	ReportIntervalMDT_min12	= 10,
	ReportIntervalMDT_min30	= 11,
	ReportIntervalMDT_min60	= 12
} e_ReportIntervalMDT;

/* ReportIntervalMDT */
typedef long	 ReportIntervalMDT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReportIntervalMDT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReportIntervalMDT;
extern const asn_INTEGER_specifics_t asn_SPC_ReportIntervalMDT_specs_1;
asn_struct_free_f ReportIntervalMDT_free;
asn_struct_print_f ReportIntervalMDT_print;
asn_constr_check_f ReportIntervalMDT_constraint;
ber_type_decoder_f ReportIntervalMDT_decode_ber;
der_type_encoder_f ReportIntervalMDT_encode_der;
xer_type_decoder_f ReportIntervalMDT_decode_xer;
xer_type_encoder_f ReportIntervalMDT_encode_xer;
per_type_decoder_f ReportIntervalMDT_decode_uper;
per_type_encoder_f ReportIntervalMDT_encode_uper;
per_type_decoder_f ReportIntervalMDT_decode_aper;
per_type_encoder_f ReportIntervalMDT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportIntervalMDT_H_ */
#include "asn_internal.h"

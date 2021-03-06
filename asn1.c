#include "app_asn1.h"

ASN1_ITEM_TEMPLATE(NUMBERS) = 
        ASN1_EX_TEMPLATE_TYPE(ASN1_TFLG_SET_OF, 0, NUMBERS, ASN1_PRINTABLE)
ASN1_ITEM_TEMPLATE_END(NUMBERS)
IMPLEMENT_ASN1_FUNCTIONS(NUMBERS)

ASN1_SEQUENCE(TAX_NUMBER) = {
    ASN1_SIMPLE(TAX_NUMBER, object, ASN1_OBJECT),
    ASN1_SIMPLE(TAX_NUMBER, value, NUMBERS)
} ASN1_SEQUENCE_END(TAX_NUMBER)
IMPLEMENT_ASN1_FUNCTIONS(TAX_NUMBER)
IMPLEMENT_ASN1_DUP_FUNCTION(TAX_NUMBER)

ASN1_ITEM_TEMPLATE(TAX_NUMBERS) =
        ASN1_EX_TEMPLATE_TYPE(ASN1_TFLG_SEQUENCE_OF, 0, NUMBERS, TAX_NUMBER)
ASN1_ITEM_TEMPLATE_END(TAX_NUMBERS)
IMPLEMENT_ASN1_FUNCTIONS(TAX_NUMBERS)

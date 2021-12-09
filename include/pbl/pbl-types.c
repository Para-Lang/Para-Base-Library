/// @file pbl-types.c
/// @brief Para-C Base Types Implementation, which contains handler macros, conversion functions, default declaration,
/// default definition types and default size macros. This also includes meta-data tracking based on the
/// 'PblMetaVarCtx_T' type.
/// @author Luna-Klatzer
/// @date 2021-11-23
/// @copyright Copyright (c) 2021

#include "./pbl-types.h"

// ---- Cleanup Functions ---------------------------------------------------------------------------------------------

__attribute__((unused)) void __PblBool_T_Cleanup(PblBool_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblSize_T_Cleanup(PblSize_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblChar_T_Cleanup(PblChar_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblUChar_T_Cleanup(PblUChar_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblShort_T_Cleanup(PblShort_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblUShort_T_Cleanup(PblUShort_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblInt_T_Cleanup(PblInt_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblUInt_T_Cleanup(PblUInt_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblLong_T_Cleanup(PblLong_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblULong_T_Cleanup(PblULong_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblLongLong_T_Cleanup(PblLongLong_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblULongLong_T_Cleanup(PblULongLong_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblFloat_T_Cleanup(PblFloat_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblDouble_T_Cleanup(PblDouble_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

__attribute__((unused)) void __PblLongDouble_T_Cleanup(PblLongDouble_T **value) PBL_DEFAULT_CLEANUP_CONSTRUCTOR(value);

// ---- Handler Functions ---------------------------------------------------------------------------------------------

PblBool_T* PblGetBoolT(bool val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblBool_T, bool)
}

PblSize_T* PblGetSizeT(size_t val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblSize_T, size_t)
}

PblChar_T* PblGetCharT(signed char val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblChar_T, signed char)
}

PblUChar_T* PblGetUCharT(unsigned char val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblUChar_T, unsigned char)
}

PblShort_T* PblGetShortT(signed short val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblShort_T, signed short)
}

PblUShort_T* PblGetUShortT(unsigned short val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblUShort_T, unsigned short)
}

PblInt_T* PblGetIntT(signed int val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblInt_T, signed int)
}

PblUInt_T* PblGetUIntT(unsigned int val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblUInt_T, unsigned int)
}

PblLong_T* PblGetLongT(signed long val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblLong_T, signed long)
}

PblULong_T* PblGetULongT(unsigned long val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblULong_T, unsigned long)
}

PblLongLong_T* PblGetLongLongT(signed long long val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblLongLong_T, signed long long)
  }

PblULongLong_T* PblGetULongLongT(unsigned long long val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblULongLong_T, unsigned long long)
}

PblFloat_T* PblGetFloatT(float val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblFloat_T, float)
}

PblDouble_T* PblGetDoubleT(double val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblDouble_T, double)
}

PblLongDouble_T* PblGetLongDoubleT(long double val) {
  PBL_CONVERSION_FUNCTION_DEF_CONSTRUCTOR(PblLongDouble_T, long double)
}
/******************************************************************************
* Copyright 1996-2014 United States Government as represented by the
* Administrator of the National Aeronautics and Space Administration.
* All Rights Reserved.
******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */  
/* --- Epoch routine names need to be consistent with the C and Fortran APIs */
#include <jni.h>
/* Header for class gsfc_nssdc_cdf_CDFNativeLibrary */

#ifndef _Included_gsfc_nssdc_cdf_CDFNativeLibrary
#define _Included_gsfc_nssdc_cdf_CDFNativeLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gsfc_nssdc_cdf_CDFNativeLibrary
 * Method:    cdfNativeLib
 * Signature: (Lgsfc/nssdc/cdf/CDF;Lgsfc/nssdc/cdf/CDFObject;Ljava/util/Vector;)V
 */
JNIEXPORT void JNICALL Java_gsfc_nssdc_cdf_CDFNativeLibrary_cdfNativeLib
  (JNIEnv *, jobject, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class gsfc_nssdc_cdf_util_EpochNative */

#ifndef _Included_gsfc_nssdc_cdf_util_EpochNative
#define _Included_gsfc_nssdc_cdf_util_EpochNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    compute
 * Signature: (JJJJJJJ)D
 */
JNIEXPORT jdouble JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_compute
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    breakdown
 * Signature: (D)[J
 */
JNIEXPORT jlongArray JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_breakdown
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encode
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encode
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encode1
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encode1
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encode2
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encode2
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encode3
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encode3
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encode4
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encode4
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    encodex
 * Signature: (DLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_encodex
  (JNIEnv *, jclass, jdouble, jstring);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    parse
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_parse
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    parse1
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_parse1
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    parse2
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_parse2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gsfc_nssdc_cdf_util_EpochNative
 * Method:    parse3
 * Signature: (Ljava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_gsfc_nssdc_cdf_util_EpochNative_parse3
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif

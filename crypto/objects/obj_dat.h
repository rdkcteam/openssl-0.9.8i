/* crypto/objects/obj_dat.h */

/* THIS FILE IS GENERATED FROM objects.h by obj_dat.pl via the
 * following command:
 * perl obj_dat.pl obj_mac.h obj_dat.h
 */

/* Copyright (C) 1995-1997 Eric Young (eay@cryptsoft.com)
 * All rights reserved.
 *
 * This package is an SSL implementation written
 * by Eric Young (eay@cryptsoft.com).
 * The implementation was written so as to conform with Netscapes SSL.
 * 
 * This library is free for commercial and non-commercial use as long as
 * the following conditions are aheared to.  The following conditions
 * apply to all code found in this distribution, be it the RC4, RSA,
 * lhash, DES, etc., code; not just the SSL code.  The SSL documentation
 * included with this distribution is covered by the same copyright terms
 * except that the holder is Tim Hudson (tjh@cryptsoft.com).
 * 
 * Copyright remains Eric Young's, and as such any Copyright notices in
 * the code are not to be removed.
 * If this package is used in a product, Eric Young should be given attribution
 * as the author of the parts of the library used.
 * This can be in the form of a textual message at program startup or
 * in documentation (online or textual) provided with the package.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *    "This product includes cryptographic software written by
 *     Eric Young (eay@cryptsoft.com)"
 *    The word 'cryptographic' can be left out if the rouines from the library
 *    being used are not cryptographic related :-).
 * 4. If you include any Windows specific code (or a derivative thereof) from 
 *    the apps directory (application code) you must include an acknowledgement:
 *    "This product includes software written by Tim Hudson (tjh@cryptsoft.com)"
 * 
 * THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * 
 * The licence and distribution terms for any publically available version or
 * derivative of this code cannot be changed.  i.e. this code cannot simply be
 * copied and put under another distribution licence
 * [including the GNU Public Licence.]
 */

#define NUM_NID 857
#define NUM_SN 850
#define NUM_LN 850
#define NUM_OBJ 804

static unsigned char lvalues[5711]={
0x00,                                        /* [  0] OBJ_undef */
0x2A,0x86,0x48,0x86,0xF7,0x0D,               /* [  1] OBJ_rsadsi */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,          /* [  7] OBJ_pkcs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x02,     /* [ 14] OBJ_md2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x05,     /* [ 22] OBJ_md5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x04,     /* [ 30] OBJ_rc4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x01,/* [ 38] OBJ_rsaEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x02,/* [ 47] OBJ_md2WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x04,/* [ 56] OBJ_md5WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x01,/* [ 65] OBJ_pbeWithMD2AndDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x03,/* [ 74] OBJ_pbeWithMD5AndDES_CBC */
0x55,                                        /* [ 83] OBJ_X500 */
0x55,0x04,                                   /* [ 84] OBJ_X509 */
0x55,0x04,0x03,                              /* [ 86] OBJ_commonName */
0x55,0x04,0x06,                              /* [ 89] OBJ_countryName */
0x55,0x04,0x07,                              /* [ 92] OBJ_localityName */
0x55,0x04,0x08,                              /* [ 95] OBJ_stateOrProvinceName */
0x55,0x04,0x0A,                              /* [ 98] OBJ_organizationName */
0x55,0x04,0x0B,                              /* [101] OBJ_organizationalUnitName */
0x55,0x08,0x01,0x01,                         /* [104] OBJ_rsa */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,     /* [108] OBJ_pkcs7 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x01,/* [116] OBJ_pkcs7_data */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x02,/* [125] OBJ_pkcs7_signed */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x03,/* [134] OBJ_pkcs7_enveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x04,/* [143] OBJ_pkcs7_signedAndEnveloped */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x05,/* [152] OBJ_pkcs7_digest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x07,0x06,/* [161] OBJ_pkcs7_encrypted */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,     /* [170] OBJ_pkcs3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x03,0x01,/* [178] OBJ_dhKeyAgreement */
0x2B,0x0E,0x03,0x02,0x06,                    /* [187] OBJ_des_ecb */
0x2B,0x0E,0x03,0x02,0x09,                    /* [192] OBJ_des_cfb64 */
0x2B,0x0E,0x03,0x02,0x07,                    /* [197] OBJ_des_cbc */
0x2B,0x0E,0x03,0x02,0x11,                    /* [202] OBJ_des_ede_ecb */
0x2B,0x06,0x01,0x04,0x01,0x81,0x3C,0x07,0x01,0x01,0x02,/* [207] OBJ_idea_cbc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x02,     /* [218] OBJ_rc2_cbc */
0x2B,0x0E,0x03,0x02,0x12,                    /* [226] OBJ_sha */
0x2B,0x0E,0x03,0x02,0x0F,                    /* [231] OBJ_shaWithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x07,     /* [236] OBJ_des_ede3_cbc */
0x2B,0x0E,0x03,0x02,0x08,                    /* [244] OBJ_des_ofb64 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,     /* [249] OBJ_pkcs9 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x01,/* [257] OBJ_pkcs9_emailAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x02,/* [266] OBJ_pkcs9_unstructuredName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x03,/* [275] OBJ_pkcs9_contentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x04,/* [284] OBJ_pkcs9_messageDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x05,/* [293] OBJ_pkcs9_signingTime */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x06,/* [302] OBJ_pkcs9_countersignature */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x07,/* [311] OBJ_pkcs9_challengePassword */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x08,/* [320] OBJ_pkcs9_unstructuredAddress */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x09,/* [329] OBJ_pkcs9_extCertAttributes */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,          /* [338] OBJ_netscape */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,     /* [345] OBJ_netscape_cert_extension */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,     /* [353] OBJ_netscape_data_type */
0x2B,0x0E,0x03,0x02,0x1A,                    /* [361] OBJ_sha1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x05,/* [366] OBJ_sha1WithRSAEncryption */
0x2B,0x0E,0x03,0x02,0x0D,                    /* [375] OBJ_dsaWithSHA */
0x2B,0x0E,0x03,0x02,0x0C,                    /* [380] OBJ_dsa_2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0B,/* [385] OBJ_pbeWithSHA1AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0C,/* [394] OBJ_id_pbkdf2 */
0x2B,0x0E,0x03,0x02,0x1B,                    /* [403] OBJ_dsaWithSHA1_2 */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x01,/* [408] OBJ_netscape_cert_type */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x02,/* [417] OBJ_netscape_base_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x03,/* [426] OBJ_netscape_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x04,/* [435] OBJ_netscape_ca_revocation_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x07,/* [444] OBJ_netscape_renewal_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x08,/* [453] OBJ_netscape_ca_policy_url */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0C,/* [462] OBJ_netscape_ssl_server_name */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x01,0x0D,/* [471] OBJ_netscape_comment */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x02,0x05,/* [480] OBJ_netscape_cert_sequence */
0x55,0x1D,                                   /* [489] OBJ_id_ce */
0x55,0x1D,0x0E,                              /* [491] OBJ_subject_key_identifier */
0x55,0x1D,0x0F,                              /* [494] OBJ_key_usage */
0x55,0x1D,0x10,                              /* [497] OBJ_private_key_usage_period */
0x55,0x1D,0x11,                              /* [500] OBJ_subject_alt_name */
0x55,0x1D,0x12,                              /* [503] OBJ_issuer_alt_name */
0x55,0x1D,0x13,                              /* [506] OBJ_basic_constraints */
0x55,0x1D,0x14,                              /* [509] OBJ_crl_number */
0x55,0x1D,0x20,                              /* [512] OBJ_certificate_policies */
0x55,0x1D,0x23,                              /* [515] OBJ_authority_key_identifier */
0x2B,0x06,0x01,0x04,0x01,0x97,0x55,0x01,0x02,/* [518] OBJ_bf_cbc */
0x55,0x08,0x03,0x65,                         /* [527] OBJ_mdc2 */
0x55,0x08,0x03,0x64,                         /* [531] OBJ_mdc2WithRSA */
0x55,0x04,0x2A,                              /* [535] OBJ_givenName */
0x55,0x04,0x04,                              /* [538] OBJ_surname */
0x55,0x04,0x2B,                              /* [541] OBJ_initials */
0x55,0x1D,0x1F,                              /* [544] OBJ_crl_distribution_points */
0x2B,0x0E,0x03,0x02,0x03,                    /* [547] OBJ_md5WithRSA */
0x55,0x04,0x05,                              /* [552] OBJ_serialNumber */
0x55,0x04,0x0C,                              /* [555] OBJ_title */
0x55,0x04,0x0D,                              /* [558] OBJ_description */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0A,/* [561] OBJ_cast5_cbc */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0C,/* [570] OBJ_pbeWithMD5AndCast5_CBC */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x03,          /* [579] OBJ_dsaWithSHA1 */
0x2B,0x0E,0x03,0x02,0x1D,                    /* [586] OBJ_sha1WithRSA */
0x2A,0x86,0x48,0xCE,0x38,0x04,0x01,          /* [591] OBJ_dsa */
0x2B,0x24,0x03,0x02,0x01,                    /* [598] OBJ_ripemd160 */
0x2B,0x24,0x03,0x03,0x01,0x02,               /* [603] OBJ_ripemd160WithRSA */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x08,     /* [609] OBJ_rc5_cbc */
0x29,0x01,0x01,0x85,0x1A,0x01,               /* [617] OBJ_rle_compression */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x08,/* [623] OBJ_zlib_compression */
0x55,0x1D,0x25,                              /* [634] OBJ_ext_key_usage */
0x2B,0x06,0x01,0x05,0x05,0x07,               /* [637] OBJ_id_pkix */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,          /* [643] OBJ_id_kp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x01,     /* [650] OBJ_server_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x02,     /* [658] OBJ_client_auth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x03,     /* [666] OBJ_code_sign */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x04,     /* [674] OBJ_email_protect */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x08,     /* [682] OBJ_time_stamp */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x15,/* [690] OBJ_ms_code_ind */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x16,/* [700] OBJ_ms_code_com */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x01,/* [710] OBJ_ms_ctl_sign */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x03,/* [720] OBJ_ms_sgc */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x0A,0x03,0x04,/* [730] OBJ_ms_efs */
0x60,0x86,0x48,0x01,0x86,0xF8,0x42,0x04,0x01,/* [740] OBJ_ns_sgc */
0x55,0x1D,0x1B,                              /* [749] OBJ_delta_crl */
0x55,0x1D,0x15,                              /* [752] OBJ_crl_reason */
0x55,0x1D,0x18,                              /* [755] OBJ_invalidity_date */
0x2B,0x65,0x01,0x04,0x01,                    /* [758] OBJ_sxnet */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x01,/* [763] OBJ_pbe_WithSHA1And128BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x02,/* [773] OBJ_pbe_WithSHA1And40BitRC4 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x03,/* [783] OBJ_pbe_WithSHA1And3_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x04,/* [793] OBJ_pbe_WithSHA1And2_Key_TripleDES_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x05,/* [803] OBJ_pbe_WithSHA1And128BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x01,0x06,/* [813] OBJ_pbe_WithSHA1And40BitRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x01,/* [823] OBJ_keyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x02,/* [834] OBJ_pkcs8ShroudedKeyBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x03,/* [845] OBJ_certBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x04,/* [856] OBJ_crlBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x05,/* [867] OBJ_secretBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x0C,0x0A,0x01,0x06,/* [878] OBJ_safeContentsBag */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x14,/* [889] OBJ_friendlyName */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x15,/* [898] OBJ_localKeyID */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x01,/* [907] OBJ_x509Certificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x16,0x02,/* [917] OBJ_sdsiCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x17,0x01,/* [927] OBJ_x509Crl */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0D,/* [937] OBJ_pbes2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0E,/* [946] OBJ_pbmac1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x07,     /* [955] OBJ_hmacWithSHA1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x01,     /* [963] OBJ_id_qt_cps */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x02,     /* [971] OBJ_id_qt_unotice */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0F,/* [979] OBJ_SMIMECapabilities */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x04,/* [988] OBJ_pbeWithMD2AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x06,/* [997] OBJ_pbeWithMD5AndRC2_CBC */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,0x0A,/* [1006] OBJ_pbeWithSHA1AndDES_CBC */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x02,0x01,0x0E,/* [1015] OBJ_ms_ext_req */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x0E,/* [1025] OBJ_ext_req */
0x55,0x04,0x29,                              /* [1034] OBJ_name */
0x55,0x04,0x2E,                              /* [1037] OBJ_dnQualifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,          /* [1040] OBJ_id_pe */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,          /* [1047] OBJ_id_ad */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x01,     /* [1054] OBJ_info_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,     /* [1062] OBJ_ad_OCSP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x02,     /* [1070] OBJ_ad_ca_issuers */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x09,     /* [1078] OBJ_OCSP_sign */
0x28,                                        /* [1086] OBJ_iso */
0x2A,                                        /* [1087] OBJ_member_body */
0x2A,0x86,0x48,                              /* [1088] OBJ_ISO_US */
0x2A,0x86,0x48,0xCE,0x38,                    /* [1091] OBJ_X9_57 */
0x2A,0x86,0x48,0xCE,0x38,0x04,               /* [1096] OBJ_X9cm */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,     /* [1102] OBJ_pkcs1 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x05,     /* [1110] OBJ_pkcs5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,/* [1118] OBJ_SMIME */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,/* [1127] OBJ_id_smime_mod */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,/* [1137] OBJ_id_smime_ct */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,/* [1147] OBJ_id_smime_aa */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,/* [1157] OBJ_id_smime_alg */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,/* [1167] OBJ_id_smime_cd */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,/* [1177] OBJ_id_smime_spq */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,/* [1187] OBJ_id_smime_cti */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x01,/* [1197] OBJ_id_smime_mod_cms */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x02,/* [1208] OBJ_id_smime_mod_ess */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x03,/* [1219] OBJ_id_smime_mod_oid */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x04,/* [1230] OBJ_id_smime_mod_msg_v3 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x05,/* [1241] OBJ_id_smime_mod_ets_eSignature_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x06,/* [1252] OBJ_id_smime_mod_ets_eSignature_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x07,/* [1263] OBJ_id_smime_mod_ets_eSigPolicy_88 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x00,0x08,/* [1274] OBJ_id_smime_mod_ets_eSigPolicy_97 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x01,/* [1285] OBJ_id_smime_ct_receipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x02,/* [1296] OBJ_id_smime_ct_authData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x03,/* [1307] OBJ_id_smime_ct_publishCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x04,/* [1318] OBJ_id_smime_ct_TSTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x05,/* [1329] OBJ_id_smime_ct_TDTInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x06,/* [1340] OBJ_id_smime_ct_contentInfo */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x07,/* [1351] OBJ_id_smime_ct_DVCSRequestData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x08,/* [1362] OBJ_id_smime_ct_DVCSResponseData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x01,/* [1373] OBJ_id_smime_aa_receiptRequest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x02,/* [1384] OBJ_id_smime_aa_securityLabel */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x03,/* [1395] OBJ_id_smime_aa_mlExpandHistory */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x04,/* [1406] OBJ_id_smime_aa_contentHint */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x05,/* [1417] OBJ_id_smime_aa_msgSigDigest */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x06,/* [1428] OBJ_id_smime_aa_encapContentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x07,/* [1439] OBJ_id_smime_aa_contentIdentifier */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x08,/* [1450] OBJ_id_smime_aa_macValue */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x09,/* [1461] OBJ_id_smime_aa_equivalentLabels */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0A,/* [1472] OBJ_id_smime_aa_contentReference */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0B,/* [1483] OBJ_id_smime_aa_encrypKeyPref */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0C,/* [1494] OBJ_id_smime_aa_signingCertificate */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0D,/* [1505] OBJ_id_smime_aa_smimeEncryptCerts */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0E,/* [1516] OBJ_id_smime_aa_timeStampToken */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x0F,/* [1527] OBJ_id_smime_aa_ets_sigPolicyId */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x10,/* [1538] OBJ_id_smime_aa_ets_commitmentType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x11,/* [1549] OBJ_id_smime_aa_ets_signerLocation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x12,/* [1560] OBJ_id_smime_aa_ets_signerAttr */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x13,/* [1571] OBJ_id_smime_aa_ets_otherSigCert */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x14,/* [1582] OBJ_id_smime_aa_ets_contentTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x15,/* [1593] OBJ_id_smime_aa_ets_CertificateRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x16,/* [1604] OBJ_id_smime_aa_ets_RevocationRefs */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x17,/* [1615] OBJ_id_smime_aa_ets_certValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x18,/* [1626] OBJ_id_smime_aa_ets_revocationValues */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x19,/* [1637] OBJ_id_smime_aa_ets_escTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1A,/* [1648] OBJ_id_smime_aa_ets_certCRLTimestamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1B,/* [1659] OBJ_id_smime_aa_ets_archiveTimeStamp */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1C,/* [1670] OBJ_id_smime_aa_signatureType */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x02,0x1D,/* [1681] OBJ_id_smime_aa_dvcs_dvc */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x01,/* [1692] OBJ_id_smime_alg_ESDHwith3DES */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x02,/* [1703] OBJ_id_smime_alg_ESDHwithRC2 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x03,/* [1714] OBJ_id_smime_alg_3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x04,/* [1725] OBJ_id_smime_alg_RC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x05,/* [1736] OBJ_id_smime_alg_ESDH */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x06,/* [1747] OBJ_id_smime_alg_CMS3DESwrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x03,0x07,/* [1758] OBJ_id_smime_alg_CMSRC2wrap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x04,0x01,/* [1769] OBJ_id_smime_cd_ldap */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x01,/* [1780] OBJ_id_smime_spq_ets_sqt_uri */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x05,0x02,/* [1791] OBJ_id_smime_spq_ets_sqt_unotice */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x01,/* [1802] OBJ_id_smime_cti_ets_proofOfOrigin */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x02,/* [1813] OBJ_id_smime_cti_ets_proofOfReceipt */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x03,/* [1824] OBJ_id_smime_cti_ets_proofOfDelivery */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x04,/* [1835] OBJ_id_smime_cti_ets_proofOfSender */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x05,/* [1846] OBJ_id_smime_cti_ets_proofOfApproval */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x06,0x06,/* [1857] OBJ_id_smime_cti_ets_proofOfCreation */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x04,     /* [1868] OBJ_md4 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,          /* [1876] OBJ_id_pkix_mod */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,          /* [1883] OBJ_id_qt */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,          /* [1890] OBJ_id_it */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,          /* [1897] OBJ_id_pkip */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,          /* [1904] OBJ_id_alg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,          /* [1911] OBJ_id_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,          /* [1918] OBJ_id_on */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,          /* [1925] OBJ_id_pda */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,          /* [1932] OBJ_id_aca */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,          /* [1939] OBJ_id_qcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,          /* [1946] OBJ_id_cct */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x01,     /* [1953] OBJ_id_pkix1_explicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x02,     /* [1961] OBJ_id_pkix1_implicit_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x03,     /* [1969] OBJ_id_pkix1_explicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x04,     /* [1977] OBJ_id_pkix1_implicit_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x05,     /* [1985] OBJ_id_mod_crmf */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x06,     /* [1993] OBJ_id_mod_cmc */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x07,     /* [2001] OBJ_id_mod_kea_profile_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x08,     /* [2009] OBJ_id_mod_kea_profile_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x09,     /* [2017] OBJ_id_mod_cmp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0A,     /* [2025] OBJ_id_mod_qualified_cert_88 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0B,     /* [2033] OBJ_id_mod_qualified_cert_93 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0C,     /* [2041] OBJ_id_mod_attribute_cert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0D,     /* [2049] OBJ_id_mod_timestamp_protocol */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0E,     /* [2057] OBJ_id_mod_ocsp */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x0F,     /* [2065] OBJ_id_mod_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x00,0x10,     /* [2073] OBJ_id_mod_cmp2000 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x02,     /* [2081] OBJ_biometricInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x03,     /* [2089] OBJ_qcStatements */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x04,     /* [2097] OBJ_ac_auditEntity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x05,     /* [2105] OBJ_ac_targeting */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x06,     /* [2113] OBJ_aaControls */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x07,     /* [2121] OBJ_sbgp_ipAddrBlock */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x08,     /* [2129] OBJ_sbgp_autonomousSysNum */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x09,     /* [2137] OBJ_sbgp_routerIdentifier */
0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x03,     /* [2145] OBJ_textNotice */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x05,     /* [2153] OBJ_ipsecEndSystem */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x06,     /* [2161] OBJ_ipsecTunnel */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x07,     /* [2169] OBJ_ipsecUser */
0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x0A,     /* [2177] OBJ_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x01,     /* [2185] OBJ_id_it_caProtEncCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x02,     /* [2193] OBJ_id_it_signKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x03,     /* [2201] OBJ_id_it_encKeyPairTypes */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x04,     /* [2209] OBJ_id_it_preferredSymmAlg */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x05,     /* [2217] OBJ_id_it_caKeyUpdateInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x06,     /* [2225] OBJ_id_it_currentCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x07,     /* [2233] OBJ_id_it_unsupportedOIDs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x08,     /* [2241] OBJ_id_it_subscriptionRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x09,     /* [2249] OBJ_id_it_subscriptionResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0A,     /* [2257] OBJ_id_it_keyPairParamReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0B,     /* [2265] OBJ_id_it_keyPairParamRep */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0C,     /* [2273] OBJ_id_it_revPassphrase */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0D,     /* [2281] OBJ_id_it_implicitConfirm */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0E,     /* [2289] OBJ_id_it_confirmWaitTime */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x0F,     /* [2297] OBJ_id_it_origPKIMessage */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,     /* [2305] OBJ_id_regCtrl */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,     /* [2313] OBJ_id_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x01,/* [2321] OBJ_id_regCtrl_regToken */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x02,/* [2330] OBJ_id_regCtrl_authenticator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x03,/* [2339] OBJ_id_regCtrl_pkiPublicationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x04,/* [2348] OBJ_id_regCtrl_pkiArchiveOptions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x05,/* [2357] OBJ_id_regCtrl_oldCertID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x01,0x06,/* [2366] OBJ_id_regCtrl_protocolEncrKey */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x01,/* [2375] OBJ_id_regInfo_utf8Pairs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x05,0x02,0x02,/* [2384] OBJ_id_regInfo_certReq */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x01,     /* [2393] OBJ_id_alg_des40 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x02,     /* [2401] OBJ_id_alg_noSignature */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x03,     /* [2409] OBJ_id_alg_dh_sig_hmac_sha1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x06,0x04,     /* [2417] OBJ_id_alg_dh_pop */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x01,     /* [2425] OBJ_id_cmc_statusInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x02,     /* [2433] OBJ_id_cmc_identification */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x03,     /* [2441] OBJ_id_cmc_identityProof */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x04,     /* [2449] OBJ_id_cmc_dataReturn */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x05,     /* [2457] OBJ_id_cmc_transactionId */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x06,     /* [2465] OBJ_id_cmc_senderNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x07,     /* [2473] OBJ_id_cmc_recipientNonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x08,     /* [2481] OBJ_id_cmc_addExtensions */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x09,     /* [2489] OBJ_id_cmc_encryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0A,     /* [2497] OBJ_id_cmc_decryptedPOP */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0B,     /* [2505] OBJ_id_cmc_lraPOPWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x0F,     /* [2513] OBJ_id_cmc_getCert */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x10,     /* [2521] OBJ_id_cmc_getCRL */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x11,     /* [2529] OBJ_id_cmc_revokeRequest */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x12,     /* [2537] OBJ_id_cmc_regInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x13,     /* [2545] OBJ_id_cmc_responseInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x15,     /* [2553] OBJ_id_cmc_queryPending */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x16,     /* [2561] OBJ_id_cmc_popLinkRandom */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x17,     /* [2569] OBJ_id_cmc_popLinkWitness */
0x2B,0x06,0x01,0x05,0x05,0x07,0x07,0x18,     /* [2577] OBJ_id_cmc_confirmCertAcceptance */
0x2B,0x06,0x01,0x05,0x05,0x07,0x08,0x01,     /* [2585] OBJ_id_on_personalData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x01,     /* [2593] OBJ_id_pda_dateOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x02,     /* [2601] OBJ_id_pda_placeOfBirth */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x03,     /* [2609] OBJ_id_pda_gender */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x04,     /* [2617] OBJ_id_pda_countryOfCitizenship */
0x2B,0x06,0x01,0x05,0x05,0x07,0x09,0x05,     /* [2625] OBJ_id_pda_countryOfResidence */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x01,     /* [2633] OBJ_id_aca_authenticationInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x02,     /* [2641] OBJ_id_aca_accessIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x03,     /* [2649] OBJ_id_aca_chargingIdentity */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x04,     /* [2657] OBJ_id_aca_group */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x05,     /* [2665] OBJ_id_aca_role */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0B,0x01,     /* [2673] OBJ_id_qcs_pkixQCSyntax_v1 */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x01,     /* [2681] OBJ_id_cct_crs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x02,     /* [2689] OBJ_id_cct_PKIData */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0C,0x03,     /* [2697] OBJ_id_cct_PKIResponse */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x03,     /* [2705] OBJ_ad_timeStamping */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x04,     /* [2713] OBJ_ad_dvcs */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x01,/* [2721] OBJ_id_pkix_OCSP_basic */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x02,/* [2730] OBJ_id_pkix_OCSP_Nonce */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x03,/* [2739] OBJ_id_pkix_OCSP_CrlID */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x04,/* [2748] OBJ_id_pkix_OCSP_acceptableResponses */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x05,/* [2757] OBJ_id_pkix_OCSP_noCheck */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x06,/* [2766] OBJ_id_pkix_OCSP_archiveCutoff */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x07,/* [2775] OBJ_id_pkix_OCSP_serviceLocator */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x08,/* [2784] OBJ_id_pkix_OCSP_extendedStatus */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x09,/* [2793] OBJ_id_pkix_OCSP_valid */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0A,/* [2802] OBJ_id_pkix_OCSP_path */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x0B,/* [2811] OBJ_id_pkix_OCSP_trustRoot */
0x2B,0x0E,0x03,0x02,                         /* [2820] OBJ_algorithm */
0x2B,0x0E,0x03,0x02,0x0B,                    /* [2824] OBJ_rsaSignature */
0x55,0x08,                                   /* [2829] OBJ_X500algorithms */
0x2B,                                        /* [2831] OBJ_org */
0x2B,0x06,                                   /* [2832] OBJ_dod */
0x2B,0x06,0x01,                              /* [2834] OBJ_iana */
0x2B,0x06,0x01,0x01,                         /* [2837] OBJ_Directory */
0x2B,0x06,0x01,0x02,                         /* [2841] OBJ_Management */
0x2B,0x06,0x01,0x03,                         /* [2845] OBJ_Experimental */
0x2B,0x06,0x01,0x04,                         /* [2849] OBJ_Private */
0x2B,0x06,0x01,0x05,                         /* [2853] OBJ_Security */
0x2B,0x06,0x01,0x06,                         /* [2857] OBJ_SNMPv2 */
0x2B,0x06,0x01,0x07,                         /* [2861] OBJ_Mail */
0x2B,0x06,0x01,0x04,0x01,                    /* [2865] OBJ_Enterprises */
0x2B,0x06,0x01,0x04,0x01,0x8B,0x3A,0x82,0x58,/* [2870] OBJ_dcObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x19,/* [2879] OBJ_domainComponent */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0D,/* [2889] OBJ_Domain */
0x00,                                        /* [2899] OBJ_joint_iso_ccitt */
0x55,0x01,0x05,                              /* [2900] OBJ_selected_attribute_types */
0x55,0x01,0x05,0x37,                         /* [2903] OBJ_clearance */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x03,/* [2907] OBJ_md4WithRSAEncryption */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0A,     /* [2916] OBJ_ac_proxying */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0B,     /* [2924] OBJ_sinfo_access */
0x2B,0x06,0x01,0x05,0x05,0x07,0x0A,0x06,     /* [2932] OBJ_id_aca_encAttrs */
0x55,0x04,0x48,                              /* [2940] OBJ_role */
0x55,0x1D,0x24,                              /* [2943] OBJ_policy_constraints */
0x55,0x1D,0x37,                              /* [2946] OBJ_target_information */
0x55,0x1D,0x38,                              /* [2949] OBJ_no_rev_avail */
0x00,                                        /* [2952] OBJ_ccitt */
0x2A,0x86,0x48,0xCE,0x3D,                    /* [2953] OBJ_ansi_X9_62 */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x01,          /* [2958] OBJ_X9_62_prime_field */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,          /* [2965] OBJ_X9_62_characteristic_two_field */
0x2A,0x86,0x48,0xCE,0x3D,0x02,0x01,          /* [2972] OBJ_X9_62_id_ecPublicKey */
0x2A,0x81,0x1C,0xD7,0x63,0x01,0x01,0x01,     /* [2979] OBJ_X9_62_prime192v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x02,     /* [2987] OBJ_X9_62_prime192v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x03,     /* [2995] OBJ_X9_62_prime192v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x04,     /* [3003] OBJ_X9_62_prime239v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x05,     /* [3011] OBJ_X9_62_prime239v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x06,     /* [3019] OBJ_X9_62_prime239v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x07,     /* [3027] OBJ_X9_62_prime256v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x01,          /* [3035] OBJ_ecdsa_with_SHA1 */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x11,0x01,/* [3042] OBJ_ms_csp_name */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x01,/* [3051] OBJ_aes_128_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x02,/* [3060] OBJ_aes_128_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x03,/* [3069] OBJ_aes_128_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x04,/* [3078] OBJ_aes_128_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x15,/* [3087] OBJ_aes_192_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x16,/* [3096] OBJ_aes_192_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x17,/* [3105] OBJ_aes_192_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x18,/* [3114] OBJ_aes_192_cfb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x29,/* [3123] OBJ_aes_256_ecb */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2A,/* [3132] OBJ_aes_256_cbc */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2B,/* [3141] OBJ_aes_256_ofb128 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2C,/* [3150] OBJ_aes_256_cfb128 */
0x55,0x1D,0x17,                              /* [3159] OBJ_hold_instruction_code */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x01,          /* [3162] OBJ_hold_instruction_none */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x02,          /* [3169] OBJ_hold_instruction_call_issuer */
0x2A,0x86,0x48,0xCE,0x38,0x02,0x03,          /* [3176] OBJ_hold_instruction_reject */
0x09,                                        /* [3183] OBJ_data */
0x09,0x92,0x26,                              /* [3184] OBJ_pss */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,          /* [3187] OBJ_ucl */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,     /* [3194] OBJ_pilot */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,/* [3202] OBJ_pilotAttributeType */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,/* [3211] OBJ_pilotAttributeSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,/* [3220] OBJ_pilotObjectClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x0A,/* [3229] OBJ_pilotGroups */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x04,/* [3238] OBJ_iA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x03,0x05,/* [3248] OBJ_caseIgnoreIA5StringSyntax */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x03,/* [3258] OBJ_pilotObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x04,/* [3268] OBJ_pilotPerson */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x05,/* [3278] OBJ_account */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x06,/* [3288] OBJ_document */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x07,/* [3298] OBJ_room */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x09,/* [3308] OBJ_documentSeries */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0E,/* [3318] OBJ_rFC822localPart */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x0F,/* [3328] OBJ_dNSDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x11,/* [3338] OBJ_domainRelatedObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x12,/* [3348] OBJ_friendlyCountry */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x13,/* [3358] OBJ_simpleSecurityObject */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x14,/* [3368] OBJ_pilotOrganization */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x15,/* [3378] OBJ_pilotDSA */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x04,0x16,/* [3388] OBJ_qualityLabelledData */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x01,/* [3398] OBJ_userId */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x02,/* [3408] OBJ_textEncodedORAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x03,/* [3418] OBJ_rfc822Mailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x04,/* [3428] OBJ_info */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x05,/* [3438] OBJ_favouriteDrink */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x06,/* [3448] OBJ_roomNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x07,/* [3458] OBJ_photo */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x08,/* [3468] OBJ_userClass */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x09,/* [3478] OBJ_host */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0A,/* [3488] OBJ_manager */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0B,/* [3498] OBJ_documentIdentifier */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0C,/* [3508] OBJ_documentTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0D,/* [3518] OBJ_documentVersion */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0E,/* [3528] OBJ_documentAuthor */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x0F,/* [3538] OBJ_documentLocation */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x14,/* [3548] OBJ_homeTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x15,/* [3558] OBJ_secretary */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x16,/* [3568] OBJ_otherMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x17,/* [3578] OBJ_lastModifiedTime */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x18,/* [3588] OBJ_lastModifiedBy */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1A,/* [3598] OBJ_aRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1B,/* [3608] OBJ_pilotAttributeType27 */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1C,/* [3618] OBJ_mXRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1D,/* [3628] OBJ_nSRecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1E,/* [3638] OBJ_sOARecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x1F,/* [3648] OBJ_cNAMERecord */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x25,/* [3658] OBJ_associatedDomain */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x26,/* [3668] OBJ_associatedName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x27,/* [3678] OBJ_homePostalAddress */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x28,/* [3688] OBJ_personalTitle */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x29,/* [3698] OBJ_mobileTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2A,/* [3708] OBJ_pagerTelephoneNumber */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2B,/* [3718] OBJ_friendlyCountryName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2D,/* [3728] OBJ_organizationalStatus */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2E,/* [3738] OBJ_janetMailbox */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x2F,/* [3748] OBJ_mailPreferenceOption */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x30,/* [3758] OBJ_buildingName */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x31,/* [3768] OBJ_dSAQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x32,/* [3778] OBJ_singleLevelQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x33,/* [3788] OBJ_subtreeMinimumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x34,/* [3798] OBJ_subtreeMaximumQuality */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x35,/* [3808] OBJ_personalSignature */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x36,/* [3818] OBJ_dITRedirect */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x37,/* [3828] OBJ_audio */
0x09,0x92,0x26,0x89,0x93,0xF2,0x2C,0x64,0x01,0x38,/* [3838] OBJ_documentPublisher */
0x55,0x04,0x2D,                              /* [3848] OBJ_x500UniqueIdentifier */
0x2B,0x06,0x01,0x07,0x01,                    /* [3851] OBJ_mime_mhs */
0x2B,0x06,0x01,0x07,0x01,0x01,               /* [3856] OBJ_mime_mhs_headings */
0x2B,0x06,0x01,0x07,0x01,0x02,               /* [3862] OBJ_mime_mhs_bodies */
0x2B,0x06,0x01,0x07,0x01,0x01,0x01,          /* [3868] OBJ_id_hex_partial_message */
0x2B,0x06,0x01,0x07,0x01,0x01,0x02,          /* [3875] OBJ_id_hex_multipart_message */
0x55,0x04,0x2C,                              /* [3882] OBJ_generationQualifier */
0x55,0x04,0x41,                              /* [3885] OBJ_pseudonym */
0x67,0x2A,                                   /* [3888] OBJ_id_set */
0x67,0x2A,0x00,                              /* [3890] OBJ_set_ctype */
0x67,0x2A,0x01,                              /* [3893] OBJ_set_msgExt */
0x67,0x2A,0x03,                              /* [3896] OBJ_set_attr */
0x67,0x2A,0x05,                              /* [3899] OBJ_set_policy */
0x67,0x2A,0x07,                              /* [3902] OBJ_set_certExt */
0x67,0x2A,0x08,                              /* [3905] OBJ_set_brand */
0x67,0x2A,0x00,0x00,                         /* [3908] OBJ_setct_PANData */
0x67,0x2A,0x00,0x01,                         /* [3912] OBJ_setct_PANToken */
0x67,0x2A,0x00,0x02,                         /* [3916] OBJ_setct_PANOnly */
0x67,0x2A,0x00,0x03,                         /* [3920] OBJ_setct_OIData */
0x67,0x2A,0x00,0x04,                         /* [3924] OBJ_setct_PI */
0x67,0x2A,0x00,0x05,                         /* [3928] OBJ_setct_PIData */
0x67,0x2A,0x00,0x06,                         /* [3932] OBJ_setct_PIDataUnsigned */
0x67,0x2A,0x00,0x07,                         /* [3936] OBJ_setct_HODInput */
0x67,0x2A,0x00,0x08,                         /* [3940] OBJ_setct_AuthResBaggage */
0x67,0x2A,0x00,0x09,                         /* [3944] OBJ_setct_AuthRevReqBaggage */
0x67,0x2A,0x00,0x0A,                         /* [3948] OBJ_setct_AuthRevResBaggage */
0x67,0x2A,0x00,0x0B,                         /* [3952] OBJ_setct_CapTokenSeq */
0x67,0x2A,0x00,0x0C,                         /* [3956] OBJ_setct_PInitResData */
0x67,0x2A,0x00,0x0D,                         /* [3960] OBJ_setct_PI_TBS */
0x67,0x2A,0x00,0x0E,                         /* [3964] OBJ_setct_PResData */
0x67,0x2A,0x00,0x10,                         /* [3968] OBJ_setct_AuthReqTBS */
0x67,0x2A,0x00,0x11,                         /* [3972] OBJ_setct_AuthResTBS */
0x67,0x2A,0x00,0x12,                         /* [3976] OBJ_setct_AuthResTBSX */
0x67,0x2A,0x00,0x13,                         /* [3980] OBJ_setct_AuthTokenTBS */
0x67,0x2A,0x00,0x14,                         /* [3984] OBJ_setct_CapTokenData */
0x67,0x2A,0x00,0x15,                         /* [3988] OBJ_setct_CapTokenTBS */
0x67,0x2A,0x00,0x16,                         /* [3992] OBJ_setct_AcqCardCodeMsg */
0x67,0x2A,0x00,0x17,                         /* [3996] OBJ_setct_AuthRevReqTBS */
0x67,0x2A,0x00,0x18,                         /* [4000] OBJ_setct_AuthRevResData */
0x67,0x2A,0x00,0x19,                         /* [4004] OBJ_setct_AuthRevResTBS */
0x67,0x2A,0x00,0x1A,                         /* [4008] OBJ_setct_CapReqTBS */
0x67,0x2A,0x00,0x1B,                         /* [4012] OBJ_setct_CapReqTBSX */
0x67,0x2A,0x00,0x1C,                         /* [4016] OBJ_setct_CapResData */
0x67,0x2A,0x00,0x1D,                         /* [4020] OBJ_setct_CapRevReqTBS */
0x67,0x2A,0x00,0x1E,                         /* [4024] OBJ_setct_CapRevReqTBSX */
0x67,0x2A,0x00,0x1F,                         /* [4028] OBJ_setct_CapRevResData */
0x67,0x2A,0x00,0x20,                         /* [4032] OBJ_setct_CredReqTBS */
0x67,0x2A,0x00,0x21,                         /* [4036] OBJ_setct_CredReqTBSX */
0x67,0x2A,0x00,0x22,                         /* [4040] OBJ_setct_CredResData */
0x67,0x2A,0x00,0x23,                         /* [4044] OBJ_setct_CredRevReqTBS */
0x67,0x2A,0x00,0x24,                         /* [4048] OBJ_setct_CredRevReqTBSX */
0x67,0x2A,0x00,0x25,                         /* [4052] OBJ_setct_CredRevResData */
0x67,0x2A,0x00,0x26,                         /* [4056] OBJ_setct_PCertReqData */
0x67,0x2A,0x00,0x27,                         /* [4060] OBJ_setct_PCertResTBS */
0x67,0x2A,0x00,0x28,                         /* [4064] OBJ_setct_BatchAdminReqData */
0x67,0x2A,0x00,0x29,                         /* [4068] OBJ_setct_BatchAdminResData */
0x67,0x2A,0x00,0x2A,                         /* [4072] OBJ_setct_CardCInitResTBS */
0x67,0x2A,0x00,0x2B,                         /* [4076] OBJ_setct_MeAqCInitResTBS */
0x67,0x2A,0x00,0x2C,                         /* [4080] OBJ_setct_RegFormResTBS */
0x67,0x2A,0x00,0x2D,                         /* [4084] OBJ_setct_CertReqData */
0x67,0x2A,0x00,0x2E,                         /* [4088] OBJ_setct_CertReqTBS */
0x67,0x2A,0x00,0x2F,                         /* [4092] OBJ_setct_CertResData */
0x67,0x2A,0x00,0x30,                         /* [4096] OBJ_setct_CertInqReqTBS */
0x67,0x2A,0x00,0x31,                         /* [4100] OBJ_setct_ErrorTBS */
0x67,0x2A,0x00,0x32,                         /* [4104] OBJ_setct_PIDualSignedTBE */
0x67,0x2A,0x00,0x33,                         /* [4108] OBJ_setct_PIUnsignedTBE */
0x67,0x2A,0x00,0x34,                         /* [4112] OBJ_setct_AuthReqTBE */
0x67,0x2A,0x00,0x35,                         /* [4116] OBJ_setct_AuthResTBE */
0x67,0x2A,0x00,0x36,                         /* [4120] OBJ_setct_AuthResTBEX */
0x67,0x2A,0x00,0x37,                         /* [4124] OBJ_setct_AuthTokenTBE */
0x67,0x2A,0x00,0x38,                         /* [4128] OBJ_setct_CapTokenTBE */
0x67,0x2A,0x00,0x39,                         /* [4132] OBJ_setct_CapTokenTBEX */
0x67,0x2A,0x00,0x3A,                         /* [4136] OBJ_setct_AcqCardCodeMsgTBE */
0x67,0x2A,0x00,0x3B,                         /* [4140] OBJ_setct_AuthRevReqTBE */
0x67,0x2A,0x00,0x3C,                         /* [4144] OBJ_setct_AuthRevResTBE */
0x67,0x2A,0x00,0x3D,                         /* [4148] OBJ_setct_AuthRevResTBEB */
0x67,0x2A,0x00,0x3E,                         /* [4152] OBJ_setct_CapReqTBE */
0x67,0x2A,0x00,0x3F,                         /* [4156] OBJ_setct_CapReqTBEX */
0x67,0x2A,0x00,0x40,                         /* [4160] OBJ_setct_CapResTBE */
0x67,0x2A,0x00,0x41,                         /* [4164] OBJ_setct_CapRevReqTBE */
0x67,0x2A,0x00,0x42,                         /* [4168] OBJ_setct_CapRevReqTBEX */
0x67,0x2A,0x00,0x43,                         /* [4172] OBJ_setct_CapRevResTBE */
0x67,0x2A,0x00,0x44,                         /* [4176] OBJ_setct_CredReqTBE */
0x67,0x2A,0x00,0x45,                         /* [4180] OBJ_setct_CredReqTBEX */
0x67,0x2A,0x00,0x46,                         /* [4184] OBJ_setct_CredResTBE */
0x67,0x2A,0x00,0x47,                         /* [4188] OBJ_setct_CredRevReqTBE */
0x67,0x2A,0x00,0x48,                         /* [4192] OBJ_setct_CredRevReqTBEX */
0x67,0x2A,0x00,0x49,                         /* [4196] OBJ_setct_CredRevResTBE */
0x67,0x2A,0x00,0x4A,                         /* [4200] OBJ_setct_BatchAdminReqTBE */
0x67,0x2A,0x00,0x4B,                         /* [4204] OBJ_setct_BatchAdminResTBE */
0x67,0x2A,0x00,0x4C,                         /* [4208] OBJ_setct_RegFormReqTBE */
0x67,0x2A,0x00,0x4D,                         /* [4212] OBJ_setct_CertReqTBE */
0x67,0x2A,0x00,0x4E,                         /* [4216] OBJ_setct_CertReqTBEX */
0x67,0x2A,0x00,0x4F,                         /* [4220] OBJ_setct_CertResTBE */
0x67,0x2A,0x00,0x50,                         /* [4224] OBJ_setct_CRLNotificationTBS */
0x67,0x2A,0x00,0x51,                         /* [4228] OBJ_setct_CRLNotificationResTBS */
0x67,0x2A,0x00,0x52,                         /* [4232] OBJ_setct_BCIDistributionTBS */
0x67,0x2A,0x01,0x01,                         /* [4236] OBJ_setext_genCrypt */
0x67,0x2A,0x01,0x03,                         /* [4240] OBJ_setext_miAuth */
0x67,0x2A,0x01,0x04,                         /* [4244] OBJ_setext_pinSecure */
0x67,0x2A,0x01,0x05,                         /* [4248] OBJ_setext_pinAny */
0x67,0x2A,0x01,0x07,                         /* [4252] OBJ_setext_track2 */
0x67,0x2A,0x01,0x08,                         /* [4256] OBJ_setext_cv */
0x67,0x2A,0x05,0x00,                         /* [4260] OBJ_set_policy_root */
0x67,0x2A,0x07,0x00,                         /* [4264] OBJ_setCext_hashedRoot */
0x67,0x2A,0x07,0x01,                         /* [4268] OBJ_setCext_certType */
0x67,0x2A,0x07,0x02,                         /* [4272] OBJ_setCext_merchData */
0x67,0x2A,0x07,0x03,                         /* [4276] OBJ_setCext_cCertRequired */
0x67,0x2A,0x07,0x04,                         /* [4280] OBJ_setCext_tunneling */
0x67,0x2A,0x07,0x05,                         /* [4284] OBJ_setCext_setExt */
0x67,0x2A,0x07,0x06,                         /* [4288] OBJ_setCext_setQualf */
0x67,0x2A,0x07,0x07,                         /* [4292] OBJ_setCext_PGWYcapabilities */
0x67,0x2A,0x07,0x08,                         /* [4296] OBJ_setCext_TokenIdentifier */
0x67,0x2A,0x07,0x09,                         /* [4300] OBJ_setCext_Track2Data */
0x67,0x2A,0x07,0x0A,                         /* [4304] OBJ_setCext_TokenType */
0x67,0x2A,0x07,0x0B,                         /* [4308] OBJ_setCext_IssuerCapabilities */
0x67,0x2A,0x03,0x00,                         /* [4312] OBJ_setAttr_Cert */
0x67,0x2A,0x03,0x01,                         /* [4316] OBJ_setAttr_PGWYcap */
0x67,0x2A,0x03,0x02,                         /* [4320] OBJ_setAttr_TokenType */
0x67,0x2A,0x03,0x03,                         /* [4324] OBJ_setAttr_IssCap */
0x67,0x2A,0x03,0x00,0x00,                    /* [4328] OBJ_set_rootKeyThumb */
0x67,0x2A,0x03,0x00,0x01,                    /* [4333] OBJ_set_addPolicy */
0x67,0x2A,0x03,0x02,0x01,                    /* [4338] OBJ_setAttr_Token_EMV */
0x67,0x2A,0x03,0x02,0x02,                    /* [4343] OBJ_setAttr_Token_B0Prime */
0x67,0x2A,0x03,0x03,0x03,                    /* [4348] OBJ_setAttr_IssCap_CVM */
0x67,0x2A,0x03,0x03,0x04,                    /* [4353] OBJ_setAttr_IssCap_T2 */
0x67,0x2A,0x03,0x03,0x05,                    /* [4358] OBJ_setAttr_IssCap_Sig */
0x67,0x2A,0x03,0x03,0x03,0x01,               /* [4363] OBJ_setAttr_GenCryptgrm */
0x67,0x2A,0x03,0x03,0x04,0x01,               /* [4369] OBJ_setAttr_T2Enc */
0x67,0x2A,0x03,0x03,0x04,0x02,               /* [4375] OBJ_setAttr_T2cleartxt */
0x67,0x2A,0x03,0x03,0x05,0x01,               /* [4381] OBJ_setAttr_TokICCsig */
0x67,0x2A,0x03,0x03,0x05,0x02,               /* [4387] OBJ_setAttr_SecDevSig */
0x67,0x2A,0x08,0x01,                         /* [4393] OBJ_set_brand_IATA_ATA */
0x67,0x2A,0x08,0x1E,                         /* [4397] OBJ_set_brand_Diners */
0x67,0x2A,0x08,0x22,                         /* [4401] OBJ_set_brand_AmericanExpress */
0x67,0x2A,0x08,0x23,                         /* [4405] OBJ_set_brand_JCB */
0x67,0x2A,0x08,0x04,                         /* [4409] OBJ_set_brand_Visa */
0x67,0x2A,0x08,0x05,                         /* [4413] OBJ_set_brand_MasterCard */
0x67,0x2A,0x08,0xAE,0x7B,                    /* [4417] OBJ_set_brand_Novus */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x03,0x0A,     /* [4422] OBJ_des_cdmf */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x06,/* [4430] OBJ_rsaOAEPEncryptionSET */
0x00,                                        /* [4439] OBJ_itu_t */
0x50,                                        /* [4440] OBJ_joint_iso_itu_t */
0x67,                                        /* [4441] OBJ_international_organizations */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x02,/* [4442] OBJ_ms_smartcard_login */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02,0x03,/* [4452] OBJ_ms_upn */
0x55,0x04,0x09,                              /* [4462] OBJ_streetAddress */
0x55,0x04,0x11,                              /* [4465] OBJ_postalCode */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,          /* [4468] OBJ_id_ppl */
0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x0E,     /* [4475] OBJ_proxyCertInfo */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x00,     /* [4483] OBJ_id_ppl_anyLanguage */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x01,     /* [4491] OBJ_id_ppl_inheritAll */
0x55,0x1D,0x1E,                              /* [4499] OBJ_name_constraints */
0x2B,0x06,0x01,0x05,0x05,0x07,0x15,0x02,     /* [4502] OBJ_Independent */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0B,/* [4510] OBJ_sha256WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0C,/* [4519] OBJ_sha384WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0D,/* [4528] OBJ_sha512WithRSAEncryption */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0E,/* [4537] OBJ_sha224WithRSAEncryption */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x01,/* [4546] OBJ_sha256 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x02,/* [4555] OBJ_sha384 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x03,/* [4564] OBJ_sha512 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x04,/* [4573] OBJ_sha224 */
0x2B,                                        /* [4582] OBJ_identified_organization */
0x2B,0x81,0x04,                              /* [4583] OBJ_certicom_arc */
0x67,0x2B,                                   /* [4586] OBJ_wap */
0x67,0x2B,0x0D,                              /* [4588] OBJ_wap_wsg */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,     /* [4591] OBJ_X9_62_id_characteristic_two_basis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x01,/* [4599] OBJ_X9_62_onBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x02,/* [4608] OBJ_X9_62_tpBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x01,0x02,0x03,0x03,/* [4617] OBJ_X9_62_ppBasis */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x01,     /* [4626] OBJ_X9_62_c2pnb163v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x02,     /* [4634] OBJ_X9_62_c2pnb163v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x03,     /* [4642] OBJ_X9_62_c2pnb163v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x04,     /* [4650] OBJ_X9_62_c2pnb176v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x05,     /* [4658] OBJ_X9_62_c2tnb191v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x06,     /* [4666] OBJ_X9_62_c2tnb191v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x07,     /* [4674] OBJ_X9_62_c2tnb191v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x08,     /* [4682] OBJ_X9_62_c2onb191v4 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x09,     /* [4690] OBJ_X9_62_c2onb191v5 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0A,     /* [4698] OBJ_X9_62_c2pnb208w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0B,     /* [4706] OBJ_X9_62_c2tnb239v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0C,     /* [4714] OBJ_X9_62_c2tnb239v2 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0D,     /* [4722] OBJ_X9_62_c2tnb239v3 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0E,     /* [4730] OBJ_X9_62_c2onb239v4 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x0F,     /* [4738] OBJ_X9_62_c2onb239v5 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x10,     /* [4746] OBJ_X9_62_c2pnb272w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x11,     /* [4754] OBJ_X9_62_c2pnb304w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x12,     /* [4762] OBJ_X9_62_c2tnb359v1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x13,     /* [4770] OBJ_X9_62_c2pnb368w1 */
0x2A,0x86,0x48,0xCE,0x3D,0x03,0x00,0x14,     /* [4778] OBJ_X9_62_c2tnb431r1 */
0x2B,0x81,0x04,0x00,0x06,                    /* [4786] OBJ_secp112r1 */
0x2B,0x81,0x04,0x00,0x07,                    /* [4791] OBJ_secp112r2 */
0x2B,0x81,0x04,0x00,0x1C,                    /* [4796] OBJ_secp128r1 */
0x2B,0x81,0x04,0x00,0x1D,                    /* [4801] OBJ_secp128r2 */
0x2B,0x81,0x04,0x00,0x09,                    /* [4806] OBJ_secp160k1 */
0x2B,0x81,0x04,0x00,0x08,                    /* [4811] OBJ_secp160r1 */
0x2B,0x81,0x04,0x00,0x1E,                    /* [4816] OBJ_secp160r2 */
0x2B,0x81,0x04,0x00,0x1F,                    /* [4821] OBJ_secp192k1 */
0x2B,0x81,0x04,0x00,0x20,                    /* [4826] OBJ_secp224k1 */
0x2B,0x81,0x04,0x00,0x21,                    /* [4831] OBJ_secp224r1 */
0x2B,0x81,0x04,0x00,0x0A,                    /* [4836] OBJ_secp256k1 */
0x2B,0x81,0x04,0x00,0x22,                    /* [4841] OBJ_secp384r1 */
0x2B,0x81,0x04,0x00,0x23,                    /* [4846] OBJ_secp521r1 */
0x2B,0x81,0x04,0x00,0x04,                    /* [4851] OBJ_sect113r1 */
0x2B,0x81,0x04,0x00,0x05,                    /* [4856] OBJ_sect113r2 */
0x2B,0x81,0x04,0x00,0x16,                    /* [4861] OBJ_sect131r1 */
0x2B,0x81,0x04,0x00,0x17,                    /* [4866] OBJ_sect131r2 */
0x2B,0x81,0x04,0x00,0x01,                    /* [4871] OBJ_sect163k1 */
0x2B,0x81,0x04,0x00,0x02,                    /* [4876] OBJ_sect163r1 */
0x2B,0x81,0x04,0x00,0x0F,                    /* [4881] OBJ_sect163r2 */
0x2B,0x81,0x04,0x00,0x18,                    /* [4886] OBJ_sect193r1 */
0x2B,0x81,0x04,0x00,0x19,                    /* [4891] OBJ_sect193r2 */
0x2B,0x81,0x04,0x00,0x1A,                    /* [4896] OBJ_sect233k1 */
0x2B,0x81,0x04,0x00,0x1B,                    /* [4901] OBJ_sect233r1 */
0x2B,0x81,0x04,0x00,0x03,                    /* [4906] OBJ_sect239k1 */
0x2B,0x81,0x04,0x00,0x10,                    /* [4911] OBJ_sect283k1 */
0x2B,0x81,0x04,0x00,0x11,                    /* [4916] OBJ_sect283r1 */
0x2B,0x81,0x04,0x00,0x24,                    /* [4921] OBJ_sect409k1 */
0x2B,0x81,0x04,0x00,0x25,                    /* [4926] OBJ_sect409r1 */
0x2B,0x81,0x04,0x00,0x26,                    /* [4931] OBJ_sect571k1 */
0x2B,0x81,0x04,0x00,0x27,                    /* [4936] OBJ_sect571r1 */
0x67,0x2B,0x0D,0x04,0x01,                    /* [4941] OBJ_wap_wsg_idm_ecid_wtls1 */
0x67,0x2B,0x0D,0x04,0x03,                    /* [4946] OBJ_wap_wsg_idm_ecid_wtls3 */
0x67,0x2B,0x0D,0x04,0x04,                    /* [4951] OBJ_wap_wsg_idm_ecid_wtls4 */
0x67,0x2B,0x0D,0x04,0x05,                    /* [4956] OBJ_wap_wsg_idm_ecid_wtls5 */
0x67,0x2B,0x0D,0x04,0x06,                    /* [4961] OBJ_wap_wsg_idm_ecid_wtls6 */
0x67,0x2B,0x0D,0x04,0x07,                    /* [4966] OBJ_wap_wsg_idm_ecid_wtls7 */
0x67,0x2B,0x0D,0x04,0x08,                    /* [4971] OBJ_wap_wsg_idm_ecid_wtls8 */
0x67,0x2B,0x0D,0x04,0x09,                    /* [4976] OBJ_wap_wsg_idm_ecid_wtls9 */
0x67,0x2B,0x0D,0x04,0x0A,                    /* [4981] OBJ_wap_wsg_idm_ecid_wtls10 */
0x67,0x2B,0x0D,0x04,0x0B,                    /* [4986] OBJ_wap_wsg_idm_ecid_wtls11 */
0x67,0x2B,0x0D,0x04,0x0C,                    /* [4991] OBJ_wap_wsg_idm_ecid_wtls12 */
0x55,0x1D,0x20,0x00,                         /* [4996] OBJ_any_policy */
0x55,0x1D,0x21,                              /* [5000] OBJ_policy_mappings */
0x55,0x1D,0x36,                              /* [5003] OBJ_inhibit_any_policy */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x02,/* [5006] OBJ_camellia_128_cbc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x03,/* [5017] OBJ_camellia_192_cbc */
0x2A,0x83,0x08,0x8C,0x9A,0x4B,0x3D,0x01,0x01,0x01,0x04,/* [5028] OBJ_camellia_256_cbc */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x01,     /* [5039] OBJ_camellia_128_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x15,     /* [5047] OBJ_camellia_192_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x29,     /* [5055] OBJ_camellia_256_ecb */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x04,     /* [5063] OBJ_camellia_128_cfb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x18,     /* [5071] OBJ_camellia_192_cfb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x2C,     /* [5079] OBJ_camellia_256_cfb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x03,     /* [5087] OBJ_camellia_128_ofb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x17,     /* [5095] OBJ_camellia_192_ofb128 */
0x03,0xA2,0x31,0x05,0x03,0x01,0x09,0x2B,     /* [5103] OBJ_camellia_256_ofb128 */
0x55,0x1D,0x09,                              /* [5111] OBJ_subject_directory_attributes */
0x55,0x1D,0x1C,                              /* [5114] OBJ_issuing_distribution_point */
0x55,0x1D,0x1D,                              /* [5117] OBJ_certificate_issuer */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,               /* [5120] OBJ_kisa */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x03,     /* [5126] OBJ_seed_ecb */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x04,     /* [5134] OBJ_seed_cbc */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x06,     /* [5142] OBJ_seed_ofb128 */
0x2A,0x83,0x1A,0x8C,0x9A,0x44,0x01,0x05,     /* [5150] OBJ_seed_cfb128 */
0x2B,0x06,0x01,0x05,0x05,0x08,0x01,0x01,     /* [5158] OBJ_hmac_md5 */
0x2B,0x06,0x01,0x05,0x05,0x08,0x01,0x02,     /* [5166] OBJ_hmac_sha1 */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x0D,/* [5174] OBJ_id_PasswordBasedMAC */
0x2A,0x86,0x48,0x86,0xF6,0x7D,0x07,0x42,0x1E,/* [5183] OBJ_id_DHBasedMac */
0x2B,0x06,0x01,0x05,0x05,0x07,0x04,0x10,     /* [5192] OBJ_id_it_suppLangTags */
0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x05,     /* [5200] OBJ_caRepository */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x09,/* [5208] OBJ_id_smime_ct_compressedData */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x09,0x10,0x01,0x1B,/* [5219] OBJ_id_ct_asciiTextWithCRLF */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x05,/* [5230] OBJ_id_aes128_wrap */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x19,/* [5239] OBJ_id_aes192_wrap */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x01,0x2D,/* [5248] OBJ_id_aes256_wrap */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x02,          /* [5257] OBJ_ecdsa_with_Recommended */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,          /* [5264] OBJ_ecdsa_with_Specified */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x01,     /* [5271] OBJ_ecdsa_with_SHA224 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x02,     /* [5279] OBJ_ecdsa_with_SHA256 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x03,     /* [5287] OBJ_ecdsa_with_SHA384 */
0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x04,     /* [5295] OBJ_ecdsa_with_SHA512 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x06,     /* [5303] OBJ_hmacWithMD5 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x08,     /* [5311] OBJ_hmacWithSHA224 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x09,     /* [5319] OBJ_hmacWithSHA256 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x0A,     /* [5327] OBJ_hmacWithSHA384 */
0x2A,0x86,0x48,0x86,0xF7,0x0D,0x02,0x0B,     /* [5335] OBJ_hmacWithSHA512 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x01,/* [5343] OBJ_dsa_with_SHA224 */
0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x02,/* [5352] OBJ_dsa_with_SHA256 */
0x28,0xCF,0x06,0x03,0x00,0x37,               /* [5361] OBJ_whirlpool */
0x2A,0x85,0x03,0x02,0x02,                    /* [5367] OBJ_cryptopro */
0x2A,0x85,0x03,0x02,0x09,                    /* [5372] OBJ_cryptocom */
0x2A,0x85,0x03,0x02,0x02,0x03,               /* [5377] OBJ_id_GostR3411_94_with_GostR3410_2001 */
0x2A,0x85,0x03,0x02,0x02,0x04,               /* [5383] OBJ_id_GostR3411_94_with_GostR3410_94 */
0x2A,0x85,0x03,0x02,0x02,0x09,               /* [5389] OBJ_id_GostR3411_94 */
0x2A,0x85,0x03,0x02,0x02,0x0A,               /* [5395] OBJ_id_HMACGostR3411_94 */
0x2A,0x85,0x03,0x02,0x02,0x13,               /* [5401] OBJ_id_GostR3410_2001 */
0x2A,0x85,0x03,0x02,0x02,0x14,               /* [5407] OBJ_id_GostR3410_94 */
0x2A,0x85,0x03,0x02,0x02,0x15,               /* [5413] OBJ_id_Gost28147_89 */
0x2A,0x85,0x03,0x02,0x02,0x16,               /* [5419] OBJ_id_Gost28147_89_MAC */
0x2A,0x85,0x03,0x02,0x02,0x17,               /* [5425] OBJ_id_GostR3411_94_prf */
0x2A,0x85,0x03,0x02,0x02,0x62,               /* [5431] OBJ_id_GostR3410_2001DH */
0x2A,0x85,0x03,0x02,0x02,0x63,               /* [5437] OBJ_id_GostR3410_94DH */
0x2A,0x85,0x03,0x02,0x02,0x0E,0x01,          /* [5443] OBJ_id_Gost28147_89_CryptoPro_KeyMeshing */
0x2A,0x85,0x03,0x02,0x02,0x0E,0x00,          /* [5450] OBJ_id_Gost28147_89_None_KeyMeshing */
0x2A,0x85,0x03,0x02,0x02,0x1E,0x00,          /* [5457] OBJ_id_GostR3411_94_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1E,0x01,          /* [5464] OBJ_id_GostR3411_94_CryptoProParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x00,          /* [5471] OBJ_id_Gost28147_89_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x01,          /* [5478] OBJ_id_Gost28147_89_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x02,          /* [5485] OBJ_id_Gost28147_89_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x03,          /* [5492] OBJ_id_Gost28147_89_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x04,          /* [5499] OBJ_id_Gost28147_89_CryptoPro_D_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x05,          /* [5506] OBJ_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x06,          /* [5513] OBJ_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x1F,0x07,          /* [5520] OBJ_id_Gost28147_89_CryptoPro_RIC_1_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x00,          /* [5527] OBJ_id_GostR3410_94_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x02,          /* [5534] OBJ_id_GostR3410_94_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x03,          /* [5541] OBJ_id_GostR3410_94_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x04,          /* [5548] OBJ_id_GostR3410_94_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x20,0x05,          /* [5555] OBJ_id_GostR3410_94_CryptoPro_D_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x01,          /* [5562] OBJ_id_GostR3410_94_CryptoPro_XchA_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x02,          /* [5569] OBJ_id_GostR3410_94_CryptoPro_XchB_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x21,0x03,          /* [5576] OBJ_id_GostR3410_94_CryptoPro_XchC_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x00,          /* [5583] OBJ_id_GostR3410_2001_TestParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x01,          /* [5590] OBJ_id_GostR3410_2001_CryptoPro_A_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x02,          /* [5597] OBJ_id_GostR3410_2001_CryptoPro_B_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x23,0x03,          /* [5604] OBJ_id_GostR3410_2001_CryptoPro_C_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x24,0x00,          /* [5611] OBJ_id_GostR3410_2001_CryptoPro_XchA_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x24,0x01,          /* [5618] OBJ_id_GostR3410_2001_CryptoPro_XchB_ParamSet */
0x2A,0x85,0x03,0x02,0x02,0x14,0x01,          /* [5625] OBJ_id_GostR3410_94_a */
0x2A,0x85,0x03,0x02,0x02,0x14,0x02,          /* [5632] OBJ_id_GostR3410_94_aBis */
0x2A,0x85,0x03,0x02,0x02,0x14,0x03,          /* [5639] OBJ_id_GostR3410_94_b */
0x2A,0x85,0x03,0x02,0x02,0x14,0x04,          /* [5646] OBJ_id_GostR3410_94_bBis */
0x2A,0x85,0x03,0x02,0x09,0x01,0x06,0x01,     /* [5653] OBJ_id_Gost28147_89_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x05,0x03,     /* [5661] OBJ_id_GostR3410_94_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x05,0x04,     /* [5669] OBJ_id_GostR3410_2001_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x03,0x03,     /* [5677] OBJ_id_GostR3411_94_with_GostR3410_94_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x03,0x04,     /* [5685] OBJ_id_GostR3411_94_with_GostR3410_2001_cc */
0x2A,0x85,0x03,0x02,0x09,0x01,0x08,0x01,     /* [5693] OBJ_id_GostR3410_2001_ParamSet_cc */
0x2B,0x06,0x01,0x04,0x01,0x82,0x37,0x11,0x02,/* [5701] OBJ_LocalKeySet */
};

static ASN1_OBJECT nid_objs[NUM_NID]={
{"UNDEF","undefined",NID_undef,1,&(lvalues[0]),0},
{"rsadsi","RSA Data Security, Inc.",NID_rsadsi,6,&(lvalues[1]),0},
{"pkcs","RSA Data Security, Inc. PKCS",NID_pkcs,7,&(lvalues[7]),0},
{"MD2","md2",NID_md2,8,&(lvalues[14]),0},
{"MD5","md5",NID_md5,8,&(lvalues[22]),0},
{"RC4","rc4",NID_rc4,8,&(lvalues[30]),0},
{"rsaEncryption","rsaEncryption",NID_rsaEncryption,9,&(lvalues[38]),0},
{"RSA-MD2","md2WithRSAEncryption",NID_md2WithRSAEncryption,9,
	&(lvalues[47]),0},
{"RSA-MD5","md5WithRSAEncryption",NID_md5WithRSAEncryption,9,
	&(lvalues[56]),0},
{"PBE-MD2-DES","pbeWithMD2AndDES-CBC",NID_pbeWithMD2AndDES_CBC,9,
	&(lvalues[65]),0},
{"PBE-MD5-DES","pbeWithMD5AndDES-CBC",NID_pbeWithMD5AndDES_CBC,9,
	&(lvalues[74]),0},
{"X500","directory services (X.500)",NID_X500,1,&(lvalues[83]),0},
{"X509","X509",NID_X509,2,&(lvalues[84]),0},
{"CN","commonName",NID_commonName,3,&(lvalues[86]),0},
{"C","countryName",NID_countryName,3,&(lvalues[89]),0},
{"L","localityName",NID_localityName,3,&(lvalues[92]),0},
{"ST","stateOrProvinceName",NID_stateOrProvinceName,3,&(lvalues[95]),0},
{"O","organizationName",NID_organizationName,3,&(lvalues[98]),0},
{"OU","organizationalUnitName",NID_organizationalUnitName,3,
	&(lvalues[101]),0},
{"RSA","rsa",NID_rsa,4,&(lvalues[104]),0},
{"pkcs7","pkcs7",NID_pkcs7,8,&(lvalues[108]),0},
{"pkcs7-data","pkcs7-data",NID_pkcs7_data,9,&(lvalues[116]),0},
{"pkcs7-signedData","pkcs7-signedData",NID_pkcs7_signed,9,
	&(lvalues[125]),0},
{"pkcs7-envelopedData","pkcs7-envelopedData",NID_pkcs7_enveloped,9,
	&(lvalues[134]),0},
{"pkcs7-signedAndEnvelopedData","pkcs7-signedAndEnvelopedData",
	NID_pkcs7_signedAndEnveloped,9,&(lvalues[143]),0},
{"pkcs7-digestData","pkcs7-digestData",NID_pkcs7_digest,9,
	&(lvalues[152]),0},
{"pkcs7-encryptedData","pkcs7-encryptedData",NID_pkcs7_encrypted,9,
	&(lvalues[161]),0},
{"pkcs3","pkcs3",NID_pkcs3,8,&(lvalues[170]),0},
{"dhKeyAgreement","dhKeyAgreement",NID_dhKeyAgreement,9,
	&(lvalues[178]),0},
{"DES-ECB","des-ecb",NID_des_ecb,5,&(lvalues[187]),0},
{"DES-CFB","des-cfb",NID_des_cfb64,5,&(lvalues[192]),0},
{"DES-CBC","des-cbc",NID_des_cbc,5,&(lvalues[197]),0},
{"DES-EDE","des-ede",NID_des_ede_ecb,5,&(lvalues[202]),0},
{"DES-EDE3","des-ede3",NID_des_ede3_ecb,0,NULL,0},
{"IDEA-CBC","idea-cbc",NID_idea_cbc,11,&(lvalues[207]),0},
{"IDEA-CFB","idea-cfb",NID_idea_cfb64,0,NULL,0},
{"IDEA-ECB","idea-ecb",NID_idea_ecb,0,NULL,0},
{"RC2-CBC","rc2-cbc",NID_rc2_cbc,8,&(lvalues[218]),0},
{"RC2-ECB","rc2-ecb",NID_rc2_ecb,0,NULL,0},
{"RC2-CFB","rc2-cfb",NID_rc2_cfb64,0,NULL,0},
{"RC2-OFB","rc2-ofb",NID_rc2_ofb64,0,NULL,0},
{"SHA","sha",NID_sha,5,&(lvalues[226]),0},
{"RSA-SHA","shaWithRSAEncryption",NID_shaWithRSAEncryption,5,
	&(lvalues[231]),0},
{"DES-EDE-CBC","des-ede-cbc",NID_des_ede_cbc,0,NULL,0},
{"DES-EDE3-CBC","des-ede3-cbc",NID_des_ede3_cbc,8,&(lvalues[236]),0},
{"DES-OFB","des-ofb",NID_des_ofb64,5,&(lvalues[244]),0},
{"IDEA-OFB","idea-ofb",NID_idea_ofb64,0,NULL,0},
{"pkcs9","pkcs9",NID_pkcs9,8,&(lvalues[249]),0},
{"emailAddress","emailAddress",NID_pkcs9_emailAddress,9,
	&(lvalues[257]),0},
{"unstructuredName","unstructuredName",NID_pkcs9_unstructuredName,9,
	&(lvalues[266]),0},
{"contentType","contentType",NID_pkcs9_contentType,9,&(lvalues[275]),0},
{"messageDigest","messageDigest",NID_pkcs9_messageDigest,9,
	&(lvalues[284]),0},
{"signingTime","signingTime",NID_pkcs9_signingTime,9,&(lvalues[293]),0},
{"countersignature","countersignature",NID_pkcs9_countersignature,9,
	&(lvalues[302]),0},
{"challengePassword","challengePassword",NID_pkcs9_challengePassword,
	9,&(lvalues[311]),0},
{"unstructuredAddress","unstructuredAddress",
	NID_pkcs9_unstructuredAddress,9,&(lvalues[320]),0},
{"extendedCertificateAttributes","extendedCertificateAttributes",
	NID_pkcs9_extCertAttributes,9,&(lvalues[329]),0},
{"Netscape","Netscape Communications Corp.",NID_netscape,7,
	&(lvalues[338]),0},
{"nsCertExt","Netscape Certificate Extension",
	NID_netscape_cert_extension,8,&(lvalues[345]),0},
{"nsDataType","Netscape Data Type",NID_netscape_data_type,8,
	&(lvalues[353]),0},
{"DES-EDE-CFB","des-ede-cfb",NID_des_ede_cfb64,0,NULL,0},
{"DES-EDE3-CFB","des-ede3-cfb",NID_des_ede3_cfb64,0,NULL,0},
{"DES-EDE-OFB","des-ede-ofb",NID_des_ede_ofb64,0,NULL,0},
{"DES-EDE3-OFB","des-ede3-ofb",NID_des_ede3_ofb64,0,NULL,0},
{"SHA1","sha1",NID_sha1,5,&(lvalues[361]),0},
{"RSA-SHA1","sha1WithRSAEncryption",NID_sha1WithRSAEncryption,9,
	&(lvalues[366]),0},
{"DSA-SHA","dsaWithSHA",NID_dsaWithSHA,5,&(lvalues[375]),0},
{"DSA-old","dsaEncryption-old",NID_dsa_2,5,&(lvalues[380]),0},
{"PBE-SHA1-RC2-64","pbeWithSHA1AndRC2-CBC",NID_pbeWithSHA1AndRC2_CBC,
	9,&(lvalues[385]),0},
{"PBKDF2","PBKDF2",NID_id_pbkdf2,9,&(lvalues[394]),0},
{"DSA-SHA1-old","dsaWithSHA1-old",NID_dsaWithSHA1_2,5,&(lvalues[403]),0},
{"nsCertType","Netscape Cert Type",NID_netscape_cert_type,9,
	&(lvalues[408]),0},
{"nsBaseUrl","Netscape Base Url",NID_netscape_base_url,9,
	&(lvalues[417]),0},
{"nsRevocationUrl","Netscape Revocation Url",
	NID_netscape_revocation_url,9,&(lvalues[426]),0},
{"nsCaRevocationUrl","Netscape CA Revocation Url",
	NID_netscape_ca_revocation_url,9,&(lvalues[435]),0},
{"nsRenewalUrl","Netscape Renewal Url",NID_netscape_renewal_url,9,
	&(lvalues[444]),0},
{"nsCaPolicyUrl","Netscape CA Policy Url",NID_netscape_ca_policy_url,
	9,&(lvalues[453]),0},
{"nsSslServerName","Netscape SSL Server Name",
	NID_netscape_ssl_server_name,9,&(lvalues[462]),0},
{"nsComment","Netscape Comment",NID_netscape_comment,9,&(lvalues[471]),0},
{"nsCertSequence","Netscape Certificate Sequence",
	NID_netscape_cert_sequence,9,&(lvalues[480]),0},
{"DESX-CBC","desx-cbc",NID_desx_cbc,0,NULL,0},
{"id-ce","id-ce",NID_id_ce,2,&(lvalues[489]),0},
{"subjectKeyIdentifier","X509v3 Subject Key Identifier",
	NID_subject_key_identifier,3,&(lvalues[491]),0},
{"keyUsage","X509v3 Key Usage",NID_key_usage,3,&(lvalues[494]),0},
{"privateKeyUsagePeriod","X509v3 Private Key Usage Period",
	NID_private_key_usage_period,3,&(lvalues[497]),0},
{"subjectAltName","X509v3 Subject Alternative Name",
	NID_subject_alt_name,3,&(lvalues[500]),0},
{"issuerAltName","X509v3 Issuer Alternative Name",NID_issuer_alt_name,
	3,&(lvalues[503]),0},
{"basicConstraints","X509v3 Basic Constraints",NID_basic_constraints,
	3,&(lvalues[506]),0},
{"crlNumber","X509v3 CRL Number",NID_crl_number,3,&(lvalues[509]),0},
{"certificatePolicies","X509v3 Certificate Policies",
	NID_certificate_policies,3,&(lvalues[512]),0},
{"authorityKeyIdentifier","X509v3 Authority Key Identifier",
	NID_authority_key_identifier,3,&(lvalues[515]),0},
{"BF-CBC","bf-cbc",NID_bf_cbc,9,&(lvalues[518]),0},
{"BF-ECB","bf-ecb",NID_bf_ecb,0,NULL,0},
{"BF-CFB","bf-cfb",NID_bf_cfb64,0,NULL,0},
{"BF-OFB","bf-ofb",NID_bf_ofb64,0,NULL,0},
{"MDC2","mdc2",NID_mdc2,4,&(lvalues[527]),0},
{"RSA-MDC2","mdc2WithRSA",NID_mdc2WithRSA,4,&(lvalues[531]),0},
{"RC4-40","rc4-40",NID_rc4_40,0,NULL,0},
{"RC2-40-CBC","rc2-40-cbc",NID_rc2_40_cbc,0,NULL,0},
{"GN","givenName",NID_givenName,3,&(lvalues[535]),0},
{"SN","surname",NID_surname,3,&(lvalues[538]),0},
{"initials","initials",NID_initials,3,&(lvalues[541]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{"crlDistributionPoints","X509v3 CRL Distribution Points",
	NID_crl_distribution_points,3,&(lvalues[544]),0},
{"RSA-NP-MD5","md5WithRSA",NID_md5WithRSA,5,&(lvalues[547]),0},
{"serialNumber","serialNumber",NID_serialNumber,3,&(lvalues[552]),0},
{"title","title",NID_title,3,&(lvalues[555]),0},
{"description","description",NID_description,3,&(lvalues[558]),0},
{"CAST5-CBC","cast5-cbc",NID_cast5_cbc,9,&(lvalues[561]),0},
{"CAST5-ECB","cast5-ecb",NID_cast5_ecb,0,NULL,0},
{"CAST5-CFB","cast5-cfb",NID_cast5_cfb64,0,NULL,0},
{"CAST5-OFB","cast5-ofb",NID_cast5_ofb64,0,NULL,0},
{"pbeWithMD5AndCast5CBC","pbeWithMD5AndCast5CBC",
	NID_pbeWithMD5AndCast5_CBC,9,&(lvalues[570]),0},
{"DSA-SHA1","dsaWithSHA1",NID_dsaWithSHA1,7,&(lvalues[579]),0},
{"MD5-SHA1","md5-sha1",NID_md5_sha1,0,NULL,0},
{"RSA-SHA1-2","sha1WithRSA",NID_sha1WithRSA,5,&(lvalues[586]),0},
{"DSA","dsaEncryption",NID_dsa,7,&(lvalues[591]),0},
{"RIPEMD160","ripemd160",NID_ripemd160,5,&(lvalues[598]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{"RSA-RIPEMD160","ripemd160WithRSA",NID_ripemd160WithRSA,6,
	&(lvalues[603]),0},
{"RC5-CBC","rc5-cbc",NID_rc5_cbc,8,&(lvalues[609]),0},
{"RC5-ECB","rc5-ecb",NID_rc5_ecb,0,NULL,0},
{"RC5-CFB","rc5-cfb",NID_rc5_cfb64,0,NULL,0},
{"RC5-OFB","rc5-ofb",NID_rc5_ofb64,0,NULL,0},
{"RLE","run length compression",NID_rle_compression,6,&(lvalues[617]),0},
{"ZLIB","zlib compression",NID_zlib_compression,11,&(lvalues[623]),0},
{"extendedKeyUsage","X509v3 Extended Key Usage",NID_ext_key_usage,3,
	&(lvalues[634]),0},
{"PKIX","PKIX",NID_id_pkix,6,&(lvalues[637]),0},
{"id-kp","id-kp",NID_id_kp,7,&(lvalues[643]),0},
{"serverAuth","TLS Web Server Authentication",NID_server_auth,8,
	&(lvalues[650]),0},
{"clientAuth","TLS Web Client Authentication",NID_client_auth,8,
	&(lvalues[658]),0},
{"codeSigning","Code Signing",NID_code_sign,8,&(lvalues[666]),0},
{"emailProtection","E-mail Protection",NID_email_protect,8,
	&(lvalues[674]),0},
{"timeStamping","Time Stamping",NID_time_stamp,8,&(lvalues[682]),0},
{"msCodeInd","Microsoft Individual Code Signing",NID_ms_code_ind,10,
	&(lvalues[690]),0},
{"msCodeCom","Microsoft Commercial Code Signing",NID_ms_code_com,10,
	&(lvalues[700]),0},
{"msCTLSign","Microsoft Trust List Signing",NID_ms_ctl_sign,10,
	&(lvalues[710]),0},
{"msSGC","Microsoft Server Gated Crypto",NID_ms_sgc,10,&(lvalues[720]),0},
{"msEFS","Microsoft Encrypted File System",NID_ms_efs,10,
	&(lvalues[730]),0},
{"nsSGC","Netscape Server Gated Crypto",NID_ns_sgc,9,&(lvalues[740]),0},
{"deltaCRL","X509v3 Delta CRL Indicator",NID_delta_crl,3,
	&(lvalues[749]),0},
{"CRLReason","X509v3 CRL Reason Code",NID_crl_reason,3,&(lvalues[752]),0},
{"invalidityDate","Invalidity Date",NID_invalidity_date,3,
	&(lvalues[755]),0},
{"SXNetID","Strong Extranet ID",NID_sxnet,5,&(lvalues[758]),0},
{"PBE-SHA1-RC4-128","pbeWithSHA1And128BitRC4",
	NID_pbe_WithSHA1And128BitRC4,10,&(lvalues[763]),0},
{"PBE-SHA1-RC4-40","pbeWithSHA1And40BitRC4",
	NID_pbe_WithSHA1And40BitRC4,10,&(lvalues[773]),0},
{"PBE-SHA1-3DES","pbeWithSHA1And3-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And3_Key_TripleDES_CBC,10,&(lvalues[783]),0},
{"PBE-SHA1-2DES","pbeWithSHA1And2-KeyTripleDES-CBC",
	NID_pbe_WithSHA1And2_Key_TripleDES_CBC,10,&(lvalues[793]),0},
{"PBE-SHA1-RC2-128","pbeWithSHA1And128BitRC2-CBC",
	NID_pbe_WithSHA1And128BitRC2_CBC,10,&(lvalues[803]),0},
{"PBE-SHA1-RC2-40","pbeWithSHA1And40BitRC2-CBC",
	NID_pbe_WithSHA1And40BitRC2_CBC,10,&(lvalues[813]),0},
{"keyBag","keyBag",NID_keyBag,11,&(lvalues[823]),0},
{"pkcs8ShroudedKeyBag","pkcs8ShroudedKeyBag",NID_pkcs8ShroudedKeyBag,
	11,&(lvalues[834]),0},
{"certBag","certBag",NID_certBag,11,&(lvalues[845]),0},
{"crlBag","crlBag",NID_crlBag,11,&(lvalues[856]),0},
{"secretBag","secretBag",NID_secretBag,11,&(lvalues[867]),0},
{"safeContentsBag","safeContentsBag",NID_safeContentsBag,11,
	&(lvalues[878]),0},
{"friendlyName","friendlyName",NID_friendlyName,9,&(lvalues[889]),0},
{"localKeyID","localKeyID",NID_localKeyID,9,&(lvalues[898]),0},
{"x509Certificate","x509Certificate",NID_x509Certificate,10,
	&(lvalues[907]),0},
{"sdsiCertificate","sdsiCertificate",NID_sdsiCertificate,10,
	&(lvalues[917]),0},
{"x509Crl","x509Crl",NID_x509Crl,10,&(lvalues[927]),0},
{"PBES2","PBES2",NID_pbes2,9,&(lvalues[937]),0},
{"PBMAC1","PBMAC1",NID_pbmac1,9,&(lvalues[946]),0},
{"hmacWithSHA1","hmacWithSHA1",NID_hmacWithSHA1,8,&(lvalues[955]),0},
{"id-qt-cps","Policy Qualifier CPS",NID_id_qt_cps,8,&(lvalues[963]),0},
{"id-qt-unotice","Policy Qualifier User Notice",NID_id_qt_unotice,8,
	&(lvalues[971]),0},
{"RC2-64-CBC","rc2-64-cbc",NID_rc2_64_cbc,0,NULL,0},
{"SMIME-CAPS","S/MIME Capabilities",NID_SMIMECapabilities,9,
	&(lvalues[979]),0},
{"PBE-MD2-RC2-64","pbeWithMD2AndRC2-CBC",NID_pbeWithMD2AndRC2_CBC,9,
	&(lvalues[988]),0},
{"PBE-MD5-RC2-64","pbeWithMD5AndRC2-CBC",NID_pbeWithMD5AndRC2_CBC,9,
	&(lvalues[997]),0},
{"PBE-SHA1-DES","pbeWithSHA1AndDES-CBC",NID_pbeWithSHA1AndDES_CBC,9,
	&(lvalues[1006]),0},
{"msExtReq","Microsoft Extension Request",NID_ms_ext_req,10,
	&(lvalues[1015]),0},
{"extReq","Extension Request",NID_ext_req,9,&(lvalues[1025]),0},
{"name","name",NID_name,3,&(lvalues[1034]),0},
{"dnQualifier","dnQualifier",NID_dnQualifier,3,&(lvalues[1037]),0},
{"id-pe","id-pe",NID_id_pe,7,&(lvalues[1040]),0},
{"id-ad","id-ad",NID_id_ad,7,&(lvalues[1047]),0},
{"authorityInfoAccess","Authority Information Access",NID_info_access,
	8,&(lvalues[1054]),0},
{"OCSP","OCSP",NID_ad_OCSP,8,&(lvalues[1062]),0},
{"caIssuers","CA Issuers",NID_ad_ca_issuers,8,&(lvalues[1070]),0},
{"OCSPSigning","OCSP Signing",NID_OCSP_sign,8,&(lvalues[1078]),0},
{"ISO","iso",NID_iso,1,&(lvalues[1086]),0},
{"member-body","ISO Member Body",NID_member_body,1,&(lvalues[1087]),0},
{"ISO-US","ISO US Member Body",NID_ISO_US,3,&(lvalues[1088]),0},
{"X9-57","X9.57",NID_X9_57,5,&(lvalues[1091]),0},
{"X9cm","X9.57 CM ?",NID_X9cm,6,&(lvalues[1096]),0},
{"pkcs1","pkcs1",NID_pkcs1,8,&(lvalues[1102]),0},
{"pkcs5","pkcs5",NID_pkcs5,8,&(lvalues[1110]),0},
{"SMIME","S/MIME",NID_SMIME,9,&(lvalues[1118]),0},
{"id-smime-mod","id-smime-mod",NID_id_smime_mod,10,&(lvalues[1127]),0},
{"id-smime-ct","id-smime-ct",NID_id_smime_ct,10,&(lvalues[1137]),0},
{"id-smime-aa","id-smime-aa",NID_id_smime_aa,10,&(lvalues[1147]),0},
{"id-smime-alg","id-smime-alg",NID_id_smime_alg,10,&(lvalues[1157]),0},
{"id-smime-cd","id-smime-cd",NID_id_smime_cd,10,&(lvalues[1167]),0},
{"id-smime-spq","id-smime-spq",NID_id_smime_spq,10,&(lvalues[1177]),0},
{"id-smime-cti","id-smime-cti",NID_id_smime_cti,10,&(lvalues[1187]),0},
{"id-smime-mod-cms","id-smime-mod-cms",NID_id_smime_mod_cms,11,
	&(lvalues[1197]),0},
{"id-smime-mod-ess","id-smime-mod-ess",NID_id_smime_mod_ess,11,
	&(lvalues[1208]),0},
{"id-smime-mod-oid","id-smime-mod-oid",NID_id_smime_mod_oid,11,
	&(lvalues[1219]),0},
{"id-smime-mod-msg-v3","id-smime-mod-msg-v3",NID_id_smime_mod_msg_v3,
	11,&(lvalues[1230]),0},
{"id-smime-mod-ets-eSignature-88","id-smime-mod-ets-eSignature-88",
	NID_id_smime_mod_ets_eSignature_88,11,&(lvalues[1241]),0},
{"id-smime-mod-ets-eSignature-97","id-smime-mod-ets-eSignature-97",
	NID_id_smime_mod_ets_eSignature_97,11,&(lvalues[1252]),0},
{"id-smime-mod-ets-eSigPolicy-88","id-smime-mod-ets-eSigPolicy-88",
	NID_id_smime_mod_ets_eSigPolicy_88,11,&(lvalues[1263]),0},
{"id-smime-mod-ets-eSigPolicy-97","id-smime-mod-ets-eSigPolicy-97",
	NID_id_smime_mod_ets_eSigPolicy_97,11,&(lvalues[1274]),0},
{"id-smime-ct-receipt","id-smime-ct-receipt",NID_id_smime_ct_receipt,
	11,&(lvalues[1285]),0},
{"id-smime-ct-authData","id-smime-ct-authData",
	NID_id_smime_ct_authData,11,&(lvalues[1296]),0},
{"id-smime-ct-publishCert","id-smime-ct-publishCert",
	NID_id_smime_ct_publishCert,11,&(lvalues[1307]),0},
{"id-smime-ct-TSTInfo","id-smime-ct-TSTInfo",NID_id_smime_ct_TSTInfo,
	11,&(lvalues[1318]),0},
{"id-smime-ct-TDTInfo","id-smime-ct-TDTInfo",NID_id_smime_ct_TDTInfo,
	11,&(lvalues[1329]),0},
{"id-smime-ct-contentInfo","id-smime-ct-contentInfo",
	NID_id_smime_ct_contentInfo,11,&(lvalues[1340]),0},
{"id-smime-ct-DVCSRequestData","id-smime-ct-DVCSRequestData",
	NID_id_smime_ct_DVCSRequestData,11,&(lvalues[1351]),0},
{"id-smime-ct-DVCSResponseData","id-smime-ct-DVCSResponseData",
	NID_id_smime_ct_DVCSResponseData,11,&(lvalues[1362]),0},
{"id-smime-aa-receiptRequest","id-smime-aa-receiptRequest",
	NID_id_smime_aa_receiptRequest,11,&(lvalues[1373]),0},
{"id-smime-aa-securityLabel","id-smime-aa-securityLabel",
	NID_id_smime_aa_securityLabel,11,&(lvalues[1384]),0},
{"id-smime-aa-mlExpandHistory","id-smime-aa-mlExpandHistory",
	NID_id_smime_aa_mlExpandHistory,11,&(lvalues[1395]),0},
{"id-smime-aa-contentHint","id-smime-aa-contentHint",
	NID_id_smime_aa_contentHint,11,&(lvalues[1406]),0},
{"id-smime-aa-msgSigDigest","id-smime-aa-msgSigDigest",
	NID_id_smime_aa_msgSigDigest,11,&(lvalues[1417]),0},
{"id-smime-aa-encapContentType","id-smime-aa-encapContentType",
	NID_id_smime_aa_encapContentType,11,&(lvalues[1428]),0},
{"id-smime-aa-contentIdentifier","id-smime-aa-contentIdentifier",
	NID_id_smime_aa_contentIdentifier,11,&(lvalues[1439]),0},
{"id-smime-aa-macValue","id-smime-aa-macValue",
	NID_id_smime_aa_macValue,11,&(lvalues[1450]),0},
{"id-smime-aa-equivalentLabels","id-smime-aa-equivalentLabels",
	NID_id_smime_aa_equivalentLabels,11,&(lvalues[1461]),0},
{"id-smime-aa-contentReference","id-smime-aa-contentReference",
	NID_id_smime_aa_contentReference,11,&(lvalues[1472]),0},
{"id-smime-aa-encrypKeyPref","id-smime-aa-encrypKeyPref",
	NID_id_smime_aa_encrypKeyPref,11,&(lvalues[1483]),0},
{"id-smime-aa-signingCertificate","id-smime-aa-signingCertificate",
	NID_id_smime_aa_signingCertificate,11,&(lvalues[1494]),0},
{"id-smime-aa-smimeEncryptCerts","id-smime-aa-smimeEncryptCerts",
	NID_id_smime_aa_smimeEncryptCerts,11,&(lvalues[1505]),0},
{"id-smime-aa-timeStampToken","id-smime-aa-timeStampToken",
	NID_id_smime_aa_timeStampToken,11,&(lvalues[1516]),0},
{"id-smime-aa-ets-sigPolicyId","id-smime-aa-ets-sigPolicyId",
	NID_id_smime_aa_ets_sigPolicyId,11,&(lvalues[1527]),0},
{"id-smime-aa-ets-commitmentType","id-smime-aa-ets-commitmentType",
	NID_id_smime_aa_ets_commitmentType,11,&(lvalues[1538]),0},
{"id-smime-aa-ets-signerLocation","id-smime-aa-ets-signerLocation",
	NID_id_smime_aa_ets_signerLocation,11,&(lvalues[1549]),0},
{"id-smime-aa-ets-signerAttr","id-smime-aa-ets-signerAttr",
	NID_id_smime_aa_ets_signerAttr,11,&(lvalues[1560]),0},
{"id-smime-aa-ets-otherSigCert","id-smime-aa-ets-otherSigCert",
	NID_id_smime_aa_ets_otherSigCert,11,&(lvalues[1571]),0},
{"id-smime-aa-ets-contentTimestamp",
	"id-smime-aa-ets-contentTimestamp",
	NID_id_smime_aa_ets_contentTimestamp,11,&(lvalues[1582]),0},
{"id-smime-aa-ets-CertificateRefs","id-smime-aa-ets-CertificateRefs",
	NID_id_smime_aa_ets_CertificateRefs,11,&(lvalues[1593]),0},
{"id-smime-aa-ets-RevocationRefs","id-smime-aa-ets-RevocationRefs",
	NID_id_smime_aa_ets_RevocationRefs,11,&(lvalues[1604]),0},
{"id-smime-aa-ets-certValues","id-smime-aa-ets-certValues",
	NID_id_smime_aa_ets_certValues,11,&(lvalues[1615]),0},
{"id-smime-aa-ets-revocationValues",
	"id-smime-aa-ets-revocationValues",
	NID_id_smime_aa_ets_revocationValues,11,&(lvalues[1626]),0},
{"id-smime-aa-ets-escTimeStamp","id-smime-aa-ets-escTimeStamp",
	NID_id_smime_aa_ets_escTimeStamp,11,&(lvalues[1637]),0},
{"id-smime-aa-ets-certCRLTimestamp",
	"id-smime-aa-ets-certCRLTimestamp",
	NID_id_smime_aa_ets_certCRLTimestamp,11,&(lvalues[1648]),0},
{"id-smime-aa-ets-archiveTimeStamp",
	"id-smime-aa-ets-archiveTimeStamp",
	NID_id_smime_aa_ets_archiveTimeStamp,11,&(lvalues[1659]),0},
{"id-smime-aa-signatureType","id-smime-aa-signatureType",
	NID_id_smime_aa_signatureType,11,&(lvalues[1670]),0},
{"id-smime-aa-dvcs-dvc","id-smime-aa-dvcs-dvc",
	NID_id_smime_aa_dvcs_dvc,11,&(lvalues[1681]),0},
{"id-smime-alg-ESDHwith3DES","id-smime-alg-ESDHwith3DES",
	NID_id_smime_alg_ESDHwith3DES,11,&(lvalues[1692]),0},
{"id-smime-alg-ESDHwithRC2","id-smime-alg-ESDHwithRC2",
	NID_id_smime_alg_ESDHwithRC2,11,&(lvalues[1703]),0},
{"id-smime-alg-3DESwrap","id-smime-alg-3DESwrap",
	NID_id_smime_alg_3DESwrap,11,&(lvalues[1714]),0},
{"id-smime-alg-RC2wrap","id-smime-alg-RC2wrap",
	NID_id_smime_alg_RC2wrap,11,&(lvalues[1725]),0},
{"id-smime-alg-ESDH","id-smime-alg-ESDH",NID_id_smime_alg_ESDH,11,
	&(lvalues[1736]),0},
{"id-smime-alg-CMS3DESwrap","id-smime-alg-CMS3DESwrap",
	NID_id_smime_alg_CMS3DESwrap,11,&(lvalues[1747]),0},
{"id-smime-alg-CMSRC2wrap","id-smime-alg-CMSRC2wrap",
	NID_id_smime_alg_CMSRC2wrap,11,&(lvalues[1758]),0},
{"id-smime-cd-ldap","id-smime-cd-ldap",NID_id_smime_cd_ldap,11,
	&(lvalues[1769]),0},
{"id-smime-spq-ets-sqt-uri","id-smime-spq-ets-sqt-uri",
	NID_id_smime_spq_ets_sqt_uri,11,&(lvalues[1780]),0},
{"id-smime-spq-ets-sqt-unotice","id-smime-spq-ets-sqt-unotice",
	NID_id_smime_spq_ets_sqt_unotice,11,&(lvalues[1791]),0},
{"id-smime-cti-ets-proofOfOrigin","id-smime-cti-ets-proofOfOrigin",
	NID_id_smime_cti_ets_proofOfOrigin,11,&(lvalues[1802]),0},
{"id-smime-cti-ets-proofOfReceipt","id-smime-cti-ets-proofOfReceipt",
	NID_id_smime_cti_ets_proofOfReceipt,11,&(lvalues[1813]),0},
{"id-smime-cti-ets-proofOfDelivery",
	"id-smime-cti-ets-proofOfDelivery",
	NID_id_smime_cti_ets_proofOfDelivery,11,&(lvalues[1824]),0},
{"id-smime-cti-ets-proofOfSender","id-smime-cti-ets-proofOfSender",
	NID_id_smime_cti_ets_proofOfSender,11,&(lvalues[1835]),0},
{"id-smime-cti-ets-proofOfApproval",
	"id-smime-cti-ets-proofOfApproval",
	NID_id_smime_cti_ets_proofOfApproval,11,&(lvalues[1846]),0},
{"id-smime-cti-ets-proofOfCreation",
	"id-smime-cti-ets-proofOfCreation",
	NID_id_smime_cti_ets_proofOfCreation,11,&(lvalues[1857]),0},
{"MD4","md4",NID_md4,8,&(lvalues[1868]),0},
{"id-pkix-mod","id-pkix-mod",NID_id_pkix_mod,7,&(lvalues[1876]),0},
{"id-qt","id-qt",NID_id_qt,7,&(lvalues[1883]),0},
{"id-it","id-it",NID_id_it,7,&(lvalues[1890]),0},
{"id-pkip","id-pkip",NID_id_pkip,7,&(lvalues[1897]),0},
{"id-alg","id-alg",NID_id_alg,7,&(lvalues[1904]),0},
{"id-cmc","id-cmc",NID_id_cmc,7,&(lvalues[1911]),0},
{"id-on","id-on",NID_id_on,7,&(lvalues[1918]),0},
{"id-pda","id-pda",NID_id_pda,7,&(lvalues[1925]),0},
{"id-aca","id-aca",NID_id_aca,7,&(lvalues[1932]),0},
{"id-qcs","id-qcs",NID_id_qcs,7,&(lvalues[1939]),0},
{"id-cct","id-cct",NID_id_cct,7,&(lvalues[1946]),0},
{"id-pkix1-explicit-88","id-pkix1-explicit-88",
	NID_id_pkix1_explicit_88,8,&(lvalues[1953]),0},
{"id-pkix1-implicit-88","id-pkix1-implicit-88",
	NID_id_pkix1_implicit_88,8,&(lvalues[1961]),0},
{"id-pkix1-explicit-93","id-pkix1-explicit-93",
	NID_id_pkix1_explicit_93,8,&(lvalues[1969]),0},
{"id-pkix1-implicit-93","id-pkix1-implicit-93",
	NID_id_pkix1_implicit_93,8,&(lvalues[1977]),0},
{"id-mod-crmf","id-mod-crmf",NID_id_mod_crmf,8,&(lvalues[1985]),0},
{"id-mod-cmc","id-mod-cmc",NID_id_mod_cmc,8,&(lvalues[1993]),0},
{"id-mod-kea-profile-88","id-mod-kea-profile-88",
	NID_id_mod_kea_profile_88,8,&(lvalues[2001]),0},
{"id-mod-kea-profile-93","id-mod-kea-profile-93",
	NID_id_mod_kea_profile_93,8,&(lvalues[2009]),0},
{"id-mod-cmp","id-mod-cmp",NID_id_mod_cmp,8,&(lvalues[2017]),0},
{"id-mod-qualified-cert-88","id-mod-qualified-cert-88",
	NID_id_mod_qualified_cert_88,8,&(lvalues[2025]),0},
{"id-mod-qualified-cert-93","id-mod-qualified-cert-93",
	NID_id_mod_qualified_cert_93,8,&(lvalues[2033]),0},
{"id-mod-attribute-cert","id-mod-attribute-cert",
	NID_id_mod_attribute_cert,8,&(lvalues[2041]),0},
{"id-mod-timestamp-protocol","id-mod-timestamp-protocol",
	NID_id_mod_timestamp_protocol,8,&(lvalues[2049]),0},
{"id-mod-ocsp","id-mod-ocsp",NID_id_mod_ocsp,8,&(lvalues[2057]),0},
{"id-mod-dvcs","id-mod-dvcs",NID_id_mod_dvcs,8,&(lvalues[2065]),0},
{"id-mod-cmp2000","id-mod-cmp2000",NID_id_mod_cmp2000,8,
	&(lvalues[2073]),0},
{"biometricInfo","Biometric Info",NID_biometricInfo,8,&(lvalues[2081]),0},
{"qcStatements","qcStatements",NID_qcStatements,8,&(lvalues[2089]),0},
{"ac-auditEntity","ac-auditEntity",NID_ac_auditEntity,8,
	&(lvalues[2097]),0},
{"ac-targeting","ac-targeting",NID_ac_targeting,8,&(lvalues[2105]),0},
{"aaControls","aaControls",NID_aaControls,8,&(lvalues[2113]),0},
{"sbgp-ipAddrBlock","sbgp-ipAddrBlock",NID_sbgp_ipAddrBlock,8,
	&(lvalues[2121]),0},
{"sbgp-autonomousSysNum","sbgp-autonomousSysNum",
	NID_sbgp_autonomousSysNum,8,&(lvalues[2129]),0},
{"sbgp-routerIdentifier","sbgp-routerIdentifier",
	NID_sbgp_routerIdentifier,8,&(lvalues[2137]),0},
{"textNotice","textNotice",NID_textNotice,8,&(lvalues[2145]),0},
{"ipsecEndSystem","IPSec End System",NID_ipsecEndSystem,8,
	&(lvalues[2153]),0},
{"ipsecTunnel","IPSec Tunnel",NID_ipsecTunnel,8,&(lvalues[2161]),0},
{"ipsecUser","IPSec User",NID_ipsecUser,8,&(lvalues[2169]),0},
{"DVCS","dvcs",NID_dvcs,8,&(lvalues[2177]),0},
{"id-it-caProtEncCert","id-it-caProtEncCert",NID_id_it_caProtEncCert,
	8,&(lvalues[2185]),0},
{"id-it-signKeyPairTypes","id-it-signKeyPairTypes",
	NID_id_it_signKeyPairTypes,8,&(lvalues[2193]),0},
{"id-it-encKeyPairTypes","id-it-encKeyPairTypes",
	NID_id_it_encKeyPairTypes,8,&(lvalues[2201]),0},
{"id-it-preferredSymmAlg","id-it-preferredSymmAlg",
	NID_id_it_preferredSymmAlg,8,&(lvalues[2209]),0},
{"id-it-caKeyUpdateInfo","id-it-caKeyUpdateInfo",
	NID_id_it_caKeyUpdateInfo,8,&(lvalues[2217]),0},
{"id-it-currentCRL","id-it-currentCRL",NID_id_it_currentCRL,8,
	&(lvalues[2225]),0},
{"id-it-unsupportedOIDs","id-it-unsupportedOIDs",
	NID_id_it_unsupportedOIDs,8,&(lvalues[2233]),0},
{"id-it-subscriptionRequest","id-it-subscriptionRequest",
	NID_id_it_subscriptionRequest,8,&(lvalues[2241]),0},
{"id-it-subscriptionResponse","id-it-subscriptionResponse",
	NID_id_it_subscriptionResponse,8,&(lvalues[2249]),0},
{"id-it-keyPairParamReq","id-it-keyPairParamReq",
	NID_id_it_keyPairParamReq,8,&(lvalues[2257]),0},
{"id-it-keyPairParamRep","id-it-keyPairParamRep",
	NID_id_it_keyPairParamRep,8,&(lvalues[2265]),0},
{"id-it-revPassphrase","id-it-revPassphrase",NID_id_it_revPassphrase,
	8,&(lvalues[2273]),0},
{"id-it-implicitConfirm","id-it-implicitConfirm",
	NID_id_it_implicitConfirm,8,&(lvalues[2281]),0},
{"id-it-confirmWaitTime","id-it-confirmWaitTime",
	NID_id_it_confirmWaitTime,8,&(lvalues[2289]),0},
{"id-it-origPKIMessage","id-it-origPKIMessage",
	NID_id_it_origPKIMessage,8,&(lvalues[2297]),0},
{"id-regCtrl","id-regCtrl",NID_id_regCtrl,8,&(lvalues[2305]),0},
{"id-regInfo","id-regInfo",NID_id_regInfo,8,&(lvalues[2313]),0},
{"id-regCtrl-regToken","id-regCtrl-regToken",NID_id_regCtrl_regToken,
	9,&(lvalues[2321]),0},
{"id-regCtrl-authenticator","id-regCtrl-authenticator",
	NID_id_regCtrl_authenticator,9,&(lvalues[2330]),0},
{"id-regCtrl-pkiPublicationInfo","id-regCtrl-pkiPublicationInfo",
	NID_id_regCtrl_pkiPublicationInfo,9,&(lvalues[2339]),0},
{"id-regCtrl-pkiArchiveOptions","id-regCtrl-pkiArchiveOptions",
	NID_id_regCtrl_pkiArchiveOptions,9,&(lvalues[2348]),0},
{"id-regCtrl-oldCertID","id-regCtrl-oldCertID",
	NID_id_regCtrl_oldCertID,9,&(lvalues[2357]),0},
{"id-regCtrl-protocolEncrKey","id-regCtrl-protocolEncrKey",
	NID_id_regCtrl_protocolEncrKey,9,&(lvalues[2366]),0},
{"id-regInfo-utf8Pairs","id-regInfo-utf8Pairs",
	NID_id_regInfo_utf8Pairs,9,&(lvalues[2375]),0},
{"id-regInfo-certReq","id-regInfo-certReq",NID_id_regInfo_certReq,9,
	&(lvalues[2384]),0},
{"id-alg-des40","id-alg-des40",NID_id_alg_des40,8,&(lvalues[2393]),0},
{"id-alg-noSignature","id-alg-noSignature",NID_id_alg_noSignature,8,
	&(lvalues[2401]),0},
{"id-alg-dh-sig-hmac-sha1","id-alg-dh-sig-hmac-sha1",
	NID_id_alg_dh_sig_hmac_sha1,8,&(lvalues[2409]),0},
{"id-alg-dh-pop","id-alg-dh-pop",NID_id_alg_dh_pop,8,&(lvalues[2417]),0},
{"id-cmc-statusInfo","id-cmc-statusInfo",NID_id_cmc_statusInfo,8,
	&(lvalues[2425]),0},
{"id-cmc-identification","id-cmc-identification",
	NID_id_cmc_identification,8,&(lvalues[2433]),0},
{"id-cmc-identityProof","id-cmc-identityProof",
	NID_id_cmc_identityProof,8,&(lvalues[2441]),0},
{"id-cmc-dataReturn","id-cmc-dataReturn",NID_id_cmc_dataReturn,8,
	&(lvalues[2449]),0},
{"id-cmc-transactionId","id-cmc-transactionId",
	NID_id_cmc_transactionId,8,&(lvalues[2457]),0},
{"id-cmc-senderNonce","id-cmc-senderNonce",NID_id_cmc_senderNonce,8,
	&(lvalues[2465]),0},
{"id-cmc-recipientNonce","id-cmc-recipientNonce",
	NID_id_cmc_recipientNonce,8,&(lvalues[2473]),0},
{"id-cmc-addExtensions","id-cmc-addExtensions",
	NID_id_cmc_addExtensions,8,&(lvalues[2481]),0},
{"id-cmc-encryptedPOP","id-cmc-encryptedPOP",NID_id_cmc_encryptedPOP,
	8,&(lvalues[2489]),0},
{"id-cmc-decryptedPOP","id-cmc-decryptedPOP",NID_id_cmc_decryptedPOP,
	8,&(lvalues[2497]),0},
{"id-cmc-lraPOPWitness","id-cmc-lraPOPWitness",
	NID_id_cmc_lraPOPWitness,8,&(lvalues[2505]),0},
{"id-cmc-getCert","id-cmc-getCert",NID_id_cmc_getCert,8,
	&(lvalues[2513]),0},
{"id-cmc-getCRL","id-cmc-getCRL",NID_id_cmc_getCRL,8,&(lvalues[2521]),0},
{"id-cmc-revokeRequest","id-cmc-revokeRequest",
	NID_id_cmc_revokeRequest,8,&(lvalues[2529]),0},
{"id-cmc-regInfo","id-cmc-regInfo",NID_id_cmc_regInfo,8,
	&(lvalues[2537]),0},
{"id-cmc-responseInfo","id-cmc-responseInfo",NID_id_cmc_responseInfo,
	8,&(lvalues[2545]),0},
{"id-cmc-queryPending","id-cmc-queryPending",NID_id_cmc_queryPending,
	8,&(lvalues[2553]),0},
{"id-cmc-popLinkRandom","id-cmc-popLinkRandom",
	NID_id_cmc_popLinkRandom,8,&(lvalues[2561]),0},
{"id-cmc-popLinkWitness","id-cmc-popLinkWitness",
	NID_id_cmc_popLinkWitness,8,&(lvalues[2569]),0},
{"id-cmc-confirmCertAcceptance","id-cmc-confirmCertAcceptance",
	NID_id_cmc_confirmCertAcceptance,8,&(lvalues[2577]),0},
{"id-on-personalData","id-on-personalData",NID_id_on_personalData,8,
	&(lvalues[2585]),0},
{"id-pda-dateOfBirth","id-pda-dateOfBirth",NID_id_pda_dateOfBirth,8,
	&(lvalues[2593]),0},
{"id-pda-placeOfBirth","id-pda-placeOfBirth",NID_id_pda_placeOfBirth,
	8,&(lvalues[2601]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{"id-pda-gender","id-pda-gender",NID_id_pda_gender,8,&(lvalues[2609]),0},
{"id-pda-countryOfCitizenship","id-pda-countryOfCitizenship",
	NID_id_pda_countryOfCitizenship,8,&(lvalues[2617]),0},
{"id-pda-countryOfResidence","id-pda-countryOfResidence",
	NID_id_pda_countryOfResidence,8,&(lvalues[2625]),0},
{"id-aca-authenticationInfo","id-aca-authenticationInfo",
	NID_id_aca_authenticationInfo,8,&(lvalues[2633]),0},
{"id-aca-accessIdentity","id-aca-accessIdentity",
	NID_id_aca_accessIdentity,8,&(lvalues[2641]),0},
{"id-aca-chargingIdentity","id-aca-chargingIdentity",
	NID_id_aca_chargingIdentity,8,&(lvalues[2649]),0},
{"id-aca-group","id-aca-group",NID_id_aca_group,8,&(lvalues[2657]),0},
{"id-aca-role","id-aca-role",NID_id_aca_role,8,&(lvalues[2665]),0},
{"id-qcs-pkixQCSyntax-v1","id-qcs-pkixQCSyntax-v1",
	NID_id_qcs_pkixQCSyntax_v1,8,&(lvalues[2673]),0},
{"id-cct-crs","id-cct-crs",NID_id_cct_crs,8,&(lvalues[2681]),0},
{"id-cct-PKIData","id-cct-PKIData",NID_id_cct_PKIData,8,
	&(lvalues[2689]),0},
{"id-cct-PKIResponse","id-cct-PKIResponse",NID_id_cct_PKIResponse,8,
	&(lvalues[2697]),0},
{"ad_timestamping","AD Time Stamping",NID_ad_timeStamping,8,
	&(lvalues[2705]),0},
{"AD_DVCS","ad dvcs",NID_ad_dvcs,8,&(lvalues[2713]),0},
{"basicOCSPResponse","Basic OCSP Response",NID_id_pkix_OCSP_basic,9,
	&(lvalues[2721]),0},
{"Nonce","OCSP Nonce",NID_id_pkix_OCSP_Nonce,9,&(lvalues[2730]),0},
{"CrlID","OCSP CRL ID",NID_id_pkix_OCSP_CrlID,9,&(lvalues[2739]),0},
{"acceptableResponses","Acceptable OCSP Responses",
	NID_id_pkix_OCSP_acceptableResponses,9,&(lvalues[2748]),0},
{"noCheck","OCSP No Check",NID_id_pkix_OCSP_noCheck,9,&(lvalues[2757]),0},
{"archiveCutoff","OCSP Archive Cutoff",NID_id_pkix_OCSP_archiveCutoff,
	9,&(lvalues[2766]),0},
{"serviceLocator","OCSP Service Locator",
	NID_id_pkix_OCSP_serviceLocator,9,&(lvalues[2775]),0},
{"extendedStatus","Extended OCSP Status",
	NID_id_pkix_OCSP_extendedStatus,9,&(lvalues[2784]),0},
{"valid","valid",NID_id_pkix_OCSP_valid,9,&(lvalues[2793]),0},
{"path","path",NID_id_pkix_OCSP_path,9,&(lvalues[2802]),0},
{"trustRoot","Trust Root",NID_id_pkix_OCSP_trustRoot,9,
	&(lvalues[2811]),0},
{"algorithm","algorithm",NID_algorithm,4,&(lvalues[2820]),0},
{"rsaSignature","rsaSignature",NID_rsaSignature,5,&(lvalues[2824]),0},
{"X500algorithms","directory services - algorithms",
	NID_X500algorithms,2,&(lvalues[2829]),0},
{"ORG","org",NID_org,1,&(lvalues[2831]),0},
{"DOD","dod",NID_dod,2,&(lvalues[2832]),0},
{"IANA","iana",NID_iana,3,&(lvalues[2834]),0},
{"directory","Directory",NID_Directory,4,&(lvalues[2837]),0},
{"mgmt","Management",NID_Management,4,&(lvalues[2841]),0},
{"experimental","Experimental",NID_Experimental,4,&(lvalues[2845]),0},
{"private","Private",NID_Private,4,&(lvalues[2849]),0},
{"security","Security",NID_Security,4,&(lvalues[2853]),0},
{"snmpv2","SNMPv2",NID_SNMPv2,4,&(lvalues[2857]),0},
{"Mail","Mail",NID_Mail,4,&(lvalues[2861]),0},
{"enterprises","Enterprises",NID_Enterprises,5,&(lvalues[2865]),0},
{"dcobject","dcObject",NID_dcObject,9,&(lvalues[2870]),0},
{"DC","domainComponent",NID_domainComponent,10,&(lvalues[2879]),0},
{"domain","Domain",NID_Domain,10,&(lvalues[2889]),0},
{"NULL","NULL",NID_joint_iso_ccitt,1,&(lvalues[2899]),0},
{"selected-attribute-types","Selected Attribute Types",
	NID_selected_attribute_types,3,&(lvalues[2900]),0},
{"clearance","clearance",NID_clearance,4,&(lvalues[2903]),0},
{"RSA-MD4","md4WithRSAEncryption",NID_md4WithRSAEncryption,9,
	&(lvalues[2907]),0},
{"ac-proxying","ac-proxying",NID_ac_proxying,8,&(lvalues[2916]),0},
{"subjectInfoAccess","Subject Information Access",NID_sinfo_access,8,
	&(lvalues[2924]),0},
{"id-aca-encAttrs","id-aca-encAttrs",NID_id_aca_encAttrs,8,
	&(lvalues[2932]),0},
{"role","role",NID_role,3,&(lvalues[2940]),0},
{"policyConstraints","X509v3 Policy Constraints",
	NID_policy_constraints,3,&(lvalues[2943]),0},
{"targetInformation","X509v3 AC Targeting",NID_target_information,3,
	&(lvalues[2946]),0},
{"noRevAvail","X509v3 No Revocation Available",NID_no_rev_avail,3,
	&(lvalues[2949]),0},
{"NULL","NULL",NID_ccitt,1,&(lvalues[2952]),0},
{"ansi-X9-62","ANSI X9.62",NID_ansi_X9_62,5,&(lvalues[2953]),0},
{"prime-field","prime-field",NID_X9_62_prime_field,7,&(lvalues[2958]),0},
{"characteristic-two-field","characteristic-two-field",
	NID_X9_62_characteristic_two_field,7,&(lvalues[2965]),0},
{"id-ecPublicKey","id-ecPublicKey",NID_X9_62_id_ecPublicKey,7,
	&(lvalues[2972]),0},
{"prime192v1","prime192v1",NID_X9_62_prime192v1,8,&(lvalues[2979]),0},
{"prime192v2","prime192v2",NID_X9_62_prime192v2,8,&(lvalues[2987]),0},
{"prime192v3","prime192v3",NID_X9_62_prime192v3,8,&(lvalues[2995]),0},
{"prime239v1","prime239v1",NID_X9_62_prime239v1,8,&(lvalues[3003]),0},
{"prime239v2","prime239v2",NID_X9_62_prime239v2,8,&(lvalues[3011]),0},
{"prime239v3","prime239v3",NID_X9_62_prime239v3,8,&(lvalues[3019]),0},
{"prime256v1","prime256v1",NID_X9_62_prime256v1,8,&(lvalues[3027]),0},
{"ecdsa-with-SHA1","ecdsa-with-SHA1",NID_ecdsa_with_SHA1,7,
	&(lvalues[3035]),0},
{"CSPName","Microsoft CSP Name",NID_ms_csp_name,9,&(lvalues[3042]),0},
{"AES-128-ECB","aes-128-ecb",NID_aes_128_ecb,9,&(lvalues[3051]),0},
{"AES-128-CBC","aes-128-cbc",NID_aes_128_cbc,9,&(lvalues[3060]),0},
{"AES-128-OFB","aes-128-ofb",NID_aes_128_ofb128,9,&(lvalues[3069]),0},
{"AES-128-CFB","aes-128-cfb",NID_aes_128_cfb128,9,&(lvalues[3078]),0},
{"AES-192-ECB","aes-192-ecb",NID_aes_192_ecb,9,&(lvalues[3087]),0},
{"AES-192-CBC","aes-192-cbc",NID_aes_192_cbc,9,&(lvalues[3096]),0},
{"AES-192-OFB","aes-192-ofb",NID_aes_192_ofb128,9,&(lvalues[3105]),0},
{"AES-192-CFB","aes-192-cfb",NID_aes_192_cfb128,9,&(lvalues[3114]),0},
{"AES-256-ECB","aes-256-ecb",NID_aes_256_ecb,9,&(lvalues[3123]),0},
{"AES-256-CBC","aes-256-cbc",NID_aes_256_cbc,9,&(lvalues[3132]),0},
{"AES-256-OFB","aes-256-ofb",NID_aes_256_ofb128,9,&(lvalues[3141]),0},
{"AES-256-CFB","aes-256-cfb",NID_aes_256_cfb128,9,&(lvalues[3150]),0},
{"holdInstructionCode","Hold Instruction Code",
	NID_hold_instruction_code,3,&(lvalues[3159]),0},
{"holdInstructionNone","Hold Instruction None",
	NID_hold_instruction_none,7,&(lvalues[3162]),0},
{"holdInstructionCallIssuer","Hold Instruction Call Issuer",
	NID_hold_instruction_call_issuer,7,&(lvalues[3169]),0},
{"holdInstructionReject","Hold Instruction Reject",
	NID_hold_instruction_reject,7,&(lvalues[3176]),0},
{"data","data",NID_data,1,&(lvalues[3183]),0},
{"pss","pss",NID_pss,3,&(lvalues[3184]),0},
{"ucl","ucl",NID_ucl,7,&(lvalues[3187]),0},
{"pilot","pilot",NID_pilot,8,&(lvalues[3194]),0},
{"pilotAttributeType","pilotAttributeType",NID_pilotAttributeType,9,
	&(lvalues[3202]),0},
{"pilotAttributeSyntax","pilotAttributeSyntax",
	NID_pilotAttributeSyntax,9,&(lvalues[3211]),0},
{"pilotObjectClass","pilotObjectClass",NID_pilotObjectClass,9,
	&(lvalues[3220]),0},
{"pilotGroups","pilotGroups",NID_pilotGroups,9,&(lvalues[3229]),0},
{"iA5StringSyntax","iA5StringSyntax",NID_iA5StringSyntax,10,
	&(lvalues[3238]),0},
{"caseIgnoreIA5StringSyntax","caseIgnoreIA5StringSyntax",
	NID_caseIgnoreIA5StringSyntax,10,&(lvalues[3248]),0},
{"pilotObject","pilotObject",NID_pilotObject,10,&(lvalues[3258]),0},
{"pilotPerson","pilotPerson",NID_pilotPerson,10,&(lvalues[3268]),0},
{"account","account",NID_account,10,&(lvalues[3278]),0},
{"document","document",NID_document,10,&(lvalues[3288]),0},
{"room","room",NID_room,10,&(lvalues[3298]),0},
{"documentSeries","documentSeries",NID_documentSeries,10,
	&(lvalues[3308]),0},
{"rFC822localPart","rFC822localPart",NID_rFC822localPart,10,
	&(lvalues[3318]),0},
{"dNSDomain","dNSDomain",NID_dNSDomain,10,&(lvalues[3328]),0},
{"domainRelatedObject","domainRelatedObject",NID_domainRelatedObject,
	10,&(lvalues[3338]),0},
{"friendlyCountry","friendlyCountry",NID_friendlyCountry,10,
	&(lvalues[3348]),0},
{"simpleSecurityObject","simpleSecurityObject",
	NID_simpleSecurityObject,10,&(lvalues[3358]),0},
{"pilotOrganization","pilotOrganization",NID_pilotOrganization,10,
	&(lvalues[3368]),0},
{"pilotDSA","pilotDSA",NID_pilotDSA,10,&(lvalues[3378]),0},
{"qualityLabelledData","qualityLabelledData",NID_qualityLabelledData,
	10,&(lvalues[3388]),0},
{"UID","userId",NID_userId,10,&(lvalues[3398]),0},
{"textEncodedORAddress","textEncodedORAddress",
	NID_textEncodedORAddress,10,&(lvalues[3408]),0},
{"mail","rfc822Mailbox",NID_rfc822Mailbox,10,&(lvalues[3418]),0},
{"info","info",NID_info,10,&(lvalues[3428]),0},
{"favouriteDrink","favouriteDrink",NID_favouriteDrink,10,
	&(lvalues[3438]),0},
{"roomNumber","roomNumber",NID_roomNumber,10,&(lvalues[3448]),0},
{"photo","photo",NID_photo,10,&(lvalues[3458]),0},
{"userClass","userClass",NID_userClass,10,&(lvalues[3468]),0},
{"host","host",NID_host,10,&(lvalues[3478]),0},
{"manager","manager",NID_manager,10,&(lvalues[3488]),0},
{"documentIdentifier","documentIdentifier",NID_documentIdentifier,10,
	&(lvalues[3498]),0},
{"documentTitle","documentTitle",NID_documentTitle,10,&(lvalues[3508]),0},
{"documentVersion","documentVersion",NID_documentVersion,10,
	&(lvalues[3518]),0},
{"documentAuthor","documentAuthor",NID_documentAuthor,10,
	&(lvalues[3528]),0},
{"documentLocation","documentLocation",NID_documentLocation,10,
	&(lvalues[3538]),0},
{"homeTelephoneNumber","homeTelephoneNumber",NID_homeTelephoneNumber,
	10,&(lvalues[3548]),0},
{"secretary","secretary",NID_secretary,10,&(lvalues[3558]),0},
{"otherMailbox","otherMailbox",NID_otherMailbox,10,&(lvalues[3568]),0},
{"lastModifiedTime","lastModifiedTime",NID_lastModifiedTime,10,
	&(lvalues[3578]),0},
{"lastModifiedBy","lastModifiedBy",NID_lastModifiedBy,10,
	&(lvalues[3588]),0},
{"aRecord","aRecord",NID_aRecord,10,&(lvalues[3598]),0},
{"pilotAttributeType27","pilotAttributeType27",
	NID_pilotAttributeType27,10,&(lvalues[3608]),0},
{"mXRecord","mXRecord",NID_mXRecord,10,&(lvalues[3618]),0},
{"nSRecord","nSRecord",NID_nSRecord,10,&(lvalues[3628]),0},
{"sOARecord","sOARecord",NID_sOARecord,10,&(lvalues[3638]),0},
{"cNAMERecord","cNAMERecord",NID_cNAMERecord,10,&(lvalues[3648]),0},
{"associatedDomain","associatedDomain",NID_associatedDomain,10,
	&(lvalues[3658]),0},
{"associatedName","associatedName",NID_associatedName,10,
	&(lvalues[3668]),0},
{"homePostalAddress","homePostalAddress",NID_homePostalAddress,10,
	&(lvalues[3678]),0},
{"personalTitle","personalTitle",NID_personalTitle,10,&(lvalues[3688]),0},
{"mobileTelephoneNumber","mobileTelephoneNumber",
	NID_mobileTelephoneNumber,10,&(lvalues[3698]),0},
{"pagerTelephoneNumber","pagerTelephoneNumber",
	NID_pagerTelephoneNumber,10,&(lvalues[3708]),0},
{"friendlyCountryName","friendlyCountryName",NID_friendlyCountryName,
	10,&(lvalues[3718]),0},
{"organizationalStatus","organizationalStatus",
	NID_organizationalStatus,10,&(lvalues[3728]),0},
{"janetMailbox","janetMailbox",NID_janetMailbox,10,&(lvalues[3738]),0},
{"mailPreferenceOption","mailPreferenceOption",
	NID_mailPreferenceOption,10,&(lvalues[3748]),0},
{"buildingName","buildingName",NID_buildingName,10,&(lvalues[3758]),0},
{"dSAQuality","dSAQuality",NID_dSAQuality,10,&(lvalues[3768]),0},
{"singleLevelQuality","singleLevelQuality",NID_singleLevelQuality,10,
	&(lvalues[3778]),0},
{"subtreeMinimumQuality","subtreeMinimumQuality",
	NID_subtreeMinimumQuality,10,&(lvalues[3788]),0},
{"subtreeMaximumQuality","subtreeMaximumQuality",
	NID_subtreeMaximumQuality,10,&(lvalues[3798]),0},
{"personalSignature","personalSignature",NID_personalSignature,10,
	&(lvalues[3808]),0},
{"dITRedirect","dITRedirect",NID_dITRedirect,10,&(lvalues[3818]),0},
{"audio","audio",NID_audio,10,&(lvalues[3828]),0},
{"documentPublisher","documentPublisher",NID_documentPublisher,10,
	&(lvalues[3838]),0},
{"x500UniqueIdentifier","x500UniqueIdentifier",
	NID_x500UniqueIdentifier,3,&(lvalues[3848]),0},
{"mime-mhs","MIME MHS",NID_mime_mhs,5,&(lvalues[3851]),0},
{"mime-mhs-headings","mime-mhs-headings",NID_mime_mhs_headings,6,
	&(lvalues[3856]),0},
{"mime-mhs-bodies","mime-mhs-bodies",NID_mime_mhs_bodies,6,
	&(lvalues[3862]),0},
{"id-hex-partial-message","id-hex-partial-message",
	NID_id_hex_partial_message,7,&(lvalues[3868]),0},
{"id-hex-multipart-message","id-hex-multipart-message",
	NID_id_hex_multipart_message,7,&(lvalues[3875]),0},
{"generationQualifier","generationQualifier",NID_generationQualifier,
	3,&(lvalues[3882]),0},
{"pseudonym","pseudonym",NID_pseudonym,3,&(lvalues[3885]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{"id-set","Secure Electronic Transactions",NID_id_set,2,
	&(lvalues[3888]),0},
{"set-ctype","content types",NID_set_ctype,3,&(lvalues[3890]),0},
{"set-msgExt","message extensions",NID_set_msgExt,3,&(lvalues[3893]),0},
{"set-attr","set-attr",NID_set_attr,3,&(lvalues[3896]),0},
{"set-policy","set-policy",NID_set_policy,3,&(lvalues[3899]),0},
{"set-certExt","certificate extensions",NID_set_certExt,3,
	&(lvalues[3902]),0},
{"set-brand","set-brand",NID_set_brand,3,&(lvalues[3905]),0},
{"setct-PANData","setct-PANData",NID_setct_PANData,4,&(lvalues[3908]),0},
{"setct-PANToken","setct-PANToken",NID_setct_PANToken,4,
	&(lvalues[3912]),0},
{"setct-PANOnly","setct-PANOnly",NID_setct_PANOnly,4,&(lvalues[3916]),0},
{"setct-OIData","setct-OIData",NID_setct_OIData,4,&(lvalues[3920]),0},
{"setct-PI","setct-PI",NID_setct_PI,4,&(lvalues[3924]),0},
{"setct-PIData","setct-PIData",NID_setct_PIData,4,&(lvalues[3928]),0},
{"setct-PIDataUnsigned","setct-PIDataUnsigned",
	NID_setct_PIDataUnsigned,4,&(lvalues[3932]),0},
{"setct-HODInput","setct-HODInput",NID_setct_HODInput,4,
	&(lvalues[3936]),0},
{"setct-AuthResBaggage","setct-AuthResBaggage",
	NID_setct_AuthResBaggage,4,&(lvalues[3940]),0},
{"setct-AuthRevReqBaggage","setct-AuthRevReqBaggage",
	NID_setct_AuthRevReqBaggage,4,&(lvalues[3944]),0},
{"setct-AuthRevResBaggage","setct-AuthRevResBaggage",
	NID_setct_AuthRevResBaggage,4,&(lvalues[3948]),0},
{"setct-CapTokenSeq","setct-CapTokenSeq",NID_setct_CapTokenSeq,4,
	&(lvalues[3952]),0},
{"setct-PInitResData","setct-PInitResData",NID_setct_PInitResData,4,
	&(lvalues[3956]),0},
{"setct-PI-TBS","setct-PI-TBS",NID_setct_PI_TBS,4,&(lvalues[3960]),0},
{"setct-PResData","setct-PResData",NID_setct_PResData,4,
	&(lvalues[3964]),0},
{"setct-AuthReqTBS","setct-AuthReqTBS",NID_setct_AuthReqTBS,4,
	&(lvalues[3968]),0},
{"setct-AuthResTBS","setct-AuthResTBS",NID_setct_AuthResTBS,4,
	&(lvalues[3972]),0},
{"setct-AuthResTBSX","setct-AuthResTBSX",NID_setct_AuthResTBSX,4,
	&(lvalues[3976]),0},
{"setct-AuthTokenTBS","setct-AuthTokenTBS",NID_setct_AuthTokenTBS,4,
	&(lvalues[3980]),0},
{"setct-CapTokenData","setct-CapTokenData",NID_setct_CapTokenData,4,
	&(lvalues[3984]),0},
{"setct-CapTokenTBS","setct-CapTokenTBS",NID_setct_CapTokenTBS,4,
	&(lvalues[3988]),0},
{"setct-AcqCardCodeMsg","setct-AcqCardCodeMsg",
	NID_setct_AcqCardCodeMsg,4,&(lvalues[3992]),0},
{"setct-AuthRevReqTBS","setct-AuthRevReqTBS",NID_setct_AuthRevReqTBS,
	4,&(lvalues[3996]),0},
{"setct-AuthRevResData","setct-AuthRevResData",
	NID_setct_AuthRevResData,4,&(lvalues[4000]),0},
{"setct-AuthRevResTBS","setct-AuthRevResTBS",NID_setct_AuthRevResTBS,
	4,&(lvalues[4004]),0},
{"setct-CapReqTBS","setct-CapReqTBS",NID_setct_CapReqTBS,4,
	&(lvalues[4008]),0},
{"setct-CapReqTBSX","setct-CapReqTBSX",NID_setct_CapReqTBSX,4,
	&(lvalues[4012]),0},
{"setct-CapResData","setct-CapResData",NID_setct_CapResData,4,
	&(lvalues[4016]),0},
{"setct-CapRevReqTBS","setct-CapRevReqTBS",NID_setct_CapRevReqTBS,4,
	&(lvalues[4020]),0},
{"setct-CapRevReqTBSX","setct-CapRevReqTBSX",NID_setct_CapRevReqTBSX,
	4,&(lvalues[4024]),0},
{"setct-CapRevResData","setct-CapRevResData",NID_setct_CapRevResData,
	4,&(lvalues[4028]),0},
{"setct-CredReqTBS","setct-CredReqTBS",NID_setct_CredReqTBS,4,
	&(lvalues[4032]),0},
{"setct-CredReqTBSX","setct-CredReqTBSX",NID_setct_CredReqTBSX,4,
	&(lvalues[4036]),0},
{"setct-CredResData","setct-CredResData",NID_setct_CredResData,4,
	&(lvalues[4040]),0},
{"setct-CredRevReqTBS","setct-CredRevReqTBS",NID_setct_CredRevReqTBS,
	4,&(lvalues[4044]),0},
{"setct-CredRevReqTBSX","setct-CredRevReqTBSX",
	NID_setct_CredRevReqTBSX,4,&(lvalues[4048]),0},
{"setct-CredRevResData","setct-CredRevResData",
	NID_setct_CredRevResData,4,&(lvalues[4052]),0},
{"setct-PCertReqData","setct-PCertReqData",NID_setct_PCertReqData,4,
	&(lvalues[4056]),0},
{"setct-PCertResTBS","setct-PCertResTBS",NID_setct_PCertResTBS,4,
	&(lvalues[4060]),0},
{"setct-BatchAdminReqData","setct-BatchAdminReqData",
	NID_setct_BatchAdminReqData,4,&(lvalues[4064]),0},
{"setct-BatchAdminResData","setct-BatchAdminResData",
	NID_setct_BatchAdminResData,4,&(lvalues[4068]),0},
{"setct-CardCInitResTBS","setct-CardCInitResTBS",
	NID_setct_CardCInitResTBS,4,&(lvalues[4072]),0},
{"setct-MeAqCInitResTBS","setct-MeAqCInitResTBS",
	NID_setct_MeAqCInitResTBS,4,&(lvalues[4076]),0},
{"setct-RegFormResTBS","setct-RegFormResTBS",NID_setct_RegFormResTBS,
	4,&(lvalues[4080]),0},
{"setct-CertReqData","setct-CertReqData",NID_setct_CertReqData,4,
	&(lvalues[4084]),0},
{"setct-CertReqTBS","setct-CertReqTBS",NID_setct_CertReqTBS,4,
	&(lvalues[4088]),0},
{"setct-CertResData","setct-CertResData",NID_setct_CertResData,4,
	&(lvalues[4092]),0},
{"setct-CertInqReqTBS","setct-CertInqReqTBS",NID_setct_CertInqReqTBS,
	4,&(lvalues[4096]),0},
{"setct-ErrorTBS","setct-ErrorTBS",NID_setct_ErrorTBS,4,
	&(lvalues[4100]),0},
{"setct-PIDualSignedTBE","setct-PIDualSignedTBE",
	NID_setct_PIDualSignedTBE,4,&(lvalues[4104]),0},
{"setct-PIUnsignedTBE","setct-PIUnsignedTBE",NID_setct_PIUnsignedTBE,
	4,&(lvalues[4108]),0},
{"setct-AuthReqTBE","setct-AuthReqTBE",NID_setct_AuthReqTBE,4,
	&(lvalues[4112]),0},
{"setct-AuthResTBE","setct-AuthResTBE",NID_setct_AuthResTBE,4,
	&(lvalues[4116]),0},
{"setct-AuthResTBEX","setct-AuthResTBEX",NID_setct_AuthResTBEX,4,
	&(lvalues[4120]),0},
{"setct-AuthTokenTBE","setct-AuthTokenTBE",NID_setct_AuthTokenTBE,4,
	&(lvalues[4124]),0},
{"setct-CapTokenTBE","setct-CapTokenTBE",NID_setct_CapTokenTBE,4,
	&(lvalues[4128]),0},
{"setct-CapTokenTBEX","setct-CapTokenTBEX",NID_setct_CapTokenTBEX,4,
	&(lvalues[4132]),0},
{"setct-AcqCardCodeMsgTBE","setct-AcqCardCodeMsgTBE",
	NID_setct_AcqCardCodeMsgTBE,4,&(lvalues[4136]),0},
{"setct-AuthRevReqTBE","setct-AuthRevReqTBE",NID_setct_AuthRevReqTBE,
	4,&(lvalues[4140]),0},
{"setct-AuthRevResTBE","setct-AuthRevResTBE",NID_setct_AuthRevResTBE,
	4,&(lvalues[4144]),0},
{"setct-AuthRevResTBEB","setct-AuthRevResTBEB",
	NID_setct_AuthRevResTBEB,4,&(lvalues[4148]),0},
{"setct-CapReqTBE","setct-CapReqTBE",NID_setct_CapReqTBE,4,
	&(lvalues[4152]),0},
{"setct-CapReqTBEX","setct-CapReqTBEX",NID_setct_CapReqTBEX,4,
	&(lvalues[4156]),0},
{"setct-CapResTBE","setct-CapResTBE",NID_setct_CapResTBE,4,
	&(lvalues[4160]),0},
{"setct-CapRevReqTBE","setct-CapRevReqTBE",NID_setct_CapRevReqTBE,4,
	&(lvalues[4164]),0},
{"setct-CapRevReqTBEX","setct-CapRevReqTBEX",NID_setct_CapRevReqTBEX,
	4,&(lvalues[4168]),0},
{"setct-CapRevResTBE","setct-CapRevResTBE",NID_setct_CapRevResTBE,4,
	&(lvalues[4172]),0},
{"setct-CredReqTBE","setct-CredReqTBE",NID_setct_CredReqTBE,4,
	&(lvalues[4176]),0},
{"setct-CredReqTBEX","setct-CredReqTBEX",NID_setct_CredReqTBEX,4,
	&(lvalues[4180]),0},
{"setct-CredResTBE","setct-CredResTBE",NID_setct_CredResTBE,4,
	&(lvalues[4184]),0},
{"setct-CredRevReqTBE","setct-CredRevReqTBE",NID_setct_CredRevReqTBE,
	4,&(lvalues[4188]),0},
{"setct-CredRevReqTBEX","setct-CredRevReqTBEX",
	NID_setct_CredRevReqTBEX,4,&(lvalues[4192]),0},
{"setct-CredRevResTBE","setct-CredRevResTBE",NID_setct_CredRevResTBE,
	4,&(lvalues[4196]),0},
{"setct-BatchAdminReqTBE","setct-BatchAdminReqTBE",
	NID_setct_BatchAdminReqTBE,4,&(lvalues[4200]),0},
{"setct-BatchAdminResTBE","setct-BatchAdminResTBE",
	NID_setct_BatchAdminResTBE,4,&(lvalues[4204]),0},
{"setct-RegFormReqTBE","setct-RegFormReqTBE",NID_setct_RegFormReqTBE,
	4,&(lvalues[4208]),0},
{"setct-CertReqTBE","setct-CertReqTBE",NID_setct_CertReqTBE,4,
	&(lvalues[4212]),0},
{"setct-CertReqTBEX","setct-CertReqTBEX",NID_setct_CertReqTBEX,4,
	&(lvalues[4216]),0},
{"setct-CertResTBE","setct-CertResTBE",NID_setct_CertResTBE,4,
	&(lvalues[4220]),0},
{"setct-CRLNotificationTBS","setct-CRLNotificationTBS",
	NID_setct_CRLNotificationTBS,4,&(lvalues[4224]),0},
{"setct-CRLNotificationResTBS","setct-CRLNotificationResTBS",
	NID_setct_CRLNotificationResTBS,4,&(lvalues[4228]),0},
{"setct-BCIDistributionTBS","setct-BCIDistributionTBS",
	NID_setct_BCIDistributionTBS,4,&(lvalues[4232]),0},
{"setext-genCrypt","generic cryptogram",NID_setext_genCrypt,4,
	&(lvalues[4236]),0},
{"setext-miAuth","merchant initiated auth",NID_setext_miAuth,4,
	&(lvalues[4240]),0},
{"setext-pinSecure","setext-pinSecure",NID_setext_pinSecure,4,
	&(lvalues[4244]),0},
{"setext-pinAny","setext-pinAny",NID_setext_pinAny,4,&(lvalues[4248]),0},
{"setext-track2","setext-track2",NID_setext_track2,4,&(lvalues[4252]),0},
{"setext-cv","additional verification",NID_setext_cv,4,
	&(lvalues[4256]),0},
{"set-policy-root","set-policy-root",NID_set_policy_root,4,
	&(lvalues[4260]),0},
{"setCext-hashedRoot","setCext-hashedRoot",NID_setCext_hashedRoot,4,
	&(lvalues[4264]),0},
{"setCext-certType","setCext-certType",NID_setCext_certType,4,
	&(lvalues[4268]),0},
{"setCext-merchData","setCext-merchData",NID_setCext_merchData,4,
	&(lvalues[4272]),0},
{"setCext-cCertRequired","setCext-cCertRequired",
	NID_setCext_cCertRequired,4,&(lvalues[4276]),0},
{"setCext-tunneling","setCext-tunneling",NID_setCext_tunneling,4,
	&(lvalues[4280]),0},
{"setCext-setExt","setCext-setExt",NID_setCext_setExt,4,
	&(lvalues[4284]),0},
{"setCext-setQualf","setCext-setQualf",NID_setCext_setQualf,4,
	&(lvalues[4288]),0},
{"setCext-PGWYcapabilities","setCext-PGWYcapabilities",
	NID_setCext_PGWYcapabilities,4,&(lvalues[4292]),0},
{"setCext-TokenIdentifier","setCext-TokenIdentifier",
	NID_setCext_TokenIdentifier,4,&(lvalues[4296]),0},
{"setCext-Track2Data","setCext-Track2Data",NID_setCext_Track2Data,4,
	&(lvalues[4300]),0},
{"setCext-TokenType","setCext-TokenType",NID_setCext_TokenType,4,
	&(lvalues[4304]),0},
{"setCext-IssuerCapabilities","setCext-IssuerCapabilities",
	NID_setCext_IssuerCapabilities,4,&(lvalues[4308]),0},
{"setAttr-Cert","setAttr-Cert",NID_setAttr_Cert,4,&(lvalues[4312]),0},
{"setAttr-PGWYcap","payment gateway capabilities",NID_setAttr_PGWYcap,
	4,&(lvalues[4316]),0},
{"setAttr-TokenType","setAttr-TokenType",NID_setAttr_TokenType,4,
	&(lvalues[4320]),0},
{"setAttr-IssCap","issuer capabilities",NID_setAttr_IssCap,4,
	&(lvalues[4324]),0},
{"set-rootKeyThumb","set-rootKeyThumb",NID_set_rootKeyThumb,5,
	&(lvalues[4328]),0},
{"set-addPolicy","set-addPolicy",NID_set_addPolicy,5,&(lvalues[4333]),0},
{"setAttr-Token-EMV","setAttr-Token-EMV",NID_setAttr_Token_EMV,5,
	&(lvalues[4338]),0},
{"setAttr-Token-B0Prime","setAttr-Token-B0Prime",
	NID_setAttr_Token_B0Prime,5,&(lvalues[4343]),0},
{"setAttr-IssCap-CVM","setAttr-IssCap-CVM",NID_setAttr_IssCap_CVM,5,
	&(lvalues[4348]),0},
{"setAttr-IssCap-T2","setAttr-IssCap-T2",NID_setAttr_IssCap_T2,5,
	&(lvalues[4353]),0},
{"setAttr-IssCap-Sig","setAttr-IssCap-Sig",NID_setAttr_IssCap_Sig,5,
	&(lvalues[4358]),0},
{"setAttr-GenCryptgrm","generate cryptogram",NID_setAttr_GenCryptgrm,
	6,&(lvalues[4363]),0},
{"setAttr-T2Enc","encrypted track 2",NID_setAttr_T2Enc,6,
	&(lvalues[4369]),0},
{"setAttr-T2cleartxt","cleartext track 2",NID_setAttr_T2cleartxt,6,
	&(lvalues[4375]),0},
{"setAttr-TokICCsig","ICC or token signature",NID_setAttr_TokICCsig,6,
	&(lvalues[4381]),0},
{"setAttr-SecDevSig","secure device signature",NID_setAttr_SecDevSig,
	6,&(lvalues[4387]),0},
{"set-brand-IATA-ATA","set-brand-IATA-ATA",NID_set_brand_IATA_ATA,4,
	&(lvalues[4393]),0},
{"set-brand-Diners","set-brand-Diners",NID_set_brand_Diners,4,
	&(lvalues[4397]),0},
{"set-brand-AmericanExpress","set-brand-AmericanExpress",
	NID_set_brand_AmericanExpress,4,&(lvalues[4401]),0},
{"set-brand-JCB","set-brand-JCB",NID_set_brand_JCB,4,&(lvalues[4405]),0},
{"set-brand-Visa","set-brand-Visa",NID_set_brand_Visa,4,
	&(lvalues[4409]),0},
{"set-brand-MasterCard","set-brand-MasterCard",
	NID_set_brand_MasterCard,4,&(lvalues[4413]),0},
{"set-brand-Novus","set-brand-Novus",NID_set_brand_Novus,5,
	&(lvalues[4417]),0},
{"DES-CDMF","des-cdmf",NID_des_cdmf,8,&(lvalues[4422]),0},
{"rsaOAEPEncryptionSET","rsaOAEPEncryptionSET",
	NID_rsaOAEPEncryptionSET,9,&(lvalues[4430]),0},
{"ITU-T","itu-t",NID_itu_t,1,&(lvalues[4439]),0},
{"JOINT-ISO-ITU-T","joint-iso-itu-t",NID_joint_iso_itu_t,1,
	&(lvalues[4440]),0},
{"international-organizations","International Organizations",
	NID_international_organizations,1,&(lvalues[4441]),0},
{"msSmartcardLogin","Microsoft Smartcardlogin",NID_ms_smartcard_login,
	10,&(lvalues[4442]),0},
{"msUPN","Microsoft Universal Principal Name",NID_ms_upn,10,
	&(lvalues[4452]),0},
{"AES-128-CFB1","aes-128-cfb1",NID_aes_128_cfb1,0,NULL,0},
{"AES-192-CFB1","aes-192-cfb1",NID_aes_192_cfb1,0,NULL,0},
{"AES-256-CFB1","aes-256-cfb1",NID_aes_256_cfb1,0,NULL,0},
{"AES-128-CFB8","aes-128-cfb8",NID_aes_128_cfb8,0,NULL,0},
{"AES-192-CFB8","aes-192-cfb8",NID_aes_192_cfb8,0,NULL,0},
{"AES-256-CFB8","aes-256-cfb8",NID_aes_256_cfb8,0,NULL,0},
{"DES-CFB1","des-cfb1",NID_des_cfb1,0,NULL,0},
{"DES-CFB8","des-cfb8",NID_des_cfb8,0,NULL,0},
{"DES-EDE3-CFB1","des-ede3-cfb1",NID_des_ede3_cfb1,0,NULL,0},
{"DES-EDE3-CFB8","des-ede3-cfb8",NID_des_ede3_cfb8,0,NULL,0},
{"streetAddress","streetAddress",NID_streetAddress,3,&(lvalues[4462]),0},
{"postalCode","postalCode",NID_postalCode,3,&(lvalues[4465]),0},
{"id-ppl","id-ppl",NID_id_ppl,7,&(lvalues[4468]),0},
{"proxyCertInfo","Proxy Certificate Information",NID_proxyCertInfo,8,
	&(lvalues[4475]),0},
{"id-ppl-anyLanguage","Any language",NID_id_ppl_anyLanguage,8,
	&(lvalues[4483]),0},
{"id-ppl-inheritAll","Inherit all",NID_id_ppl_inheritAll,8,
	&(lvalues[4491]),0},
{"nameConstraints","X509v3 Name Constraints",NID_name_constraints,3,
	&(lvalues[4499]),0},
{"id-ppl-independent","Independent",NID_Independent,8,&(lvalues[4502]),0},
{"RSA-SHA256","sha256WithRSAEncryption",NID_sha256WithRSAEncryption,9,
	&(lvalues[4510]),0},
{"RSA-SHA384","sha384WithRSAEncryption",NID_sha384WithRSAEncryption,9,
	&(lvalues[4519]),0},
{"RSA-SHA512","sha512WithRSAEncryption",NID_sha512WithRSAEncryption,9,
	&(lvalues[4528]),0},
{"RSA-SHA224","sha224WithRSAEncryption",NID_sha224WithRSAEncryption,9,
	&(lvalues[4537]),0},
{"SHA256","sha256",NID_sha256,9,&(lvalues[4546]),0},
{"SHA384","sha384",NID_sha384,9,&(lvalues[4555]),0},
{"SHA512","sha512",NID_sha512,9,&(lvalues[4564]),0},
{"SHA224","sha224",NID_sha224,9,&(lvalues[4573]),0},
{"identified-organization","identified-organization",
	NID_identified_organization,1,&(lvalues[4582]),0},
{"certicom-arc","certicom-arc",NID_certicom_arc,3,&(lvalues[4583]),0},
{"wap","wap",NID_wap,2,&(lvalues[4586]),0},
{"wap-wsg","wap-wsg",NID_wap_wsg,3,&(lvalues[4588]),0},
{"id-characteristic-two-basis","id-characteristic-two-basis",
	NID_X9_62_id_characteristic_two_basis,8,&(lvalues[4591]),0},
{"onBasis","onBasis",NID_X9_62_onBasis,9,&(lvalues[4599]),0},
{"tpBasis","tpBasis",NID_X9_62_tpBasis,9,&(lvalues[4608]),0},
{"ppBasis","ppBasis",NID_X9_62_ppBasis,9,&(lvalues[4617]),0},
{"c2pnb163v1","c2pnb163v1",NID_X9_62_c2pnb163v1,8,&(lvalues[4626]),0},
{"c2pnb163v2","c2pnb163v2",NID_X9_62_c2pnb163v2,8,&(lvalues[4634]),0},
{"c2pnb163v3","c2pnb163v3",NID_X9_62_c2pnb163v3,8,&(lvalues[4642]),0},
{"c2pnb176v1","c2pnb176v1",NID_X9_62_c2pnb176v1,8,&(lvalues[4650]),0},
{"c2tnb191v1","c2tnb191v1",NID_X9_62_c2tnb191v1,8,&(lvalues[4658]),0},
{"c2tnb191v2","c2tnb191v2",NID_X9_62_c2tnb191v2,8,&(lvalues[4666]),0},
{"c2tnb191v3","c2tnb191v3",NID_X9_62_c2tnb191v3,8,&(lvalues[4674]),0},
{"c2onb191v4","c2onb191v4",NID_X9_62_c2onb191v4,8,&(lvalues[4682]),0},
{"c2onb191v5","c2onb191v5",NID_X9_62_c2onb191v5,8,&(lvalues[4690]),0},
{"c2pnb208w1","c2pnb208w1",NID_X9_62_c2pnb208w1,8,&(lvalues[4698]),0},
{"c2tnb239v1","c2tnb239v1",NID_X9_62_c2tnb239v1,8,&(lvalues[4706]),0},
{"c2tnb239v2","c2tnb239v2",NID_X9_62_c2tnb239v2,8,&(lvalues[4714]),0},
{"c2tnb239v3","c2tnb239v3",NID_X9_62_c2tnb239v3,8,&(lvalues[4722]),0},
{"c2onb239v4","c2onb239v4",NID_X9_62_c2onb239v4,8,&(lvalues[4730]),0},
{"c2onb239v5","c2onb239v5",NID_X9_62_c2onb239v5,8,&(lvalues[4738]),0},
{"c2pnb272w1","c2pnb272w1",NID_X9_62_c2pnb272w1,8,&(lvalues[4746]),0},
{"c2pnb304w1","c2pnb304w1",NID_X9_62_c2pnb304w1,8,&(lvalues[4754]),0},
{"c2tnb359v1","c2tnb359v1",NID_X9_62_c2tnb359v1,8,&(lvalues[4762]),0},
{"c2pnb368w1","c2pnb368w1",NID_X9_62_c2pnb368w1,8,&(lvalues[4770]),0},
{"c2tnb431r1","c2tnb431r1",NID_X9_62_c2tnb431r1,8,&(lvalues[4778]),0},
{"secp112r1","secp112r1",NID_secp112r1,5,&(lvalues[4786]),0},
{"secp112r2","secp112r2",NID_secp112r2,5,&(lvalues[4791]),0},
{"secp128r1","secp128r1",NID_secp128r1,5,&(lvalues[4796]),0},
{"secp128r2","secp128r2",NID_secp128r2,5,&(lvalues[4801]),0},
{"secp160k1","secp160k1",NID_secp160k1,5,&(lvalues[4806]),0},
{"secp160r1","secp160r1",NID_secp160r1,5,&(lvalues[4811]),0},
{"secp160r2","secp160r2",NID_secp160r2,5,&(lvalues[4816]),0},
{"secp192k1","secp192k1",NID_secp192k1,5,&(lvalues[4821]),0},
{"secp224k1","secp224k1",NID_secp224k1,5,&(lvalues[4826]),0},
{"secp224r1","secp224r1",NID_secp224r1,5,&(lvalues[4831]),0},
{"secp256k1","secp256k1",NID_secp256k1,5,&(lvalues[4836]),0},
{"secp384r1","secp384r1",NID_secp384r1,5,&(lvalues[4841]),0},
{"secp521r1","secp521r1",NID_secp521r1,5,&(lvalues[4846]),0},
{"sect113r1","sect113r1",NID_sect113r1,5,&(lvalues[4851]),0},
{"sect113r2","sect113r2",NID_sect113r2,5,&(lvalues[4856]),0},
{"sect131r1","sect131r1",NID_sect131r1,5,&(lvalues[4861]),0},
{"sect131r2","sect131r2",NID_sect131r2,5,&(lvalues[4866]),0},
{"sect163k1","sect163k1",NID_sect163k1,5,&(lvalues[4871]),0},
{"sect163r1","sect163r1",NID_sect163r1,5,&(lvalues[4876]),0},
{"sect163r2","sect163r2",NID_sect163r2,5,&(lvalues[4881]),0},
{"sect193r1","sect193r1",NID_sect193r1,5,&(lvalues[4886]),0},
{"sect193r2","sect193r2",NID_sect193r2,5,&(lvalues[4891]),0},
{"sect233k1","sect233k1",NID_sect233k1,5,&(lvalues[4896]),0},
{"sect233r1","sect233r1",NID_sect233r1,5,&(lvalues[4901]),0},
{"sect239k1","sect239k1",NID_sect239k1,5,&(lvalues[4906]),0},
{"sect283k1","sect283k1",NID_sect283k1,5,&(lvalues[4911]),0},
{"sect283r1","sect283r1",NID_sect283r1,5,&(lvalues[4916]),0},
{"sect409k1","sect409k1",NID_sect409k1,5,&(lvalues[4921]),0},
{"sect409r1","sect409r1",NID_sect409r1,5,&(lvalues[4926]),0},
{"sect571k1","sect571k1",NID_sect571k1,5,&(lvalues[4931]),0},
{"sect571r1","sect571r1",NID_sect571r1,5,&(lvalues[4936]),0},
{"wap-wsg-idm-ecid-wtls1","wap-wsg-idm-ecid-wtls1",
	NID_wap_wsg_idm_ecid_wtls1,5,&(lvalues[4941]),0},
{"wap-wsg-idm-ecid-wtls3","wap-wsg-idm-ecid-wtls3",
	NID_wap_wsg_idm_ecid_wtls3,5,&(lvalues[4946]),0},
{"wap-wsg-idm-ecid-wtls4","wap-wsg-idm-ecid-wtls4",
	NID_wap_wsg_idm_ecid_wtls4,5,&(lvalues[4951]),0},
{"wap-wsg-idm-ecid-wtls5","wap-wsg-idm-ecid-wtls5",
	NID_wap_wsg_idm_ecid_wtls5,5,&(lvalues[4956]),0},
{"wap-wsg-idm-ecid-wtls6","wap-wsg-idm-ecid-wtls6",
	NID_wap_wsg_idm_ecid_wtls6,5,&(lvalues[4961]),0},
{"wap-wsg-idm-ecid-wtls7","wap-wsg-idm-ecid-wtls7",
	NID_wap_wsg_idm_ecid_wtls7,5,&(lvalues[4966]),0},
{"wap-wsg-idm-ecid-wtls8","wap-wsg-idm-ecid-wtls8",
	NID_wap_wsg_idm_ecid_wtls8,5,&(lvalues[4971]),0},
{"wap-wsg-idm-ecid-wtls9","wap-wsg-idm-ecid-wtls9",
	NID_wap_wsg_idm_ecid_wtls9,5,&(lvalues[4976]),0},
{"wap-wsg-idm-ecid-wtls10","wap-wsg-idm-ecid-wtls10",
	NID_wap_wsg_idm_ecid_wtls10,5,&(lvalues[4981]),0},
{"wap-wsg-idm-ecid-wtls11","wap-wsg-idm-ecid-wtls11",
	NID_wap_wsg_idm_ecid_wtls11,5,&(lvalues[4986]),0},
{"wap-wsg-idm-ecid-wtls12","wap-wsg-idm-ecid-wtls12",
	NID_wap_wsg_idm_ecid_wtls12,5,&(lvalues[4991]),0},
{"anyPolicy","X509v3 Any Policy",NID_any_policy,4,&(lvalues[4996]),0},
{"policyMappings","X509v3 Policy Mappings",NID_policy_mappings,3,
	&(lvalues[5000]),0},
{"inhibitAnyPolicy","X509v3 Inhibit Any Policy",
	NID_inhibit_any_policy,3,&(lvalues[5003]),0},
{"Oakley-EC2N-3","ipsec3",NID_ipsec3,0,NULL,0},
{"Oakley-EC2N-4","ipsec4",NID_ipsec4,0,NULL,0},
{"CAMELLIA-128-CBC","camellia-128-cbc",NID_camellia_128_cbc,11,
	&(lvalues[5006]),0},
{"CAMELLIA-192-CBC","camellia-192-cbc",NID_camellia_192_cbc,11,
	&(lvalues[5017]),0},
{"CAMELLIA-256-CBC","camellia-256-cbc",NID_camellia_256_cbc,11,
	&(lvalues[5028]),0},
{"CAMELLIA-128-ECB","camellia-128-ecb",NID_camellia_128_ecb,8,
	&(lvalues[5039]),0},
{"CAMELLIA-192-ECB","camellia-192-ecb",NID_camellia_192_ecb,8,
	&(lvalues[5047]),0},
{"CAMELLIA-256-ECB","camellia-256-ecb",NID_camellia_256_ecb,8,
	&(lvalues[5055]),0},
{"CAMELLIA-128-CFB","camellia-128-cfb",NID_camellia_128_cfb128,8,
	&(lvalues[5063]),0},
{"CAMELLIA-192-CFB","camellia-192-cfb",NID_camellia_192_cfb128,8,
	&(lvalues[5071]),0},
{"CAMELLIA-256-CFB","camellia-256-cfb",NID_camellia_256_cfb128,8,
	&(lvalues[5079]),0},
{"CAMELLIA-128-CFB1","camellia-128-cfb1",NID_camellia_128_cfb1,0,NULL,0},
{"CAMELLIA-192-CFB1","camellia-192-cfb1",NID_camellia_192_cfb1,0,NULL,0},
{"CAMELLIA-256-CFB1","camellia-256-cfb1",NID_camellia_256_cfb1,0,NULL,0},
{"CAMELLIA-128-CFB8","camellia-128-cfb8",NID_camellia_128_cfb8,0,NULL,0},
{"CAMELLIA-192-CFB8","camellia-192-cfb8",NID_camellia_192_cfb8,0,NULL,0},
{"CAMELLIA-256-CFB8","camellia-256-cfb8",NID_camellia_256_cfb8,0,NULL,0},
{"CAMELLIA-128-OFB","camellia-128-ofb",NID_camellia_128_ofb128,8,
	&(lvalues[5087]),0},
{"CAMELLIA-192-OFB","camellia-192-ofb",NID_camellia_192_ofb128,8,
	&(lvalues[5095]),0},
{"CAMELLIA-256-OFB","camellia-256-ofb",NID_camellia_256_ofb128,8,
	&(lvalues[5103]),0},
{"subjectDirectoryAttributes","X509v3 Subject Directory Attributes",
	NID_subject_directory_attributes,3,&(lvalues[5111]),0},
{"issuingDistributionPoint","X509v3 Issuing Distrubution Point",
	NID_issuing_distribution_point,3,&(lvalues[5114]),0},
{"certificateIssuer","X509v3 Certificate Issuer",
	NID_certificate_issuer,3,&(lvalues[5117]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{"KISA","kisa",NID_kisa,6,&(lvalues[5120]),0},
{NULL,NULL,NID_undef,0,NULL,0},
{NULL,NULL,NID_undef,0,NULL,0},
{"SEED-ECB","seed-ecb",NID_seed_ecb,8,&(lvalues[5126]),0},
{"SEED-CBC","seed-cbc",NID_seed_cbc,8,&(lvalues[5134]),0},
{"SEED-OFB","seed-ofb",NID_seed_ofb128,8,&(lvalues[5142]),0},
{"SEED-CFB","seed-cfb",NID_seed_cfb128,8,&(lvalues[5150]),0},
{"HMAC-MD5","hmac-md5",NID_hmac_md5,8,&(lvalues[5158]),0},
{"HMAC-SHA1","hmac-sha1",NID_hmac_sha1,8,&(lvalues[5166]),0},
{"id-PasswordBasedMAC","password based MAC",NID_id_PasswordBasedMAC,9,
	&(lvalues[5174]),0},
{"id-DHBasedMac","Diffie-Hellman based MAC",NID_id_DHBasedMac,9,
	&(lvalues[5183]),0},
{"id-it-suppLangTags","id-it-suppLangTags",NID_id_it_suppLangTags,8,
	&(lvalues[5192]),0},
{"caRepository","CA Repository",NID_caRepository,8,&(lvalues[5200]),0},
{"id-smime-ct-compressedData","id-smime-ct-compressedData",
	NID_id_smime_ct_compressedData,11,&(lvalues[5208]),0},
{"id-ct-asciiTextWithCRLF","id-ct-asciiTextWithCRLF",
	NID_id_ct_asciiTextWithCRLF,11,&(lvalues[5219]),0},
{"id-aes128-wrap","id-aes128-wrap",NID_id_aes128_wrap,9,
	&(lvalues[5230]),0},
{"id-aes192-wrap","id-aes192-wrap",NID_id_aes192_wrap,9,
	&(lvalues[5239]),0},
{"id-aes256-wrap","id-aes256-wrap",NID_id_aes256_wrap,9,
	&(lvalues[5248]),0},
{"ecdsa-with-Recommended","ecdsa-with-Recommended",
	NID_ecdsa_with_Recommended,7,&(lvalues[5257]),0},
{"ecdsa-with-Specified","ecdsa-with-Specified",
	NID_ecdsa_with_Specified,7,&(lvalues[5264]),0},
{"ecdsa-with-SHA224","ecdsa-with-SHA224",NID_ecdsa_with_SHA224,8,
	&(lvalues[5271]),0},
{"ecdsa-with-SHA256","ecdsa-with-SHA256",NID_ecdsa_with_SHA256,8,
	&(lvalues[5279]),0},
{"ecdsa-with-SHA384","ecdsa-with-SHA384",NID_ecdsa_with_SHA384,8,
	&(lvalues[5287]),0},
{"ecdsa-with-SHA512","ecdsa-with-SHA512",NID_ecdsa_with_SHA512,8,
	&(lvalues[5295]),0},
{"hmacWithMD5","hmacWithMD5",NID_hmacWithMD5,8,&(lvalues[5303]),0},
{"hmacWithSHA224","hmacWithSHA224",NID_hmacWithSHA224,8,
	&(lvalues[5311]),0},
{"hmacWithSHA256","hmacWithSHA256",NID_hmacWithSHA256,8,
	&(lvalues[5319]),0},
{"hmacWithSHA384","hmacWithSHA384",NID_hmacWithSHA384,8,
	&(lvalues[5327]),0},
{"hmacWithSHA512","hmacWithSHA512",NID_hmacWithSHA512,8,
	&(lvalues[5335]),0},
{"dsa_with_SHA224","dsa_with_SHA224",NID_dsa_with_SHA224,9,
	&(lvalues[5343]),0},
{"dsa_with_SHA256","dsa_with_SHA256",NID_dsa_with_SHA256,9,
	&(lvalues[5352]),0},
{"whirlpool","whirlpool",NID_whirlpool,6,&(lvalues[5361]),0},
{"cryptopro","cryptopro",NID_cryptopro,5,&(lvalues[5367]),0},
{"cryptocom","cryptocom",NID_cryptocom,5,&(lvalues[5372]),0},
{"id-GostR3411-94-with-GostR3410-2001",
	"GOST R 34.11-94 with GOST R 34.10-2001",
	NID_id_GostR3411_94_with_GostR3410_2001,6,&(lvalues[5377]),0},
{"id-GostR3411-94-with-GostR3410-94",
	"GOST R 34.11-94 with GOST R 34.10-94",
	NID_id_GostR3411_94_with_GostR3410_94,6,&(lvalues[5383]),0},
{"md_gost94","GOST R 34.11-94",NID_id_GostR3411_94,6,&(lvalues[5389]),0},
{"id-HMACGostR3411-94","HMAC GOST 34.11-94",NID_id_HMACGostR3411_94,6,
	&(lvalues[5395]),0},
{"gost2001","GOST R 34.10-2001",NID_id_GostR3410_2001,6,
	&(lvalues[5401]),0},
{"gost94","GOST R 34.10-94",NID_id_GostR3410_94,6,&(lvalues[5407]),0},
{"gost89","GOST 28147-89",NID_id_Gost28147_89,6,&(lvalues[5413]),0},
{"gost89-cnt","gost89-cnt",NID_gost89_cnt,0,NULL,0},
{"gost-mac","GOST 28147-89 MAC",NID_id_Gost28147_89_MAC,6,
	&(lvalues[5419]),0},
{"prf-gostr3411-94","GOST R 34.11-94 PRF",NID_id_GostR3411_94_prf,6,
	&(lvalues[5425]),0},
{"id-GostR3410-2001DH","GOST R 34.10-2001 DH",NID_id_GostR3410_2001DH,
	6,&(lvalues[5431]),0},
{"id-GostR3410-94DH","GOST R 34.10-94 DH",NID_id_GostR3410_94DH,6,
	&(lvalues[5437]),0},
{"id-Gost28147-89-CryptoPro-KeyMeshing",
	"id-Gost28147-89-CryptoPro-KeyMeshing",
	NID_id_Gost28147_89_CryptoPro_KeyMeshing,7,&(lvalues[5443]),0},
{"id-Gost28147-89-None-KeyMeshing","id-Gost28147-89-None-KeyMeshing",
	NID_id_Gost28147_89_None_KeyMeshing,7,&(lvalues[5450]),0},
{"id-GostR3411-94-TestParamSet","id-GostR3411-94-TestParamSet",
	NID_id_GostR3411_94_TestParamSet,7,&(lvalues[5457]),0},
{"id-GostR3411-94-CryptoProParamSet",
	"id-GostR3411-94-CryptoProParamSet",
	NID_id_GostR3411_94_CryptoProParamSet,7,&(lvalues[5464]),0},
{"id-Gost28147-89-TestParamSet","id-Gost28147-89-TestParamSet",
	NID_id_Gost28147_89_TestParamSet,7,&(lvalues[5471]),0},
{"id-Gost28147-89-CryptoPro-A-ParamSet",
	"id-Gost28147-89-CryptoPro-A-ParamSet",
	NID_id_Gost28147_89_CryptoPro_A_ParamSet,7,&(lvalues[5478]),0},
{"id-Gost28147-89-CryptoPro-B-ParamSet",
	"id-Gost28147-89-CryptoPro-B-ParamSet",
	NID_id_Gost28147_89_CryptoPro_B_ParamSet,7,&(lvalues[5485]),0},
{"id-Gost28147-89-CryptoPro-C-ParamSet",
	"id-Gost28147-89-CryptoPro-C-ParamSet",
	NID_id_Gost28147_89_CryptoPro_C_ParamSet,7,&(lvalues[5492]),0},
{"id-Gost28147-89-CryptoPro-D-ParamSet",
	"id-Gost28147-89-CryptoPro-D-ParamSet",
	NID_id_Gost28147_89_CryptoPro_D_ParamSet,7,&(lvalues[5499]),0},
{"id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet",
	"id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet",
	NID_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet,7,&(lvalues[5506]),
	0},
{"id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet",
	"id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet",
	NID_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet,7,&(lvalues[5513]),
	0},
{"id-Gost28147-89-CryptoPro-RIC-1-ParamSet",
	"id-Gost28147-89-CryptoPro-RIC-1-ParamSet",
	NID_id_Gost28147_89_CryptoPro_RIC_1_ParamSet,7,&(lvalues[5520]),0},
{"id-GostR3410-94-TestParamSet","id-GostR3410-94-TestParamSet",
	NID_id_GostR3410_94_TestParamSet,7,&(lvalues[5527]),0},
{"id-GostR3410-94-CryptoPro-A-ParamSet",
	"id-GostR3410-94-CryptoPro-A-ParamSet",
	NID_id_GostR3410_94_CryptoPro_A_ParamSet,7,&(lvalues[5534]),0},
{"id-GostR3410-94-CryptoPro-B-ParamSet",
	"id-GostR3410-94-CryptoPro-B-ParamSet",
	NID_id_GostR3410_94_CryptoPro_B_ParamSet,7,&(lvalues[5541]),0},
{"id-GostR3410-94-CryptoPro-C-ParamSet",
	"id-GostR3410-94-CryptoPro-C-ParamSet",
	NID_id_GostR3410_94_CryptoPro_C_ParamSet,7,&(lvalues[5548]),0},
{"id-GostR3410-94-CryptoPro-D-ParamSet",
	"id-GostR3410-94-CryptoPro-D-ParamSet",
	NID_id_GostR3410_94_CryptoPro_D_ParamSet,7,&(lvalues[5555]),0},
{"id-GostR3410-94-CryptoPro-XchA-ParamSet",
	"id-GostR3410-94-CryptoPro-XchA-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchA_ParamSet,7,&(lvalues[5562]),0},
{"id-GostR3410-94-CryptoPro-XchB-ParamSet",
	"id-GostR3410-94-CryptoPro-XchB-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchB_ParamSet,7,&(lvalues[5569]),0},
{"id-GostR3410-94-CryptoPro-XchC-ParamSet",
	"id-GostR3410-94-CryptoPro-XchC-ParamSet",
	NID_id_GostR3410_94_CryptoPro_XchC_ParamSet,7,&(lvalues[5576]),0},
{"id-GostR3410-2001-TestParamSet","id-GostR3410-2001-TestParamSet",
	NID_id_GostR3410_2001_TestParamSet,7,&(lvalues[5583]),0},
{"id-GostR3410-2001-CryptoPro-A-ParamSet",
	"id-GostR3410-2001-CryptoPro-A-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_A_ParamSet,7,&(lvalues[5590]),0},
{"id-GostR3410-2001-CryptoPro-B-ParamSet",
	"id-GostR3410-2001-CryptoPro-B-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_B_ParamSet,7,&(lvalues[5597]),0},
{"id-GostR3410-2001-CryptoPro-C-ParamSet",
	"id-GostR3410-2001-CryptoPro-C-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_C_ParamSet,7,&(lvalues[5604]),0},
{"id-GostR3410-2001-CryptoPro-XchA-ParamSet",
	"id-GostR3410-2001-CryptoPro-XchA-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_XchA_ParamSet,7,&(lvalues[5611]),0},
	
{"id-GostR3410-2001-CryptoPro-XchB-ParamSet",
	"id-GostR3410-2001-CryptoPro-XchB-ParamSet",
	NID_id_GostR3410_2001_CryptoPro_XchB_ParamSet,7,&(lvalues[5618]),0},
	
{"id-GostR3410-94-a","id-GostR3410-94-a",NID_id_GostR3410_94_a,7,
	&(lvalues[5625]),0},
{"id-GostR3410-94-aBis","id-GostR3410-94-aBis",
	NID_id_GostR3410_94_aBis,7,&(lvalues[5632]),0},
{"id-GostR3410-94-b","id-GostR3410-94-b",NID_id_GostR3410_94_b,7,
	&(lvalues[5639]),0},
{"id-GostR3410-94-bBis","id-GostR3410-94-bBis",
	NID_id_GostR3410_94_bBis,7,&(lvalues[5646]),0},
{"id-Gost28147-89-cc","GOST 28147-89 Cryptocom ParamSet",
	NID_id_Gost28147_89_cc,8,&(lvalues[5653]),0},
{"gost94cc","GOST 34.10-94 Cryptocom",NID_id_GostR3410_94_cc,8,
	&(lvalues[5661]),0},
{"gost2001cc","GOST 34.10-2001 Cryptocom",NID_id_GostR3410_2001_cc,8,
	&(lvalues[5669]),0},
{"id-GostR3411-94-with-GostR3410-94-cc",
	"GOST R 34.11-94 with GOST R 34.10-94 Cryptocom",
	NID_id_GostR3411_94_with_GostR3410_94_cc,8,&(lvalues[5677]),0},
{"id-GostR3411-94-with-GostR3410-2001-cc",
	"GOST R 34.11-94 with GOST R 34.10-2001 Cryptocom",
	NID_id_GostR3411_94_with_GostR3410_2001_cc,8,&(lvalues[5685]),0},
{"id-GostR3410-2001-ParamSet-cc",
	"GOST R 3410-2001 Parameter Set Cryptocom",
	NID_id_GostR3410_2001_ParamSet_cc,8,&(lvalues[5693]),0},
{"HMAC","hmac",NID_hmac,0,NULL,0},
{"LocalKeySet","Microsoft Local Key set",NID_LocalKeySet,9,
	&(lvalues[5701]),0},
};

static ASN1_OBJECT *sn_objs[NUM_SN]={
&(nid_objs[364]),/* "AD_DVCS" */
&(nid_objs[419]),/* "AES-128-CBC" */
&(nid_objs[421]),/* "AES-128-CFB" */
&(nid_objs[650]),/* "AES-128-CFB1" */
&(nid_objs[653]),/* "AES-128-CFB8" */
&(nid_objs[418]),/* "AES-128-ECB" */
&(nid_objs[420]),/* "AES-128-OFB" */
&(nid_objs[423]),/* "AES-192-CBC" */
&(nid_objs[425]),/* "AES-192-CFB" */
&(nid_objs[651]),/* "AES-192-CFB1" */
&(nid_objs[654]),/* "AES-192-CFB8" */
&(nid_objs[422]),/* "AES-192-ECB" */
&(nid_objs[424]),/* "AES-192-OFB" */
&(nid_objs[427]),/* "AES-256-CBC" */
&(nid_objs[429]),/* "AES-256-CFB" */
&(nid_objs[652]),/* "AES-256-CFB1" */
&(nid_objs[655]),/* "AES-256-CFB8" */
&(nid_objs[426]),/* "AES-256-ECB" */
&(nid_objs[428]),/* "AES-256-OFB" */
&(nid_objs[91]),/* "BF-CBC" */
&(nid_objs[93]),/* "BF-CFB" */
&(nid_objs[92]),/* "BF-ECB" */
&(nid_objs[94]),/* "BF-OFB" */
&(nid_objs[14]),/* "C" */
&(nid_objs[751]),/* "CAMELLIA-128-CBC" */
&(nid_objs[757]),/* "CAMELLIA-128-CFB" */
&(nid_objs[760]),/* "CAMELLIA-128-CFB1" */
&(nid_objs[763]),/* "CAMELLIA-128-CFB8" */
&(nid_objs[754]),/* "CAMELLIA-128-ECB" */
&(nid_objs[766]),/* "CAMELLIA-128-OFB" */
&(nid_objs[752]),/* "CAMELLIA-192-CBC" */
&(nid_objs[758]),/* "CAMELLIA-192-CFB" */
&(nid_objs[761]),/* "CAMELLIA-192-CFB1" */
&(nid_objs[764]),/* "CAMELLIA-192-CFB8" */
&(nid_objs[755]),/* "CAMELLIA-192-ECB" */
&(nid_objs[767]),/* "CAMELLIA-192-OFB" */
&(nid_objs[753]),/* "CAMELLIA-256-CBC" */
&(nid_objs[759]),/* "CAMELLIA-256-CFB" */
&(nid_objs[762]),/* "CAMELLIA-256-CFB1" */
&(nid_objs[765]),/* "CAMELLIA-256-CFB8" */
&(nid_objs[756]),/* "CAMELLIA-256-ECB" */
&(nid_objs[768]),/* "CAMELLIA-256-OFB" */
&(nid_objs[108]),/* "CAST5-CBC" */
&(nid_objs[110]),/* "CAST5-CFB" */
&(nid_objs[109]),/* "CAST5-ECB" */
&(nid_objs[111]),/* "CAST5-OFB" */
&(nid_objs[13]),/* "CN" */
&(nid_objs[141]),/* "CRLReason" */
&(nid_objs[417]),/* "CSPName" */
&(nid_objs[367]),/* "CrlID" */
&(nid_objs[391]),/* "DC" */
&(nid_objs[31]),/* "DES-CBC" */
&(nid_objs[643]),/* "DES-CDMF" */
&(nid_objs[30]),/* "DES-CFB" */
&(nid_objs[656]),/* "DES-CFB1" */
&(nid_objs[657]),/* "DES-CFB8" */
&(nid_objs[29]),/* "DES-ECB" */
&(nid_objs[32]),/* "DES-EDE" */
&(nid_objs[43]),/* "DES-EDE-CBC" */
&(nid_objs[60]),/* "DES-EDE-CFB" */
&(nid_objs[62]),/* "DES-EDE-OFB" */
&(nid_objs[33]),/* "DES-EDE3" */
&(nid_objs[44]),/* "DES-EDE3-CBC" */
&(nid_objs[61]),/* "DES-EDE3-CFB" */
&(nid_objs[658]),/* "DES-EDE3-CFB1" */
&(nid_objs[659]),/* "DES-EDE3-CFB8" */
&(nid_objs[63]),/* "DES-EDE3-OFB" */
&(nid_objs[45]),/* "DES-OFB" */
&(nid_objs[80]),/* "DESX-CBC" */
&(nid_objs[380]),/* "DOD" */
&(nid_objs[116]),/* "DSA" */
&(nid_objs[66]),/* "DSA-SHA" */
&(nid_objs[113]),/* "DSA-SHA1" */
&(nid_objs[70]),/* "DSA-SHA1-old" */
&(nid_objs[67]),/* "DSA-old" */
&(nid_objs[297]),/* "DVCS" */
&(nid_objs[99]),/* "GN" */
&(nid_objs[855]),/* "HMAC" */
&(nid_objs[780]),/* "HMAC-MD5" */
&(nid_objs[781]),/* "HMAC-SHA1" */
&(nid_objs[381]),/* "IANA" */
&(nid_objs[34]),/* "IDEA-CBC" */
&(nid_objs[35]),/* "IDEA-CFB" */
&(nid_objs[36]),/* "IDEA-ECB" */
&(nid_objs[46]),/* "IDEA-OFB" */
&(nid_objs[181]),/* "ISO" */
&(nid_objs[183]),/* "ISO-US" */
&(nid_objs[645]),/* "ITU-T" */
&(nid_objs[646]),/* "JOINT-ISO-ITU-T" */
&(nid_objs[773]),/* "KISA" */
&(nid_objs[15]),/* "L" */
&(nid_objs[856]),/* "LocalKeySet" */
&(nid_objs[ 3]),/* "MD2" */
&(nid_objs[257]),/* "MD4" */
&(nid_objs[ 4]),/* "MD5" */
&(nid_objs[114]),/* "MD5-SHA1" */
&(nid_objs[95]),/* "MDC2" */
&(nid_objs[388]),/* "Mail" */
&(nid_objs[393]),/* "NULL" */
&(nid_objs[404]),/* "NULL" */
&(nid_objs[57]),/* "Netscape" */
&(nid_objs[366]),/* "Nonce" */
&(nid_objs[17]),/* "O" */
&(nid_objs[178]),/* "OCSP" */
&(nid_objs[180]),/* "OCSPSigning" */
&(nid_objs[379]),/* "ORG" */
&(nid_objs[18]),/* "OU" */
&(nid_objs[749]),/* "Oakley-EC2N-3" */
&(nid_objs[750]),/* "Oakley-EC2N-4" */
&(nid_objs[ 9]),/* "PBE-MD2-DES" */
&(nid_objs[168]),/* "PBE-MD2-RC2-64" */
&(nid_objs[10]),/* "PBE-MD5-DES" */
&(nid_objs[169]),/* "PBE-MD5-RC2-64" */
&(nid_objs[147]),/* "PBE-SHA1-2DES" */
&(nid_objs[146]),/* "PBE-SHA1-3DES" */
&(nid_objs[170]),/* "PBE-SHA1-DES" */
&(nid_objs[148]),/* "PBE-SHA1-RC2-128" */
&(nid_objs[149]),/* "PBE-SHA1-RC2-40" */
&(nid_objs[68]),/* "PBE-SHA1-RC2-64" */
&(nid_objs[144]),/* "PBE-SHA1-RC4-128" */
&(nid_objs[145]),/* "PBE-SHA1-RC4-40" */
&(nid_objs[161]),/* "PBES2" */
&(nid_objs[69]),/* "PBKDF2" */
&(nid_objs[162]),/* "PBMAC1" */
&(nid_objs[127]),/* "PKIX" */
&(nid_objs[98]),/* "RC2-40-CBC" */
&(nid_objs[166]),/* "RC2-64-CBC" */
&(nid_objs[37]),/* "RC2-CBC" */
&(nid_objs[39]),/* "RC2-CFB" */
&(nid_objs[38]),/* "RC2-ECB" */
&(nid_objs[40]),/* "RC2-OFB" */
&(nid_objs[ 5]),/* "RC4" */
&(nid_objs[97]),/* "RC4-40" */
&(nid_objs[120]),/* "RC5-CBC" */
&(nid_objs[122]),/* "RC5-CFB" */
&(nid_objs[121]),/* "RC5-ECB" */
&(nid_objs[123]),/* "RC5-OFB" */
&(nid_objs[117]),/* "RIPEMD160" */
&(nid_objs[124]),/* "RLE" */
&(nid_objs[19]),/* "RSA" */
&(nid_objs[ 7]),/* "RSA-MD2" */
&(nid_objs[396]),/* "RSA-MD4" */
&(nid_objs[ 8]),/* "RSA-MD5" */
&(nid_objs[96]),/* "RSA-MDC2" */
&(nid_objs[104]),/* "RSA-NP-MD5" */
&(nid_objs[119]),/* "RSA-RIPEMD160" */
&(nid_objs[42]),/* "RSA-SHA" */
&(nid_objs[65]),/* "RSA-SHA1" */
&(nid_objs[115]),/* "RSA-SHA1-2" */
&(nid_objs[671]),/* "RSA-SHA224" */
&(nid_objs[668]),/* "RSA-SHA256" */
&(nid_objs[669]),/* "RSA-SHA384" */
&(nid_objs[670]),/* "RSA-SHA512" */
&(nid_objs[777]),/* "SEED-CBC" */
&(nid_objs[779]),/* "SEED-CFB" */
&(nid_objs[776]),/* "SEED-ECB" */
&(nid_objs[778]),/* "SEED-OFB" */
&(nid_objs[41]),/* "SHA" */
&(nid_objs[64]),/* "SHA1" */
&(nid_objs[675]),/* "SHA224" */
&(nid_objs[672]),/* "SHA256" */
&(nid_objs[673]),/* "SHA384" */
&(nid_objs[674]),/* "SHA512" */
&(nid_objs[188]),/* "SMIME" */
&(nid_objs[167]),/* "SMIME-CAPS" */
&(nid_objs[100]),/* "SN" */
&(nid_objs[16]),/* "ST" */
&(nid_objs[143]),/* "SXNetID" */
&(nid_objs[458]),/* "UID" */
&(nid_objs[ 0]),/* "UNDEF" */
&(nid_objs[11]),/* "X500" */
&(nid_objs[378]),/* "X500algorithms" */
&(nid_objs[12]),/* "X509" */
&(nid_objs[184]),/* "X9-57" */
&(nid_objs[185]),/* "X9cm" */
&(nid_objs[125]),/* "ZLIB" */
&(nid_objs[478]),/* "aRecord" */
&(nid_objs[289]),/* "aaControls" */
&(nid_objs[287]),/* "ac-auditEntity" */
&(nid_objs[397]),/* "ac-proxying" */
&(nid_objs[288]),/* "ac-targeting" */
&(nid_objs[368]),/* "acceptableResponses" */
&(nid_objs[446]),/* "account" */
&(nid_objs[363]),/* "ad_timestamping" */
&(nid_objs[376]),/* "algorithm" */
&(nid_objs[405]),/* "ansi-X9-62" */
&(nid_objs[746]),/* "anyPolicy" */
&(nid_objs[370]),/* "archiveCutoff" */
&(nid_objs[484]),/* "associatedDomain" */
&(nid_objs[485]),/* "associatedName" */
&(nid_objs[501]),/* "audio" */
&(nid_objs[177]),/* "authorityInfoAccess" */
&(nid_objs[90]),/* "authorityKeyIdentifier" */
&(nid_objs[87]),/* "basicConstraints" */
&(nid_objs[365]),/* "basicOCSPResponse" */
&(nid_objs[285]),/* "biometricInfo" */
&(nid_objs[494]),/* "buildingName" */
&(nid_objs[691]),/* "c2onb191v4" */
&(nid_objs[692]),/* "c2onb191v5" */
&(nid_objs[697]),/* "c2onb239v4" */
&(nid_objs[698]),/* "c2onb239v5" */
&(nid_objs[684]),/* "c2pnb163v1" */
&(nid_objs[685]),/* "c2pnb163v2" */
&(nid_objs[686]),/* "c2pnb163v3" */
&(nid_objs[687]),/* "c2pnb176v1" */
&(nid_objs[693]),/* "c2pnb208w1" */
&(nid_objs[699]),/* "c2pnb272w1" */
&(nid_objs[700]),/* "c2pnb304w1" */
&(nid_objs[702]),/* "c2pnb368w1" */
&(nid_objs[688]),/* "c2tnb191v1" */
&(nid_objs[689]),/* "c2tnb191v2" */
&(nid_objs[690]),/* "c2tnb191v3" */
&(nid_objs[694]),/* "c2tnb239v1" */
&(nid_objs[695]),/* "c2tnb239v2" */
&(nid_objs[696]),/* "c2tnb239v3" */
&(nid_objs[701]),/* "c2tnb359v1" */
&(nid_objs[703]),/* "c2tnb431r1" */
&(nid_objs[483]),/* "cNAMERecord" */
&(nid_objs[179]),/* "caIssuers" */
&(nid_objs[785]),/* "caRepository" */
&(nid_objs[443]),/* "caseIgnoreIA5StringSyntax" */
&(nid_objs[152]),/* "certBag" */
&(nid_objs[677]),/* "certicom-arc" */
&(nid_objs[771]),/* "certificateIssuer" */
&(nid_objs[89]),/* "certificatePolicies" */
&(nid_objs[54]),/* "challengePassword" */
&(nid_objs[407]),/* "characteristic-two-field" */
&(nid_objs[395]),/* "clearance" */
&(nid_objs[130]),/* "clientAuth" */
&(nid_objs[131]),/* "codeSigning" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[153]),/* "crlBag" */
&(nid_objs[103]),/* "crlDistributionPoints" */
&(nid_objs[88]),/* "crlNumber" */
&(nid_objs[806]),/* "cryptocom" */
&(nid_objs[805]),/* "cryptopro" */
&(nid_objs[500]),/* "dITRedirect" */
&(nid_objs[451]),/* "dNSDomain" */
&(nid_objs[495]),/* "dSAQuality" */
&(nid_objs[434]),/* "data" */
&(nid_objs[390]),/* "dcobject" */
&(nid_objs[140]),/* "deltaCRL" */
&(nid_objs[107]),/* "description" */
&(nid_objs[28]),/* "dhKeyAgreement" */
&(nid_objs[382]),/* "directory" */
&(nid_objs[174]),/* "dnQualifier" */
&(nid_objs[447]),/* "document" */
&(nid_objs[471]),/* "documentAuthor" */
&(nid_objs[468]),/* "documentIdentifier" */
&(nid_objs[472]),/* "documentLocation" */
&(nid_objs[502]),/* "documentPublisher" */
&(nid_objs[449]),/* "documentSeries" */
&(nid_objs[469]),/* "documentTitle" */
&(nid_objs[470]),/* "documentVersion" */
&(nid_objs[392]),/* "domain" */
&(nid_objs[452]),/* "domainRelatedObject" */
&(nid_objs[802]),/* "dsa_with_SHA224" */
&(nid_objs[803]),/* "dsa_with_SHA256" */
&(nid_objs[791]),/* "ecdsa-with-Recommended" */
&(nid_objs[416]),/* "ecdsa-with-SHA1" */
&(nid_objs[793]),/* "ecdsa-with-SHA224" */
&(nid_objs[794]),/* "ecdsa-with-SHA256" */
&(nid_objs[795]),/* "ecdsa-with-SHA384" */
&(nid_objs[796]),/* "ecdsa-with-SHA512" */
&(nid_objs[792]),/* "ecdsa-with-Specified" */
&(nid_objs[48]),/* "emailAddress" */
&(nid_objs[132]),/* "emailProtection" */
&(nid_objs[389]),/* "enterprises" */
&(nid_objs[384]),/* "experimental" */
&(nid_objs[172]),/* "extReq" */
&(nid_objs[56]),/* "extendedCertificateAttributes" */
&(nid_objs[126]),/* "extendedKeyUsage" */
&(nid_objs[372]),/* "extendedStatus" */
&(nid_objs[462]),/* "favouriteDrink" */
&(nid_objs[453]),/* "friendlyCountry" */
&(nid_objs[490]),/* "friendlyCountryName" */
&(nid_objs[156]),/* "friendlyName" */
&(nid_objs[509]),/* "generationQualifier" */
&(nid_objs[815]),/* "gost-mac" */
&(nid_objs[811]),/* "gost2001" */
&(nid_objs[851]),/* "gost2001cc" */
&(nid_objs[813]),/* "gost89" */
&(nid_objs[814]),/* "gost89-cnt" */
&(nid_objs[812]),/* "gost94" */
&(nid_objs[850]),/* "gost94cc" */
&(nid_objs[797]),/* "hmacWithMD5" */
&(nid_objs[163]),/* "hmacWithSHA1" */
&(nid_objs[798]),/* "hmacWithSHA224" */
&(nid_objs[799]),/* "hmacWithSHA256" */
&(nid_objs[800]),/* "hmacWithSHA384" */
&(nid_objs[801]),/* "hmacWithSHA512" */
&(nid_objs[432]),/* "holdInstructionCallIssuer" */
&(nid_objs[430]),/* "holdInstructionCode" */
&(nid_objs[431]),/* "holdInstructionNone" */
&(nid_objs[433]),/* "holdInstructionReject" */
&(nid_objs[486]),/* "homePostalAddress" */
&(nid_objs[473]),/* "homeTelephoneNumber" */
&(nid_objs[466]),/* "host" */
&(nid_objs[442]),/* "iA5StringSyntax" */
&(nid_objs[783]),/* "id-DHBasedMac" */
&(nid_objs[824]),/* "id-Gost28147-89-CryptoPro-A-ParamSet" */
&(nid_objs[825]),/* "id-Gost28147-89-CryptoPro-B-ParamSet" */
&(nid_objs[826]),/* "id-Gost28147-89-CryptoPro-C-ParamSet" */
&(nid_objs[827]),/* "id-Gost28147-89-CryptoPro-D-ParamSet" */
&(nid_objs[819]),/* "id-Gost28147-89-CryptoPro-KeyMeshing" */
&(nid_objs[829]),/* "id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet" */
&(nid_objs[828]),/* "id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet" */
&(nid_objs[830]),/* "id-Gost28147-89-CryptoPro-RIC-1-ParamSet" */
&(nid_objs[820]),/* "id-Gost28147-89-None-KeyMeshing" */
&(nid_objs[823]),/* "id-Gost28147-89-TestParamSet" */
&(nid_objs[849]),/* "id-Gost28147-89-cc" */
&(nid_objs[840]),/* "id-GostR3410-2001-CryptoPro-A-ParamSet" */
&(nid_objs[841]),/* "id-GostR3410-2001-CryptoPro-B-ParamSet" */
&(nid_objs[842]),/* "id-GostR3410-2001-CryptoPro-C-ParamSet" */
&(nid_objs[843]),/* "id-GostR3410-2001-CryptoPro-XchA-ParamSet" */
&(nid_objs[844]),/* "id-GostR3410-2001-CryptoPro-XchB-ParamSet" */
&(nid_objs[854]),/* "id-GostR3410-2001-ParamSet-cc" */
&(nid_objs[839]),/* "id-GostR3410-2001-TestParamSet" */
&(nid_objs[817]),/* "id-GostR3410-2001DH" */
&(nid_objs[832]),/* "id-GostR3410-94-CryptoPro-A-ParamSet" */
&(nid_objs[833]),/* "id-GostR3410-94-CryptoPro-B-ParamSet" */
&(nid_objs[834]),/* "id-GostR3410-94-CryptoPro-C-ParamSet" */
&(nid_objs[835]),/* "id-GostR3410-94-CryptoPro-D-ParamSet" */
&(nid_objs[836]),/* "id-GostR3410-94-CryptoPro-XchA-ParamSet" */
&(nid_objs[837]),/* "id-GostR3410-94-CryptoPro-XchB-ParamSet" */
&(nid_objs[838]),/* "id-GostR3410-94-CryptoPro-XchC-ParamSet" */
&(nid_objs[831]),/* "id-GostR3410-94-TestParamSet" */
&(nid_objs[845]),/* "id-GostR3410-94-a" */
&(nid_objs[846]),/* "id-GostR3410-94-aBis" */
&(nid_objs[847]),/* "id-GostR3410-94-b" */
&(nid_objs[848]),/* "id-GostR3410-94-bBis" */
&(nid_objs[818]),/* "id-GostR3410-94DH" */
&(nid_objs[822]),/* "id-GostR3411-94-CryptoProParamSet" */
&(nid_objs[821]),/* "id-GostR3411-94-TestParamSet" */
&(nid_objs[807]),/* "id-GostR3411-94-with-GostR3410-2001" */
&(nid_objs[853]),/* "id-GostR3411-94-with-GostR3410-2001-cc" */
&(nid_objs[808]),/* "id-GostR3411-94-with-GostR3410-94" */
&(nid_objs[852]),/* "id-GostR3411-94-with-GostR3410-94-cc" */
&(nid_objs[810]),/* "id-HMACGostR3411-94" */
&(nid_objs[782]),/* "id-PasswordBasedMAC" */
&(nid_objs[266]),/* "id-aca" */
&(nid_objs[355]),/* "id-aca-accessIdentity" */
&(nid_objs[354]),/* "id-aca-authenticationInfo" */
&(nid_objs[356]),/* "id-aca-chargingIdentity" */
&(nid_objs[399]),/* "id-aca-encAttrs" */
&(nid_objs[357]),/* "id-aca-group" */
&(nid_objs[358]),/* "id-aca-role" */
&(nid_objs[176]),/* "id-ad" */
&(nid_objs[788]),/* "id-aes128-wrap" */
&(nid_objs[789]),/* "id-aes192-wrap" */
&(nid_objs[790]),/* "id-aes256-wrap" */
&(nid_objs[262]),/* "id-alg" */
&(nid_objs[323]),/* "id-alg-des40" */
&(nid_objs[326]),/* "id-alg-dh-pop" */
&(nid_objs[325]),/* "id-alg-dh-sig-hmac-sha1" */
&(nid_objs[324]),/* "id-alg-noSignature" */
&(nid_objs[268]),/* "id-cct" */
&(nid_objs[361]),/* "id-cct-PKIData" */
&(nid_objs[362]),/* "id-cct-PKIResponse" */
&(nid_objs[360]),/* "id-cct-crs" */
&(nid_objs[81]),/* "id-ce" */
&(nid_objs[680]),/* "id-characteristic-two-basis" */
&(nid_objs[263]),/* "id-cmc" */
&(nid_objs[334]),/* "id-cmc-addExtensions" */
&(nid_objs[346]),/* "id-cmc-confirmCertAcceptance" */
&(nid_objs[330]),/* "id-cmc-dataReturn" */
&(nid_objs[336]),/* "id-cmc-decryptedPOP" */
&(nid_objs[335]),/* "id-cmc-encryptedPOP" */
&(nid_objs[339]),/* "id-cmc-getCRL" */
&(nid_objs[338]),/* "id-cmc-getCert" */
&(nid_objs[328]),/* "id-cmc-identification" */
&(nid_objs[329]),/* "id-cmc-identityProof" */
&(nid_objs[337]),/* "id-cmc-lraPOPWitness" */
&(nid_objs[344]),/* "id-cmc-popLinkRandom" */
&(nid_objs[345]),/* "id-cmc-popLinkWitness" */
&(nid_objs[343]),/* "id-cmc-queryPending" */
&(nid_objs[333]),/* "id-cmc-recipientNonce" */
&(nid_objs[341]),/* "id-cmc-regInfo" */
&(nid_objs[342]),/* "id-cmc-responseInfo" */
&(nid_objs[340]),/* "id-cmc-revokeRequest" */
&(nid_objs[332]),/* "id-cmc-senderNonce" */
&(nid_objs[327]),/* "id-cmc-statusInfo" */
&(nid_objs[331]),/* "id-cmc-transactionId" */
&(nid_objs[787]),/* "id-ct-asciiTextWithCRLF" */
&(nid_objs[408]),/* "id-ecPublicKey" */
&(nid_objs[508]),/* "id-hex-multipart-message" */
&(nid_objs[507]),/* "id-hex-partial-message" */
&(nid_objs[260]),/* "id-it" */
&(nid_objs[302]),/* "id-it-caKeyUpdateInfo" */
&(nid_objs[298]),/* "id-it-caProtEncCert" */
&(nid_objs[311]),/* "id-it-confirmWaitTime" */
&(nid_objs[303]),/* "id-it-currentCRL" */
&(nid_objs[300]),/* "id-it-encKeyPairTypes" */
&(nid_objs[310]),/* "id-it-implicitConfirm" */
&(nid_objs[308]),/* "id-it-keyPairParamRep" */
&(nid_objs[307]),/* "id-it-keyPairParamReq" */
&(nid_objs[312]),/* "id-it-origPKIMessage" */
&(nid_objs[301]),/* "id-it-preferredSymmAlg" */
&(nid_objs[309]),/* "id-it-revPassphrase" */
&(nid_objs[299]),/* "id-it-signKeyPairTypes" */
&(nid_objs[305]),/* "id-it-subscriptionRequest" */
&(nid_objs[306]),/* "id-it-subscriptionResponse" */
&(nid_objs[784]),/* "id-it-suppLangTags" */
&(nid_objs[304]),/* "id-it-unsupportedOIDs" */
&(nid_objs[128]),/* "id-kp" */
&(nid_objs[280]),/* "id-mod-attribute-cert" */
&(nid_objs[274]),/* "id-mod-cmc" */
&(nid_objs[277]),/* "id-mod-cmp" */
&(nid_objs[284]),/* "id-mod-cmp2000" */
&(nid_objs[273]),/* "id-mod-crmf" */
&(nid_objs[283]),/* "id-mod-dvcs" */
&(nid_objs[275]),/* "id-mod-kea-profile-88" */
&(nid_objs[276]),/* "id-mod-kea-profile-93" */
&(nid_objs[282]),/* "id-mod-ocsp" */
&(nid_objs[278]),/* "id-mod-qualified-cert-88" */
&(nid_objs[279]),/* "id-mod-qualified-cert-93" */
&(nid_objs[281]),/* "id-mod-timestamp-protocol" */
&(nid_objs[264]),/* "id-on" */
&(nid_objs[347]),/* "id-on-personalData" */
&(nid_objs[265]),/* "id-pda" */
&(nid_objs[352]),/* "id-pda-countryOfCitizenship" */
&(nid_objs[353]),/* "id-pda-countryOfResidence" */
&(nid_objs[348]),/* "id-pda-dateOfBirth" */
&(nid_objs[351]),/* "id-pda-gender" */
&(nid_objs[349]),/* "id-pda-placeOfBirth" */
&(nid_objs[175]),/* "id-pe" */
&(nid_objs[261]),/* "id-pkip" */
&(nid_objs[258]),/* "id-pkix-mod" */
&(nid_objs[269]),/* "id-pkix1-explicit-88" */
&(nid_objs[271]),/* "id-pkix1-explicit-93" */
&(nid_objs[270]),/* "id-pkix1-implicit-88" */
&(nid_objs[272]),/* "id-pkix1-implicit-93" */
&(nid_objs[662]),/* "id-ppl" */
&(nid_objs[664]),/* "id-ppl-anyLanguage" */
&(nid_objs[667]),/* "id-ppl-independent" */
&(nid_objs[665]),/* "id-ppl-inheritAll" */
&(nid_objs[267]),/* "id-qcs" */
&(nid_objs[359]),/* "id-qcs-pkixQCSyntax-v1" */
&(nid_objs[259]),/* "id-qt" */
&(nid_objs[164]),/* "id-qt-cps" */
&(nid_objs[165]),/* "id-qt-unotice" */
&(nid_objs[313]),/* "id-regCtrl" */
&(nid_objs[316]),/* "id-regCtrl-authenticator" */
&(nid_objs[319]),/* "id-regCtrl-oldCertID" */
&(nid_objs[318]),/* "id-regCtrl-pkiArchiveOptions" */
&(nid_objs[317]),/* "id-regCtrl-pkiPublicationInfo" */
&(nid_objs[320]),/* "id-regCtrl-protocolEncrKey" */
&(nid_objs[315]),/* "id-regCtrl-regToken" */
&(nid_objs[314]),/* "id-regInfo" */
&(nid_objs[322]),/* "id-regInfo-certReq" */
&(nid_objs[321]),/* "id-regInfo-utf8Pairs" */
&(nid_objs[512]),/* "id-set" */
&(nid_objs[191]),/* "id-smime-aa" */
&(nid_objs[215]),/* "id-smime-aa-contentHint" */
&(nid_objs[218]),/* "id-smime-aa-contentIdentifier" */
&(nid_objs[221]),/* "id-smime-aa-contentReference" */
&(nid_objs[240]),/* "id-smime-aa-dvcs-dvc" */
&(nid_objs[217]),/* "id-smime-aa-encapContentType" */
&(nid_objs[222]),/* "id-smime-aa-encrypKeyPref" */
&(nid_objs[220]),/* "id-smime-aa-equivalentLabels" */
&(nid_objs[232]),/* "id-smime-aa-ets-CertificateRefs" */
&(nid_objs[233]),/* "id-smime-aa-ets-RevocationRefs" */
&(nid_objs[238]),/* "id-smime-aa-ets-archiveTimeStamp" */
&(nid_objs[237]),/* "id-smime-aa-ets-certCRLTimestamp" */
&(nid_objs[234]),/* "id-smime-aa-ets-certValues" */
&(nid_objs[227]),/* "id-smime-aa-ets-commitmentType" */
&(nid_objs[231]),/* "id-smime-aa-ets-contentTimestamp" */
&(nid_objs[236]),/* "id-smime-aa-ets-escTimeStamp" */
&(nid_objs[230]),/* "id-smime-aa-ets-otherSigCert" */
&(nid_objs[235]),/* "id-smime-aa-ets-revocationValues" */
&(nid_objs[226]),/* "id-smime-aa-ets-sigPolicyId" */
&(nid_objs[229]),/* "id-smime-aa-ets-signerAttr" */
&(nid_objs[228]),/* "id-smime-aa-ets-signerLocation" */
&(nid_objs[219]),/* "id-smime-aa-macValue" */
&(nid_objs[214]),/* "id-smime-aa-mlExpandHistory" */
&(nid_objs[216]),/* "id-smime-aa-msgSigDigest" */
&(nid_objs[212]),/* "id-smime-aa-receiptRequest" */
&(nid_objs[213]),/* "id-smime-aa-securityLabel" */
&(nid_objs[239]),/* "id-smime-aa-signatureType" */
&(nid_objs[223]),/* "id-smime-aa-signingCertificate" */
&(nid_objs[224]),/* "id-smime-aa-smimeEncryptCerts" */
&(nid_objs[225]),/* "id-smime-aa-timeStampToken" */
&(nid_objs[192]),/* "id-smime-alg" */
&(nid_objs[243]),/* "id-smime-alg-3DESwrap" */
&(nid_objs[246]),/* "id-smime-alg-CMS3DESwrap" */
&(nid_objs[247]),/* "id-smime-alg-CMSRC2wrap" */
&(nid_objs[245]),/* "id-smime-alg-ESDH" */
&(nid_objs[241]),/* "id-smime-alg-ESDHwith3DES" */
&(nid_objs[242]),/* "id-smime-alg-ESDHwithRC2" */
&(nid_objs[244]),/* "id-smime-alg-RC2wrap" */
&(nid_objs[193]),/* "id-smime-cd" */
&(nid_objs[248]),/* "id-smime-cd-ldap" */
&(nid_objs[190]),/* "id-smime-ct" */
&(nid_objs[210]),/* "id-smime-ct-DVCSRequestData" */
&(nid_objs[211]),/* "id-smime-ct-DVCSResponseData" */
&(nid_objs[208]),/* "id-smime-ct-TDTInfo" */
&(nid_objs[207]),/* "id-smime-ct-TSTInfo" */
&(nid_objs[205]),/* "id-smime-ct-authData" */
&(nid_objs[786]),/* "id-smime-ct-compressedData" */
&(nid_objs[209]),/* "id-smime-ct-contentInfo" */
&(nid_objs[206]),/* "id-smime-ct-publishCert" */
&(nid_objs[204]),/* "id-smime-ct-receipt" */
&(nid_objs[195]),/* "id-smime-cti" */
&(nid_objs[255]),/* "id-smime-cti-ets-proofOfApproval" */
&(nid_objs[256]),/* "id-smime-cti-ets-proofOfCreation" */
&(nid_objs[253]),/* "id-smime-cti-ets-proofOfDelivery" */
&(nid_objs[251]),/* "id-smime-cti-ets-proofOfOrigin" */
&(nid_objs[252]),/* "id-smime-cti-ets-proofOfReceipt" */
&(nid_objs[254]),/* "id-smime-cti-ets-proofOfSender" */
&(nid_objs[189]),/* "id-smime-mod" */
&(nid_objs[196]),/* "id-smime-mod-cms" */
&(nid_objs[197]),/* "id-smime-mod-ess" */
&(nid_objs[202]),/* "id-smime-mod-ets-eSigPolicy-88" */
&(nid_objs[203]),/* "id-smime-mod-ets-eSigPolicy-97" */
&(nid_objs[200]),/* "id-smime-mod-ets-eSignature-88" */
&(nid_objs[201]),/* "id-smime-mod-ets-eSignature-97" */
&(nid_objs[199]),/* "id-smime-mod-msg-v3" */
&(nid_objs[198]),/* "id-smime-mod-oid" */
&(nid_objs[194]),/* "id-smime-spq" */
&(nid_objs[250]),/* "id-smime-spq-ets-sqt-unotice" */
&(nid_objs[249]),/* "id-smime-spq-ets-sqt-uri" */
&(nid_objs[676]),/* "identified-organization" */
&(nid_objs[461]),/* "info" */
&(nid_objs[748]),/* "inhibitAnyPolicy" */
&(nid_objs[101]),/* "initials" */
&(nid_objs[647]),/* "international-organizations" */
&(nid_objs[142]),/* "invalidityDate" */
&(nid_objs[294]),/* "ipsecEndSystem" */
&(nid_objs[295]),/* "ipsecTunnel" */
&(nid_objs[296]),/* "ipsecUser" */
&(nid_objs[86]),/* "issuerAltName" */
&(nid_objs[770]),/* "issuingDistributionPoint" */
&(nid_objs[492]),/* "janetMailbox" */
&(nid_objs[150]),/* "keyBag" */
&(nid_objs[83]),/* "keyUsage" */
&(nid_objs[477]),/* "lastModifiedBy" */
&(nid_objs[476]),/* "lastModifiedTime" */
&(nid_objs[157]),/* "localKeyID" */
&(nid_objs[480]),/* "mXRecord" */
&(nid_objs[460]),/* "mail" */
&(nid_objs[493]),/* "mailPreferenceOption" */
&(nid_objs[467]),/* "manager" */
&(nid_objs[809]),/* "md_gost94" */
&(nid_objs[182]),/* "member-body" */
&(nid_objs[51]),/* "messageDigest" */
&(nid_objs[383]),/* "mgmt" */
&(nid_objs[504]),/* "mime-mhs" */
&(nid_objs[506]),/* "mime-mhs-bodies" */
&(nid_objs[505]),/* "mime-mhs-headings" */
&(nid_objs[488]),/* "mobileTelephoneNumber" */
&(nid_objs[136]),/* "msCTLSign" */
&(nid_objs[135]),/* "msCodeCom" */
&(nid_objs[134]),/* "msCodeInd" */
&(nid_objs[138]),/* "msEFS" */
&(nid_objs[171]),/* "msExtReq" */
&(nid_objs[137]),/* "msSGC" */
&(nid_objs[648]),/* "msSmartcardLogin" */
&(nid_objs[649]),/* "msUPN" */
&(nid_objs[481]),/* "nSRecord" */
&(nid_objs[173]),/* "name" */
&(nid_objs[666]),/* "nameConstraints" */
&(nid_objs[369]),/* "noCheck" */
&(nid_objs[403]),/* "noRevAvail" */
&(nid_objs[72]),/* "nsBaseUrl" */
&(nid_objs[76]),/* "nsCaPolicyUrl" */
&(nid_objs[74]),/* "nsCaRevocationUrl" */
&(nid_objs[58]),/* "nsCertExt" */
&(nid_objs[79]),/* "nsCertSequence" */
&(nid_objs[71]),/* "nsCertType" */
&(nid_objs[78]),/* "nsComment" */
&(nid_objs[59]),/* "nsDataType" */
&(nid_objs[75]),/* "nsRenewalUrl" */
&(nid_objs[73]),/* "nsRevocationUrl" */
&(nid_objs[139]),/* "nsSGC" */
&(nid_objs[77]),/* "nsSslServerName" */
&(nid_objs[681]),/* "onBasis" */
&(nid_objs[491]),/* "organizationalStatus" */
&(nid_objs[475]),/* "otherMailbox" */
&(nid_objs[489]),/* "pagerTelephoneNumber" */
&(nid_objs[374]),/* "path" */
&(nid_objs[112]),/* "pbeWithMD5AndCast5CBC" */
&(nid_objs[499]),/* "personalSignature" */
&(nid_objs[487]),/* "personalTitle" */
&(nid_objs[464]),/* "photo" */
&(nid_objs[437]),/* "pilot" */
&(nid_objs[439]),/* "pilotAttributeSyntax" */
&(nid_objs[438]),/* "pilotAttributeType" */
&(nid_objs[479]),/* "pilotAttributeType27" */
&(nid_objs[456]),/* "pilotDSA" */
&(nid_objs[441]),/* "pilotGroups" */
&(nid_objs[444]),/* "pilotObject" */
&(nid_objs[440]),/* "pilotObjectClass" */
&(nid_objs[455]),/* "pilotOrganization" */
&(nid_objs[445]),/* "pilotPerson" */
&(nid_objs[ 2]),/* "pkcs" */
&(nid_objs[186]),/* "pkcs1" */
&(nid_objs[27]),/* "pkcs3" */
&(nid_objs[187]),/* "pkcs5" */
&(nid_objs[20]),/* "pkcs7" */
&(nid_objs[21]),/* "pkcs7-data" */
&(nid_objs[25]),/* "pkcs7-digestData" */
&(nid_objs[26]),/* "pkcs7-encryptedData" */
&(nid_objs[23]),/* "pkcs7-envelopedData" */
&(nid_objs[24]),/* "pkcs7-signedAndEnvelopedData" */
&(nid_objs[22]),/* "pkcs7-signedData" */
&(nid_objs[151]),/* "pkcs8ShroudedKeyBag" */
&(nid_objs[47]),/* "pkcs9" */
&(nid_objs[401]),/* "policyConstraints" */
&(nid_objs[747]),/* "policyMappings" */
&(nid_objs[661]),/* "postalCode" */
&(nid_objs[683]),/* "ppBasis" */
&(nid_objs[816]),/* "prf-gostr3411-94" */
&(nid_objs[406]),/* "prime-field" */
&(nid_objs[409]),/* "prime192v1" */
&(nid_objs[410]),/* "prime192v2" */
&(nid_objs[411]),/* "prime192v3" */
&(nid_objs[412]),/* "prime239v1" */
&(nid_objs[413]),/* "prime239v2" */
&(nid_objs[414]),/* "prime239v3" */
&(nid_objs[415]),/* "prime256v1" */
&(nid_objs[385]),/* "private" */
&(nid_objs[84]),/* "privateKeyUsagePeriod" */
&(nid_objs[663]),/* "proxyCertInfo" */
&(nid_objs[510]),/* "pseudonym" */
&(nid_objs[435]),/* "pss" */
&(nid_objs[286]),/* "qcStatements" */
&(nid_objs[457]),/* "qualityLabelledData" */
&(nid_objs[450]),/* "rFC822localPart" */
&(nid_objs[400]),/* "role" */
&(nid_objs[448]),/* "room" */
&(nid_objs[463]),/* "roomNumber" */
&(nid_objs[ 6]),/* "rsaEncryption" */
&(nid_objs[644]),/* "rsaOAEPEncryptionSET" */
&(nid_objs[377]),/* "rsaSignature" */
&(nid_objs[ 1]),/* "rsadsi" */
&(nid_objs[482]),/* "sOARecord" */
&(nid_objs[155]),/* "safeContentsBag" */
&(nid_objs[291]),/* "sbgp-autonomousSysNum" */
&(nid_objs[290]),/* "sbgp-ipAddrBlock" */
&(nid_objs[292]),/* "sbgp-routerIdentifier" */
&(nid_objs[159]),/* "sdsiCertificate" */
&(nid_objs[704]),/* "secp112r1" */
&(nid_objs[705]),/* "secp112r2" */
&(nid_objs[706]),/* "secp128r1" */
&(nid_objs[707]),/* "secp128r2" */
&(nid_objs[708]),/* "secp160k1" */
&(nid_objs[709]),/* "secp160r1" */
&(nid_objs[710]),/* "secp160r2" */
&(nid_objs[711]),/* "secp192k1" */
&(nid_objs[712]),/* "secp224k1" */
&(nid_objs[713]),/* "secp224r1" */
&(nid_objs[714]),/* "secp256k1" */
&(nid_objs[715]),/* "secp384r1" */
&(nid_objs[716]),/* "secp521r1" */
&(nid_objs[154]),/* "secretBag" */
&(nid_objs[474]),/* "secretary" */
&(nid_objs[717]),/* "sect113r1" */
&(nid_objs[718]),/* "sect113r2" */
&(nid_objs[719]),/* "sect131r1" */
&(nid_objs[720]),/* "sect131r2" */
&(nid_objs[721]),/* "sect163k1" */
&(nid_objs[722]),/* "sect163r1" */
&(nid_objs[723]),/* "sect163r2" */
&(nid_objs[724]),/* "sect193r1" */
&(nid_objs[725]),/* "sect193r2" */
&(nid_objs[726]),/* "sect233k1" */
&(nid_objs[727]),/* "sect233r1" */
&(nid_objs[728]),/* "sect239k1" */
&(nid_objs[729]),/* "sect283k1" */
&(nid_objs[730]),/* "sect283r1" */
&(nid_objs[731]),/* "sect409k1" */
&(nid_objs[732]),/* "sect409r1" */
&(nid_objs[733]),/* "sect571k1" */
&(nid_objs[734]),/* "sect571r1" */
&(nid_objs[386]),/* "security" */
&(nid_objs[394]),/* "selected-attribute-types" */
&(nid_objs[105]),/* "serialNumber" */
&(nid_objs[129]),/* "serverAuth" */
&(nid_objs[371]),/* "serviceLocator" */
&(nid_objs[625]),/* "set-addPolicy" */
&(nid_objs[515]),/* "set-attr" */
&(nid_objs[518]),/* "set-brand" */
&(nid_objs[638]),/* "set-brand-AmericanExpress" */
&(nid_objs[637]),/* "set-brand-Diners" */
&(nid_objs[636]),/* "set-brand-IATA-ATA" */
&(nid_objs[639]),/* "set-brand-JCB" */
&(nid_objs[641]),/* "set-brand-MasterCard" */
&(nid_objs[642]),/* "set-brand-Novus" */
&(nid_objs[640]),/* "set-brand-Visa" */
&(nid_objs[517]),/* "set-certExt" */
&(nid_objs[513]),/* "set-ctype" */
&(nid_objs[514]),/* "set-msgExt" */
&(nid_objs[516]),/* "set-policy" */
&(nid_objs[607]),/* "set-policy-root" */
&(nid_objs[624]),/* "set-rootKeyThumb" */
&(nid_objs[620]),/* "setAttr-Cert" */
&(nid_objs[631]),/* "setAttr-GenCryptgrm" */
&(nid_objs[623]),/* "setAttr-IssCap" */
&(nid_objs[628]),/* "setAttr-IssCap-CVM" */
&(nid_objs[630]),/* "setAttr-IssCap-Sig" */
&(nid_objs[629]),/* "setAttr-IssCap-T2" */
&(nid_objs[621]),/* "setAttr-PGWYcap" */
&(nid_objs[635]),/* "setAttr-SecDevSig" */
&(nid_objs[632]),/* "setAttr-T2Enc" */
&(nid_objs[633]),/* "setAttr-T2cleartxt" */
&(nid_objs[634]),/* "setAttr-TokICCsig" */
&(nid_objs[627]),/* "setAttr-Token-B0Prime" */
&(nid_objs[626]),/* "setAttr-Token-EMV" */
&(nid_objs[622]),/* "setAttr-TokenType" */
&(nid_objs[619]),/* "setCext-IssuerCapabilities" */
&(nid_objs[615]),/* "setCext-PGWYcapabilities" */
&(nid_objs[616]),/* "setCext-TokenIdentifier" */
&(nid_objs[618]),/* "setCext-TokenType" */
&(nid_objs[617]),/* "setCext-Track2Data" */
&(nid_objs[611]),/* "setCext-cCertRequired" */
&(nid_objs[609]),/* "setCext-certType" */
&(nid_objs[608]),/* "setCext-hashedRoot" */
&(nid_objs[610]),/* "setCext-merchData" */
&(nid_objs[613]),/* "setCext-setExt" */
&(nid_objs[614]),/* "setCext-setQualf" */
&(nid_objs[612]),/* "setCext-tunneling" */
&(nid_objs[540]),/* "setct-AcqCardCodeMsg" */
&(nid_objs[576]),/* "setct-AcqCardCodeMsgTBE" */
&(nid_objs[570]),/* "setct-AuthReqTBE" */
&(nid_objs[534]),/* "setct-AuthReqTBS" */
&(nid_objs[527]),/* "setct-AuthResBaggage" */
&(nid_objs[571]),/* "setct-AuthResTBE" */
&(nid_objs[572]),/* "setct-AuthResTBEX" */
&(nid_objs[535]),/* "setct-AuthResTBS" */
&(nid_objs[536]),/* "setct-AuthResTBSX" */
&(nid_objs[528]),/* "setct-AuthRevReqBaggage" */
&(nid_objs[577]),/* "setct-AuthRevReqTBE" */
&(nid_objs[541]),/* "setct-AuthRevReqTBS" */
&(nid_objs[529]),/* "setct-AuthRevResBaggage" */
&(nid_objs[542]),/* "setct-AuthRevResData" */
&(nid_objs[578]),/* "setct-AuthRevResTBE" */
&(nid_objs[579]),/* "setct-AuthRevResTBEB" */
&(nid_objs[543]),/* "setct-AuthRevResTBS" */
&(nid_objs[573]),/* "setct-AuthTokenTBE" */
&(nid_objs[537]),/* "setct-AuthTokenTBS" */
&(nid_objs[600]),/* "setct-BCIDistributionTBS" */
&(nid_objs[558]),/* "setct-BatchAdminReqData" */
&(nid_objs[592]),/* "setct-BatchAdminReqTBE" */
&(nid_objs[559]),/* "setct-BatchAdminResData" */
&(nid_objs[593]),/* "setct-BatchAdminResTBE" */
&(nid_objs[599]),/* "setct-CRLNotificationResTBS" */
&(nid_objs[598]),/* "setct-CRLNotificationTBS" */
&(nid_objs[580]),/* "setct-CapReqTBE" */
&(nid_objs[581]),/* "setct-CapReqTBEX" */
&(nid_objs[544]),/* "setct-CapReqTBS" */
&(nid_objs[545]),/* "setct-CapReqTBSX" */
&(nid_objs[546]),/* "setct-CapResData" */
&(nid_objs[582]),/* "setct-CapResTBE" */
&(nid_objs[583]),/* "setct-CapRevReqTBE" */
&(nid_objs[584]),/* "setct-CapRevReqTBEX" */
&(nid_objs[547]),/* "setct-CapRevReqTBS" */
&(nid_objs[548]),/* "setct-CapRevReqTBSX" */
&(nid_objs[549]),/* "setct-CapRevResData" */
&(nid_objs[585]),/* "setct-CapRevResTBE" */
&(nid_objs[538]),/* "setct-CapTokenData" */
&(nid_objs[530]),/* "setct-CapTokenSeq" */
&(nid_objs[574]),/* "setct-CapTokenTBE" */
&(nid_objs[575]),/* "setct-CapTokenTBEX" */
&(nid_objs[539]),/* "setct-CapTokenTBS" */
&(nid_objs[560]),/* "setct-CardCInitResTBS" */
&(nid_objs[566]),/* "setct-CertInqReqTBS" */
&(nid_objs[563]),/* "setct-CertReqData" */
&(nid_objs[595]),/* "setct-CertReqTBE" */
&(nid_objs[596]),/* "setct-CertReqTBEX" */
&(nid_objs[564]),/* "setct-CertReqTBS" */
&(nid_objs[565]),/* "setct-CertResData" */
&(nid_objs[597]),/* "setct-CertResTBE" */
&(nid_objs[586]),/* "setct-CredReqTBE" */
&(nid_objs[587]),/* "setct-CredReqTBEX" */
&(nid_objs[550]),/* "setct-CredReqTBS" */
&(nid_objs[551]),/* "setct-CredReqTBSX" */
&(nid_objs[552]),/* "setct-CredResData" */
&(nid_objs[588]),/* "setct-CredResTBE" */
&(nid_objs[589]),/* "setct-CredRevReqTBE" */
&(nid_objs[590]),/* "setct-CredRevReqTBEX" */
&(nid_objs[553]),/* "setct-CredRevReqTBS" */
&(nid_objs[554]),/* "setct-CredRevReqTBSX" */
&(nid_objs[555]),/* "setct-CredRevResData" */
&(nid_objs[591]),/* "setct-CredRevResTBE" */
&(nid_objs[567]),/* "setct-ErrorTBS" */
&(nid_objs[526]),/* "setct-HODInput" */
&(nid_objs[561]),/* "setct-MeAqCInitResTBS" */
&(nid_objs[522]),/* "setct-OIData" */
&(nid_objs[519]),/* "setct-PANData" */
&(nid_objs[521]),/* "setct-PANOnly" */
&(nid_objs[520]),/* "setct-PANToken" */
&(nid_objs[556]),/* "setct-PCertReqData" */
&(nid_objs[557]),/* "setct-PCertResTBS" */
&(nid_objs[523]),/* "setct-PI" */
&(nid_objs[532]),/* "setct-PI-TBS" */
&(nid_objs[524]),/* "setct-PIData" */
&(nid_objs[525]),/* "setct-PIDataUnsigned" */
&(nid_objs[568]),/* "setct-PIDualSignedTBE" */
&(nid_objs[569]),/* "setct-PIUnsignedTBE" */
&(nid_objs[531]),/* "setct-PInitResData" */
&(nid_objs[533]),/* "setct-PResData" */
&(nid_objs[594]),/* "setct-RegFormReqTBE" */
&(nid_objs[562]),/* "setct-RegFormResTBS" */
&(nid_objs[606]),/* "setext-cv" */
&(nid_objs[601]),/* "setext-genCrypt" */
&(nid_objs[602]),/* "setext-miAuth" */
&(nid_objs[604]),/* "setext-pinAny" */
&(nid_objs[603]),/* "setext-pinSecure" */
&(nid_objs[605]),/* "setext-track2" */
&(nid_objs[52]),/* "signingTime" */
&(nid_objs[454]),/* "simpleSecurityObject" */
&(nid_objs[496]),/* "singleLevelQuality" */
&(nid_objs[387]),/* "snmpv2" */
&(nid_objs[660]),/* "streetAddress" */
&(nid_objs[85]),/* "subjectAltName" */
&(nid_objs[769]),/* "subjectDirectoryAttributes" */
&(nid_objs[398]),/* "subjectInfoAccess" */
&(nid_objs[82]),/* "subjectKeyIdentifier" */
&(nid_objs[498]),/* "subtreeMaximumQuality" */
&(nid_objs[497]),/* "subtreeMinimumQuality" */
&(nid_objs[402]),/* "targetInformation" */
&(nid_objs[459]),/* "textEncodedORAddress" */
&(nid_objs[293]),/* "textNotice" */
&(nid_objs[133]),/* "timeStamping" */
&(nid_objs[106]),/* "title" */
&(nid_objs[682]),/* "tpBasis" */
&(nid_objs[375]),/* "trustRoot" */
&(nid_objs[436]),/* "ucl" */
&(nid_objs[55]),/* "unstructuredAddress" */
&(nid_objs[49]),/* "unstructuredName" */
&(nid_objs[465]),/* "userClass" */
&(nid_objs[373]),/* "valid" */
&(nid_objs[678]),/* "wap" */
&(nid_objs[679]),/* "wap-wsg" */
&(nid_objs[735]),/* "wap-wsg-idm-ecid-wtls1" */
&(nid_objs[743]),/* "wap-wsg-idm-ecid-wtls10" */
&(nid_objs[744]),/* "wap-wsg-idm-ecid-wtls11" */
&(nid_objs[745]),/* "wap-wsg-idm-ecid-wtls12" */
&(nid_objs[736]),/* "wap-wsg-idm-ecid-wtls3" */
&(nid_objs[737]),/* "wap-wsg-idm-ecid-wtls4" */
&(nid_objs[738]),/* "wap-wsg-idm-ecid-wtls5" */
&(nid_objs[739]),/* "wap-wsg-idm-ecid-wtls6" */
&(nid_objs[740]),/* "wap-wsg-idm-ecid-wtls7" */
&(nid_objs[741]),/* "wap-wsg-idm-ecid-wtls8" */
&(nid_objs[742]),/* "wap-wsg-idm-ecid-wtls9" */
&(nid_objs[804]),/* "whirlpool" */
&(nid_objs[503]),/* "x500UniqueIdentifier" */
&(nid_objs[158]),/* "x509Certificate" */
&(nid_objs[160]),/* "x509Crl" */
};

static ASN1_OBJECT *ln_objs[NUM_LN]={
&(nid_objs[363]),/* "AD Time Stamping" */
&(nid_objs[405]),/* "ANSI X9.62" */
&(nid_objs[368]),/* "Acceptable OCSP Responses" */
&(nid_objs[664]),/* "Any language" */
&(nid_objs[177]),/* "Authority Information Access" */
&(nid_objs[365]),/* "Basic OCSP Response" */
&(nid_objs[285]),/* "Biometric Info" */
&(nid_objs[179]),/* "CA Issuers" */
&(nid_objs[785]),/* "CA Repository" */
&(nid_objs[131]),/* "Code Signing" */
&(nid_objs[783]),/* "Diffie-Hellman based MAC" */
&(nid_objs[382]),/* "Directory" */
&(nid_objs[392]),/* "Domain" */
&(nid_objs[132]),/* "E-mail Protection" */
&(nid_objs[389]),/* "Enterprises" */
&(nid_objs[384]),/* "Experimental" */
&(nid_objs[372]),/* "Extended OCSP Status" */
&(nid_objs[172]),/* "Extension Request" */
&(nid_objs[813]),/* "GOST 28147-89" */
&(nid_objs[849]),/* "GOST 28147-89 Cryptocom ParamSet" */
&(nid_objs[815]),/* "GOST 28147-89 MAC" */
&(nid_objs[851]),/* "GOST 34.10-2001 Cryptocom" */
&(nid_objs[850]),/* "GOST 34.10-94 Cryptocom" */
&(nid_objs[811]),/* "GOST R 34.10-2001" */
&(nid_objs[817]),/* "GOST R 34.10-2001 DH" */
&(nid_objs[812]),/* "GOST R 34.10-94" */
&(nid_objs[818]),/* "GOST R 34.10-94 DH" */
&(nid_objs[809]),/* "GOST R 34.11-94" */
&(nid_objs[816]),/* "GOST R 34.11-94 PRF" */
&(nid_objs[807]),/* "GOST R 34.11-94 with GOST R 34.10-2001" */
&(nid_objs[853]),/* "GOST R 34.11-94 with GOST R 34.10-2001 Cryptocom" */
&(nid_objs[808]),/* "GOST R 34.11-94 with GOST R 34.10-94" */
&(nid_objs[852]),/* "GOST R 34.11-94 with GOST R 34.10-94 Cryptocom" */
&(nid_objs[854]),/* "GOST R 3410-2001 Parameter Set Cryptocom" */
&(nid_objs[810]),/* "HMAC GOST 34.11-94" */
&(nid_objs[432]),/* "Hold Instruction Call Issuer" */
&(nid_objs[430]),/* "Hold Instruction Code" */
&(nid_objs[431]),/* "Hold Instruction None" */
&(nid_objs[433]),/* "Hold Instruction Reject" */
&(nid_objs[634]),/* "ICC or token signature" */
&(nid_objs[294]),/* "IPSec End System" */
&(nid_objs[295]),/* "IPSec Tunnel" */
&(nid_objs[296]),/* "IPSec User" */
&(nid_objs[182]),/* "ISO Member Body" */
&(nid_objs[183]),/* "ISO US Member Body" */
&(nid_objs[667]),/* "Independent" */
&(nid_objs[665]),/* "Inherit all" */
&(nid_objs[647]),/* "International Organizations" */
&(nid_objs[142]),/* "Invalidity Date" */
&(nid_objs[504]),/* "MIME MHS" */
&(nid_objs[388]),/* "Mail" */
&(nid_objs[383]),/* "Management" */
&(nid_objs[417]),/* "Microsoft CSP Name" */
&(nid_objs[135]),/* "Microsoft Commercial Code Signing" */
&(nid_objs[138]),/* "Microsoft Encrypted File System" */
&(nid_objs[171]),/* "Microsoft Extension Request" */
&(nid_objs[134]),/* "Microsoft Individual Code Signing" */
&(nid_objs[856]),/* "Microsoft Local Key set" */
&(nid_objs[137]),/* "Microsoft Server Gated Crypto" */
&(nid_objs[648]),/* "Microsoft Smartcardlogin" */
&(nid_objs[136]),/* "Microsoft Trust List Signing" */
&(nid_objs[649]),/* "Microsoft Universal Principal Name" */
&(nid_objs[393]),/* "NULL" */
&(nid_objs[404]),/* "NULL" */
&(nid_objs[72]),/* "Netscape Base Url" */
&(nid_objs[76]),/* "Netscape CA Policy Url" */
&(nid_objs[74]),/* "Netscape CA Revocation Url" */
&(nid_objs[71]),/* "Netscape Cert Type" */
&(nid_objs[58]),/* "Netscape Certificate Extension" */
&(nid_objs[79]),/* "Netscape Certificate Sequence" */
&(nid_objs[78]),/* "Netscape Comment" */
&(nid_objs[57]),/* "Netscape Communications Corp." */
&(nid_objs[59]),/* "Netscape Data Type" */
&(nid_objs[75]),/* "Netscape Renewal Url" */
&(nid_objs[73]),/* "Netscape Revocation Url" */
&(nid_objs[77]),/* "Netscape SSL Server Name" */
&(nid_objs[139]),/* "Netscape Server Gated Crypto" */
&(nid_objs[178]),/* "OCSP" */
&(nid_objs[370]),/* "OCSP Archive Cutoff" */
&(nid_objs[367]),/* "OCSP CRL ID" */
&(nid_objs[369]),/* "OCSP No Check" */
&(nid_objs[366]),/* "OCSP Nonce" */
&(nid_objs[371]),/* "OCSP Service Locator" */
&(nid_objs[180]),/* "OCSP Signing" */
&(nid_objs[161]),/* "PBES2" */
&(nid_objs[69]),/* "PBKDF2" */
&(nid_objs[162]),/* "PBMAC1" */
&(nid_objs[127]),/* "PKIX" */
&(nid_objs[164]),/* "Policy Qualifier CPS" */
&(nid_objs[165]),/* "Policy Qualifier User Notice" */
&(nid_objs[385]),/* "Private" */
&(nid_objs[663]),/* "Proxy Certificate Information" */
&(nid_objs[ 1]),/* "RSA Data Security, Inc." */
&(nid_objs[ 2]),/* "RSA Data Security, Inc. PKCS" */
&(nid_objs[188]),/* "S/MIME" */
&(nid_objs[167]),/* "S/MIME Capabilities" */
&(nid_objs[387]),/* "SNMPv2" */
&(nid_objs[512]),/* "Secure Electronic Transactions" */
&(nid_objs[386]),/* "Security" */
&(nid_objs[394]),/* "Selected Attribute Types" */
&(nid_objs[143]),/* "Strong Extranet ID" */
&(nid_objs[398]),/* "Subject Information Access" */
&(nid_objs[130]),/* "TLS Web Client Authentication" */
&(nid_objs[129]),/* "TLS Web Server Authentication" */
&(nid_objs[133]),/* "Time Stamping" */
&(nid_objs[375]),/* "Trust Root" */
&(nid_objs[12]),/* "X509" */
&(nid_objs[402]),/* "X509v3 AC Targeting" */
&(nid_objs[746]),/* "X509v3 Any Policy" */
&(nid_objs[90]),/* "X509v3 Authority Key Identifier" */
&(nid_objs[87]),/* "X509v3 Basic Constraints" */
&(nid_objs[103]),/* "X509v3 CRL Distribution Points" */
&(nid_objs[88]),/* "X509v3 CRL Number" */
&(nid_objs[141]),/* "X509v3 CRL Reason Code" */
&(nid_objs[771]),/* "X509v3 Certificate Issuer" */
&(nid_objs[89]),/* "X509v3 Certificate Policies" */
&(nid_objs[140]),/* "X509v3 Delta CRL Indicator" */
&(nid_objs[126]),/* "X509v3 Extended Key Usage" */
&(nid_objs[748]),/* "X509v3 Inhibit Any Policy" */
&(nid_objs[86]),/* "X509v3 Issuer Alternative Name" */
&(nid_objs[770]),/* "X509v3 Issuing Distrubution Point" */
&(nid_objs[83]),/* "X509v3 Key Usage" */
&(nid_objs[666]),/* "X509v3 Name Constraints" */
&(nid_objs[403]),/* "X509v3 No Revocation Available" */
&(nid_objs[401]),/* "X509v3 Policy Constraints" */
&(nid_objs[747]),/* "X509v3 Policy Mappings" */
&(nid_objs[84]),/* "X509v3 Private Key Usage Period" */
&(nid_objs[85]),/* "X509v3 Subject Alternative Name" */
&(nid_objs[769]),/* "X509v3 Subject Directory Attributes" */
&(nid_objs[82]),/* "X509v3 Subject Key Identifier" */
&(nid_objs[184]),/* "X9.57" */
&(nid_objs[185]),/* "X9.57 CM ?" */
&(nid_objs[478]),/* "aRecord" */
&(nid_objs[289]),/* "aaControls" */
&(nid_objs[287]),/* "ac-auditEntity" */
&(nid_objs[397]),/* "ac-proxying" */
&(nid_objs[288]),/* "ac-targeting" */
&(nid_objs[446]),/* "account" */
&(nid_objs[364]),/* "ad dvcs" */
&(nid_objs[606]),/* "additional verification" */
&(nid_objs[419]),/* "aes-128-cbc" */
&(nid_objs[421]),/* "aes-128-cfb" */
&(nid_objs[650]),/* "aes-128-cfb1" */
&(nid_objs[653]),/* "aes-128-cfb8" */
&(nid_objs[418]),/* "aes-128-ecb" */
&(nid_objs[420]),/* "aes-128-ofb" */
&(nid_objs[423]),/* "aes-192-cbc" */
&(nid_objs[425]),/* "aes-192-cfb" */
&(nid_objs[651]),/* "aes-192-cfb1" */
&(nid_objs[654]),/* "aes-192-cfb8" */
&(nid_objs[422]),/* "aes-192-ecb" */
&(nid_objs[424]),/* "aes-192-ofb" */
&(nid_objs[427]),/* "aes-256-cbc" */
&(nid_objs[429]),/* "aes-256-cfb" */
&(nid_objs[652]),/* "aes-256-cfb1" */
&(nid_objs[655]),/* "aes-256-cfb8" */
&(nid_objs[426]),/* "aes-256-ecb" */
&(nid_objs[428]),/* "aes-256-ofb" */
&(nid_objs[376]),/* "algorithm" */
&(nid_objs[484]),/* "associatedDomain" */
&(nid_objs[485]),/* "associatedName" */
&(nid_objs[501]),/* "audio" */
&(nid_objs[91]),/* "bf-cbc" */
&(nid_objs[93]),/* "bf-cfb" */
&(nid_objs[92]),/* "bf-ecb" */
&(nid_objs[94]),/* "bf-ofb" */
&(nid_objs[494]),/* "buildingName" */
&(nid_objs[691]),/* "c2onb191v4" */
&(nid_objs[692]),/* "c2onb191v5" */
&(nid_objs[697]),/* "c2onb239v4" */
&(nid_objs[698]),/* "c2onb239v5" */
&(nid_objs[684]),/* "c2pnb163v1" */
&(nid_objs[685]),/* "c2pnb163v2" */
&(nid_objs[686]),/* "c2pnb163v3" */
&(nid_objs[687]),/* "c2pnb176v1" */
&(nid_objs[693]),/* "c2pnb208w1" */
&(nid_objs[699]),/* "c2pnb272w1" */
&(nid_objs[700]),/* "c2pnb304w1" */
&(nid_objs[702]),/* "c2pnb368w1" */
&(nid_objs[688]),/* "c2tnb191v1" */
&(nid_objs[689]),/* "c2tnb191v2" */
&(nid_objs[690]),/* "c2tnb191v3" */
&(nid_objs[694]),/* "c2tnb239v1" */
&(nid_objs[695]),/* "c2tnb239v2" */
&(nid_objs[696]),/* "c2tnb239v3" */
&(nid_objs[701]),/* "c2tnb359v1" */
&(nid_objs[703]),/* "c2tnb431r1" */
&(nid_objs[483]),/* "cNAMERecord" */
&(nid_objs[751]),/* "camellia-128-cbc" */
&(nid_objs[757]),/* "camellia-128-cfb" */
&(nid_objs[760]),/* "camellia-128-cfb1" */
&(nid_objs[763]),/* "camellia-128-cfb8" */
&(nid_objs[754]),/* "camellia-128-ecb" */
&(nid_objs[766]),/* "camellia-128-ofb" */
&(nid_objs[752]),/* "camellia-192-cbc" */
&(nid_objs[758]),/* "camellia-192-cfb" */
&(nid_objs[761]),/* "camellia-192-cfb1" */
&(nid_objs[764]),/* "camellia-192-cfb8" */
&(nid_objs[755]),/* "camellia-192-ecb" */
&(nid_objs[767]),/* "camellia-192-ofb" */
&(nid_objs[753]),/* "camellia-256-cbc" */
&(nid_objs[759]),/* "camellia-256-cfb" */
&(nid_objs[762]),/* "camellia-256-cfb1" */
&(nid_objs[765]),/* "camellia-256-cfb8" */
&(nid_objs[756]),/* "camellia-256-ecb" */
&(nid_objs[768]),/* "camellia-256-ofb" */
&(nid_objs[443]),/* "caseIgnoreIA5StringSyntax" */
&(nid_objs[108]),/* "cast5-cbc" */
&(nid_objs[110]),/* "cast5-cfb" */
&(nid_objs[109]),/* "cast5-ecb" */
&(nid_objs[111]),/* "cast5-ofb" */
&(nid_objs[152]),/* "certBag" */
&(nid_objs[677]),/* "certicom-arc" */
&(nid_objs[517]),/* "certificate extensions" */
&(nid_objs[54]),/* "challengePassword" */
&(nid_objs[407]),/* "characteristic-two-field" */
&(nid_objs[395]),/* "clearance" */
&(nid_objs[633]),/* "cleartext track 2" */
&(nid_objs[13]),/* "commonName" */
&(nid_objs[513]),/* "content types" */
&(nid_objs[50]),/* "contentType" */
&(nid_objs[53]),/* "countersignature" */
&(nid_objs[14]),/* "countryName" */
&(nid_objs[153]),/* "crlBag" */
&(nid_objs[806]),/* "cryptocom" */
&(nid_objs[805]),/* "cryptopro" */
&(nid_objs[500]),/* "dITRedirect" */
&(nid_objs[451]),/* "dNSDomain" */
&(nid_objs[495]),/* "dSAQuality" */
&(nid_objs[434]),/* "data" */
&(nid_objs[390]),/* "dcObject" */
&(nid_objs[31]),/* "des-cbc" */
&(nid_objs[643]),/* "des-cdmf" */
&(nid_objs[30]),/* "des-cfb" */
&(nid_objs[656]),/* "des-cfb1" */
&(nid_objs[657]),/* "des-cfb8" */
&(nid_objs[29]),/* "des-ecb" */
&(nid_objs[32]),/* "des-ede" */
&(nid_objs[43]),/* "des-ede-cbc" */
&(nid_objs[60]),/* "des-ede-cfb" */
&(nid_objs[62]),/* "des-ede-ofb" */
&(nid_objs[33]),/* "des-ede3" */
&(nid_objs[44]),/* "des-ede3-cbc" */
&(nid_objs[61]),/* "des-ede3-cfb" */
&(nid_objs[658]),/* "des-ede3-cfb1" */
&(nid_objs[659]),/* "des-ede3-cfb8" */
&(nid_objs[63]),/* "des-ede3-ofb" */
&(nid_objs[45]),/* "des-ofb" */
&(nid_objs[107]),/* "description" */
&(nid_objs[80]),/* "desx-cbc" */
&(nid_objs[28]),/* "dhKeyAgreement" */
&(nid_objs[11]),/* "directory services (X.500)" */
&(nid_objs[378]),/* "directory services - algorithms" */
&(nid_objs[174]),/* "dnQualifier" */
&(nid_objs[447]),/* "document" */
&(nid_objs[471]),/* "documentAuthor" */
&(nid_objs[468]),/* "documentIdentifier" */
&(nid_objs[472]),/* "documentLocation" */
&(nid_objs[502]),/* "documentPublisher" */
&(nid_objs[449]),/* "documentSeries" */
&(nid_objs[469]),/* "documentTitle" */
&(nid_objs[470]),/* "documentVersion" */
&(nid_objs[380]),/* "dod" */
&(nid_objs[391]),/* "domainComponent" */
&(nid_objs[452]),/* "domainRelatedObject" */
&(nid_objs[116]),/* "dsaEncryption" */
&(nid_objs[67]),/* "dsaEncryption-old" */
&(nid_objs[66]),/* "dsaWithSHA" */
&(nid_objs[113]),/* "dsaWithSHA1" */
&(nid_objs[70]),/* "dsaWithSHA1-old" */
&(nid_objs[802]),/* "dsa_with_SHA224" */
&(nid_objs[803]),/* "dsa_with_SHA256" */
&(nid_objs[297]),/* "dvcs" */
&(nid_objs[791]),/* "ecdsa-with-Recommended" */
&(nid_objs[416]),/* "ecdsa-with-SHA1" */
&(nid_objs[793]),/* "ecdsa-with-SHA224" */
&(nid_objs[794]),/* "ecdsa-with-SHA256" */
&(nid_objs[795]),/* "ecdsa-with-SHA384" */
&(nid_objs[796]),/* "ecdsa-with-SHA512" */
&(nid_objs[792]),/* "ecdsa-with-Specified" */
&(nid_objs[48]),/* "emailAddress" */
&(nid_objs[632]),/* "encrypted track 2" */
&(nid_objs[56]),/* "extendedCertificateAttributes" */
&(nid_objs[462]),/* "favouriteDrink" */
&(nid_objs[453]),/* "friendlyCountry" */
&(nid_objs[490]),/* "friendlyCountryName" */
&(nid_objs[156]),/* "friendlyName" */
&(nid_objs[631]),/* "generate cryptogram" */
&(nid_objs[509]),/* "generationQualifier" */
&(nid_objs[601]),/* "generic cryptogram" */
&(nid_objs[99]),/* "givenName" */
&(nid_objs[814]),/* "gost89-cnt" */
&(nid_objs[855]),/* "hmac" */
&(nid_objs[780]),/* "hmac-md5" */
&(nid_objs[781]),/* "hmac-sha1" */
&(nid_objs[797]),/* "hmacWithMD5" */
&(nid_objs[163]),/* "hmacWithSHA1" */
&(nid_objs[798]),/* "hmacWithSHA224" */
&(nid_objs[799]),/* "hmacWithSHA256" */
&(nid_objs[800]),/* "hmacWithSHA384" */
&(nid_objs[801]),/* "hmacWithSHA512" */
&(nid_objs[486]),/* "homePostalAddress" */
&(nid_objs[473]),/* "homeTelephoneNumber" */
&(nid_objs[466]),/* "host" */
&(nid_objs[442]),/* "iA5StringSyntax" */
&(nid_objs[381]),/* "iana" */
&(nid_objs[824]),/* "id-Gost28147-89-CryptoPro-A-ParamSet" */
&(nid_objs[825]),/* "id-Gost28147-89-CryptoPro-B-ParamSet" */
&(nid_objs[826]),/* "id-Gost28147-89-CryptoPro-C-ParamSet" */
&(nid_objs[827]),/* "id-Gost28147-89-CryptoPro-D-ParamSet" */
&(nid_objs[819]),/* "id-Gost28147-89-CryptoPro-KeyMeshing" */
&(nid_objs[829]),/* "id-Gost28147-89-CryptoPro-Oscar-1-0-ParamSet" */
&(nid_objs[828]),/* "id-Gost28147-89-CryptoPro-Oscar-1-1-ParamSet" */
&(nid_objs[830]),/* "id-Gost28147-89-CryptoPro-RIC-1-ParamSet" */
&(nid_objs[820]),/* "id-Gost28147-89-None-KeyMeshing" */
&(nid_objs[823]),/* "id-Gost28147-89-TestParamSet" */
&(nid_objs[840]),/* "id-GostR3410-2001-CryptoPro-A-ParamSet" */
&(nid_objs[841]),/* "id-GostR3410-2001-CryptoPro-B-ParamSet" */
&(nid_objs[842]),/* "id-GostR3410-2001-CryptoPro-C-ParamSet" */
&(nid_objs[843]),/* "id-GostR3410-2001-CryptoPro-XchA-ParamSet" */
&(nid_objs[844]),/* "id-GostR3410-2001-CryptoPro-XchB-ParamSet" */
&(nid_objs[839]),/* "id-GostR3410-2001-TestParamSet" */
&(nid_objs[832]),/* "id-GostR3410-94-CryptoPro-A-ParamSet" */
&(nid_objs[833]),/* "id-GostR3410-94-CryptoPro-B-ParamSet" */
&(nid_objs[834]),/* "id-GostR3410-94-CryptoPro-C-ParamSet" */
&(nid_objs[835]),/* "id-GostR3410-94-CryptoPro-D-ParamSet" */
&(nid_objs[836]),/* "id-GostR3410-94-CryptoPro-XchA-ParamSet" */
&(nid_objs[837]),/* "id-GostR3410-94-CryptoPro-XchB-ParamSet" */
&(nid_objs[838]),/* "id-GostR3410-94-CryptoPro-XchC-ParamSet" */
&(nid_objs[831]),/* "id-GostR3410-94-TestParamSet" */
&(nid_objs[845]),/* "id-GostR3410-94-a" */
&(nid_objs[846]),/* "id-GostR3410-94-aBis" */
&(nid_objs[847]),/* "id-GostR3410-94-b" */
&(nid_objs[848]),/* "id-GostR3410-94-bBis" */
&(nid_objs[822]),/* "id-GostR3411-94-CryptoProParamSet" */
&(nid_objs[821]),/* "id-GostR3411-94-TestParamSet" */
&(nid_objs[266]),/* "id-aca" */
&(nid_objs[355]),/* "id-aca-accessIdentity" */
&(nid_objs[354]),/* "id-aca-authenticationInfo" */
&(nid_objs[356]),/* "id-aca-chargingIdentity" */
&(nid_objs[399]),/* "id-aca-encAttrs" */
&(nid_objs[357]),/* "id-aca-group" */
&(nid_objs[358]),/* "id-aca-role" */
&(nid_objs[176]),/* "id-ad" */
&(nid_objs[788]),/* "id-aes128-wrap" */
&(nid_objs[789]),/* "id-aes192-wrap" */
&(nid_objs[790]),/* "id-aes256-wrap" */
&(nid_objs[262]),/* "id-alg" */
&(nid_objs[323]),/* "id-alg-des40" */
&(nid_objs[326]),/* "id-alg-dh-pop" */
&(nid_objs[325]),/* "id-alg-dh-sig-hmac-sha1" */
&(nid_objs[324]),/* "id-alg-noSignature" */
&(nid_objs[268]),/* "id-cct" */
&(nid_objs[361]),/* "id-cct-PKIData" */
&(nid_objs[362]),/* "id-cct-PKIResponse" */
&(nid_objs[360]),/* "id-cct-crs" */
&(nid_objs[81]),/* "id-ce" */
&(nid_objs[680]),/* "id-characteristic-two-basis" */
&(nid_objs[263]),/* "id-cmc" */
&(nid_objs[334]),/* "id-cmc-addExtensions" */
&(nid_objs[346]),/* "id-cmc-confirmCertAcceptance" */
&(nid_objs[330]),/* "id-cmc-dataReturn" */
&(nid_objs[336]),/* "id-cmc-decryptedPOP" */
&(nid_objs[335]),/* "id-cmc-encryptedPOP" */
&(nid_objs[339]),/* "id-cmc-getCRL" */
&(nid_objs[338]),/* "id-cmc-getCert" */
&(nid_objs[328]),/* "id-cmc-identification" */
&(nid_objs[329]),/* "id-cmc-identityProof" */
&(nid_objs[337]),/* "id-cmc-lraPOPWitness" */
&(nid_objs[344]),/* "id-cmc-popLinkRandom" */
&(nid_objs[345]),/* "id-cmc-popLinkWitness" */
&(nid_objs[343]),/* "id-cmc-queryPending" */
&(nid_objs[333]),/* "id-cmc-recipientNonce" */
&(nid_objs[341]),/* "id-cmc-regInfo" */
&(nid_objs[342]),/* "id-cmc-responseInfo" */
&(nid_objs[340]),/* "id-cmc-revokeRequest" */
&(nid_objs[332]),/* "id-cmc-senderNonce" */
&(nid_objs[327]),/* "id-cmc-statusInfo" */
&(nid_objs[331]),/* "id-cmc-transactionId" */
&(nid_objs[787]),/* "id-ct-asciiTextWithCRLF" */
&(nid_objs[408]),/* "id-ecPublicKey" */
&(nid_objs[508]),/* "id-hex-multipart-message" */
&(nid_objs[507]),/* "id-hex-partial-message" */
&(nid_objs[260]),/* "id-it" */
&(nid_objs[302]),/* "id-it-caKeyUpdateInfo" */
&(nid_objs[298]),/* "id-it-caProtEncCert" */
&(nid_objs[311]),/* "id-it-confirmWaitTime" */
&(nid_objs[303]),/* "id-it-currentCRL" */
&(nid_objs[300]),/* "id-it-encKeyPairTypes" */
&(nid_objs[310]),/* "id-it-implicitConfirm" */
&(nid_objs[308]),/* "id-it-keyPairParamRep" */
&(nid_objs[307]),/* "id-it-keyPairParamReq" */
&(nid_objs[312]),/* "id-it-origPKIMessage" */
&(nid_objs[301]),/* "id-it-preferredSymmAlg" */
&(nid_objs[309]),/* "id-it-revPassphrase" */
&(nid_objs[299]),/* "id-it-signKeyPairTypes" */
&(nid_objs[305]),/* "id-it-subscriptionRequest" */
&(nid_objs[306]),/* "id-it-subscriptionResponse" */
&(nid_objs[784]),/* "id-it-suppLangTags" */
&(nid_objs[304]),/* "id-it-unsupportedOIDs" */
&(nid_objs[128]),/* "id-kp" */
&(nid_objs[280]),/* "id-mod-attribute-cert" */
&(nid_objs[274]),/* "id-mod-cmc" */
&(nid_objs[277]),/* "id-mod-cmp" */
&(nid_objs[284]),/* "id-mod-cmp2000" */
&(nid_objs[273]),/* "id-mod-crmf" */
&(nid_objs[283]),/* "id-mod-dvcs" */
&(nid_objs[275]),/* "id-mod-kea-profile-88" */
&(nid_objs[276]),/* "id-mod-kea-profile-93" */
&(nid_objs[282]),/* "id-mod-ocsp" */
&(nid_objs[278]),/* "id-mod-qualified-cert-88" */
&(nid_objs[279]),/* "id-mod-qualified-cert-93" */
&(nid_objs[281]),/* "id-mod-timestamp-protocol" */
&(nid_objs[264]),/* "id-on" */
&(nid_objs[347]),/* "id-on-personalData" */
&(nid_objs[265]),/* "id-pda" */
&(nid_objs[352]),/* "id-pda-countryOfCitizenship" */
&(nid_objs[353]),/* "id-pda-countryOfResidence" */
&(nid_objs[348]),/* "id-pda-dateOfBirth" */
&(nid_objs[351]),/* "id-pda-gender" */
&(nid_objs[349]),/* "id-pda-placeOfBirth" */
&(nid_objs[175]),/* "id-pe" */
&(nid_objs[261]),/* "id-pkip" */
&(nid_objs[258]),/* "id-pkix-mod" */
&(nid_objs[269]),/* "id-pkix1-explicit-88" */
&(nid_objs[271]),/* "id-pkix1-explicit-93" */
&(nid_objs[270]),/* "id-pkix1-implicit-88" */
&(nid_objs[272]),/* "id-pkix1-implicit-93" */
&(nid_objs[662]),/* "id-ppl" */
&(nid_objs[267]),/* "id-qcs" */
&(nid_objs[359]),/* "id-qcs-pkixQCSyntax-v1" */
&(nid_objs[259]),/* "id-qt" */
&(nid_objs[313]),/* "id-regCtrl" */
&(nid_objs[316]),/* "id-regCtrl-authenticator" */
&(nid_objs[319]),/* "id-regCtrl-oldCertID" */
&(nid_objs[318]),/* "id-regCtrl-pkiArchiveOptions" */
&(nid_objs[317]),/* "id-regCtrl-pkiPublicationInfo" */
&(nid_objs[320]),/* "id-regCtrl-protocolEncrKey" */
&(nid_objs[315]),/* "id-regCtrl-regToken" */
&(nid_objs[314]),/* "id-regInfo" */
&(nid_objs[322]),/* "id-regInfo-certReq" */
&(nid_objs[321]),/* "id-regInfo-utf8Pairs" */
&(nid_objs[191]),/* "id-smime-aa" */
&(nid_objs[215]),/* "id-smime-aa-contentHint" */
&(nid_objs[218]),/* "id-smime-aa-contentIdentifier" */
&(nid_objs[221]),/* "id-smime-aa-contentReference" */
&(nid_objs[240]),/* "id-smime-aa-dvcs-dvc" */
&(nid_objs[217]),/* "id-smime-aa-encapContentType" */
&(nid_objs[222]),/* "id-smime-aa-encrypKeyPref" */
&(nid_objs[220]),/* "id-smime-aa-equivalentLabels" */
&(nid_objs[232]),/* "id-smime-aa-ets-CertificateRefs" */
&(nid_objs[233]),/* "id-smime-aa-ets-RevocationRefs" */
&(nid_objs[238]),/* "id-smime-aa-ets-archiveTimeStamp" */
&(nid_objs[237]),/* "id-smime-aa-ets-certCRLTimestamp" */
&(nid_objs[234]),/* "id-smime-aa-ets-certValues" */
&(nid_objs[227]),/* "id-smime-aa-ets-commitmentType" */
&(nid_objs[231]),/* "id-smime-aa-ets-contentTimestamp" */
&(nid_objs[236]),/* "id-smime-aa-ets-escTimeStamp" */
&(nid_objs[230]),/* "id-smime-aa-ets-otherSigCert" */
&(nid_objs[235]),/* "id-smime-aa-ets-revocationValues" */
&(nid_objs[226]),/* "id-smime-aa-ets-sigPolicyId" */
&(nid_objs[229]),/* "id-smime-aa-ets-signerAttr" */
&(nid_objs[228]),/* "id-smime-aa-ets-signerLocation" */
&(nid_objs[219]),/* "id-smime-aa-macValue" */
&(nid_objs[214]),/* "id-smime-aa-mlExpandHistory" */
&(nid_objs[216]),/* "id-smime-aa-msgSigDigest" */
&(nid_objs[212]),/* "id-smime-aa-receiptRequest" */
&(nid_objs[213]),/* "id-smime-aa-securityLabel" */
&(nid_objs[239]),/* "id-smime-aa-signatureType" */
&(nid_objs[223]),/* "id-smime-aa-signingCertificate" */
&(nid_objs[224]),/* "id-smime-aa-smimeEncryptCerts" */
&(nid_objs[225]),/* "id-smime-aa-timeStampToken" */
&(nid_objs[192]),/* "id-smime-alg" */
&(nid_objs[243]),/* "id-smime-alg-3DESwrap" */
&(nid_objs[246]),/* "id-smime-alg-CMS3DESwrap" */
&(nid_objs[247]),/* "id-smime-alg-CMSRC2wrap" */
&(nid_objs[245]),/* "id-smime-alg-ESDH" */
&(nid_objs[241]),/* "id-smime-alg-ESDHwith3DES" */
&(nid_objs[242]),/* "id-smime-alg-ESDHwithRC2" */
&(nid_objs[244]),/* "id-smime-alg-RC2wrap" */
&(nid_objs[193]),/* "id-smime-cd" */
&(nid_objs[248]),/* "id-smime-cd-ldap" */
&(nid_objs[190]),/* "id-smime-ct" */
&(nid_objs[210]),/* "id-smime-ct-DVCSRequestData" */
&(nid_objs[211]),/* "id-smime-ct-DVCSResponseData" */
&(nid_objs[208]),/* "id-smime-ct-TDTInfo" */
&(nid_objs[207]),/* "id-smime-ct-TSTInfo" */
&(nid_objs[205]),/* "id-smime-ct-authData" */
&(nid_objs[786]),/* "id-smime-ct-compressedData" */
&(nid_objs[209]),/* "id-smime-ct-contentInfo" */
&(nid_objs[206]),/* "id-smime-ct-publishCert" */
&(nid_objs[204]),/* "id-smime-ct-receipt" */
&(nid_objs[195]),/* "id-smime-cti" */
&(nid_objs[255]),/* "id-smime-cti-ets-proofOfApproval" */
&(nid_objs[256]),/* "id-smime-cti-ets-proofOfCreation" */
&(nid_objs[253]),/* "id-smime-cti-ets-proofOfDelivery" */
&(nid_objs[251]),/* "id-smime-cti-ets-proofOfOrigin" */
&(nid_objs[252]),/* "id-smime-cti-ets-proofOfReceipt" */
&(nid_objs[254]),/* "id-smime-cti-ets-proofOfSender" */
&(nid_objs[189]),/* "id-smime-mod" */
&(nid_objs[196]),/* "id-smime-mod-cms" */
&(nid_objs[197]),/* "id-smime-mod-ess" */
&(nid_objs[202]),/* "id-smime-mod-ets-eSigPolicy-88" */
&(nid_objs[203]),/* "id-smime-mod-ets-eSigPolicy-97" */
&(nid_objs[200]),/* "id-smime-mod-ets-eSignature-88" */
&(nid_objs[201]),/* "id-smime-mod-ets-eSignature-97" */
&(nid_objs[199]),/* "id-smime-mod-msg-v3" */
&(nid_objs[198]),/* "id-smime-mod-oid" */
&(nid_objs[194]),/* "id-smime-spq" */
&(nid_objs[250]),/* "id-smime-spq-ets-sqt-unotice" */
&(nid_objs[249]),/* "id-smime-spq-ets-sqt-uri" */
&(nid_objs[34]),/* "idea-cbc" */
&(nid_objs[35]),/* "idea-cfb" */
&(nid_objs[36]),/* "idea-ecb" */
&(nid_objs[46]),/* "idea-ofb" */
&(nid_objs[676]),/* "identified-organization" */
&(nid_objs[461]),/* "info" */
&(nid_objs[101]),/* "initials" */
&(nid_objs[749]),/* "ipsec3" */
&(nid_objs[750]),/* "ipsec4" */
&(nid_objs[181]),/* "iso" */
&(nid_objs[623]),/* "issuer capabilities" */
&(nid_objs[645]),/* "itu-t" */
&(nid_objs[492]),/* "janetMailbox" */
&(nid_objs[646]),/* "joint-iso-itu-t" */
&(nid_objs[150]),/* "keyBag" */
&(nid_objs[773]),/* "kisa" */
&(nid_objs[477]),/* "lastModifiedBy" */
&(nid_objs[476]),/* "lastModifiedTime" */
&(nid_objs[157]),/* "localKeyID" */
&(nid_objs[15]),/* "localityName" */
&(nid_objs[480]),/* "mXRecord" */
&(nid_objs[493]),/* "mailPreferenceOption" */
&(nid_objs[467]),/* "manager" */
&(nid_objs[ 3]),/* "md2" */
&(nid_objs[ 7]),/* "md2WithRSAEncryption" */
&(nid_objs[257]),/* "md4" */
&(nid_objs[396]),/* "md4WithRSAEncryption" */
&(nid_objs[ 4]),/* "md5" */
&(nid_objs[114]),/* "md5-sha1" */
&(nid_objs[104]),/* "md5WithRSA" */
&(nid_objs[ 8]),/* "md5WithRSAEncryption" */
&(nid_objs[95]),/* "mdc2" */
&(nid_objs[96]),/* "mdc2WithRSA" */
&(nid_objs[602]),/* "merchant initiated auth" */
&(nid_objs[514]),/* "message extensions" */
&(nid_objs[51]),/* "messageDigest" */
&(nid_objs[506]),/* "mime-mhs-bodies" */
&(nid_objs[505]),/* "mime-mhs-headings" */
&(nid_objs[488]),/* "mobileTelephoneNumber" */
&(nid_objs[481]),/* "nSRecord" */
&(nid_objs[173]),/* "name" */
&(nid_objs[681]),/* "onBasis" */
&(nid_objs[379]),/* "org" */
&(nid_objs[17]),/* "organizationName" */
&(nid_objs[491]),/* "organizationalStatus" */
&(nid_objs[18]),/* "organizationalUnitName" */
&(nid_objs[475]),/* "otherMailbox" */
&(nid_objs[489]),/* "pagerTelephoneNumber" */
&(nid_objs[782]),/* "password based MAC" */
&(nid_objs[374]),/* "path" */
&(nid_objs[621]),/* "payment gateway capabilities" */
&(nid_objs[ 9]),/* "pbeWithMD2AndDES-CBC" */
&(nid_objs[168]),/* "pbeWithMD2AndRC2-CBC" */
&(nid_objs[112]),/* "pbeWithMD5AndCast5CBC" */
&(nid_objs[10]),/* "pbeWithMD5AndDES-CBC" */
&(nid_objs[169]),/* "pbeWithMD5AndRC2-CBC" */
&(nid_objs[148]),/* "pbeWithSHA1And128BitRC2-CBC" */
&(nid_objs[144]),/* "pbeWithSHA1And128BitRC4" */
&(nid_objs[147]),/* "pbeWithSHA1And2-KeyTripleDES-CBC" */
&(nid_objs[146]),/* "pbeWithSHA1And3-KeyTripleDES-CBC" */
&(nid_objs[149]),/* "pbeWithSHA1And40BitRC2-CBC" */
&(nid_objs[145]),/* "pbeWithSHA1And40BitRC4" */
&(nid_objs[170]),/* "pbeWithSHA1AndDES-CBC" */
&(nid_objs[68]),/* "pbeWithSHA1AndRC2-CBC" */
&(nid_objs[499]),/* "personalSignature" */
&(nid_objs[487]),/* "personalTitle" */
&(nid_objs[464]),/* "photo" */
&(nid_objs[437]),/* "pilot" */
&(nid_objs[439]),/* "pilotAttributeSyntax" */
&(nid_objs[438]),/* "pilotAttributeType" */
&(nid_objs[479]),/* "pilotAttributeType27" */
&(nid_objs[456]),/* "pilotDSA" */
&(nid_objs[441]),/* "pilotGroups" */
&(nid_objs[444]),/* "pilotObject" */
&(nid_objs[440]),/* "pilotObjectClass" */
&(nid_objs[455]),/* "pilotOrganization" */
&(nid_objs[445]),/* "pilotPerson" */
&(nid_objs[186]),/* "pkcs1" */
&(nid_objs[27]),/* "pkcs3" */
&(nid_objs[187]),/* "pkcs5" */
&(nid_objs[20]),/* "pkcs7" */
&(nid_objs[21]),/* "pkcs7-data" */
&(nid_objs[25]),/* "pkcs7-digestData" */
&(nid_objs[26]),/* "pkcs7-encryptedData" */
&(nid_objs[23]),/* "pkcs7-envelopedData" */
&(nid_objs[24]),/* "pkcs7-signedAndEnvelopedData" */
&(nid_objs[22]),/* "pkcs7-signedData" */
&(nid_objs[151]),/* "pkcs8ShroudedKeyBag" */
&(nid_objs[47]),/* "pkcs9" */
&(nid_objs[661]),/* "postalCode" */
&(nid_objs[683]),/* "ppBasis" */
&(nid_objs[406]),/* "prime-field" */
&(nid_objs[409]),/* "prime192v1" */
&(nid_objs[410]),/* "prime192v2" */
&(nid_objs[411]),/* "prime192v3" */
&(nid_objs[412]),/* "prime239v1" */
&(nid_objs[413]),/* "prime239v2" */
&(nid_objs[414]),/* "prime239v3" */
&(nid_objs[415]),/* "prime256v1" */
&(nid_objs[510]),/* "pseudonym" */
&(nid_objs[435]),/* "pss" */
&(nid_objs[286]),/* "qcStatements" */
&(nid_objs[457]),/* "qualityLabelledData" */
&(nid_objs[450]),/* "rFC822localPart" */
&(nid_objs[98]),/* "rc2-40-cbc" */
&(nid_objs[166]),/* "rc2-64-cbc" */
&(nid_objs[37]),/* "rc2-cbc" */
&(nid_objs[39]),/* "rc2-cfb" */
&(nid_objs[38]),/* "rc2-ecb" */
&(nid_objs[40]),/* "rc2-ofb" */
&(nid_objs[ 5]),/* "rc4" */
&(nid_objs[97]),/* "rc4-40" */
&(nid_objs[120]),/* "rc5-cbc" */
&(nid_objs[122]),/* "rc5-cfb" */
&(nid_objs[121]),/* "rc5-ecb" */
&(nid_objs[123]),/* "rc5-ofb" */
&(nid_objs[460]),/* "rfc822Mailbox" */
&(nid_objs[117]),/* "ripemd160" */
&(nid_objs[119]),/* "ripemd160WithRSA" */
&(nid_objs[400]),/* "role" */
&(nid_objs[448]),/* "room" */
&(nid_objs[463]),/* "roomNumber" */
&(nid_objs[19]),/* "rsa" */
&(nid_objs[ 6]),/* "rsaEncryption" */
&(nid_objs[644]),/* "rsaOAEPEncryptionSET" */
&(nid_objs[377]),/* "rsaSignature" */
&(nid_objs[124]),/* "run length compression" */
&(nid_objs[482]),/* "sOARecord" */
&(nid_objs[155]),/* "safeContentsBag" */
&(nid_objs[291]),/* "sbgp-autonomousSysNum" */
&(nid_objs[290]),/* "sbgp-ipAddrBlock" */
&(nid_objs[292]),/* "sbgp-routerIdentifier" */
&(nid_objs[159]),/* "sdsiCertificate" */
&(nid_objs[704]),/* "secp112r1" */
&(nid_objs[705]),/* "secp112r2" */
&(nid_objs[706]),/* "secp128r1" */
&(nid_objs[707]),/* "secp128r2" */
&(nid_objs[708]),/* "secp160k1" */
&(nid_objs[709]),/* "secp160r1" */
&(nid_objs[710]),/* "secp160r2" */
&(nid_objs[711]),/* "secp192k1" */
&(nid_objs[712]),/* "secp224k1" */
&(nid_objs[713]),/* "secp224r1" */
&(nid_objs[714]),/* "secp256k1" */
&(nid_objs[715]),/* "secp384r1" */
&(nid_objs[716]),/* "secp521r1" */
&(nid_objs[154]),/* "secretBag" */
&(nid_objs[474]),/* "secretary" */
&(nid_objs[717]),/* "sect113r1" */
&(nid_objs[718]),/* "sect113r2" */
&(nid_objs[719]),/* "sect131r1" */
&(nid_objs[720]),/* "sect131r2" */
&(nid_objs[721]),/* "sect163k1" */
&(nid_objs[722]),/* "sect163r1" */
&(nid_objs[723]),/* "sect163r2" */
&(nid_objs[724]),/* "sect193r1" */
&(nid_objs[725]),/* "sect193r2" */
&(nid_objs[726]),/* "sect233k1" */
&(nid_objs[727]),/* "sect233r1" */
&(nid_objs[728]),/* "sect239k1" */
&(nid_objs[729]),/* "sect283k1" */
&(nid_objs[730]),/* "sect283r1" */
&(nid_objs[731]),/* "sect409k1" */
&(nid_objs[732]),/* "sect409r1" */
&(nid_objs[733]),/* "sect571k1" */
&(nid_objs[734]),/* "sect571r1" */
&(nid_objs[635]),/* "secure device signature" */
&(nid_objs[777]),/* "seed-cbc" */
&(nid_objs[779]),/* "seed-cfb" */
&(nid_objs[776]),/* "seed-ecb" */
&(nid_objs[778]),/* "seed-ofb" */
&(nid_objs[105]),/* "serialNumber" */
&(nid_objs[625]),/* "set-addPolicy" */
&(nid_objs[515]),/* "set-attr" */
&(nid_objs[518]),/* "set-brand" */
&(nid_objs[638]),/* "set-brand-AmericanExpress" */
&(nid_objs[637]),/* "set-brand-Diners" */
&(nid_objs[636]),/* "set-brand-IATA-ATA" */
&(nid_objs[639]),/* "set-brand-JCB" */
&(nid_objs[641]),/* "set-brand-MasterCard" */
&(nid_objs[642]),/* "set-brand-Novus" */
&(nid_objs[640]),/* "set-brand-Visa" */
&(nid_objs[516]),/* "set-policy" */
&(nid_objs[607]),/* "set-policy-root" */
&(nid_objs[624]),/* "set-rootKeyThumb" */
&(nid_objs[620]),/* "setAttr-Cert" */
&(nid_objs[628]),/* "setAttr-IssCap-CVM" */
&(nid_objs[630]),/* "setAttr-IssCap-Sig" */
&(nid_objs[629]),/* "setAttr-IssCap-T2" */
&(nid_objs[627]),/* "setAttr-Token-B0Prime" */
&(nid_objs[626]),/* "setAttr-Token-EMV" */
&(nid_objs[622]),/* "setAttr-TokenType" */
&(nid_objs[619]),/* "setCext-IssuerCapabilities" */
&(nid_objs[615]),/* "setCext-PGWYcapabilities" */
&(nid_objs[616]),/* "setCext-TokenIdentifier" */
&(nid_objs[618]),/* "setCext-TokenType" */
&(nid_objs[617]),/* "setCext-Track2Data" */
&(nid_objs[611]),/* "setCext-cCertRequired" */
&(nid_objs[609]),/* "setCext-certType" */
&(nid_objs[608]),/* "setCext-hashedRoot" */
&(nid_objs[610]),/* "setCext-merchData" */
&(nid_objs[613]),/* "setCext-setExt" */
&(nid_objs[614]),/* "setCext-setQualf" */
&(nid_objs[612]),/* "setCext-tunneling" */
&(nid_objs[540]),/* "setct-AcqCardCodeMsg" */
&(nid_objs[576]),/* "setct-AcqCardCodeMsgTBE" */
&(nid_objs[570]),/* "setct-AuthReqTBE" */
&(nid_objs[534]),/* "setct-AuthReqTBS" */
&(nid_objs[527]),/* "setct-AuthResBaggage" */
&(nid_objs[571]),/* "setct-AuthResTBE" */
&(nid_objs[572]),/* "setct-AuthResTBEX" */
&(nid_objs[535]),/* "setct-AuthResTBS" */
&(nid_objs[536]),/* "setct-AuthResTBSX" */
&(nid_objs[528]),/* "setct-AuthRevReqBaggage" */
&(nid_objs[577]),/* "setct-AuthRevReqTBE" */
&(nid_objs[541]),/* "setct-AuthRevReqTBS" */
&(nid_objs[529]),/* "setct-AuthRevResBaggage" */
&(nid_objs[542]),/* "setct-AuthRevResData" */
&(nid_objs[578]),/* "setct-AuthRevResTBE" */
&(nid_objs[579]),/* "setct-AuthRevResTBEB" */
&(nid_objs[543]),/* "setct-AuthRevResTBS" */
&(nid_objs[573]),/* "setct-AuthTokenTBE" */
&(nid_objs[537]),/* "setct-AuthTokenTBS" */
&(nid_objs[600]),/* "setct-BCIDistributionTBS" */
&(nid_objs[558]),/* "setct-BatchAdminReqData" */
&(nid_objs[592]),/* "setct-BatchAdminReqTBE" */
&(nid_objs[559]),/* "setct-BatchAdminResData" */
&(nid_objs[593]),/* "setct-BatchAdminResTBE" */
&(nid_objs[599]),/* "setct-CRLNotificationResTBS" */
&(nid_objs[598]),/* "setct-CRLNotificationTBS" */
&(nid_objs[580]),/* "setct-CapReqTBE" */
&(nid_objs[581]),/* "setct-CapReqTBEX" */
&(nid_objs[544]),/* "setct-CapReqTBS" */
&(nid_objs[545]),/* "setct-CapReqTBSX" */
&(nid_objs[546]),/* "setct-CapResData" */
&(nid_objs[582]),/* "setct-CapResTBE" */
&(nid_objs[583]),/* "setct-CapRevReqTBE" */
&(nid_objs[584]),/* "setct-CapRevReqTBEX" */
&(nid_objs[547]),/* "setct-CapRevReqTBS" */
&(nid_objs[548]),/* "setct-CapRevReqTBSX" */
&(nid_objs[549]),/* "setct-CapRevResData" */
&(nid_objs[585]),/* "setct-CapRevResTBE" */
&(nid_objs[538]),/* "setct-CapTokenData" */
&(nid_objs[530]),/* "setct-CapTokenSeq" */
&(nid_objs[574]),/* "setct-CapTokenTBE" */
&(nid_objs[575]),/* "setct-CapTokenTBEX" */
&(nid_objs[539]),/* "setct-CapTokenTBS" */
&(nid_objs[560]),/* "setct-CardCInitResTBS" */
&(nid_objs[566]),/* "setct-CertInqReqTBS" */
&(nid_objs[563]),/* "setct-CertReqData" */
&(nid_objs[595]),/* "setct-CertReqTBE" */
&(nid_objs[596]),/* "setct-CertReqTBEX" */
&(nid_objs[564]),/* "setct-CertReqTBS" */
&(nid_objs[565]),/* "setct-CertResData" */
&(nid_objs[597]),/* "setct-CertResTBE" */
&(nid_objs[586]),/* "setct-CredReqTBE" */
&(nid_objs[587]),/* "setct-CredReqTBEX" */
&(nid_objs[550]),/* "setct-CredReqTBS" */
&(nid_objs[551]),/* "setct-CredReqTBSX" */
&(nid_objs[552]),/* "setct-CredResData" */
&(nid_objs[588]),/* "setct-CredResTBE" */
&(nid_objs[589]),/* "setct-CredRevReqTBE" */
&(nid_objs[590]),/* "setct-CredRevReqTBEX" */
&(nid_objs[553]),/* "setct-CredRevReqTBS" */
&(nid_objs[554]),/* "setct-CredRevReqTBSX" */
&(nid_objs[555]),/* "setct-CredRevResData" */
&(nid_objs[591]),/* "setct-CredRevResTBE" */
&(nid_objs[567]),/* "setct-ErrorTBS" */
&(nid_objs[526]),/* "setct-HODInput" */
&(nid_objs[561]),/* "setct-MeAqCInitResTBS" */
&(nid_objs[522]),/* "setct-OIData" */
&(nid_objs[519]),/* "setct-PANData" */
&(nid_objs[521]),/* "setct-PANOnly" */
&(nid_objs[520]),/* "setct-PANToken" */
&(nid_objs[556]),/* "setct-PCertReqData" */
&(nid_objs[557]),/* "setct-PCertResTBS" */
&(nid_objs[523]),/* "setct-PI" */
&(nid_objs[532]),/* "setct-PI-TBS" */
&(nid_objs[524]),/* "setct-PIData" */
&(nid_objs[525]),/* "setct-PIDataUnsigned" */
&(nid_objs[568]),/* "setct-PIDualSignedTBE" */
&(nid_objs[569]),/* "setct-PIUnsignedTBE" */
&(nid_objs[531]),/* "setct-PInitResData" */
&(nid_objs[533]),/* "setct-PResData" */
&(nid_objs[594]),/* "setct-RegFormReqTBE" */
&(nid_objs[562]),/* "setct-RegFormResTBS" */
&(nid_objs[604]),/* "setext-pinAny" */
&(nid_objs[603]),/* "setext-pinSecure" */
&(nid_objs[605]),/* "setext-track2" */
&(nid_objs[41]),/* "sha" */
&(nid_objs[64]),/* "sha1" */
&(nid_objs[115]),/* "sha1WithRSA" */
&(nid_objs[65]),/* "sha1WithRSAEncryption" */
&(nid_objs[675]),/* "sha224" */
&(nid_objs[671]),/* "sha224WithRSAEncryption" */
&(nid_objs[672]),/* "sha256" */
&(nid_objs[668]),/* "sha256WithRSAEncryption" */
&(nid_objs[673]),/* "sha384" */
&(nid_objs[669]),/* "sha384WithRSAEncryption" */
&(nid_objs[674]),/* "sha512" */
&(nid_objs[670]),/* "sha512WithRSAEncryption" */
&(nid_objs[42]),/* "shaWithRSAEncryption" */
&(nid_objs[52]),/* "signingTime" */
&(nid_objs[454]),/* "simpleSecurityObject" */
&(nid_objs[496]),/* "singleLevelQuality" */
&(nid_objs[16]),/* "stateOrProvinceName" */
&(nid_objs[660]),/* "streetAddress" */
&(nid_objs[498]),/* "subtreeMaximumQuality" */
&(nid_objs[497]),/* "subtreeMinimumQuality" */
&(nid_objs[100]),/* "surname" */
&(nid_objs[459]),/* "textEncodedORAddress" */
&(nid_objs[293]),/* "textNotice" */
&(nid_objs[106]),/* "title" */
&(nid_objs[682]),/* "tpBasis" */
&(nid_objs[436]),/* "ucl" */
&(nid_objs[ 0]),/* "undefined" */
&(nid_objs[55]),/* "unstructuredAddress" */
&(nid_objs[49]),/* "unstructuredName" */
&(nid_objs[465]),/* "userClass" */
&(nid_objs[458]),/* "userId" */
&(nid_objs[373]),/* "valid" */
&(nid_objs[678]),/* "wap" */
&(nid_objs[679]),/* "wap-wsg" */
&(nid_objs[735]),/* "wap-wsg-idm-ecid-wtls1" */
&(nid_objs[743]),/* "wap-wsg-idm-ecid-wtls10" */
&(nid_objs[744]),/* "wap-wsg-idm-ecid-wtls11" */
&(nid_objs[745]),/* "wap-wsg-idm-ecid-wtls12" */
&(nid_objs[736]),/* "wap-wsg-idm-ecid-wtls3" */
&(nid_objs[737]),/* "wap-wsg-idm-ecid-wtls4" */
&(nid_objs[738]),/* "wap-wsg-idm-ecid-wtls5" */
&(nid_objs[739]),/* "wap-wsg-idm-ecid-wtls6" */
&(nid_objs[740]),/* "wap-wsg-idm-ecid-wtls7" */
&(nid_objs[741]),/* "wap-wsg-idm-ecid-wtls8" */
&(nid_objs[742]),/* "wap-wsg-idm-ecid-wtls9" */
&(nid_objs[804]),/* "whirlpool" */
&(nid_objs[503]),/* "x500UniqueIdentifier" */
&(nid_objs[158]),/* "x509Certificate" */
&(nid_objs[160]),/* "x509Crl" */
&(nid_objs[125]),/* "zlib compression" */
};

static ASN1_OBJECT *obj_objs[NUM_OBJ]={
&(nid_objs[ 0]),/* OBJ_undef                        0 */
&(nid_objs[393]),/* OBJ_joint_iso_ccitt              OBJ_joint_iso_itu_t */
&(nid_objs[404]),/* OBJ_ccitt                        OBJ_itu_t */
&(nid_objs[645]),/* OBJ_itu_t                        0 */
&(nid_objs[434]),/* OBJ_data                         0 9 */
&(nid_objs[181]),/* OBJ_iso                          1 */
&(nid_objs[182]),/* OBJ_member_body                  1 2 */
&(nid_objs[379]),/* OBJ_org                          1 3 */
&(nid_objs[676]),/* OBJ_identified_organization      1 3 */
&(nid_objs[646]),/* OBJ_joint_iso_itu_t              2 */
&(nid_objs[11]),/* OBJ_X500                         2 5 */
&(nid_objs[647]),/* OBJ_international_organizations  2 23 */
&(nid_objs[380]),/* OBJ_dod                          1 3 6 */
&(nid_objs[12]),/* OBJ_X509                         2 5 4 */
&(nid_objs[378]),/* OBJ_X500algorithms               2 5 8 */
&(nid_objs[81]),/* OBJ_id_ce                        2 5 29 */
&(nid_objs[512]),/* OBJ_id_set                       2 23 42 */
&(nid_objs[678]),/* OBJ_wap                          2 23 43 */
&(nid_objs[435]),/* OBJ_pss                          0 9 2342 */
&(nid_objs[183]),/* OBJ_ISO_US                       1 2 840 */
&(nid_objs[381]),/* OBJ_iana                         1 3 6 1 */
&(nid_objs[677]),/* OBJ_certicom_arc                 1 3 132 */
&(nid_objs[394]),/* OBJ_selected_attribute_types     2 5 1 5 */
&(nid_objs[13]),/* OBJ_commonName                   2 5 4 3 */
&(nid_objs[100]),/* OBJ_surname                      2 5 4 4 */
&(nid_objs[105]),/* OBJ_serialNumber                 2 5 4 5 */
&(nid_objs[14]),/* OBJ_countryName                  2 5 4 6 */
&(nid_objs[15]),/* OBJ_localityName                 2 5 4 7 */
&(nid_objs[16]),/* OBJ_stateOrProvinceName          2 5 4 8 */
&(nid_objs[660]),/* OBJ_streetAddress                2 5 4 9 */
&(nid_objs[17]),/* OBJ_organizationName             2 5 4 10 */
&(nid_objs[18]),/* OBJ_organizationalUnitName       2 5 4 11 */
&(nid_objs[106]),/* OBJ_title                        2 5 4 12 */
&(nid_objs[107]),/* OBJ_description                  2 5 4 13 */
&(nid_objs[661]),/* OBJ_postalCode                   2 5 4 17 */
&(nid_objs[173]),/* OBJ_name                         2 5 4 41 */
&(nid_objs[99]),/* OBJ_givenName                    2 5 4 42 */
&(nid_objs[101]),/* OBJ_initials                     2 5 4 43 */
&(nid_objs[509]),/* OBJ_generationQualifier          2 5 4 44 */
&(nid_objs[503]),/* OBJ_x500UniqueIdentifier         2 5 4 45 */
&(nid_objs[174]),/* OBJ_dnQualifier                  2 5 4 46 */
&(nid_objs[510]),/* OBJ_pseudonym                    2 5 4 65 */
&(nid_objs[400]),/* OBJ_role                         2 5 4 72 */
&(nid_objs[769]),/* OBJ_subject_directory_attributes 2 5 29 9 */
&(nid_objs[82]),/* OBJ_subject_key_identifier       2 5 29 14 */
&(nid_objs[83]),/* OBJ_key_usage                    2 5 29 15 */
&(nid_objs[84]),/* OBJ_private_key_usage_period     2 5 29 16 */
&(nid_objs[85]),/* OBJ_subject_alt_name             2 5 29 17 */
&(nid_objs[86]),/* OBJ_issuer_alt_name              2 5 29 18 */
&(nid_objs[87]),/* OBJ_basic_constraints            2 5 29 19 */
&(nid_objs[88]),/* OBJ_crl_number                   2 5 29 20 */
&(nid_objs[141]),/* OBJ_crl_reason                   2 5 29 21 */
&(nid_objs[430]),/* OBJ_hold_instruction_code        2 5 29 23 */
&(nid_objs[142]),/* OBJ_invalidity_date              2 5 29 24 */
&(nid_objs[140]),/* OBJ_delta_crl                    2 5 29 27 */
&(nid_objs[770]),/* OBJ_issuing_distribution_point   2 5 29 28 */
&(nid_objs[771]),/* OBJ_certificate_issuer           2 5 29 29 */
&(nid_objs[666]),/* OBJ_name_constraints             2 5 29 30 */
&(nid_objs[103]),/* OBJ_crl_distribution_points      2 5 29 31 */
&(nid_objs[89]),/* OBJ_certificate_policies         2 5 29 32 */
&(nid_objs[747]),/* OBJ_policy_mappings              2 5 29 33 */
&(nid_objs[90]),/* OBJ_authority_key_identifier     2 5 29 35 */
&(nid_objs[401]),/* OBJ_policy_constraints           2 5 29 36 */
&(nid_objs[126]),/* OBJ_ext_key_usage                2 5 29 37 */
&(nid_objs[748]),/* OBJ_inhibit_any_policy           2 5 29 54 */
&(nid_objs[402]),/* OBJ_target_information           2 5 29 55 */
&(nid_objs[403]),/* OBJ_no_rev_avail                 2 5 29 56 */
&(nid_objs[513]),/* OBJ_set_ctype                    2 23 42 0 */
&(nid_objs[514]),/* OBJ_set_msgExt                   2 23 42 1 */
&(nid_objs[515]),/* OBJ_set_attr                     2 23 42 3 */
&(nid_objs[516]),/* OBJ_set_policy                   2 23 42 5 */
&(nid_objs[517]),/* OBJ_set_certExt                  2 23 42 7 */
&(nid_objs[518]),/* OBJ_set_brand                    2 23 42 8 */
&(nid_objs[679]),/* OBJ_wap_wsg                      2 23 43 13 */
&(nid_objs[382]),/* OBJ_Directory                    1 3 6 1 1 */
&(nid_objs[383]),/* OBJ_Management                   1 3 6 1 2 */
&(nid_objs[384]),/* OBJ_Experimental                 1 3 6 1 3 */
&(nid_objs[385]),/* OBJ_Private                      1 3 6 1 4 */
&(nid_objs[386]),/* OBJ_Security                     1 3 6 1 5 */
&(nid_objs[387]),/* OBJ_SNMPv2                       1 3 6 1 6 */
&(nid_objs[388]),/* OBJ_Mail                         1 3 6 1 7 */
&(nid_objs[376]),/* OBJ_algorithm                    1 3 14 3 2 */
&(nid_objs[395]),/* OBJ_clearance                    2 5 1 5 55 */
&(nid_objs[19]),/* OBJ_rsa                          2 5 8 1 1 */
&(nid_objs[96]),/* OBJ_mdc2WithRSA                  2 5 8 3 100 */
&(nid_objs[95]),/* OBJ_mdc2                         2 5 8 3 101 */
&(nid_objs[746]),/* OBJ_any_policy                   2 5 29 32 0 */
&(nid_objs[519]),/* OBJ_setct_PANData                2 23 42 0 0 */
&(nid_objs[520]),/* OBJ_setct_PANToken               2 23 42 0 1 */
&(nid_objs[521]),/* OBJ_setct_PANOnly                2 23 42 0 2 */
&(nid_objs[522]),/* OBJ_setct_OIData                 2 23 42 0 3 */
&(nid_objs[523]),/* OBJ_setct_PI                     2 23 42 0 4 */
&(nid_objs[524]),/* OBJ_setct_PIData                 2 23 42 0 5 */
&(nid_objs[525]),/* OBJ_setct_PIDataUnsigned         2 23 42 0 6 */
&(nid_objs[526]),/* OBJ_setct_HODInput               2 23 42 0 7 */
&(nid_objs[527]),/* OBJ_setct_AuthResBaggage         2 23 42 0 8 */
&(nid_objs[528]),/* OBJ_setct_AuthRevReqBaggage      2 23 42 0 9 */
&(nid_objs[529]),/* OBJ_setct_AuthRevResBaggage      2 23 42 0 10 */
&(nid_objs[530]),/* OBJ_setct_CapTokenSeq            2 23 42 0 11 */
&(nid_objs[531]),/* OBJ_setct_PInitResData           2 23 42 0 12 */
&(nid_objs[532]),/* OBJ_setct_PI_TBS                 2 23 42 0 13 */
&(nid_objs[533]),/* OBJ_setct_PResData               2 23 42 0 14 */
&(nid_objs[534]),/* OBJ_setct_AuthReqTBS             2 23 42 0 16 */
&(nid_objs[535]),/* OBJ_setct_AuthResTBS             2 23 42 0 17 */
&(nid_objs[536]),/* OBJ_setct_AuthResTBSX            2 23 42 0 18 */
&(nid_objs[537]),/* OBJ_setct_AuthTokenTBS           2 23 42 0 19 */
&(nid_objs[538]),/* OBJ_setct_CapTokenData           2 23 42 0 20 */
&(nid_objs[539]),/* OBJ_setct_CapTokenTBS            2 23 42 0 21 */
&(nid_objs[540]),/* OBJ_setct_AcqCardCodeMsg         2 23 42 0 22 */
&(nid_objs[541]),/* OBJ_setct_AuthRevReqTBS          2 23 42 0 23 */
&(nid_objs[542]),/* OBJ_setct_AuthRevResData         2 23 42 0 24 */
&(nid_objs[543]),/* OBJ_setct_AuthRevResTBS          2 23 42 0 25 */
&(nid_objs[544]),/* OBJ_setct_CapReqTBS              2 23 42 0 26 */
&(nid_objs[545]),/* OBJ_setct_CapReqTBSX             2 23 42 0 27 */
&(nid_objs[546]),/* OBJ_setct_CapResData             2 23 42 0 28 */
&(nid_objs[547]),/* OBJ_setct_CapRevReqTBS           2 23 42 0 29 */
&(nid_objs[548]),/* OBJ_setct_CapRevReqTBSX          2 23 42 0 30 */
&(nid_objs[549]),/* OBJ_setct_CapRevResData          2 23 42 0 31 */
&(nid_objs[550]),/* OBJ_setct_CredReqTBS             2 23 42 0 32 */
&(nid_objs[551]),/* OBJ_setct_CredReqTBSX            2 23 42 0 33 */
&(nid_objs[552]),/* OBJ_setct_CredResData            2 23 42 0 34 */
&(nid_objs[553]),/* OBJ_setct_CredRevReqTBS          2 23 42 0 35 */
&(nid_objs[554]),/* OBJ_setct_CredRevReqTBSX         2 23 42 0 36 */
&(nid_objs[555]),/* OBJ_setct_CredRevResData         2 23 42 0 37 */
&(nid_objs[556]),/* OBJ_setct_PCertReqData           2 23 42 0 38 */
&(nid_objs[557]),/* OBJ_setct_PCertResTBS            2 23 42 0 39 */
&(nid_objs[558]),/* OBJ_setct_BatchAdminReqData      2 23 42 0 40 */
&(nid_objs[559]),/* OBJ_setct_BatchAdminResData      2 23 42 0 41 */
&(nid_objs[560]),/* OBJ_setct_CardCInitResTBS        2 23 42 0 42 */
&(nid_objs[561]),/* OBJ_setct_MeAqCInitResTBS        2 23 42 0 43 */
&(nid_objs[562]),/* OBJ_setct_RegFormResTBS          2 23 42 0 44 */
&(nid_objs[563]),/* OBJ_setct_CertReqData            2 23 42 0 45 */
&(nid_objs[564]),/* OBJ_setct_CertReqTBS             2 23 42 0 46 */
&(nid_objs[565]),/* OBJ_setct_CertResData            2 23 42 0 47 */
&(nid_objs[566]),/* OBJ_setct_CertInqReqTBS          2 23 42 0 48 */
&(nid_objs[567]),/* OBJ_setct_ErrorTBS               2 23 42 0 49 */
&(nid_objs[568]),/* OBJ_setct_PIDualSignedTBE        2 23 42 0 50 */
&(nid_objs[569]),/* OBJ_setct_PIUnsignedTBE          2 23 42 0 51 */
&(nid_objs[570]),/* OBJ_setct_AuthReqTBE             2 23 42 0 52 */
&(nid_objs[571]),/* OBJ_setct_AuthResTBE             2 23 42 0 53 */
&(nid_objs[572]),/* OBJ_setct_AuthResTBEX            2 23 42 0 54 */
&(nid_objs[573]),/* OBJ_setct_AuthTokenTBE           2 23 42 0 55 */
&(nid_objs[574]),/* OBJ_setct_CapTokenTBE            2 23 42 0 56 */
&(nid_objs[575]),/* OBJ_setct_CapTokenTBEX           2 23 42 0 57 */
&(nid_objs[576]),/* OBJ_setct_AcqCardCodeMsgTBE      2 23 42 0 58 */
&(nid_objs[577]),/* OBJ_setct_AuthRevReqTBE          2 23 42 0 59 */
&(nid_objs[578]),/* OBJ_setct_AuthRevResTBE          2 23 42 0 60 */
&(nid_objs[579]),/* OBJ_setct_AuthRevResTBEB         2 23 42 0 61 */
&(nid_objs[580]),/* OBJ_setct_CapReqTBE              2 23 42 0 62 */
&(nid_objs[581]),/* OBJ_setct_CapReqTBEX             2 23 42 0 63 */
&(nid_objs[582]),/* OBJ_setct_CapResTBE              2 23 42 0 64 */
&(nid_objs[583]),/* OBJ_setct_CapRevReqTBE           2 23 42 0 65 */
&(nid_objs[584]),/* OBJ_setct_CapRevReqTBEX          2 23 42 0 66 */
&(nid_objs[585]),/* OBJ_setct_CapRevResTBE           2 23 42 0 67 */
&(nid_objs[586]),/* OBJ_setct_CredReqTBE             2 23 42 0 68 */
&(nid_objs[587]),/* OBJ_setct_CredReqTBEX            2 23 42 0 69 */
&(nid_objs[588]),/* OBJ_setct_CredResTBE             2 23 42 0 70 */
&(nid_objs[589]),/* OBJ_setct_CredRevReqTBE          2 23 42 0 71 */
&(nid_objs[590]),/* OBJ_setct_CredRevReqTBEX         2 23 42 0 72 */
&(nid_objs[591]),/* OBJ_setct_CredRevResTBE          2 23 42 0 73 */
&(nid_objs[592]),/* OBJ_setct_BatchAdminReqTBE       2 23 42 0 74 */
&(nid_objs[593]),/* OBJ_setct_BatchAdminResTBE       2 23 42 0 75 */
&(nid_objs[594]),/* OBJ_setct_RegFormReqTBE          2 23 42 0 76 */
&(nid_objs[595]),/* OBJ_setct_CertReqTBE             2 23 42 0 77 */
&(nid_objs[596]),/* OBJ_setct_CertReqTBEX            2 23 42 0 78 */
&(nid_objs[597]),/* OBJ_setct_CertResTBE             2 23 42 0 79 */
&(nid_objs[598]),/* OBJ_setct_CRLNotificationTBS     2 23 42 0 80 */
&(nid_objs[599]),/* OBJ_setct_CRLNotificationResTBS  2 23 42 0 81 */
&(nid_objs[600]),/* OBJ_setct_BCIDistributionTBS     2 23 42 0 82 */
&(nid_objs[601]),/* OBJ_setext_genCrypt              2 23 42 1 1 */
&(nid_objs[602]),/* OBJ_setext_miAuth                2 23 42 1 3 */
&(nid_objs[603]),/* OBJ_setext_pinSecure             2 23 42 1 4 */
&(nid_objs[604]),/* OBJ_setext_pinAny                2 23 42 1 5 */
&(nid_objs[605]),/* OBJ_setext_track2                2 23 42 1 7 */
&(nid_objs[606]),/* OBJ_setext_cv                    2 23 42 1 8 */
&(nid_objs[620]),/* OBJ_setAttr_Cert                 2 23 42 3 0 */
&(nid_objs[621]),/* OBJ_setAttr_PGWYcap              2 23 42 3 1 */
&(nid_objs[622]),/* OBJ_setAttr_TokenType            2 23 42 3 2 */
&(nid_objs[623]),/* OBJ_setAttr_IssCap               2 23 42 3 3 */
&(nid_objs[607]),/* OBJ_set_policy_root              2 23 42 5 0 */
&(nid_objs[608]),/* OBJ_setCext_hashedRoot           2 23 42 7 0 */
&(nid_objs[609]),/* OBJ_setCext_certType             2 23 42 7 1 */
&(nid_objs[610]),/* OBJ_setCext_merchData            2 23 42 7 2 */
&(nid_objs[611]),/* OBJ_setCext_cCertRequired        2 23 42 7 3 */
&(nid_objs[612]),/* OBJ_setCext_tunneling            2 23 42 7 4 */
&(nid_objs[613]),/* OBJ_setCext_setExt               2 23 42 7 5 */
&(nid_objs[614]),/* OBJ_setCext_setQualf             2 23 42 7 6 */
&(nid_objs[615]),/* OBJ_setCext_PGWYcapabilities     2 23 42 7 7 */
&(nid_objs[616]),/* OBJ_setCext_TokenIdentifier      2 23 42 7 8 */
&(nid_objs[617]),/* OBJ_setCext_Track2Data           2 23 42 7 9 */
&(nid_objs[618]),/* OBJ_setCext_TokenType            2 23 42 7 10 */
&(nid_objs[619]),/* OBJ_setCext_IssuerCapabilities   2 23 42 7 11 */
&(nid_objs[636]),/* OBJ_set_brand_IATA_ATA           2 23 42 8 1 */
&(nid_objs[640]),/* OBJ_set_brand_Visa               2 23 42 8 4 */
&(nid_objs[641]),/* OBJ_set_brand_MasterCard         2 23 42 8 5 */
&(nid_objs[637]),/* OBJ_set_brand_Diners             2 23 42 8 30 */
&(nid_objs[638]),/* OBJ_set_brand_AmericanExpress    2 23 42 8 34 */
&(nid_objs[639]),/* OBJ_set_brand_JCB                2 23 42 8 35 */
&(nid_objs[805]),/* OBJ_cryptopro                    1 2 643 2 2 */
&(nid_objs[806]),/* OBJ_cryptocom                    1 2 643 2 9 */
&(nid_objs[184]),/* OBJ_X9_57                        1 2 840 10040 */
&(nid_objs[405]),/* OBJ_ansi_X9_62                   1 2 840 10045 */
&(nid_objs[389]),/* OBJ_Enterprises                  1 3 6 1 4 1 */
&(nid_objs[504]),/* OBJ_mime_mhs                     1 3 6 1 7 1 */
&(nid_objs[104]),/* OBJ_md5WithRSA                   1 3 14 3 2 3 */
&(nid_objs[29]),/* OBJ_des_ecb                      1 3 14 3 2 6 */
&(nid_objs[31]),/* OBJ_des_cbc                      1 3 14 3 2 7 */
&(nid_objs[45]),/* OBJ_des_ofb64                    1 3 14 3 2 8 */
&(nid_objs[30]),/* OBJ_des_cfb64                    1 3 14 3 2 9 */
&(nid_objs[377]),/* OBJ_rsaSignature                 1 3 14 3 2 11 */
&(nid_objs[67]),/* OBJ_dsa_2                        1 3 14 3 2 12 */
&(nid_objs[66]),/* OBJ_dsaWithSHA                   1 3 14 3 2 13 */
&(nid_objs[42]),/* OBJ_shaWithRSAEncryption         1 3 14 3 2 15 */
&(nid_objs[32]),/* OBJ_des_ede_ecb                  1 3 14 3 2 17 */
&(nid_objs[41]),/* OBJ_sha                          1 3 14 3 2 18 */
&(nid_objs[64]),/* OBJ_sha1                         1 3 14 3 2 26 */
&(nid_objs[70]),/* OBJ_dsaWithSHA1_2                1 3 14 3 2 27 */
&(nid_objs[115]),/* OBJ_sha1WithRSA                  1 3 14 3 2 29 */
&(nid_objs[117]),/* OBJ_ripemd160                    1 3 36 3 2 1 */
&(nid_objs[143]),/* OBJ_sxnet                        1 3 101 1 4 1 */
&(nid_objs[721]),/* OBJ_sect163k1                    1 3 132 0 1 */
&(nid_objs[722]),/* OBJ_sect163r1                    1 3 132 0 2 */
&(nid_objs[728]),/* OBJ_sect239k1                    1 3 132 0 3 */
&(nid_objs[717]),/* OBJ_sect113r1                    1 3 132 0 4 */
&(nid_objs[718]),/* OBJ_sect113r2                    1 3 132 0 5 */
&(nid_objs[704]),/* OBJ_secp112r1                    1 3 132 0 6 */
&(nid_objs[705]),/* OBJ_secp112r2                    1 3 132 0 7 */
&(nid_objs[709]),/* OBJ_secp160r1                    1 3 132 0 8 */
&(nid_objs[708]),/* OBJ_secp160k1                    1 3 132 0 9 */
&(nid_objs[714]),/* OBJ_secp256k1                    1 3 132 0 10 */
&(nid_objs[723]),/* OBJ_sect163r2                    1 3 132 0 15 */
&(nid_objs[729]),/* OBJ_sect283k1                    1 3 132 0 16 */
&(nid_objs[730]),/* OBJ_sect283r1                    1 3 132 0 17 */
&(nid_objs[719]),/* OBJ_sect131r1                    1 3 132 0 22 */
&(nid_objs[720]),/* OBJ_sect131r2                    1 3 132 0 23 */
&(nid_objs[724]),/* OBJ_sect193r1                    1 3 132 0 24 */
&(nid_objs[725]),/* OBJ_sect193r2                    1 3 132 0 25 */
&(nid_objs[726]),/* OBJ_sect233k1                    1 3 132 0 26 */
&(nid_objs[727]),/* OBJ_sect233r1                    1 3 132 0 27 */
&(nid_objs[706]),/* OBJ_secp128r1                    1 3 132 0 28 */
&(nid_objs[707]),/* OBJ_secp128r2                    1 3 132 0 29 */
&(nid_objs[710]),/* OBJ_secp160r2                    1 3 132 0 30 */
&(nid_objs[711]),/* OBJ_secp192k1                    1 3 132 0 31 */
&(nid_objs[712]),/* OBJ_secp224k1                    1 3 132 0 32 */
&(nid_objs[713]),/* OBJ_secp224r1                    1 3 132 0 33 */
&(nid_objs[715]),/* OBJ_secp384r1                    1 3 132 0 34 */
&(nid_objs[716]),/* OBJ_secp521r1                    1 3 132 0 35 */
&(nid_objs[731]),/* OBJ_sect409k1                    1 3 132 0 36 */
&(nid_objs[732]),/* OBJ_sect409r1                    1 3 132 0 37 */
&(nid_objs[733]),/* OBJ_sect571k1                    1 3 132 0 38 */
&(nid_objs[734]),/* OBJ_sect571r1                    1 3 132 0 39 */
&(nid_objs[624]),/* OBJ_set_rootKeyThumb             2 23 42 3 0 0 */
&(nid_objs[625]),/* OBJ_set_addPolicy                2 23 42 3 0 1 */
&(nid_objs[626]),/* OBJ_setAttr_Token_EMV            2 23 42 3 2 1 */
&(nid_objs[627]),/* OBJ_setAttr_Token_B0Prime        2 23 42 3 2 2 */
&(nid_objs[628]),/* OBJ_setAttr_IssCap_CVM           2 23 42 3 3 3 */
&(nid_objs[629]),/* OBJ_setAttr_IssCap_T2            2 23 42 3 3 4 */
&(nid_objs[630]),/* OBJ_setAttr_IssCap_Sig           2 23 42 3 3 5 */
&(nid_objs[642]),/* OBJ_set_brand_Novus              2 23 42 8 6011 */
&(nid_objs[735]),/* OBJ_wap_wsg_idm_ecid_wtls1       2 23 43 13 4 1 */
&(nid_objs[736]),/* OBJ_wap_wsg_idm_ecid_wtls3       2 23 43 13 4 3 */
&(nid_objs[737]),/* OBJ_wap_wsg_idm_ecid_wtls4       2 23 43 13 4 4 */
&(nid_objs[738]),/* OBJ_wap_wsg_idm_ecid_wtls5       2 23 43 13 4 5 */
&(nid_objs[739]),/* OBJ_wap_wsg_idm_ecid_wtls6       2 23 43 13 4 6 */
&(nid_objs[740]),/* OBJ_wap_wsg_idm_ecid_wtls7       2 23 43 13 4 7 */
&(nid_objs[741]),/* OBJ_wap_wsg_idm_ecid_wtls8       2 23 43 13 4 8 */
&(nid_objs[742]),/* OBJ_wap_wsg_idm_ecid_wtls9       2 23 43 13 4 9 */
&(nid_objs[743]),/* OBJ_wap_wsg_idm_ecid_wtls10      2 23 43 13 4 10 */
&(nid_objs[744]),/* OBJ_wap_wsg_idm_ecid_wtls11      2 23 43 13 4 11 */
&(nid_objs[745]),/* OBJ_wap_wsg_idm_ecid_wtls12      2 23 43 13 4 12 */
&(nid_objs[804]),/* OBJ_whirlpool                    1 0 10118 3 0 55 */
&(nid_objs[124]),/* OBJ_rle_compression              1 1 1 1 666 1 */
&(nid_objs[773]),/* OBJ_kisa                         1 2 410 200004 */
&(nid_objs[807]),/* OBJ_id_GostR3411_94_with_GostR3410_2001 1 2 643 2 2 3 */
&(nid_objs[808]),/* OBJ_id_GostR3411_94_with_GostR3410_94 1 2 643 2 2 4 */
&(nid_objs[809]),/* OBJ_id_GostR3411_94              1 2 643 2 2 9 */
&(nid_objs[810]),/* OBJ_id_HMACGostR3411_94          1 2 643 2 2 10 */
&(nid_objs[811]),/* OBJ_id_GostR3410_2001            1 2 643 2 2 19 */
&(nid_objs[812]),/* OBJ_id_GostR3410_94              1 2 643 2 2 20 */
&(nid_objs[813]),/* OBJ_id_Gost28147_89              1 2 643 2 2 21 */
&(nid_objs[815]),/* OBJ_id_Gost28147_89_MAC          1 2 643 2 2 22 */
&(nid_objs[816]),/* OBJ_id_GostR3411_94_prf          1 2 643 2 2 23 */
&(nid_objs[817]),/* OBJ_id_GostR3410_2001DH          1 2 643 2 2 98 */
&(nid_objs[818]),/* OBJ_id_GostR3410_94DH            1 2 643 2 2 99 */
&(nid_objs[ 1]),/* OBJ_rsadsi                       1 2 840 113549 */
&(nid_objs[185]),/* OBJ_X9cm                         1 2 840 10040 4 */
&(nid_objs[127]),/* OBJ_id_pkix                      1 3 6 1 5 5 7 */
&(nid_objs[505]),/* OBJ_mime_mhs_headings            1 3 6 1 7 1 1 */
&(nid_objs[506]),/* OBJ_mime_mhs_bodies              1 3 6 1 7 1 2 */
&(nid_objs[119]),/* OBJ_ripemd160WithRSA             1 3 36 3 3 1 2 */
&(nid_objs[631]),/* OBJ_setAttr_GenCryptgrm          2 23 42 3 3 3 1 */
&(nid_objs[632]),/* OBJ_setAttr_T2Enc                2 23 42 3 3 4 1 */
&(nid_objs[633]),/* OBJ_setAttr_T2cleartxt           2 23 42 3 3 4 2 */
&(nid_objs[634]),/* OBJ_setAttr_TokICCsig            2 23 42 3 3 5 1 */
&(nid_objs[635]),/* OBJ_setAttr_SecDevSig            2 23 42 3 3 5 2 */
&(nid_objs[436]),/* OBJ_ucl                          0 9 2342 19200300 */
&(nid_objs[820]),/* OBJ_id_Gost28147_89_None_KeyMeshing 1 2 643 2 2 14 0 */
&(nid_objs[819]),/* OBJ_id_Gost28147_89_CryptoPro_KeyMeshing 1 2 643 2 2 14 1 */
&(nid_objs[845]),/* OBJ_id_GostR3410_94_a            1 2 643 2 2 20 1 */
&(nid_objs[846]),/* OBJ_id_GostR3410_94_aBis         1 2 643 2 2 20 2 */
&(nid_objs[847]),/* OBJ_id_GostR3410_94_b            1 2 643 2 2 20 3 */
&(nid_objs[848]),/* OBJ_id_GostR3410_94_bBis         1 2 643 2 2 20 4 */
&(nid_objs[821]),/* OBJ_id_GostR3411_94_TestParamSet 1 2 643 2 2 30 0 */
&(nid_objs[822]),/* OBJ_id_GostR3411_94_CryptoProParamSet 1 2 643 2 2 30 1 */
&(nid_objs[823]),/* OBJ_id_Gost28147_89_TestParamSet 1 2 643 2 2 31 0 */
&(nid_objs[824]),/* OBJ_id_Gost28147_89_CryptoPro_A_ParamSet 1 2 643 2 2 31 1 */
&(nid_objs[825]),/* OBJ_id_Gost28147_89_CryptoPro_B_ParamSet 1 2 643 2 2 31 2 */
&(nid_objs[826]),/* OBJ_id_Gost28147_89_CryptoPro_C_ParamSet 1 2 643 2 2 31 3 */
&(nid_objs[827]),/* OBJ_id_Gost28147_89_CryptoPro_D_ParamSet 1 2 643 2 2 31 4 */
&(nid_objs[828]),/* OBJ_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet 1 2 643 2 2 31 5 */
&(nid_objs[829]),/* OBJ_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet 1 2 643 2 2 31 6 */
&(nid_objs[830]),/* OBJ_id_Gost28147_89_CryptoPro_RIC_1_ParamSet 1 2 643 2 2 31 7 */
&(nid_objs[831]),/* OBJ_id_GostR3410_94_TestParamSet 1 2 643 2 2 32 0 */
&(nid_objs[832]),/* OBJ_id_GostR3410_94_CryptoPro_A_ParamSet 1 2 643 2 2 32 2 */
&(nid_objs[833]),/* OBJ_id_GostR3410_94_CryptoPro_B_ParamSet 1 2 643 2 2 32 3 */
&(nid_objs[834]),/* OBJ_id_GostR3410_94_CryptoPro_C_ParamSet 1 2 643 2 2 32 4 */
&(nid_objs[835]),/* OBJ_id_GostR3410_94_CryptoPro_D_ParamSet 1 2 643 2 2 32 5 */
&(nid_objs[836]),/* OBJ_id_GostR3410_94_CryptoPro_XchA_ParamSet 1 2 643 2 2 33 1 */
&(nid_objs[837]),/* OBJ_id_GostR3410_94_CryptoPro_XchB_ParamSet 1 2 643 2 2 33 2 */
&(nid_objs[838]),/* OBJ_id_GostR3410_94_CryptoPro_XchC_ParamSet 1 2 643 2 2 33 3 */
&(nid_objs[839]),/* OBJ_id_GostR3410_2001_TestParamSet 1 2 643 2 2 35 0 */
&(nid_objs[840]),/* OBJ_id_GostR3410_2001_CryptoPro_A_ParamSet 1 2 643 2 2 35 1 */
&(nid_objs[841]),/* OBJ_id_GostR3410_2001_CryptoPro_B_ParamSet 1 2 643 2 2 35 2 */
&(nid_objs[842]),/* OBJ_id_GostR3410_2001_CryptoPro_C_ParamSet 1 2 643 2 2 35 3 */
&(nid_objs[843]),/* OBJ_id_GostR3410_2001_CryptoPro_XchA_ParamSet 1 2 643 2 2 36 0 */
&(nid_objs[844]),/* OBJ_id_GostR3410_2001_CryptoPro_XchB_ParamSet 1 2 643 2 2 36 1 */
&(nid_objs[ 2]),/* OBJ_pkcs                         1 2 840 113549 1 */
&(nid_objs[431]),/* OBJ_hold_instruction_none        1 2 840 10040 2 1 */
&(nid_objs[432]),/* OBJ_hold_instruction_call_issuer 1 2 840 10040 2 2 */
&(nid_objs[433]),/* OBJ_hold_instruction_reject      1 2 840 10040 2 3 */
&(nid_objs[116]),/* OBJ_dsa                          1 2 840 10040 4 1 */
&(nid_objs[113]),/* OBJ_dsaWithSHA1                  1 2 840 10040 4 3 */
&(nid_objs[406]),/* OBJ_X9_62_prime_field            1 2 840 10045 1 1 */
&(nid_objs[407]),/* OBJ_X9_62_characteristic_two_field 1 2 840 10045 1 2 */
&(nid_objs[408]),/* OBJ_X9_62_id_ecPublicKey         1 2 840 10045 2 1 */
&(nid_objs[416]),/* OBJ_ecdsa_with_SHA1              1 2 840 10045 4 1 */
&(nid_objs[791]),/* OBJ_ecdsa_with_Recommended       1 2 840 10045 4 2 */
&(nid_objs[792]),/* OBJ_ecdsa_with_Specified         1 2 840 10045 4 3 */
&(nid_objs[258]),/* OBJ_id_pkix_mod                  1 3 6 1 5 5 7 0 */
&(nid_objs[175]),/* OBJ_id_pe                        1 3 6 1 5 5 7 1 */
&(nid_objs[259]),/* OBJ_id_qt                        1 3 6 1 5 5 7 2 */
&(nid_objs[128]),/* OBJ_id_kp                        1 3 6 1 5 5 7 3 */
&(nid_objs[260]),/* OBJ_id_it                        1 3 6 1 5 5 7 4 */
&(nid_objs[261]),/* OBJ_id_pkip                      1 3 6 1 5 5 7 5 */
&(nid_objs[262]),/* OBJ_id_alg                       1 3 6 1 5 5 7 6 */
&(nid_objs[263]),/* OBJ_id_cmc                       1 3 6 1 5 5 7 7 */
&(nid_objs[264]),/* OBJ_id_on                        1 3 6 1 5 5 7 8 */
&(nid_objs[265]),/* OBJ_id_pda                       1 3 6 1 5 5 7 9 */
&(nid_objs[266]),/* OBJ_id_aca                       1 3 6 1 5 5 7 10 */
&(nid_objs[267]),/* OBJ_id_qcs                       1 3 6 1 5 5 7 11 */
&(nid_objs[268]),/* OBJ_id_cct                       1 3 6 1 5 5 7 12 */
&(nid_objs[662]),/* OBJ_id_ppl                       1 3 6 1 5 5 7 21 */
&(nid_objs[176]),/* OBJ_id_ad                        1 3 6 1 5 5 7 48 */
&(nid_objs[507]),/* OBJ_id_hex_partial_message       1 3 6 1 7 1 1 1 */
&(nid_objs[508]),/* OBJ_id_hex_multipart_message     1 3 6 1 7 1 1 2 */
&(nid_objs[57]),/* OBJ_netscape                     2 16 840 1 113730 */
&(nid_objs[754]),/* OBJ_camellia_128_ecb             0 3 4401 5 3 1 9 1 */
&(nid_objs[766]),/* OBJ_camellia_128_ofb128          0 3 4401 5 3 1 9 3 */
&(nid_objs[757]),/* OBJ_camellia_128_cfb128          0 3 4401 5 3 1 9 4 */
&(nid_objs[755]),/* OBJ_camellia_192_ecb             0 3 4401 5 3 1 9 21 */
&(nid_objs[767]),/* OBJ_camellia_192_ofb128          0 3 4401 5 3 1 9 23 */
&(nid_objs[758]),/* OBJ_camellia_192_cfb128          0 3 4401 5 3 1 9 24 */
&(nid_objs[756]),/* OBJ_camellia_256_ecb             0 3 4401 5 3 1 9 41 */
&(nid_objs[768]),/* OBJ_camellia_256_ofb128          0 3 4401 5 3 1 9 43 */
&(nid_objs[759]),/* OBJ_camellia_256_cfb128          0 3 4401 5 3 1 9 44 */
&(nid_objs[437]),/* OBJ_pilot                        0 9 2342 19200300 100 */
&(nid_objs[409]),/* OBJ_X9_62_prime192v1             1 2 156 11235 1 1 1 */
&(nid_objs[776]),/* OBJ_seed_ecb                     1 2 410 200004 1 3 */
&(nid_objs[777]),/* OBJ_seed_cbc                     1 2 410 200004 1 4 */
&(nid_objs[779]),/* OBJ_seed_cfb128                  1 2 410 200004 1 5 */
&(nid_objs[778]),/* OBJ_seed_ofb128                  1 2 410 200004 1 6 */
&(nid_objs[852]),/* OBJ_id_GostR3411_94_with_GostR3410_94_cc 1 2 643 2 9 1 3 3 */
&(nid_objs[853]),/* OBJ_id_GostR3411_94_with_GostR3410_2001_cc 1 2 643 2 9 1 3 4 */
&(nid_objs[850]),/* OBJ_id_GostR3410_94_cc           1 2 643 2 9 1 5 3 */
&(nid_objs[851]),/* OBJ_id_GostR3410_2001_cc         1 2 643 2 9 1 5 4 */
&(nid_objs[849]),/* OBJ_id_Gost28147_89_cc           1 2 643 2 9 1 6 1 */
&(nid_objs[854]),/* OBJ_id_GostR3410_2001_ParamSet_cc 1 2 643 2 9 1 8 1 */
&(nid_objs[186]),/* OBJ_pkcs1                        1 2 840 113549 1 1 */
&(nid_objs[27]),/* OBJ_pkcs3                        1 2 840 113549 1 3 */
&(nid_objs[187]),/* OBJ_pkcs5                        1 2 840 113549 1 5 */
&(nid_objs[20]),/* OBJ_pkcs7                        1 2 840 113549 1 7 */
&(nid_objs[47]),/* OBJ_pkcs9                        1 2 840 113549 1 9 */
&(nid_objs[ 3]),/* OBJ_md2                          1 2 840 113549 2 2 */
&(nid_objs[257]),/* OBJ_md4                          1 2 840 113549 2 4 */
&(nid_objs[ 4]),/* OBJ_md5                          1 2 840 113549 2 5 */
&(nid_objs[797]),/* OBJ_hmacWithMD5                  1 2 840 113549 2 6 */
&(nid_objs[163]),/* OBJ_hmacWithSHA1                 1 2 840 113549 2 7 */
&(nid_objs[798]),/* OBJ_hmacWithSHA224               1 2 840 113549 2 8 */
&(nid_objs[799]),/* OBJ_hmacWithSHA256               1 2 840 113549 2 9 */
&(nid_objs[800]),/* OBJ_hmacWithSHA384               1 2 840 113549 2 10 */
&(nid_objs[801]),/* OBJ_hmacWithSHA512               1 2 840 113549 2 11 */
&(nid_objs[37]),/* OBJ_rc2_cbc                      1 2 840 113549 3 2 */
&(nid_objs[ 5]),/* OBJ_rc4                          1 2 840 113549 3 4 */
&(nid_objs[44]),/* OBJ_des_ede3_cbc                 1 2 840 113549 3 7 */
&(nid_objs[120]),/* OBJ_rc5_cbc                      1 2 840 113549 3 8 */
&(nid_objs[643]),/* OBJ_des_cdmf                     1 2 840 113549 3 10 */
&(nid_objs[680]),/* OBJ_X9_62_id_characteristic_two_basis 1 2 840 10045 1 2 3 */
&(nid_objs[684]),/* OBJ_X9_62_c2pnb163v1             1 2 840 10045 3 0 1 */
&(nid_objs[685]),/* OBJ_X9_62_c2pnb163v2             1 2 840 10045 3 0 2 */
&(nid_objs[686]),/* OBJ_X9_62_c2pnb163v3             1 2 840 10045 3 0 3 */
&(nid_objs[687]),/* OBJ_X9_62_c2pnb176v1             1 2 840 10045 3 0 4 */
&(nid_objs[688]),/* OBJ_X9_62_c2tnb191v1             1 2 840 10045 3 0 5 */
&(nid_objs[689]),/* OBJ_X9_62_c2tnb191v2             1 2 840 10045 3 0 6 */
&(nid_objs[690]),/* OBJ_X9_62_c2tnb191v3             1 2 840 10045 3 0 7 */
&(nid_objs[691]),/* OBJ_X9_62_c2onb191v4             1 2 840 10045 3 0 8 */
&(nid_objs[692]),/* OBJ_X9_62_c2onb191v5             1 2 840 10045 3 0 9 */
&(nid_objs[693]),/* OBJ_X9_62_c2pnb208w1             1 2 840 10045 3 0 10 */
&(nid_objs[694]),/* OBJ_X9_62_c2tnb239v1             1 2 840 10045 3 0 11 */
&(nid_objs[695]),/* OBJ_X9_62_c2tnb239v2             1 2 840 10045 3 0 12 */
&(nid_objs[696]),/* OBJ_X9_62_c2tnb239v3             1 2 840 10045 3 0 13 */
&(nid_objs[697]),/* OBJ_X9_62_c2onb239v4             1 2 840 10045 3 0 14 */
&(nid_objs[698]),/* OBJ_X9_62_c2onb239v5             1 2 840 10045 3 0 15 */
&(nid_objs[699]),/* OBJ_X9_62_c2pnb272w1             1 2 840 10045 3 0 16 */
&(nid_objs[700]),/* OBJ_X9_62_c2pnb304w1             1 2 840 10045 3 0 17 */
&(nid_objs[701]),/* OBJ_X9_62_c2tnb359v1             1 2 840 10045 3 0 18 */
&(nid_objs[702]),/* OBJ_X9_62_c2pnb368w1             1 2 840 10045 3 0 19 */
&(nid_objs[703]),/* OBJ_X9_62_c2tnb431r1             1 2 840 10045 3 0 20 */
&(nid_objs[410]),/* OBJ_X9_62_prime192v2             1 2 840 10045 3 1 2 */
&(nid_objs[411]),/* OBJ_X9_62_prime192v3             1 2 840 10045 3 1 3 */
&(nid_objs[412]),/* OBJ_X9_62_prime239v1             1 2 840 10045 3 1 4 */
&(nid_objs[413]),/* OBJ_X9_62_prime239v2             1 2 840 10045 3 1 5 */
&(nid_objs[414]),/* OBJ_X9_62_prime239v3             1 2 840 10045 3 1 6 */
&(nid_objs[415]),/* OBJ_X9_62_prime256v1             1 2 840 10045 3 1 7 */
&(nid_objs[793]),/* OBJ_ecdsa_with_SHA224            1 2 840 10045 4 3 1 */
&(nid_objs[794]),/* OBJ_ecdsa_with_SHA256            1 2 840 10045 4 3 2 */
&(nid_objs[795]),/* OBJ_ecdsa_with_SHA384            1 2 840 10045 4 3 3 */
&(nid_objs[796]),/* OBJ_ecdsa_with_SHA512            1 2 840 10045 4 3 4 */
&(nid_objs[269]),/* OBJ_id_pkix1_explicit_88         1 3 6 1 5 5 7 0 1 */
&(nid_objs[270]),/* OBJ_id_pkix1_implicit_88         1 3 6 1 5 5 7 0 2 */
&(nid_objs[271]),/* OBJ_id_pkix1_explicit_93         1 3 6 1 5 5 7 0 3 */
&(nid_objs[272]),/* OBJ_id_pkix1_implicit_93         1 3 6 1 5 5 7 0 4 */
&(nid_objs[273]),/* OBJ_id_mod_crmf                  1 3 6 1 5 5 7 0 5 */
&(nid_objs[274]),/* OBJ_id_mod_cmc                   1 3 6 1 5 5 7 0 6 */
&(nid_objs[275]),/* OBJ_id_mod_kea_profile_88        1 3 6 1 5 5 7 0 7 */
&(nid_objs[276]),/* OBJ_id_mod_kea_profile_93        1 3 6 1 5 5 7 0 8 */
&(nid_objs[277]),/* OBJ_id_mod_cmp                   1 3 6 1 5 5 7 0 9 */
&(nid_objs[278]),/* OBJ_id_mod_qualified_cert_88     1 3 6 1 5 5 7 0 10 */
&(nid_objs[279]),/* OBJ_id_mod_qualified_cert_93     1 3 6 1 5 5 7 0 11 */
&(nid_objs[280]),/* OBJ_id_mod_attribute_cert        1 3 6 1 5 5 7 0 12 */
&(nid_objs[281]),/* OBJ_id_mod_timestamp_protocol    1 3 6 1 5 5 7 0 13 */
&(nid_objs[282]),/* OBJ_id_mod_ocsp                  1 3 6 1 5 5 7 0 14 */
&(nid_objs[283]),/* OBJ_id_mod_dvcs                  1 3 6 1 5 5 7 0 15 */
&(nid_objs[284]),/* OBJ_id_mod_cmp2000               1 3 6 1 5 5 7 0 16 */
&(nid_objs[177]),/* OBJ_info_access                  1 3 6 1 5 5 7 1 1 */
&(nid_objs[285]),/* OBJ_biometricInfo                1 3 6 1 5 5 7 1 2 */
&(nid_objs[286]),/* OBJ_qcStatements                 1 3 6 1 5 5 7 1 3 */
&(nid_objs[287]),/* OBJ_ac_auditEntity               1 3 6 1 5 5 7 1 4 */
&(nid_objs[288]),/* OBJ_ac_targeting                 1 3 6 1 5 5 7 1 5 */
&(nid_objs[289]),/* OBJ_aaControls                   1 3 6 1 5 5 7 1 6 */
&(nid_objs[290]),/* OBJ_sbgp_ipAddrBlock             1 3 6 1 5 5 7 1 7 */
&(nid_objs[291]),/* OBJ_sbgp_autonomousSysNum        1 3 6 1 5 5 7 1 8 */
&(nid_objs[292]),/* OBJ_sbgp_routerIdentifier        1 3 6 1 5 5 7 1 9 */
&(nid_objs[397]),/* OBJ_ac_proxying                  1 3 6 1 5 5 7 1 10 */
&(nid_objs[398]),/* OBJ_sinfo_access                 1 3 6 1 5 5 7 1 11 */
&(nid_objs[663]),/* OBJ_proxyCertInfo                1 3 6 1 5 5 7 1 14 */
&(nid_objs[164]),/* OBJ_id_qt_cps                    1 3 6 1 5 5 7 2 1 */
&(nid_objs[165]),/* OBJ_id_qt_unotice                1 3 6 1 5 5 7 2 2 */
&(nid_objs[293]),/* OBJ_textNotice                   1 3 6 1 5 5 7 2 3 */
&(nid_objs[129]),/* OBJ_server_auth                  1 3 6 1 5 5 7 3 1 */
&(nid_objs[130]),/* OBJ_client_auth                  1 3 6 1 5 5 7 3 2 */
&(nid_objs[131]),/* OBJ_code_sign                    1 3 6 1 5 5 7 3 3 */
&(nid_objs[132]),/* OBJ_email_protect                1 3 6 1 5 5 7 3 4 */
&(nid_objs[294]),/* OBJ_ipsecEndSystem               1 3 6 1 5 5 7 3 5 */
&(nid_objs[295]),/* OBJ_ipsecTunnel                  1 3 6 1 5 5 7 3 6 */
&(nid_objs[296]),/* OBJ_ipsecUser                    1 3 6 1 5 5 7 3 7 */
&(nid_objs[133]),/* OBJ_time_stamp                   1 3 6 1 5 5 7 3 8 */
&(nid_objs[180]),/* OBJ_OCSP_sign                    1 3 6 1 5 5 7 3 9 */
&(nid_objs[297]),/* OBJ_dvcs                         1 3 6 1 5 5 7 3 10 */
&(nid_objs[298]),/* OBJ_id_it_caProtEncCert          1 3 6 1 5 5 7 4 1 */
&(nid_objs[299]),/* OBJ_id_it_signKeyPairTypes       1 3 6 1 5 5 7 4 2 */
&(nid_objs[300]),/* OBJ_id_it_encKeyPairTypes        1 3 6 1 5 5 7 4 3 */
&(nid_objs[301]),/* OBJ_id_it_preferredSymmAlg       1 3 6 1 5 5 7 4 4 */
&(nid_objs[302]),/* OBJ_id_it_caKeyUpdateInfo        1 3 6 1 5 5 7 4 5 */
&(nid_objs[303]),/* OBJ_id_it_currentCRL             1 3 6 1 5 5 7 4 6 */
&(nid_objs[304]),/* OBJ_id_it_unsupportedOIDs        1 3 6 1 5 5 7 4 7 */
&(nid_objs[305]),/* OBJ_id_it_subscriptionRequest    1 3 6 1 5 5 7 4 8 */
&(nid_objs[306]),/* OBJ_id_it_subscriptionResponse   1 3 6 1 5 5 7 4 9 */
&(nid_objs[307]),/* OBJ_id_it_keyPairParamReq        1 3 6 1 5 5 7 4 10 */
&(nid_objs[308]),/* OBJ_id_it_keyPairParamRep        1 3 6 1 5 5 7 4 11 */
&(nid_objs[309]),/* OBJ_id_it_revPassphrase          1 3 6 1 5 5 7 4 12 */
&(nid_objs[310]),/* OBJ_id_it_implicitConfirm        1 3 6 1 5 5 7 4 13 */
&(nid_objs[311]),/* OBJ_id_it_confirmWaitTime        1 3 6 1 5 5 7 4 14 */
&(nid_objs[312]),/* OBJ_id_it_origPKIMessage         1 3 6 1 5 5 7 4 15 */
&(nid_objs[784]),/* OBJ_id_it_suppLangTags           1 3 6 1 5 5 7 4 16 */
&(nid_objs[313]),/* OBJ_id_regCtrl                   1 3 6 1 5 5 7 5 1 */
&(nid_objs[314]),/* OBJ_id_regInfo                   1 3 6 1 5 5 7 5 2 */
&(nid_objs[323]),/* OBJ_id_alg_des40                 1 3 6 1 5 5 7 6 1 */
&(nid_objs[324]),/* OBJ_id_alg_noSignature           1 3 6 1 5 5 7 6 2 */
&(nid_objs[325]),/* OBJ_id_alg_dh_sig_hmac_sha1      1 3 6 1 5 5 7 6 3 */
&(nid_objs[326]),/* OBJ_id_alg_dh_pop                1 3 6 1 5 5 7 6 4 */
&(nid_objs[327]),/* OBJ_id_cmc_statusInfo            1 3 6 1 5 5 7 7 1 */
&(nid_objs[328]),/* OBJ_id_cmc_identification        1 3 6 1 5 5 7 7 2 */
&(nid_objs[329]),/* OBJ_id_cmc_identityProof         1 3 6 1 5 5 7 7 3 */
&(nid_objs[330]),/* OBJ_id_cmc_dataReturn            1 3 6 1 5 5 7 7 4 */
&(nid_objs[331]),/* OBJ_id_cmc_transactionId         1 3 6 1 5 5 7 7 5 */
&(nid_objs[332]),/* OBJ_id_cmc_senderNonce           1 3 6 1 5 5 7 7 6 */
&(nid_objs[333]),/* OBJ_id_cmc_recipientNonce        1 3 6 1 5 5 7 7 7 */
&(nid_objs[334]),/* OBJ_id_cmc_addExtensions         1 3 6 1 5 5 7 7 8 */
&(nid_objs[335]),/* OBJ_id_cmc_encryptedPOP          1 3 6 1 5 5 7 7 9 */
&(nid_objs[336]),/* OBJ_id_cmc_decryptedPOP          1 3 6 1 5 5 7 7 10 */
&(nid_objs[337]),/* OBJ_id_cmc_lraPOPWitness         1 3 6 1 5 5 7 7 11 */
&(nid_objs[338]),/* OBJ_id_cmc_getCert               1 3 6 1 5 5 7 7 15 */
&(nid_objs[339]),/* OBJ_id_cmc_getCRL                1 3 6 1 5 5 7 7 16 */
&(nid_objs[340]),/* OBJ_id_cmc_revokeRequest         1 3 6 1 5 5 7 7 17 */
&(nid_objs[341]),/* OBJ_id_cmc_regInfo               1 3 6 1 5 5 7 7 18 */
&(nid_objs[342]),/* OBJ_id_cmc_responseInfo          1 3 6 1 5 5 7 7 19 */
&(nid_objs[343]),/* OBJ_id_cmc_queryPending          1 3 6 1 5 5 7 7 21 */
&(nid_objs[344]),/* OBJ_id_cmc_popLinkRandom         1 3 6 1 5 5 7 7 22 */
&(nid_objs[345]),/* OBJ_id_cmc_popLinkWitness        1 3 6 1 5 5 7 7 23 */
&(nid_objs[346]),/* OBJ_id_cmc_confirmCertAcceptance 1 3 6 1 5 5 7 7 24 */
&(nid_objs[347]),/* OBJ_id_on_personalData           1 3 6 1 5 5 7 8 1 */
&(nid_objs[348]),/* OBJ_id_pda_dateOfBirth           1 3 6 1 5 5 7 9 1 */
&(nid_objs[349]),/* OBJ_id_pda_placeOfBirth          1 3 6 1 5 5 7 9 2 */
&(nid_objs[351]),/* OBJ_id_pda_gender                1 3 6 1 5 5 7 9 3 */
&(nid_objs[352]),/* OBJ_id_pda_countryOfCitizenship  1 3 6 1 5 5 7 9 4 */
&(nid_objs[353]),/* OBJ_id_pda_countryOfResidence    1 3 6 1 5 5 7 9 5 */
&(nid_objs[354]),/* OBJ_id_aca_authenticationInfo    1 3 6 1 5 5 7 10 1 */
&(nid_objs[355]),/* OBJ_id_aca_accessIdentity        1 3 6 1 5 5 7 10 2 */
&(nid_objs[356]),/* OBJ_id_aca_chargingIdentity      1 3 6 1 5 5 7 10 3 */
&(nid_objs[357]),/* OBJ_id_aca_group                 1 3 6 1 5 5 7 10 4 */
&(nid_objs[358]),/* OBJ_id_aca_role                  1 3 6 1 5 5 7 10 5 */
&(nid_objs[399]),/* OBJ_id_aca_encAttrs              1 3 6 1 5 5 7 10 6 */
&(nid_objs[359]),/* OBJ_id_qcs_pkixQCSyntax_v1       1 3 6 1 5 5 7 11 1 */
&(nid_objs[360]),/* OBJ_id_cct_crs                   1 3 6 1 5 5 7 12 1 */
&(nid_objs[361]),/* OBJ_id_cct_PKIData               1 3 6 1 5 5 7 12 2 */
&(nid_objs[362]),/* OBJ_id_cct_PKIResponse           1 3 6 1 5 5 7 12 3 */
&(nid_objs[664]),/* OBJ_id_ppl_anyLanguage           1 3 6 1 5 5 7 21 0 */
&(nid_objs[665]),/* OBJ_id_ppl_inheritAll            1 3 6 1 5 5 7 21 1 */
&(nid_objs[667]),/* OBJ_Independent                  1 3 6 1 5 5 7 21 2 */
&(nid_objs[178]),/* OBJ_ad_OCSP                      1 3 6 1 5 5 7 48 1 */
&(nid_objs[179]),/* OBJ_ad_ca_issuers                1 3 6 1 5 5 7 48 2 */
&(nid_objs[363]),/* OBJ_ad_timeStamping              1 3 6 1 5 5 7 48 3 */
&(nid_objs[364]),/* OBJ_ad_dvcs                      1 3 6 1 5 5 7 48 4 */
&(nid_objs[785]),/* OBJ_caRepository                 1 3 6 1 5 5 7 48 5 */
&(nid_objs[780]),/* OBJ_hmac_md5                     1 3 6 1 5 5 8 1 1 */
&(nid_objs[781]),/* OBJ_hmac_sha1                    1 3 6 1 5 5 8 1 2 */
&(nid_objs[58]),/* OBJ_netscape_cert_extension      2 16 840 1 113730 1 */
&(nid_objs[59]),/* OBJ_netscape_data_type           2 16 840 1 113730 2 */
&(nid_objs[438]),/* OBJ_pilotAttributeType           0 9 2342 19200300 100 1 */
&(nid_objs[439]),/* OBJ_pilotAttributeSyntax         0 9 2342 19200300 100 3 */
&(nid_objs[440]),/* OBJ_pilotObjectClass             0 9 2342 19200300 100 4 */
&(nid_objs[441]),/* OBJ_pilotGroups                  0 9 2342 19200300 100 10 */
&(nid_objs[108]),/* OBJ_cast5_cbc                    1 2 840 113533 7 66 10 */
&(nid_objs[112]),/* OBJ_pbeWithMD5AndCast5_CBC       1 2 840 113533 7 66 12 */
&(nid_objs[782]),/* OBJ_id_PasswordBasedMAC          1 2 840 113533 7 66 13 */
&(nid_objs[783]),/* OBJ_id_DHBasedMac                1 2 840 113533 7 66 30 */
&(nid_objs[ 6]),/* OBJ_rsaEncryption                1 2 840 113549 1 1 1 */
&(nid_objs[ 7]),/* OBJ_md2WithRSAEncryption         1 2 840 113549 1 1 2 */
&(nid_objs[396]),/* OBJ_md4WithRSAEncryption         1 2 840 113549 1 1 3 */
&(nid_objs[ 8]),/* OBJ_md5WithRSAEncryption         1 2 840 113549 1 1 4 */
&(nid_objs[65]),/* OBJ_sha1WithRSAEncryption        1 2 840 113549 1 1 5 */
&(nid_objs[644]),/* OBJ_rsaOAEPEncryptionSET         1 2 840 113549 1 1 6 */
&(nid_objs[668]),/* OBJ_sha256WithRSAEncryption      1 2 840 113549 1 1 11 */
&(nid_objs[669]),/* OBJ_sha384WithRSAEncryption      1 2 840 113549 1 1 12 */
&(nid_objs[670]),/* OBJ_sha512WithRSAEncryption      1 2 840 113549 1 1 13 */
&(nid_objs[671]),/* OBJ_sha224WithRSAEncryption      1 2 840 113549 1 1 14 */
&(nid_objs[28]),/* OBJ_dhKeyAgreement               1 2 840 113549 1 3 1 */
&(nid_objs[ 9]),/* OBJ_pbeWithMD2AndDES_CBC         1 2 840 113549 1 5 1 */
&(nid_objs[10]),/* OBJ_pbeWithMD5AndDES_CBC         1 2 840 113549 1 5 3 */
&(nid_objs[168]),/* OBJ_pbeWithMD2AndRC2_CBC         1 2 840 113549 1 5 4 */
&(nid_objs[169]),/* OBJ_pbeWithMD5AndRC2_CBC         1 2 840 113549 1 5 6 */
&(nid_objs[170]),/* OBJ_pbeWithSHA1AndDES_CBC        1 2 840 113549 1 5 10 */
&(nid_objs[68]),/* OBJ_pbeWithSHA1AndRC2_CBC        1 2 840 113549 1 5 11 */
&(nid_objs[69]),/* OBJ_id_pbkdf2                    1 2 840 113549 1 5 12 */
&(nid_objs[161]),/* OBJ_pbes2                        1 2 840 113549 1 5 13 */
&(nid_objs[162]),/* OBJ_pbmac1                       1 2 840 113549 1 5 14 */
&(nid_objs[21]),/* OBJ_pkcs7_data                   1 2 840 113549 1 7 1 */
&(nid_objs[22]),/* OBJ_pkcs7_signed                 1 2 840 113549 1 7 2 */
&(nid_objs[23]),/* OBJ_pkcs7_enveloped              1 2 840 113549 1 7 3 */
&(nid_objs[24]),/* OBJ_pkcs7_signedAndEnveloped     1 2 840 113549 1 7 4 */
&(nid_objs[25]),/* OBJ_pkcs7_digest                 1 2 840 113549 1 7 5 */
&(nid_objs[26]),/* OBJ_pkcs7_encrypted              1 2 840 113549 1 7 6 */
&(nid_objs[48]),/* OBJ_pkcs9_emailAddress           1 2 840 113549 1 9 1 */
&(nid_objs[49]),/* OBJ_pkcs9_unstructuredName       1 2 840 113549 1 9 2 */
&(nid_objs[50]),/* OBJ_pkcs9_contentType            1 2 840 113549 1 9 3 */
&(nid_objs[51]),/* OBJ_pkcs9_messageDigest          1 2 840 113549 1 9 4 */
&(nid_objs[52]),/* OBJ_pkcs9_signingTime            1 2 840 113549 1 9 5 */
&(nid_objs[53]),/* OBJ_pkcs9_countersignature       1 2 840 113549 1 9 6 */
&(nid_objs[54]),/* OBJ_pkcs9_challengePassword      1 2 840 113549 1 9 7 */
&(nid_objs[55]),/* OBJ_pkcs9_unstructuredAddress    1 2 840 113549 1 9 8 */
&(nid_objs[56]),/* OBJ_pkcs9_extCertAttributes      1 2 840 113549 1 9 9 */
&(nid_objs[172]),/* OBJ_ext_req                      1 2 840 113549 1 9 14 */
&(nid_objs[167]),/* OBJ_SMIMECapabilities            1 2 840 113549 1 9 15 */
&(nid_objs[188]),/* OBJ_SMIME                        1 2 840 113549 1 9 16 */
&(nid_objs[156]),/* OBJ_friendlyName                 1 2 840 113549 1 9 20 */
&(nid_objs[157]),/* OBJ_localKeyID                   1 2 840 113549 1 9 21 */
&(nid_objs[681]),/* OBJ_X9_62_onBasis                1 2 840 10045 1 2 3 1 */
&(nid_objs[682]),/* OBJ_X9_62_tpBasis                1 2 840 10045 1 2 3 2 */
&(nid_objs[683]),/* OBJ_X9_62_ppBasis                1 2 840 10045 1 2 3 3 */
&(nid_objs[417]),/* OBJ_ms_csp_name                  1 3 6 1 4 1 311 17 1 */
&(nid_objs[856]),/* OBJ_LocalKeySet                  1 3 6 1 4 1 311 17 2 */
&(nid_objs[390]),/* OBJ_dcObject                     1 3 6 1 4 1 1466 344 */
&(nid_objs[91]),/* OBJ_bf_cbc                       1 3 6 1 4 1 3029 1 2 */
&(nid_objs[315]),/* OBJ_id_regCtrl_regToken          1 3 6 1 5 5 7 5 1 1 */
&(nid_objs[316]),/* OBJ_id_regCtrl_authenticator     1 3 6 1 5 5 7 5 1 2 */
&(nid_objs[317]),/* OBJ_id_regCtrl_pkiPublicationInfo 1 3 6 1 5 5 7 5 1 3 */
&(nid_objs[318]),/* OBJ_id_regCtrl_pkiArchiveOptions 1 3 6 1 5 5 7 5 1 4 */
&(nid_objs[319]),/* OBJ_id_regCtrl_oldCertID         1 3 6 1 5 5 7 5 1 5 */
&(nid_objs[320]),/* OBJ_id_regCtrl_protocolEncrKey   1 3 6 1 5 5 7 5 1 6 */
&(nid_objs[321]),/* OBJ_id_regInfo_utf8Pairs         1 3 6 1 5 5 7 5 2 1 */
&(nid_objs[322]),/* OBJ_id_regInfo_certReq           1 3 6 1 5 5 7 5 2 2 */
&(nid_objs[365]),/* OBJ_id_pkix_OCSP_basic           1 3 6 1 5 5 7 48 1 1 */
&(nid_objs[366]),/* OBJ_id_pkix_OCSP_Nonce           1 3 6 1 5 5 7 48 1 2 */
&(nid_objs[367]),/* OBJ_id_pkix_OCSP_CrlID           1 3 6 1 5 5 7 48 1 3 */
&(nid_objs[368]),/* OBJ_id_pkix_OCSP_acceptableResponses 1 3 6 1 5 5 7 48 1 4 */
&(nid_objs[369]),/* OBJ_id_pkix_OCSP_noCheck         1 3 6 1 5 5 7 48 1 5 */
&(nid_objs[370]),/* OBJ_id_pkix_OCSP_archiveCutoff   1 3 6 1 5 5 7 48 1 6 */
&(nid_objs[371]),/* OBJ_id_pkix_OCSP_serviceLocator  1 3 6 1 5 5 7 48 1 7 */
&(nid_objs[372]),/* OBJ_id_pkix_OCSP_extendedStatus  1 3 6 1 5 5 7 48 1 8 */
&(nid_objs[373]),/* OBJ_id_pkix_OCSP_valid           1 3 6 1 5 5 7 48 1 9 */
&(nid_objs[374]),/* OBJ_id_pkix_OCSP_path            1 3 6 1 5 5 7 48 1 10 */
&(nid_objs[375]),/* OBJ_id_pkix_OCSP_trustRoot       1 3 6 1 5 5 7 48 1 11 */
&(nid_objs[418]),/* OBJ_aes_128_ecb                  2 16 840 1 101 3 4 1 1 */
&(nid_objs[419]),/* OBJ_aes_128_cbc                  2 16 840 1 101 3 4 1 2 */
&(nid_objs[420]),/* OBJ_aes_128_ofb128               2 16 840 1 101 3 4 1 3 */
&(nid_objs[421]),/* OBJ_aes_128_cfb128               2 16 840 1 101 3 4 1 4 */
&(nid_objs[788]),/* OBJ_id_aes128_wrap               2 16 840 1 101 3 4 1 5 */
&(nid_objs[422]),/* OBJ_aes_192_ecb                  2 16 840 1 101 3 4 1 21 */
&(nid_objs[423]),/* OBJ_aes_192_cbc                  2 16 840 1 101 3 4 1 22 */
&(nid_objs[424]),/* OBJ_aes_192_ofb128               2 16 840 1 101 3 4 1 23 */
&(nid_objs[425]),/* OBJ_aes_192_cfb128               2 16 840 1 101 3 4 1 24 */
&(nid_objs[789]),/* OBJ_id_aes192_wrap               2 16 840 1 101 3 4 1 25 */
&(nid_objs[426]),/* OBJ_aes_256_ecb                  2 16 840 1 101 3 4 1 41 */
&(nid_objs[427]),/* OBJ_aes_256_cbc                  2 16 840 1 101 3 4 1 42 */
&(nid_objs[428]),/* OBJ_aes_256_ofb128               2 16 840 1 101 3 4 1 43 */
&(nid_objs[429]),/* OBJ_aes_256_cfb128               2 16 840 1 101 3 4 1 44 */
&(nid_objs[790]),/* OBJ_id_aes256_wrap               2 16 840 1 101 3 4 1 45 */
&(nid_objs[672]),/* OBJ_sha256                       2 16 840 1 101 3 4 2 1 */
&(nid_objs[673]),/* OBJ_sha384                       2 16 840 1 101 3 4 2 2 */
&(nid_objs[674]),/* OBJ_sha512                       2 16 840 1 101 3 4 2 3 */
&(nid_objs[675]),/* OBJ_sha224                       2 16 840 1 101 3 4 2 4 */
&(nid_objs[802]),/* OBJ_dsa_with_SHA224              2 16 840 1 101 3 4 3 1 */
&(nid_objs[803]),/* OBJ_dsa_with_SHA256              2 16 840 1 101 3 4 3 2 */
&(nid_objs[71]),/* OBJ_netscape_cert_type           2 16 840 1 113730 1 1 */
&(nid_objs[72]),/* OBJ_netscape_base_url            2 16 840 1 113730 1 2 */
&(nid_objs[73]),/* OBJ_netscape_revocation_url      2 16 840 1 113730 1 3 */
&(nid_objs[74]),/* OBJ_netscape_ca_revocation_url   2 16 840 1 113730 1 4 */
&(nid_objs[75]),/* OBJ_netscape_renewal_url         2 16 840 1 113730 1 7 */
&(nid_objs[76]),/* OBJ_netscape_ca_policy_url       2 16 840 1 113730 1 8 */
&(nid_objs[77]),/* OBJ_netscape_ssl_server_name     2 16 840 1 113730 1 12 */
&(nid_objs[78]),/* OBJ_netscape_comment             2 16 840 1 113730 1 13 */
&(nid_objs[79]),/* OBJ_netscape_cert_sequence       2 16 840 1 113730 2 5 */
&(nid_objs[139]),/* OBJ_ns_sgc                       2 16 840 1 113730 4 1 */
&(nid_objs[458]),/* OBJ_userId                       0 9 2342 19200300 100 1 1 */
&(nid_objs[459]),/* OBJ_textEncodedORAddress         0 9 2342 19200300 100 1 2 */
&(nid_objs[460]),/* OBJ_rfc822Mailbox                0 9 2342 19200300 100 1 3 */
&(nid_objs[461]),/* OBJ_info                         0 9 2342 19200300 100 1 4 */
&(nid_objs[462]),/* OBJ_favouriteDrink               0 9 2342 19200300 100 1 5 */
&(nid_objs[463]),/* OBJ_roomNumber                   0 9 2342 19200300 100 1 6 */
&(nid_objs[464]),/* OBJ_photo                        0 9 2342 19200300 100 1 7 */
&(nid_objs[465]),/* OBJ_userClass                    0 9 2342 19200300 100 1 8 */
&(nid_objs[466]),/* OBJ_host                         0 9 2342 19200300 100 1 9 */
&(nid_objs[467]),/* OBJ_manager                      0 9 2342 19200300 100 1 10 */
&(nid_objs[468]),/* OBJ_documentIdentifier           0 9 2342 19200300 100 1 11 */
&(nid_objs[469]),/* OBJ_documentTitle                0 9 2342 19200300 100 1 12 */
&(nid_objs[470]),/* OBJ_documentVersion              0 9 2342 19200300 100 1 13 */
&(nid_objs[471]),/* OBJ_documentAuthor               0 9 2342 19200300 100 1 14 */
&(nid_objs[472]),/* OBJ_documentLocation             0 9 2342 19200300 100 1 15 */
&(nid_objs[473]),/* OBJ_homeTelephoneNumber          0 9 2342 19200300 100 1 20 */
&(nid_objs[474]),/* OBJ_secretary                    0 9 2342 19200300 100 1 21 */
&(nid_objs[475]),/* OBJ_otherMailbox                 0 9 2342 19200300 100 1 22 */
&(nid_objs[476]),/* OBJ_lastModifiedTime             0 9 2342 19200300 100 1 23 */
&(nid_objs[477]),/* OBJ_lastModifiedBy               0 9 2342 19200300 100 1 24 */
&(nid_objs[391]),/* OBJ_domainComponent              0 9 2342 19200300 100 1 25 */
&(nid_objs[478]),/* OBJ_aRecord                      0 9 2342 19200300 100 1 26 */
&(nid_objs[479]),/* OBJ_pilotAttributeType27         0 9 2342 19200300 100 1 27 */
&(nid_objs[480]),/* OBJ_mXRecord                     0 9 2342 19200300 100 1 28 */
&(nid_objs[481]),/* OBJ_nSRecord                     0 9 2342 19200300 100 1 29 */
&(nid_objs[482]),/* OBJ_sOARecord                    0 9 2342 19200300 100 1 30 */
&(nid_objs[483]),/* OBJ_cNAMERecord                  0 9 2342 19200300 100 1 31 */
&(nid_objs[484]),/* OBJ_associatedDomain             0 9 2342 19200300 100 1 37 */
&(nid_objs[485]),/* OBJ_associatedName               0 9 2342 19200300 100 1 38 */
&(nid_objs[486]),/* OBJ_homePostalAddress            0 9 2342 19200300 100 1 39 */
&(nid_objs[487]),/* OBJ_personalTitle                0 9 2342 19200300 100 1 40 */
&(nid_objs[488]),/* OBJ_mobileTelephoneNumber        0 9 2342 19200300 100 1 41 */
&(nid_objs[489]),/* OBJ_pagerTelephoneNumber         0 9 2342 19200300 100 1 42 */
&(nid_objs[490]),/* OBJ_friendlyCountryName          0 9 2342 19200300 100 1 43 */
&(nid_objs[491]),/* OBJ_organizationalStatus         0 9 2342 19200300 100 1 45 */
&(nid_objs[492]),/* OBJ_janetMailbox                 0 9 2342 19200300 100 1 46 */
&(nid_objs[493]),/* OBJ_mailPreferenceOption         0 9 2342 19200300 100 1 47 */
&(nid_objs[494]),/* OBJ_buildingName                 0 9 2342 19200300 100 1 48 */
&(nid_objs[495]),/* OBJ_dSAQuality                   0 9 2342 19200300 100 1 49 */
&(nid_objs[496]),/* OBJ_singleLevelQuality           0 9 2342 19200300 100 1 50 */
&(nid_objs[497]),/* OBJ_subtreeMinimumQuality        0 9 2342 19200300 100 1 51 */
&(nid_objs[498]),/* OBJ_subtreeMaximumQuality        0 9 2342 19200300 100 1 52 */
&(nid_objs[499]),/* OBJ_personalSignature            0 9 2342 19200300 100 1 53 */
&(nid_objs[500]),/* OBJ_dITRedirect                  0 9 2342 19200300 100 1 54 */
&(nid_objs[501]),/* OBJ_audio                        0 9 2342 19200300 100 1 55 */
&(nid_objs[502]),/* OBJ_documentPublisher            0 9 2342 19200300 100 1 56 */
&(nid_objs[442]),/* OBJ_iA5StringSyntax              0 9 2342 19200300 100 3 4 */
&(nid_objs[443]),/* OBJ_caseIgnoreIA5StringSyntax    0 9 2342 19200300 100 3 5 */
&(nid_objs[444]),/* OBJ_pilotObject                  0 9 2342 19200300 100 4 3 */
&(nid_objs[445]),/* OBJ_pilotPerson                  0 9 2342 19200300 100 4 4 */
&(nid_objs[446]),/* OBJ_account                      0 9 2342 19200300 100 4 5 */
&(nid_objs[447]),/* OBJ_document                     0 9 2342 19200300 100 4 6 */
&(nid_objs[448]),/* OBJ_room                         0 9 2342 19200300 100 4 7 */
&(nid_objs[449]),/* OBJ_documentSeries               0 9 2342 19200300 100 4 9 */
&(nid_objs[392]),/* OBJ_Domain                       0 9 2342 19200300 100 4 13 */
&(nid_objs[450]),/* OBJ_rFC822localPart              0 9 2342 19200300 100 4 14 */
&(nid_objs[451]),/* OBJ_dNSDomain                    0 9 2342 19200300 100 4 15 */
&(nid_objs[452]),/* OBJ_domainRelatedObject          0 9 2342 19200300 100 4 17 */
&(nid_objs[453]),/* OBJ_friendlyCountry              0 9 2342 19200300 100 4 18 */
&(nid_objs[454]),/* OBJ_simpleSecurityObject         0 9 2342 19200300 100 4 19 */
&(nid_objs[455]),/* OBJ_pilotOrganization            0 9 2342 19200300 100 4 20 */
&(nid_objs[456]),/* OBJ_pilotDSA                     0 9 2342 19200300 100 4 21 */
&(nid_objs[457]),/* OBJ_qualityLabelledData          0 9 2342 19200300 100 4 22 */
&(nid_objs[189]),/* OBJ_id_smime_mod                 1 2 840 113549 1 9 16 0 */
&(nid_objs[190]),/* OBJ_id_smime_ct                  1 2 840 113549 1 9 16 1 */
&(nid_objs[191]),/* OBJ_id_smime_aa                  1 2 840 113549 1 9 16 2 */
&(nid_objs[192]),/* OBJ_id_smime_alg                 1 2 840 113549 1 9 16 3 */
&(nid_objs[193]),/* OBJ_id_smime_cd                  1 2 840 113549 1 9 16 4 */
&(nid_objs[194]),/* OBJ_id_smime_spq                 1 2 840 113549 1 9 16 5 */
&(nid_objs[195]),/* OBJ_id_smime_cti                 1 2 840 113549 1 9 16 6 */
&(nid_objs[158]),/* OBJ_x509Certificate              1 2 840 113549 1 9 22 1 */
&(nid_objs[159]),/* OBJ_sdsiCertificate              1 2 840 113549 1 9 22 2 */
&(nid_objs[160]),/* OBJ_x509Crl                      1 2 840 113549 1 9 23 1 */
&(nid_objs[144]),/* OBJ_pbe_WithSHA1And128BitRC4     1 2 840 113549 1 12 1 1 */
&(nid_objs[145]),/* OBJ_pbe_WithSHA1And40BitRC4      1 2 840 113549 1 12 1 2 */
&(nid_objs[146]),/* OBJ_pbe_WithSHA1And3_Key_TripleDES_CBC 1 2 840 113549 1 12 1 3 */
&(nid_objs[147]),/* OBJ_pbe_WithSHA1And2_Key_TripleDES_CBC 1 2 840 113549 1 12 1 4 */
&(nid_objs[148]),/* OBJ_pbe_WithSHA1And128BitRC2_CBC 1 2 840 113549 1 12 1 5 */
&(nid_objs[149]),/* OBJ_pbe_WithSHA1And40BitRC2_CBC  1 2 840 113549 1 12 1 6 */
&(nid_objs[171]),/* OBJ_ms_ext_req                   1 3 6 1 4 1 311 2 1 14 */
&(nid_objs[134]),/* OBJ_ms_code_ind                  1 3 6 1 4 1 311 2 1 21 */
&(nid_objs[135]),/* OBJ_ms_code_com                  1 3 6 1 4 1 311 2 1 22 */
&(nid_objs[136]),/* OBJ_ms_ctl_sign                  1 3 6 1 4 1 311 10 3 1 */
&(nid_objs[137]),/* OBJ_ms_sgc                       1 3 6 1 4 1 311 10 3 3 */
&(nid_objs[138]),/* OBJ_ms_efs                       1 3 6 1 4 1 311 10 3 4 */
&(nid_objs[648]),/* OBJ_ms_smartcard_login           1 3 6 1 4 1 311 20 2 2 */
&(nid_objs[649]),/* OBJ_ms_upn                       1 3 6 1 4 1 311 20 2 3 */
&(nid_objs[751]),/* OBJ_camellia_128_cbc             1 2 392 200011 61 1 1 1 2 */
&(nid_objs[752]),/* OBJ_camellia_192_cbc             1 2 392 200011 61 1 1 1 3 */
&(nid_objs[753]),/* OBJ_camellia_256_cbc             1 2 392 200011 61 1 1 1 4 */
&(nid_objs[196]),/* OBJ_id_smime_mod_cms             1 2 840 113549 1 9 16 0 1 */
&(nid_objs[197]),/* OBJ_id_smime_mod_ess             1 2 840 113549 1 9 16 0 2 */
&(nid_objs[198]),/* OBJ_id_smime_mod_oid             1 2 840 113549 1 9 16 0 3 */
&(nid_objs[199]),/* OBJ_id_smime_mod_msg_v3          1 2 840 113549 1 9 16 0 4 */
&(nid_objs[200]),/* OBJ_id_smime_mod_ets_eSignature_88 1 2 840 113549 1 9 16 0 5 */
&(nid_objs[201]),/* OBJ_id_smime_mod_ets_eSignature_97 1 2 840 113549 1 9 16 0 6 */
&(nid_objs[202]),/* OBJ_id_smime_mod_ets_eSigPolicy_88 1 2 840 113549 1 9 16 0 7 */
&(nid_objs[203]),/* OBJ_id_smime_mod_ets_eSigPolicy_97 1 2 840 113549 1 9 16 0 8 */
&(nid_objs[204]),/* OBJ_id_smime_ct_receipt          1 2 840 113549 1 9 16 1 1 */
&(nid_objs[205]),/* OBJ_id_smime_ct_authData         1 2 840 113549 1 9 16 1 2 */
&(nid_objs[206]),/* OBJ_id_smime_ct_publishCert      1 2 840 113549 1 9 16 1 3 */
&(nid_objs[207]),/* OBJ_id_smime_ct_TSTInfo          1 2 840 113549 1 9 16 1 4 */
&(nid_objs[208]),/* OBJ_id_smime_ct_TDTInfo          1 2 840 113549 1 9 16 1 5 */
&(nid_objs[209]),/* OBJ_id_smime_ct_contentInfo      1 2 840 113549 1 9 16 1 6 */
&(nid_objs[210]),/* OBJ_id_smime_ct_DVCSRequestData  1 2 840 113549 1 9 16 1 7 */
&(nid_objs[211]),/* OBJ_id_smime_ct_DVCSResponseData 1 2 840 113549 1 9 16 1 8 */
&(nid_objs[786]),/* OBJ_id_smime_ct_compressedData   1 2 840 113549 1 9 16 1 9 */
&(nid_objs[787]),/* OBJ_id_ct_asciiTextWithCRLF      1 2 840 113549 1 9 16 1 27 */
&(nid_objs[212]),/* OBJ_id_smime_aa_receiptRequest   1 2 840 113549 1 9 16 2 1 */
&(nid_objs[213]),/* OBJ_id_smime_aa_securityLabel    1 2 840 113549 1 9 16 2 2 */
&(nid_objs[214]),/* OBJ_id_smime_aa_mlExpandHistory  1 2 840 113549 1 9 16 2 3 */
&(nid_objs[215]),/* OBJ_id_smime_aa_contentHint      1 2 840 113549 1 9 16 2 4 */
&(nid_objs[216]),/* OBJ_id_smime_aa_msgSigDigest     1 2 840 113549 1 9 16 2 5 */
&(nid_objs[217]),/* OBJ_id_smime_aa_encapContentType 1 2 840 113549 1 9 16 2 6 */
&(nid_objs[218]),/* OBJ_id_smime_aa_contentIdentifier 1 2 840 113549 1 9 16 2 7 */
&(nid_objs[219]),/* OBJ_id_smime_aa_macValue         1 2 840 113549 1 9 16 2 8 */
&(nid_objs[220]),/* OBJ_id_smime_aa_equivalentLabels 1 2 840 113549 1 9 16 2 9 */
&(nid_objs[221]),/* OBJ_id_smime_aa_contentReference 1 2 840 113549 1 9 16 2 10 */
&(nid_objs[222]),/* OBJ_id_smime_aa_encrypKeyPref    1 2 840 113549 1 9 16 2 11 */
&(nid_objs[223]),/* OBJ_id_smime_aa_signingCertificate 1 2 840 113549 1 9 16 2 12 */
&(nid_objs[224]),/* OBJ_id_smime_aa_smimeEncryptCerts 1 2 840 113549 1 9 16 2 13 */
&(nid_objs[225]),/* OBJ_id_smime_aa_timeStampToken   1 2 840 113549 1 9 16 2 14 */
&(nid_objs[226]),/* OBJ_id_smime_aa_ets_sigPolicyId  1 2 840 113549 1 9 16 2 15 */
&(nid_objs[227]),/* OBJ_id_smime_aa_ets_commitmentType 1 2 840 113549 1 9 16 2 16 */
&(nid_objs[228]),/* OBJ_id_smime_aa_ets_signerLocation 1 2 840 113549 1 9 16 2 17 */
&(nid_objs[229]),/* OBJ_id_smime_aa_ets_signerAttr   1 2 840 113549 1 9 16 2 18 */
&(nid_objs[230]),/* OBJ_id_smime_aa_ets_otherSigCert 1 2 840 113549 1 9 16 2 19 */
&(nid_objs[231]),/* OBJ_id_smime_aa_ets_contentTimestamp 1 2 840 113549 1 9 16 2 20 */
&(nid_objs[232]),/* OBJ_id_smime_aa_ets_CertificateRefs 1 2 840 113549 1 9 16 2 21 */
&(nid_objs[233]),/* OBJ_id_smime_aa_ets_RevocationRefs 1 2 840 113549 1 9 16 2 22 */
&(nid_objs[234]),/* OBJ_id_smime_aa_ets_certValues   1 2 840 113549 1 9 16 2 23 */
&(nid_objs[235]),/* OBJ_id_smime_aa_ets_revocationValues 1 2 840 113549 1 9 16 2 24 */
&(nid_objs[236]),/* OBJ_id_smime_aa_ets_escTimeStamp 1 2 840 113549 1 9 16 2 25 */
&(nid_objs[237]),/* OBJ_id_smime_aa_ets_certCRLTimestamp 1 2 840 113549 1 9 16 2 26 */
&(nid_objs[238]),/* OBJ_id_smime_aa_ets_archiveTimeStamp 1 2 840 113549 1 9 16 2 27 */
&(nid_objs[239]),/* OBJ_id_smime_aa_signatureType    1 2 840 113549 1 9 16 2 28 */
&(nid_objs[240]),/* OBJ_id_smime_aa_dvcs_dvc         1 2 840 113549 1 9 16 2 29 */
&(nid_objs[241]),/* OBJ_id_smime_alg_ESDHwith3DES    1 2 840 113549 1 9 16 3 1 */
&(nid_objs[242]),/* OBJ_id_smime_alg_ESDHwithRC2     1 2 840 113549 1 9 16 3 2 */
&(nid_objs[243]),/* OBJ_id_smime_alg_3DESwrap        1 2 840 113549 1 9 16 3 3 */
&(nid_objs[244]),/* OBJ_id_smime_alg_RC2wrap         1 2 840 113549 1 9 16 3 4 */
&(nid_objs[245]),/* OBJ_id_smime_alg_ESDH            1 2 840 113549 1 9 16 3 5 */
&(nid_objs[246]),/* OBJ_id_smime_alg_CMS3DESwrap     1 2 840 113549 1 9 16 3 6 */
&(nid_objs[247]),/* OBJ_id_smime_alg_CMSRC2wrap      1 2 840 113549 1 9 16 3 7 */
&(nid_objs[125]),/* OBJ_zlib_compression             1 2 840 113549 1 9 16 3 8 */
&(nid_objs[248]),/* OBJ_id_smime_cd_ldap             1 2 840 113549 1 9 16 4 1 */
&(nid_objs[249]),/* OBJ_id_smime_spq_ets_sqt_uri     1 2 840 113549 1 9 16 5 1 */
&(nid_objs[250]),/* OBJ_id_smime_spq_ets_sqt_unotice 1 2 840 113549 1 9 16 5 2 */
&(nid_objs[251]),/* OBJ_id_smime_cti_ets_proofOfOrigin 1 2 840 113549 1 9 16 6 1 */
&(nid_objs[252]),/* OBJ_id_smime_cti_ets_proofOfReceipt 1 2 840 113549 1 9 16 6 2 */
&(nid_objs[253]),/* OBJ_id_smime_cti_ets_proofOfDelivery 1 2 840 113549 1 9 16 6 3 */
&(nid_objs[254]),/* OBJ_id_smime_cti_ets_proofOfSender 1 2 840 113549 1 9 16 6 4 */
&(nid_objs[255]),/* OBJ_id_smime_cti_ets_proofOfApproval 1 2 840 113549 1 9 16 6 5 */
&(nid_objs[256]),/* OBJ_id_smime_cti_ets_proofOfCreation 1 2 840 113549 1 9 16 6 6 */
&(nid_objs[150]),/* OBJ_keyBag                       1 2 840 113549 1 12 10 1 1 */
&(nid_objs[151]),/* OBJ_pkcs8ShroudedKeyBag          1 2 840 113549 1 12 10 1 2 */
&(nid_objs[152]),/* OBJ_certBag                      1 2 840 113549 1 12 10 1 3 */
&(nid_objs[153]),/* OBJ_crlBag                       1 2 840 113549 1 12 10 1 4 */
&(nid_objs[154]),/* OBJ_secretBag                    1 2 840 113549 1 12 10 1 5 */
&(nid_objs[155]),/* OBJ_safeContentsBag              1 2 840 113549 1 12 10 1 6 */
&(nid_objs[34]),/* OBJ_idea_cbc                     1 3 6 1 4 1 188 7 1 1 2 */
};


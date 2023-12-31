#ifndef _CERTIFICATES_H_
#define _CERTIFICATES_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* This file is auto-generated by the pycert_bearssl tool.  Do not change it manually.
 * Certificates are BearSSL br_x509_trust_anchor format.  Included certs:
 *
 * Index:    0
 * Label:    AAA Certificate Services
 * Subject:  CN=AAA Certificate Services,O=Comodo CA Limited,L=Salford,ST=Greater Manchester,C=GB
 * Domain(s): www.iotlab-uns.com
 */

#define TAs_NUM 1

static const unsigned char TA_DN0[] = {
    0x30, 0x7b, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
    0x02, 0x47, 0x42, 0x31, 0x1b, 0x30, 0x19, 0x06, 0x03, 0x55, 0x04, 0x08,
    0x0c, 0x12, 0x47, 0x72, 0x65, 0x61, 0x74, 0x65, 0x72, 0x20, 0x4d, 0x61,
    0x6e, 0x63, 0x68, 0x65, 0x73, 0x74, 0x65, 0x72, 0x31, 0x10, 0x30, 0x0e,
    0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x53, 0x61, 0x6c, 0x66, 0x6f,
    0x72, 0x64, 0x31, 0x1a, 0x30, 0x18, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c,
    0x11, 0x43, 0x6f, 0x6d, 0x6f, 0x64, 0x6f, 0x20, 0x43, 0x41, 0x20, 0x4c,
    0x69, 0x6d, 0x69, 0x74, 0x65, 0x64, 0x31, 0x21, 0x30, 0x1f, 0x06, 0x03,
    0x55, 0x04, 0x03, 0x0c, 0x18, 0x41, 0x41, 0x41, 0x20, 0x43, 0x65, 0x72,
    0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x65, 0x20, 0x53, 0x65, 0x72,
    0x76, 0x69, 0x63, 0x65, 0x73,
};

static const unsigned char TA_RSA_N0[] = {
    0xbe, 0x40, 0x9d, 0xf4, 0x6e, 0xe1, 0xea, 0x76, 0x87, 0x1c, 0x4d, 0x45,
    0x44, 0x8e, 0xbe, 0x46, 0xc8, 0x83, 0x06, 0x9d, 0xc1, 0x2a, 0xfe, 0x18,
    0x1f, 0x8e, 0xe4, 0x02, 0xfa, 0xf3, 0xab, 0x5d, 0x50, 0x8a, 0x16, 0x31,
    0x0b, 0x9a, 0x06, 0xd0, 0xc5, 0x70, 0x22, 0xcd, 0x49, 0x2d, 0x54, 0x63,
    0xcc, 0xb6, 0x6e, 0x68, 0x46, 0x0b, 0x53, 0xea, 0xcb, 0x4c, 0x24, 0xc0,
    0xbc, 0x72, 0x4e, 0xea, 0xf1, 0x15, 0xae, 0xf4, 0x54, 0x9a, 0x12, 0x0a,
    0xc3, 0x7a, 0xb2, 0x33, 0x60, 0xe2, 0xda, 0x89, 0x55, 0xf3, 0x22, 0x58,
    0xf3, 0xde, 0xdc, 0xcf, 0xef, 0x83, 0x86, 0xa2, 0x8c, 0x94, 0x4f, 0x9f,
    0x68, 0xf2, 0x98, 0x90, 0x46, 0x84, 0x27, 0xc7, 0x76, 0xbf, 0xe3, 0xcc,
    0x35, 0x2c, 0x8b, 0x5e, 0x07, 0x64, 0x65, 0x82, 0xc0, 0x48, 0xb0, 0xa8,
    0x91, 0xf9, 0x61, 0x9f, 0x76, 0x20, 0x50, 0xa8, 0x91, 0xc7, 0x66, 0xb5,
    0xeb, 0x78, 0x62, 0x03, 0x56, 0xf0, 0x8a, 0x1a, 0x13, 0xea, 0x31, 0xa3,
    0x1e, 0xa0, 0x99, 0xfd, 0x38, 0xf6, 0xf6, 0x27, 0x32, 0x58, 0x6f, 0x07,
    0xf5, 0x6b, 0xb8, 0xfb, 0x14, 0x2b, 0xaf, 0xb7, 0xaa, 0xcc, 0xd6, 0x63,
    0x5f, 0x73, 0x8c, 0xda, 0x05, 0x99, 0xa8, 0x38, 0xa8, 0xcb, 0x17, 0x78,
    0x36, 0x51, 0xac, 0xe9, 0x9e, 0xf4, 0x78, 0x3a, 0x8d, 0xcf, 0x0f, 0xd9,
    0x42, 0xe2, 0x98, 0x0c, 0xab, 0x2f, 0x9f, 0x0e, 0x01, 0xde, 0xef, 0x9f,
    0x99, 0x49, 0xf1, 0x2d, 0xdf, 0xac, 0x74, 0x4d, 0x1b, 0x98, 0xb5, 0x47,
    0xc5, 0xe5, 0x29, 0xd1, 0xf9, 0x90, 0x18, 0xc7, 0x62, 0x9c, 0xbe, 0x83,
    0xc7, 0x26, 0x7b, 0x3e, 0x8a, 0x25, 0xc7, 0xc0, 0xdd, 0x9d, 0xe6, 0x35,
    0x68, 0x10, 0x20, 0x9d, 0x8f, 0xd8, 0xde, 0xd2, 0xc3, 0x84, 0x9c, 0x0d,
    0x5e, 0xe8, 0x2f, 0xc9,
};

static const unsigned char TA_RSA_E0[] = {
    0x01, 0x00, 0x01,
};

static const br_x509_trust_anchor TAs[] = {
    {
        { (unsigned char *)TA_DN0, sizeof TA_DN0 },
        BR_X509_TA_CA,
        {
            BR_KEYTYPE_RSA,
            { .rsa = {
                (unsigned char *)TA_RSA_N0, sizeof TA_RSA_N0,
                (unsigned char *)TA_RSA_E0, sizeof TA_RSA_E0,
            } }
        }
    },
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* ifndef _CERTIFICATES_H_ */

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
 * Label:    Amazon Root CA 1
 * Subject:  CN=Amazon Root CA 1,O=Amazon,C=US
 */

#define TAs_NUM 1

static const unsigned char TA_DN0[] = {
    0x30, 0x39, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
    0x02, 0x55, 0x53, 0x31, 0x0f, 0x30, 0x0d, 0x06, 0x03, 0x55, 0x04, 0x0a,
    0x13, 0x06, 0x41, 0x6d, 0x61, 0x7a, 0x6f, 0x6e, 0x31, 0x19, 0x30, 0x17,
    0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41, 0x6d, 0x61, 0x7a, 0x6f,
    0x6e, 0x20, 0x52, 0x6f, 0x6f, 0x74, 0x20, 0x43, 0x41, 0x20, 0x31,
};

static const unsigned char TA_RSA_N0[] = {
    0xb2, 0x78, 0x80, 0x71, 0xca, 0x78, 0xd5, 0xe3, 0x71, 0xaf, 0x47, 0x80,
    0x50, 0x74, 0x7d, 0x6e, 0xd8, 0xd7, 0x88, 0x76, 0xf4, 0x99, 0x68, 0xf7,
    0x58, 0x21, 0x60, 0xf9, 0x74, 0x84, 0x01, 0x2f, 0xac, 0x02, 0x2d, 0x86,
    0xd3, 0xa0, 0x43, 0x7a, 0x4e, 0xb2, 0xa4, 0xd0, 0x36, 0xba, 0x01, 0xbe,
    0x8d, 0xdb, 0x48, 0xc8, 0x07, 0x17, 0x36, 0x4c, 0xf4, 0xee, 0x88, 0x23,
    0xc7, 0x3e, 0xeb, 0x37, 0xf5, 0xb5, 0x19, 0xf8, 0x49, 0x68, 0xb0, 0xde,
    0xd7, 0xb9, 0x76, 0x38, 0x1d, 0x61, 0x9e, 0xa4, 0xfe, 0x82, 0x36, 0xa5,
    0xe5, 0x4a, 0x56, 0xe4, 0x45, 0xe1, 0xf9, 0xfd, 0xb4, 0x16, 0xfa, 0x74,
    0xda, 0x9c, 0x9b, 0x35, 0x39, 0x2f, 0xfa, 0xb0, 0x20, 0x50, 0x06, 0x6c,
    0x7a, 0xd0, 0x80, 0xb2, 0xa6, 0xf9, 0xaf, 0xec, 0x47, 0x19, 0x8f, 0x50,
    0x38, 0x07, 0xdc, 0xa2, 0x87, 0x39, 0x58, 0xf8, 0xba, 0xd5, 0xa9, 0xf9,
    0x48, 0x67, 0x30, 0x96, 0xee, 0x94, 0x78, 0x5e, 0x6f, 0x89, 0xa3, 0x51,
    0xc0, 0x30, 0x86, 0x66, 0xa1, 0x45, 0x66, 0xba, 0x54, 0xeb, 0xa3, 0xc3,
    0x91, 0xf9, 0x48, 0xdc, 0xff, 0xd1, 0xe8, 0x30, 0x2d, 0x7d, 0x2d, 0x74,
    0x70, 0x35, 0xd7, 0x88, 0x24, 0xf7, 0x9e, 0xc4, 0x59, 0x6e, 0xbb, 0x73,
    0x87, 0x17, 0xf2, 0x32, 0x46, 0x28, 0xb8, 0x43, 0xfa, 0xb7, 0x1d, 0xaa,
    0xca, 0xb4, 0xf2, 0x9f, 0x24, 0x0e, 0x2d, 0x4b, 0xf7, 0x71, 0x5c, 0x5e,
    0x69, 0xff, 0xea, 0x95, 0x02, 0xcb, 0x38, 0x8a, 0xae, 0x50, 0x38, 0x6f,
    0xdb, 0xfb, 0x2d, 0x62, 0x1b, 0xc5, 0xc7, 0x1e, 0x54, 0xe1, 0x77, 0xe0,
    0x67, 0xc8, 0x0f, 0x9c, 0x87, 0x23, 0xd6, 0x3f, 0x40, 0x20, 0x7f, 0x20,
    0x80, 0xc4, 0x80, 0x4c, 0x3e, 0x3b, 0x24, 0x26, 0x8e, 0x04, 0xae, 0x6c,
    0x9a, 0xc8, 0xaa, 0x0d,
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

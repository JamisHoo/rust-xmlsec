//
// xmlsec1 headers include
//
#define XMLSEC_NO_CRYPTO_DYNAMIC_LOADING
#undef XMLSEC_CRYPTO_DYNAMIC_LOADING
#define XMLSEC_CRYPTO_OPENSSL

#include <xmlsec/app.h>
#include <xmlsec/crypto.h>
#include <xmlsec/keys.h>
#include <xmlsec/templates.h>
#include <xmlsec/transforms.h>
#include <xmlsec/xmldsig.h>
#include <xmlsec/xmlsec.h>
#include <xmlsec/xmltree.h>

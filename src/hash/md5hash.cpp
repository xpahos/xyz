//
// Created by Alexander Gryanko on 12/12/2015.
//


#include "hash.h"

const std::string TMD5Sum::hash(const std::string& content) {
    unsigned char md5Sum[MD5_DIGEST_LENGTH];
    char md5String[33];

    MD5_CTX ctx;

    MD5_Init(&ctx);
    MD5_Update(&ctx, content.c_str(), content.length());

    MD5_Final(md5Sum, &ctx);

    for (int n = 0; n < MD5_DIGEST_LENGTH; n++)
        snprintf(&md5String[n * 2], MD5_DIGEST_LENGTH * 2, "%02x", (unsigned int) md5Sum[n]);

    return std::string(md5String, 32, '\0');
}
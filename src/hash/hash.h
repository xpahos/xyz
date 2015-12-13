//
// Created by Alexander Gryanko on 12/12/2015.
//

#ifndef CAUTH_HASH_H
#define CAUTH_HASH_H

#include <openssl/md5.h>
#include <string>

class THashSum {
public:
    THashSum() { };
    THashSum(const THashSum& ) = delete;

    virtual const std::string hash(const std::string&) = 0;
};

class TMD5Sum: public THashSum {
public:
    virtual const std::string hash(const std::string&);
};

#endif //CAUTH_HASH_H

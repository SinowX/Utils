#ifndef UTILS_H
#define UTILS_H

// Json <=> String 
#ifdef USE_JSON
#include<iostream>
#include<json/json.h>
class JSON
{
    public:
    std::string json2str(Json::Value root);
    Json::Value str2json(std::string str)
}
#endif


#endif
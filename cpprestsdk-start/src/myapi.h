//
// Created by gsol27 on 25/08/23.
//
#ifndef UNTITLED_2508_01_MYAPI_H
#define UNTITLED_2508_01_MYAPI_H

#include "cpprest/http_listener.h"
#include "cpprest/json.h"

using namespace web;
using namespace http;
using namespace utility;
using namespace http::experimental::listener;

namespace MyApi {

    void getProcessorApi(const http_request& httpRequest);

}

#endif //UNTITLED_2508_01_MYAPI_H

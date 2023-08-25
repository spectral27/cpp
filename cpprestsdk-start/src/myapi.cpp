//
// Created by gsol27 on 25/08/23.
//
#include "myapi.h"

namespace MyApi {

    void getProcessorApi(const http_request& httpRequest) {
        json::value processorJson;
        processorJson[U("name")] = json::value::string(U("i7-1165-G7"));
        httpRequest.reply(status_codes::OK, processorJson);
    }

}

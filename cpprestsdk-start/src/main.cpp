#include <iostream>

#include <cpprest/http_listener.h>
#include <cpprest/json.h>
#include "myapi.h"

using namespace web;
using namespace http;
using namespace utility;
using namespace http::experimental::listener;

int main() {
    http_listener listener(U("http://localhost:8080"));
    listener.support(methods::GET, MyApi::getProcessorApi);
    try {
        listener.open().wait();
        std::getchar();
        listener.close().wait();
    } catch (const std::exception& e) {
        std::wcerr << e.what() << std::endl;
    }
    return 0;
}

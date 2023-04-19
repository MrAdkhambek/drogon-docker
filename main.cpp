#include <json/json.h>
#include <drogon/drogon.h>
#include <drogon/HttpController.h>

class SayHello : public drogon::HttpController<SayHello> {
public:
    METHOD_LIST_BEGIN
        METHOD_ADD(SayHello::genericHello, "/");
    METHOD_LIST_END

protected:
    static auto genericHello(drogon::HttpRequestPtr req) -> drogon::Task<drogon::HttpResponsePtr> {
        Json::Value root;
        root["success"] = true;

        auto resp = drogon::HttpResponse::newHttpJsonResponse(root);
        resp->setStatusCode(drogon::HttpStatusCode::k200OK);
        co_return resp;
    };
};

int main() {
    LOG_INFO << "Server running on http://127.0.0.1:8080";
    drogon::app().addListener("127.0.0.1", 8080).run();
    return 0;
}

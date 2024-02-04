#include <httplib.h>

int main() {
    httplib::Server server;

    server.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        while (true) {
        res.set_content("Hello, World!", "text/plain");
        }
    });

    server.Get("/greet", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Greetings!", "text/plain");
    });

    server.listen("localhost", 8080);

    return 0;
}


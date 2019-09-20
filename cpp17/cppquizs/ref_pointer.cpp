
#include <iostream>
#include <string>
struct Req {
    int data;
    std::string name;
};

void f(Req const& rReq);
void f2(Req* pReq);

int main()
{
    Req req;
    req.data = 3;
    req.name = "JC";

    Req& reff = req;

    f(req);
    f2(&reff);

    f(req);

    return 0;
}

void f2(Req* pReq)
{
    std::cout << "f2 is called\n";
    pReq->data = 33;
    pReq->name = "JJJJCCCC";
    std::cout << pReq->data;
    std::cout << pReq->name;
    std::cout << std::endl;
}
void f(Req const& rReq)
{
    std::cout << "f is called" << std::endl;
    std::cout << rReq.data;
    std::cout << rReq.name;
    std::cout << std::endl;
}

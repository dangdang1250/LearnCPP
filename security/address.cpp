#include <string>

int main()
{
    const char *names[] = {"Bob", "Fred"};
    std::string last_arg = names[3]; // compile won't give warning
    return last_arg.size();
}
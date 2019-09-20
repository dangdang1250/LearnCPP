#include <string>

// Never Return a Reference or Pointer to a Local Object
// One good way to ensure that the return is safe is to ask:
// To what preexisting object is the reference referring?
std::string const& manip()
{
    std::string ret;
    // transform ret in some way
    if (!ret.empty)
    {
        return ret; // WRONG: returning a reference to a local object
    }
    else
    {
        return "Empty"; // WRONG: "Empty" is a local temporary string
    }
}

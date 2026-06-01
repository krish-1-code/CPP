//Here we'll be studying typedef and using keyword:
// typedef is kinda like giving a special nickname to the existing datatype:

#include<iostream> 
int main() {

    typedef std::string string;
    //so now instead of std::string we can just use the string keyword.

    string name = "Krish";

    std::cout<<name<<'\n';

    // but typedef is kinda old and we are mostly using the 'using '
    // keyword.

    using i = int;

    i age = 21;

    std::cout<<age<<'\n';

    return 0;
}

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "editor.h"

TEST_CASE("Testing removeWhiteSpaces")
{
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
    CHECK(removeLeadingSpaces("   for(int i = 0") == "for(int i = 0");
}

TEST_CASE("Testing countChar")
{
    CHECK(countChar("for(int i }}", '}') == 2);
    CHECK(countChar("int main(){}", '{') == 1);
}
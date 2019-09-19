#define CATCH_CONFIG_MAIN

#include<sstream>

#include "catch/catch.hpp"
#include "../Search.hpp"

TEST_CASE("Search Class")
{
  Search s;
  int a[s.MAX];
  s.fillArray(a, s.MAX);
  REQUIRE(s.seqSearch(a,s.MAX,90)==12);
  REQUIRE(s.show(a,s.MAX) == "83 86 77 15 93 35 86 92 49 21 62 27 90 59 63 26 40 26 72 36 ");
  s.sort(a,s.MAX);
  REQUIRE(s.show(a,s.MAX) == "15 21 26 26 27 35 36 40 49 59 62 63 72 77 83 86 86 90 92 93 ");
  REQUIRE(s.rbinarySearch(a,0,s.MAX,90) == 17);
  REQUIRE(s.ibinarySearch(a,s.MAX,90) == 17);
}

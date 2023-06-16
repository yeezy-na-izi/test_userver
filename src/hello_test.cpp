#include "hello.hpp"

#include <userver/utest/utest.hpp>

UTEST(SayHelloTo, Basic) {
  EXPECT_EQ(test_userver::SayHelloTo("Developer"), "Hello, Developer!\n");
  EXPECT_EQ(test_userver::SayHelloTo({}), "Hello, unknown user!\n");
}

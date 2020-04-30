#include "solver.hpp"
#include "doctest.h"

TEST_CASE("for test") {
    solver::ComplexVariable t;
    for (int i = 0; i <= 100; i++) 
    {
     CHECK(solver::solve(4*x-8==2));
    }
}
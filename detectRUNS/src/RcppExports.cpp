// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// timesTwo
int timesTwo(int x);
RcppExport SEXP detectRUNS_timesTwo(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    __result = Rcpp::wrap(timesTwo(x));
    return __result;
END_RCPP
}

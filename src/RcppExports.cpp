// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clean_nonmem
std::string clean_nonmem(std::vector<std::string> x, std::string sep);
RcppExport SEXP PKPDmisc_clean_nonmem(SEXP xSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    __result = Rcpp::wrap(clean_nonmem(x, sep));
    return __result;
END_RCPP
}
// replace_chars
std::vector<std::string> replace_chars(std::vector<std::string> strings, std::vector<std::string> values, std::vector<std::string> replacement);
RcppExport SEXP PKPDmisc_replace_chars(SEXP stringsSEXP, SEXP valuesSEXP, SEXP replacementSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type replacement(replacementSEXP);
    __result = Rcpp::wrap(replace_chars(strings, values, replacement));
    return __result;
END_RCPP
}
// replace_spaces
std::string replace_spaces(std::vector<std::string> x);
RcppExport SEXP PKPDmisc_replace_spaces(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    __result = Rcpp::wrap(replace_spaces(x));
    return __result;
END_RCPP
}
// set_bins_cpp
NumericVector set_bins_cpp(NumericVector x, NumericVector left, NumericVector right);
RcppExport SEXP PKPDmisc_set_bins_cpp(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type left(leftSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type right(rightSEXP);
    __result = Rcpp::wrap(set_bins_cpp(x, left, right));
    return __result;
END_RCPP
}

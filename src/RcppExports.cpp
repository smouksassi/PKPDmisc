// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// auc_partial_cpp
double auc_partial_cpp(NumericVector time, NumericVector dv, NumericVector range);
RcppExport SEXP PKPDmisc_auc_partial_cpp(SEXP timeSEXP, SEXP dvSEXP, SEXP rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dv(dvSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type range(rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(auc_partial_cpp(time, dv, range));
    return rcpp_result_gen;
END_RCPP
}
// clean_nonmem
std::string clean_nonmem(std::vector<std::string> x, std::string sep, std::string colname);
RcppExport SEXP PKPDmisc_clean_nonmem(SEXP xSEXP, SEXP sepSEXP, SEXP colnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type sep(sepSEXP);
    Rcpp::traits::input_parameter< std::string >::type colname(colnameSEXP);
    rcpp_result_gen = Rcpp::wrap(clean_nonmem(x, sep, colname));
    return rcpp_result_gen;
END_RCPP
}
// fill_backward
NumericVector fill_backward(NumericVector x);
RcppExport SEXP PKPDmisc_fill_backward(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_backward(x));
    return rcpp_result_gen;
END_RCPP
}
// fill_forward
NumericVector fill_forward(NumericVector x);
RcppExport SEXP PKPDmisc_fill_forward(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_forward(x));
    return rcpp_result_gen;
END_RCPP
}
// min_through
NumericVector min_through(NumericVector x);
RcppExport SEXP PKPDmisc_min_through(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(min_through(x));
    return rcpp_result_gen;
END_RCPP
}
// max_through
NumericVector max_through(NumericVector x);
RcppExport SEXP PKPDmisc_max_through(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(max_through(x));
    return rcpp_result_gen;
END_RCPP
}
// padLeft
std::vector< std::string > padLeft(std::vector< std::string > strings, int numChars, std::string paddingChar);
RcppExport SEXP PKPDmisc_padLeft(SEXP stringsSEXP, SEXP numCharsSEXP, SEXP paddingCharSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< int >::type numChars(numCharsSEXP);
    Rcpp::traits::input_parameter< std::string >::type paddingChar(paddingCharSEXP);
    rcpp_result_gen = Rcpp::wrap(padLeft(strings, numChars, paddingChar));
    return rcpp_result_gen;
END_RCPP
}
// replace_chars
std::vector<std::string> replace_chars(std::vector<std::string> strings, std::vector<std::string> values, std::vector<std::string> replacement);
RcppExport SEXP PKPDmisc_replace_chars(SEXP stringsSEXP, SEXP valuesSEXP, SEXP replacementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type replacement(replacementSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_chars(strings, values, replacement));
    return rcpp_result_gen;
END_RCPP
}
// replace_spaces
std::string replace_spaces(std::vector<std::string> x);
RcppExport SEXP PKPDmisc_replace_spaces(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_spaces(x));
    return rcpp_result_gen;
END_RCPP
}
// set_bins_cpp
IntegerVector set_bins_cpp(NumericVector x, NumericVector left, NumericVector right);
RcppExport SEXP PKPDmisc_set_bins_cpp(SEXP xSEXP, SEXP leftSEXP, SEXP rightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type left(leftSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type right(rightSEXP);
    rcpp_result_gen = Rcpp::wrap(set_bins_cpp(x, left, right));
    return rcpp_result_gen;
END_RCPP
}

// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fastReg
List fastReg(NumericVector y, NumericMatrix x, NumericVector w);
RcppExport SEXP MatchItSE_fastReg(SEXP ySEXP, SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(fastReg(y, x, w));
    return rcpp_result_gen;
END_RCPP
}
// cppKMsqSum
double cppKMsqSum(CharacterMatrix m, CharacterVector c, NumericVector w);
RcppExport SEXP MatchItSE_cppKMsqSum(SEXP mSEXP, SEXP cSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(cppKMsqSum(m, c, w));
    return rcpp_result_gen;
END_RCPP
}
// cppWeightedBootstrap
NumericVector cppWeightedBootstrap(NumericVector Ys, IntegerVector ts, NumericVector ws, int Ns, int MaxIter);
RcppExport SEXP MatchItSE_cppWeightedBootstrap(SEXP YsSEXP, SEXP tsSEXP, SEXP wsSEXP, SEXP NsSEXP, SEXP MaxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Ys(YsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ts(tsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< int >::type Ns(NsSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIter(MaxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(cppWeightedBootstrap(Ys, ts, ws, Ns, MaxIter));
    return rcpp_result_gen;
END_RCPP
}
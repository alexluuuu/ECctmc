// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sample_path_mr
arma::mat sample_path_mr(const int a, const int b, const double t0, const double t1, const Rcpp::NumericMatrix Q);
RcppExport SEXP ECctmc_sample_path_mr(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type Q(QSEXP);
    __result = Rcpp::wrap(sample_path_mr(a, b, t0, t1, Q));
    return __result;
END_RCPP
}
// sample_path_unif
arma::mat sample_path_unif(const int a, const int b, const double t0, const double t1, const arma::mat Q);
RcppExport SEXP ECctmc_sample_path_unif(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    __result = Rcpp::wrap(sample_path_unif(a, b, t0, t1, Q));
    return __result;
END_RCPP
}
// sample_path_unif2
arma::mat sample_path_unif2(const int a, const int b, const double t0, const double t1, const arma::mat Q, const arma::vec eigen_vals, const arma::mat eigen_vecs, const arma::mat inverse_vecs);
RcppExport SEXP ECctmc_sample_path_unif2(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP eigen_valsSEXP, SEXP eigen_vecsSEXP, SEXP inverse_vecsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type eigen_vals(eigen_valsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type eigen_vecs(eigen_vecsSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type inverse_vecs(inverse_vecsSEXP);
    __result = Rcpp::wrap(sample_path_unif2(a, b, t0, t1, Q, eigen_vals, eigen_vecs, inverse_vecs));
    return __result;
END_RCPP
}

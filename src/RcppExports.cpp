// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>
#include "tree.h"

using namespace Rcpp;

// predict_tree
// Rcpp::List predict_tree(Rcpp::List trees, arma::mat Xnew);
// RcppExport SEXP _XBART_predict_tree(SEXP treesSEXP, SEXP XnewSEXP) {
// BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter< Rcpp::List >::type trees(treesSEXP);
//     Rcpp::traits::input_parameter< arma::mat >::type Xnew(XnewSEXP);
//     rcpp_result_gen = Rcpp::wrap(predict_tree(trees, Xnew));
//     return rcpp_result_gen;
// END_RCPP
// }

// predict_tree_std
// Rcpp::List predict_tree_std(Rcpp::List trees, Rcpp::NumericMatrix Xnew);
// RcppExport SEXP _XBART_predict_tree_std(SEXP treesSEXP, SEXP XnewSEXP) {
// BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter< Rcpp::List >::type trees(treesSEXP);
//     Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xnew(XnewSEXP);
//     rcpp_result_gen = Rcpp::wrap(predict_tree_std(trees, Xnew));
//     return rcpp_result_gen;
// END_RCPP
// }

// // sample_int_ccrank
// std::vector<double> sample_int_ccrank(int n, int size, std::vector<double> prob);
// RcppExport SEXP _XBART_sample_int_ccrank(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP)
// {
//     BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter<int>::type n(nSEXP);
//     Rcpp::traits::input_parameter<int>::type size(sizeSEXP);
//     Rcpp::traits::input_parameter<std::vector<double>>::type prob(probSEXP);
//     rcpp_result_gen = Rcpp::wrap(sample_int_ccrank(n, size, prob));
//     return rcpp_result_gen;
//     END_RCPP
// }

// train_forest_root_std_all
// Rcpp::List train_forest_root_std_all(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, arma::mat max_depth_num, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed);
// RcppExport SEXP _XBART_train_forest_root_std_all(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depth_numSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP)
// {
//     BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
//     Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
//     Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
//     Rcpp::traits::input_parameter<size_t>::type num_trees(num_treesSEXP);
//     Rcpp::traits::input_parameter<size_t>::type num_sweeps(num_sweepsSEXP);
//     Rcpp::traits::input_parameter<arma::mat>::type max_depth_num(max_depth_numSEXP);
//     Rcpp::traits::input_parameter<size_t>::type n_min(n_minSEXP);
//     Rcpp::traits::input_parameter<size_t>::type num_cutpoints(num_cutpointsSEXP);
//     Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
//     Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
//     Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
//     Rcpp::traits::input_parameter<double>::type no_split_penality(no_split_penalitySEXP);
//     Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
//     Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
//     Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
//     Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
//     Rcpp::traits::input_parameter<double>::type s(sSEXP);
//     Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
//     Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
//     Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
//     Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
//     rcpp_result_gen = Rcpp::wrap(train_forest_root_std_all(y, X, Xtest, num_trees, num_sweeps, max_depth_num, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed));
//     return rcpp_result_gen;
//     END_RCPP
// }


Rcpp::List XBART(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, arma::mat max_depth_num, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed);
RcppExport SEXP _XBART(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depth_numSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type max_depth_num(max_depth_numSEXP);
    Rcpp::traits::input_parameter<size_t>::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
    Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
    Rcpp::traits::input_parameter<double>::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
    Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
    Rcpp::traits::input_parameter<double>::type s(sSEXP);
    Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART(y, X, Xtest, num_trees, num_sweeps, max_depth_num, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed));
    return rcpp_result_gen;
    END_RCPP
}

Rcpp::List xbart_predict(arma::mat X, double y_mean, Rcpp::XPtr<std::vector<std::vector<tree>>> tree_pnt);
RcppExport SEXP _xbart_predict(SEXP XSEXP, SEXP y_meanSEXP, SEXP tree_pntSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<double>::type y_mean(y_meanSEXP);
    Rcpp::traits::input_parameter<Rcpp::XPtr<std::vector<std::vector<tree>>>>::type tree_pnt(tree_pntSEXP);
    rcpp_result_gen = Rcpp::wrap(xbart_predict(X, y_mean, tree_pnt));
    return rcpp_result_gen;
    END_RCPP
}

Rcpp::List XBART_CLT(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, arma::mat max_depth_num, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed, bool sample_weights_flag);
RcppExport SEXP _XBART_CLT(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depth_numSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP, SEXP sample_weights_flagSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type max_depth_num(max_depth_numSEXP);
    Rcpp::traits::input_parameter<size_t>::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
    Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
    Rcpp::traits::input_parameter<double>::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
    Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
    Rcpp::traits::input_parameter<double>::type s(sSEXP);
    Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter<bool>::type sample_weights_flag(sample_weights_flagSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_CLT(y, X, Xtest, num_trees, num_sweeps, max_depth_num, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed, sample_weights_flag));
    return rcpp_result_gen;
    END_RCPP
}

Rcpp::List XBART_Probit(arma::mat y, arma::mat X, arma::mat Xtest, size_t num_trees, size_t num_sweeps, arma::mat max_depth_num, size_t n_min, size_t num_cutpoints, double alpha, double beta, double tau, double no_split_penality, size_t burnin, size_t mtry, size_t p_categorical, double kap, double s, bool verbose, bool parallel, bool set_random_seed, size_t random_seed);
RcppExport SEXP _XBART_Probit(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP num_treesSEXP, SEXP num_sweepsSEXP, SEXP max_depth_numSEXP, SEXP n_minSEXP, SEXP num_cutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP no_split_penalitySEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_sweeps(num_sweepsSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type max_depth_num(max_depth_numSEXP);
    Rcpp::traits::input_parameter<size_t>::type n_min(n_minSEXP);
    Rcpp::traits::input_parameter<size_t>::type num_cutpoints(num_cutpointsSEXP);
    Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
    Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
    Rcpp::traits::input_parameter<double>::type no_split_penality(no_split_penalitySEXP);
    Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
    Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
    Rcpp::traits::input_parameter<double>::type s(sSEXP);
    Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART_Probit(y, X, Xtest, num_trees, num_sweeps, max_depth_num, n_min, num_cutpoints, alpha, beta, tau, no_split_penality, burnin, mtry, p_categorical, kap, s, verbose, parallel, set_random_seed, random_seed));
    return rcpp_result_gen;
    END_RCPP
}

Rcpp::List json_to_r(Rcpp::StringVector json_string_r);
RcppExport SEXP _json_to_r(SEXP json_string_rSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<Rcpp::StringVector>::type json_string_r(json_string_rSEXP);
    rcpp_result_gen = Rcpp::wrap(json_to_r(json_string_r));
    return rcpp_result_gen;
    END_RCPP
}

Rcpp::StringVector r_to_json(double y_mean, Rcpp::XPtr<std::vector<std::vector<tree>>> tree_pnt);
RcppExport SEXP _r_to_json(SEXP y_meanSEXP, SEXP tree_pntSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<double>::type y_mean(y_meanSEXP);
    Rcpp::traits::input_parameter<Rcpp::XPtr<std::vector<std::vector<tree>>>>::type tree_pnt(tree_pntSEXP);
    rcpp_result_gen = Rcpp::wrap(r_to_json(y_mean, tree_pnt));
    return rcpp_result_gen;
    END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    // {"_XBART_sample_int_ccrank", (DL_FUNC)&_XBART_sample_int_ccrank, 3},
    // {"_XBART_train_forest_root_std_all", (DL_FUNC)&_XBART_train_forest_root_std_all, 21},
    {"_XBART", (DL_FUNC)&_XBART, 21},
    {"_XBART_CLT", (DL_FUNC)&_XBART_CLT, 22},
    {"_XBART_Probit", (DL_FUNC)&_XBART_Probit, 21},
    {"_xbart_predict", (DL_FUNC)&_xbart_predict, 3},
    {"_json_to_r", (DL_FUNC)&_json_to_r, 1},
    {"_r_to_json", (DL_FUNC)&_r_to_json, 2},

    {NULL, NULL, 0}};

RcppExport void R_init_XBART(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
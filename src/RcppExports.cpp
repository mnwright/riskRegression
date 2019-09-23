// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// AUCijFun
NumericMatrix AUCijFun(NumericVector riskCase, NumericVector riskControl);
RcppExport SEXP _riskRegression_AUCijFun(SEXP riskCaseSEXP, SEXP riskControlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type riskCase(riskCaseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type riskControl(riskControlSEXP);
    rcpp_result_gen = Rcpp::wrap(AUCijFun(riskCase, riskControl));
    return rcpp_result_gen;
END_RCPP
}
// baseHaz_cpp
List baseHaz_cpp(const NumericVector& starttimes, const NumericVector& stoptimes, const IntegerVector& status, const NumericVector& eXb, const IntegerVector& strata, const std::vector<double>& predtimes, const NumericVector& emaxtimes, int nPatients, int nStrata, int cause, bool Efron);
RcppExport SEXP _riskRegression_baseHaz_cpp(SEXP starttimesSEXP, SEXP stoptimesSEXP, SEXP statusSEXP, SEXP eXbSEXP, SEXP strataSEXP, SEXP predtimesSEXP, SEXP emaxtimesSEXP, SEXP nPatientsSEXP, SEXP nStrataSEXP, SEXP causeSEXP, SEXP EfronSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type starttimes(starttimesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type stoptimes(stoptimesSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type status(statusSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type eXb(eXbSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type predtimes(predtimesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type emaxtimes(emaxtimesSEXP);
    Rcpp::traits::input_parameter< int >::type nPatients(nPatientsSEXP);
    Rcpp::traits::input_parameter< int >::type nStrata(nStrataSEXP);
    Rcpp::traits::input_parameter< int >::type cause(causeSEXP);
    Rcpp::traits::input_parameter< bool >::type Efron(EfronSEXP);
    rcpp_result_gen = Rcpp::wrap(baseHaz_cpp(starttimes, stoptimes, status, eXb, strata, predtimes, emaxtimes, nPatients, nStrata, cause, Efron));
    return rcpp_result_gen;
END_RCPP
}
// calcSeHazard_cpp
List calcSeHazard_cpp(const NumericVector& seqTau, const IntegerVector& indexTau, const IntegerVector& indexJump, const arma::mat& IFbeta, const arma::mat& cumEhazard0, const NumericVector& iS0, const NumericVector& cumhazard_iS0, const NumericVector& newEXb, const NumericVector& sampleEXb, const arma::mat& X, const LogicalVector& sameStrata, const NumericVector& sampleTime, const NumericVector& cumhazard0, const arma::mat& newSurvival, double firstJumpTime, double lastSampleTime, int nTau, int nNewObs, int nSample, int p, bool exportSE, bool exportIF, bool exportIFsum_cumhazard, bool exportIFsum_survival);
RcppExport SEXP _riskRegression_calcSeHazard_cpp(SEXP seqTauSEXP, SEXP indexTauSEXP, SEXP indexJumpSEXP, SEXP IFbetaSEXP, SEXP cumEhazard0SEXP, SEXP iS0SEXP, SEXP cumhazard_iS0SEXP, SEXP newEXbSEXP, SEXP sampleEXbSEXP, SEXP XSEXP, SEXP sameStrataSEXP, SEXP sampleTimeSEXP, SEXP cumhazard0SEXP, SEXP newSurvivalSEXP, SEXP firstJumpTimeSEXP, SEXP lastSampleTimeSEXP, SEXP nTauSEXP, SEXP nNewObsSEXP, SEXP nSampleSEXP, SEXP pSEXP, SEXP exportSESEXP, SEXP exportIFSEXP, SEXP exportIFsum_cumhazardSEXP, SEXP exportIFsum_survivalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type seqTau(seqTauSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indexTau(indexTauSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type indexJump(indexJumpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type IFbeta(IFbetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type cumEhazard0(cumEhazard0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type iS0(iS0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type cumhazard_iS0(cumhazard_iS0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newEXb(newEXbSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sampleEXb(sampleEXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type sameStrata(sameStrataSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sampleTime(sampleTimeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type cumhazard0(cumhazard0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type newSurvival(newSurvivalSEXP);
    Rcpp::traits::input_parameter< double >::type firstJumpTime(firstJumpTimeSEXP);
    Rcpp::traits::input_parameter< double >::type lastSampleTime(lastSampleTimeSEXP);
    Rcpp::traits::input_parameter< int >::type nTau(nTauSEXP);
    Rcpp::traits::input_parameter< int >::type nNewObs(nNewObsSEXP);
    Rcpp::traits::input_parameter< int >::type nSample(nSampleSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type exportSE(exportSESEXP);
    Rcpp::traits::input_parameter< bool >::type exportIF(exportIFSEXP);
    Rcpp::traits::input_parameter< bool >::type exportIFsum_cumhazard(exportIFsum_cumhazardSEXP);
    Rcpp::traits::input_parameter< bool >::type exportIFsum_survival(exportIFsum_survivalSEXP);
    rcpp_result_gen = Rcpp::wrap(calcSeHazard_cpp(seqTau, indexTau, indexJump, IFbeta, cumEhazard0, iS0, cumhazard_iS0, newEXb, sampleEXb, X, sameStrata, sampleTime, cumhazard0, newSurvival, firstJumpTime, lastSampleTime, nTau, nNewObs, nSample, p, exportSE, exportIF, exportIFsum_cumhazard, exportIFsum_survival));
    return rcpp_result_gen;
END_RCPP
}
// calcAIFsurv_cpp
std::vector< std::vector<arma::mat> > calcAIFsurv_cpp(const std::vector<arma::mat>& ls_IFcumhazard, const arma::mat& IFbeta, const std::vector<arma::rowvec>& cumhazard0, const arma::mat& survival, const arma::colvec& eXb, const arma::mat& X, const NumericVector& prevStrata, const std::vector<arma::uvec>& ls_indexStrata, const std::vector<arma::mat>& factor, int nTimes, int nObs, int nStrata, int nVar, int diag, bool exportCumHazard, bool exportSurvival);
RcppExport SEXP _riskRegression_calcAIFsurv_cpp(SEXP ls_IFcumhazardSEXP, SEXP IFbetaSEXP, SEXP cumhazard0SEXP, SEXP survivalSEXP, SEXP eXbSEXP, SEXP XSEXP, SEXP prevStrataSEXP, SEXP ls_indexStrataSEXP, SEXP factorSEXP, SEXP nTimesSEXP, SEXP nObsSEXP, SEXP nStrataSEXP, SEXP nVarSEXP, SEXP diagSEXP, SEXP exportCumHazardSEXP, SEXP exportSurvivalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<arma::mat>& >::type ls_IFcumhazard(ls_IFcumhazardSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type IFbeta(IFbetaSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::rowvec>& >::type cumhazard0(cumhazard0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type survival(survivalSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type eXb(eXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type prevStrata(prevStrataSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::uvec>& >::type ls_indexStrata(ls_indexStrataSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::mat>& >::type factor(factorSEXP);
    Rcpp::traits::input_parameter< int >::type nTimes(nTimesSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< int >::type nStrata(nStrataSEXP);
    Rcpp::traits::input_parameter< int >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< int >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< bool >::type exportCumHazard(exportCumHazardSEXP);
    Rcpp::traits::input_parameter< bool >::type exportSurvival(exportSurvivalSEXP);
    rcpp_result_gen = Rcpp::wrap(calcAIFsurv_cpp(ls_IFcumhazard, IFbeta, cumhazard0, survival, eXb, X, prevStrata, ls_indexStrata, factor, nTimes, nObs, nStrata, nVar, diag, exportCumHazard, exportSurvival));
    return rcpp_result_gen;
END_RCPP
}
// calcSeCif_cpp
List calcSeCif_cpp(const NumericVector& seqTau, const NumericVector& jumpTime, const LogicalVector& jumpTheCause, const arma::mat& indexJump, const arma::mat& indexSample, const std::vector< arma::mat >& IFbeta, const std::vector< arma::mat >& Ehazard0, const std::vector< arma::mat >& cumEhazard0, const arma::mat& iS0, const std::vector< NumericVector >& cumhazard_iS0, const std::vector< NumericVector >& hazard_iS0, const arma::mat& newEXb, const arma::mat& sampleEXb, const std::vector< arma::mat >& X, const arma::mat sameStrata, const NumericVector& sampleTime, const std::vector< NumericVector>& hazard0, const std::vector< NumericVector>& cumhazard0, int theCause, double firstJumpTime, double lastSampleTime, int nTau, int nJump, int nNewObs, int nSample, int nCause, const IntegerVector& p, bool survtype, bool exportSE, bool exportIF, bool exportIFsum);
RcppExport SEXP _riskRegression_calcSeCif_cpp(SEXP seqTauSEXP, SEXP jumpTimeSEXP, SEXP jumpTheCauseSEXP, SEXP indexJumpSEXP, SEXP indexSampleSEXP, SEXP IFbetaSEXP, SEXP Ehazard0SEXP, SEXP cumEhazard0SEXP, SEXP iS0SEXP, SEXP cumhazard_iS0SEXP, SEXP hazard_iS0SEXP, SEXP newEXbSEXP, SEXP sampleEXbSEXP, SEXP XSEXP, SEXP sameStrataSEXP, SEXP sampleTimeSEXP, SEXP hazard0SEXP, SEXP cumhazard0SEXP, SEXP theCauseSEXP, SEXP firstJumpTimeSEXP, SEXP lastSampleTimeSEXP, SEXP nTauSEXP, SEXP nJumpSEXP, SEXP nNewObsSEXP, SEXP nSampleSEXP, SEXP nCauseSEXP, SEXP pSEXP, SEXP survtypeSEXP, SEXP exportSESEXP, SEXP exportIFSEXP, SEXP exportIFsumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type seqTau(seqTauSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type jumpTime(jumpTimeSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type jumpTheCause(jumpTheCauseSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexJump(indexJumpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type indexSample(indexSampleSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::mat >& >::type IFbeta(IFbetaSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::mat >& >::type Ehazard0(Ehazard0SEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::mat >& >::type cumEhazard0(cumEhazard0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type iS0(iS0SEXP);
    Rcpp::traits::input_parameter< const std::vector< NumericVector >& >::type cumhazard_iS0(cumhazard_iS0SEXP);
    Rcpp::traits::input_parameter< const std::vector< NumericVector >& >::type hazard_iS0(hazard_iS0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type newEXb(newEXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sampleEXb(sampleEXbSEXP);
    Rcpp::traits::input_parameter< const std::vector< arma::mat >& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type sameStrata(sameStrataSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sampleTime(sampleTimeSEXP);
    Rcpp::traits::input_parameter< const std::vector< NumericVector>& >::type hazard0(hazard0SEXP);
    Rcpp::traits::input_parameter< const std::vector< NumericVector>& >::type cumhazard0(cumhazard0SEXP);
    Rcpp::traits::input_parameter< int >::type theCause(theCauseSEXP);
    Rcpp::traits::input_parameter< double >::type firstJumpTime(firstJumpTimeSEXP);
    Rcpp::traits::input_parameter< double >::type lastSampleTime(lastSampleTimeSEXP);
    Rcpp::traits::input_parameter< int >::type nTau(nTauSEXP);
    Rcpp::traits::input_parameter< int >::type nJump(nJumpSEXP);
    Rcpp::traits::input_parameter< int >::type nNewObs(nNewObsSEXP);
    Rcpp::traits::input_parameter< int >::type nSample(nSampleSEXP);
    Rcpp::traits::input_parameter< int >::type nCause(nCauseSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type survtype(survtypeSEXP);
    Rcpp::traits::input_parameter< bool >::type exportSE(exportSESEXP);
    Rcpp::traits::input_parameter< bool >::type exportIF(exportIFSEXP);
    Rcpp::traits::input_parameter< bool >::type exportIFsum(exportIFsumSEXP);
    rcpp_result_gen = Rcpp::wrap(calcSeCif_cpp(seqTau, jumpTime, jumpTheCause, indexJump, indexSample, IFbeta, Ehazard0, cumEhazard0, iS0, cumhazard_iS0, hazard_iS0, newEXb, sampleEXb, X, sameStrata, sampleTime, hazard0, cumhazard0, theCause, firstJumpTime, lastSampleTime, nTau, nJump, nNewObs, nSample, nCause, p, survtype, exportSE, exportIF, exportIFsum));
    return rcpp_result_gen;
END_RCPP
}
// calcSeCif2_cpp
List calcSeCif2_cpp(std::vector<arma::mat> ls_IFbeta, std::vector<arma::mat> ls_X, std::vector<arma::mat> ls_cumhazard, arma::mat ls_hazard, std::vector< std::vector<arma::mat> > ls_IFcumhazard, std::vector<arma::mat> ls_IFhazard, NumericMatrix eXb, int nJumpTime, NumericVector JumpMax, NumericVector tau, arma::vec tauIndex, int nTau, int nObs, int theCause, int nCause, bool hazardType, arma::vec nVar, int nNewObs, NumericMatrix strata, bool exportSE, bool exportIF, bool exportIFsum, bool diag);
RcppExport SEXP _riskRegression_calcSeCif2_cpp(SEXP ls_IFbetaSEXP, SEXP ls_XSEXP, SEXP ls_cumhazardSEXP, SEXP ls_hazardSEXP, SEXP ls_IFcumhazardSEXP, SEXP ls_IFhazardSEXP, SEXP eXbSEXP, SEXP nJumpTimeSEXP, SEXP JumpMaxSEXP, SEXP tauSEXP, SEXP tauIndexSEXP, SEXP nTauSEXP, SEXP nObsSEXP, SEXP theCauseSEXP, SEXP nCauseSEXP, SEXP hazardTypeSEXP, SEXP nVarSEXP, SEXP nNewObsSEXP, SEXP strataSEXP, SEXP exportSESEXP, SEXP exportIFSEXP, SEXP exportIFsumSEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<arma::mat> >::type ls_IFbeta(ls_IFbetaSEXP);
    Rcpp::traits::input_parameter< std::vector<arma::mat> >::type ls_X(ls_XSEXP);
    Rcpp::traits::input_parameter< std::vector<arma::mat> >::type ls_cumhazard(ls_cumhazardSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ls_hazard(ls_hazardSEXP);
    Rcpp::traits::input_parameter< std::vector< std::vector<arma::mat> > >::type ls_IFcumhazard(ls_IFcumhazardSEXP);
    Rcpp::traits::input_parameter< std::vector<arma::mat> >::type ls_IFhazard(ls_IFhazardSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type eXb(eXbSEXP);
    Rcpp::traits::input_parameter< int >::type nJumpTime(nJumpTimeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type JumpMax(JumpMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tauIndex(tauIndexSEXP);
    Rcpp::traits::input_parameter< int >::type nTau(nTauSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< int >::type theCause(theCauseSEXP);
    Rcpp::traits::input_parameter< int >::type nCause(nCauseSEXP);
    Rcpp::traits::input_parameter< bool >::type hazardType(hazardTypeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type nVar(nVarSEXP);
    Rcpp::traits::input_parameter< int >::type nNewObs(nNewObsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< bool >::type exportSE(exportSESEXP);
    Rcpp::traits::input_parameter< bool >::type exportIF(exportIFSEXP);
    Rcpp::traits::input_parameter< bool >::type exportIFsum(exportIFsumSEXP);
    Rcpp::traits::input_parameter< bool >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(calcSeCif2_cpp(ls_IFbeta, ls_X, ls_cumhazard, ls_hazard, ls_IFcumhazard, ls_IFhazard, eXb, nJumpTime, JumpMax, tau, tauIndex, nTau, nObs, theCause, nCause, hazardType, nVar, nNewObs, strata, exportSE, exportIF, exportIFsum, diag));
    return rcpp_result_gen;
END_RCPP
}
// colCumSum
NumericMatrix colCumSum(NumericMatrix x);
RcppExport SEXP _riskRegression_colCumSum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colCumSum(x));
    return rcpp_result_gen;
END_RCPP
}
// colSumsCrossprod
NumericMatrix colSumsCrossprod(NumericMatrix X, NumericMatrix Y, bool transposeY);
RcppExport SEXP _riskRegression_colSumsCrossprod(SEXP XSEXP, SEXP YSEXP, SEXP transposeYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< bool >::type transposeY(transposeYSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumsCrossprod(X, Y, transposeY));
    return rcpp_result_gen;
END_RCPP
}
// quantileProcess_cpp
NumericVector quantileProcess_cpp(int nObject, int nNew, int nSim, arma::cube iid, arma::mat se, double confLevel);
RcppExport SEXP _riskRegression_quantileProcess_cpp(SEXP nObjectSEXP, SEXP nNewSEXP, SEXP nSimSEXP, SEXP iidSEXP, SEXP seSEXP, SEXP confLevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nObject(nObjectSEXP);
    Rcpp::traits::input_parameter< int >::type nNew(nNewSEXP);
    Rcpp::traits::input_parameter< int >::type nSim(nSimSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type iid(iidSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type se(seSEXP);
    Rcpp::traits::input_parameter< double >::type confLevel(confLevelSEXP);
    rcpp_result_gen = Rcpp::wrap(quantileProcess_cpp(nObject, nNew, nSim, iid, se, confLevel));
    return rcpp_result_gen;
END_RCPP
}
// sampleMaxProcess_cpp
arma::mat sampleMaxProcess_cpp(int nObject, int nNew, int nSim, const arma::cube& iid, const arma::mat& se);
RcppExport SEXP _riskRegression_sampleMaxProcess_cpp(SEXP nObjectSEXP, SEXP nNewSEXP, SEXP nSimSEXP, SEXP iidSEXP, SEXP seSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nObject(nObjectSEXP);
    Rcpp::traits::input_parameter< int >::type nNew(nNewSEXP);
    Rcpp::traits::input_parameter< int >::type nSim(nSimSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type iid(iidSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type se(seSEXP);
    rcpp_result_gen = Rcpp::wrap(sampleMaxProcess_cpp(nObject, nNew, nSim, iid, se));
    return rcpp_result_gen;
END_RCPP
}
// calcE_cpp
List calcE_cpp(const NumericVector& eventtime, const NumericVector& status, const NumericVector& eXb, const arma::mat& X, int p, bool add0);
RcppExport SEXP _riskRegression_calcE_cpp(SEXP eventtimeSEXP, SEXP statusSEXP, SEXP eXbSEXP, SEXP XSEXP, SEXP pSEXP, SEXP add0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type eventtime(eventtimeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type status(statusSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type eXb(eXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type add0(add0SEXP);
    rcpp_result_gen = Rcpp::wrap(calcE_cpp(eventtime, status, eXb, X, p, add0));
    return rcpp_result_gen;
END_RCPP
}
// IFbeta_cpp
arma::mat IFbeta_cpp(const NumericVector& newT, const NumericVector& neweXb, const arma::mat& newX, const NumericVector& newStatus, const IntegerVector& newIndexJump, const NumericVector& S01, const arma::mat& E1, const NumericVector& time1, const arma::mat& iInfo, int p);
RcppExport SEXP _riskRegression_IFbeta_cpp(SEXP newTSEXP, SEXP neweXbSEXP, SEXP newXSEXP, SEXP newStatusSEXP, SEXP newIndexJumpSEXP, SEXP S01SEXP, SEXP E1SEXP, SEXP time1SEXP, SEXP iInfoSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type newT(newTSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type neweXb(neweXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newStatus(newStatusSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type newIndexJump(newIndexJumpSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type S01(S01SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E1(E1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type time1(time1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type iInfo(iInfoSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(IFbeta_cpp(newT, neweXb, newX, newStatus, newIndexJump, S01, E1, time1, iInfo, p));
    return rcpp_result_gen;
END_RCPP
}
// IFbetaApprox_cpp
arma::mat IFbetaApprox_cpp(const arma::mat& newX, const NumericVector& newStatus, const IntegerVector& newIndexJump, const arma::mat& E1, const arma::mat& iInfo, int p);
RcppExport SEXP _riskRegression_IFbetaApprox_cpp(SEXP newXSEXP, SEXP newStatusSEXP, SEXP newIndexJumpSEXP, SEXP E1SEXP, SEXP iInfoSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newStatus(newStatusSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type newIndexJump(newIndexJumpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E1(E1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type iInfo(iInfoSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(IFbetaApprox_cpp(newX, newStatus, newIndexJump, E1, iInfo, p));
    return rcpp_result_gen;
END_RCPP
}
// IFlambda0_cpp
List IFlambda0_cpp(const NumericVector& tau, const arma::mat& IFbeta, const NumericVector& newT, const NumericVector& neweXb, const NumericVector& newStatus, const IntegerVector& newStrata, const IntegerVector& newIndexJump, const NumericVector& S01, const arma::mat& E1, const NumericVector& time1, double lastTime1, const NumericVector& lambda0, int p, int strata, bool exact, bool minimalExport);
RcppExport SEXP _riskRegression_IFlambda0_cpp(SEXP tauSEXP, SEXP IFbetaSEXP, SEXP newTSEXP, SEXP neweXbSEXP, SEXP newStatusSEXP, SEXP newStrataSEXP, SEXP newIndexJumpSEXP, SEXP S01SEXP, SEXP E1SEXP, SEXP time1SEXP, SEXP lastTime1SEXP, SEXP lambda0SEXP, SEXP pSEXP, SEXP strataSEXP, SEXP exactSEXP, SEXP minimalExportSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type IFbeta(IFbetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newT(newTSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type neweXb(neweXbSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type newStatus(newStatusSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type newStrata(newStrataSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type newIndexJump(newIndexJumpSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type S01(S01SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type E1(E1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type time1(time1SEXP);
    Rcpp::traits::input_parameter< double >::type lastTime1(lastTime1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< bool >::type exact(exactSEXP);
    Rcpp::traits::input_parameter< bool >::type minimalExport(minimalExportSEXP);
    rcpp_result_gen = Rcpp::wrap(IFlambda0_cpp(tau, IFbeta, newT, neweXb, newStatus, newStrata, newIndexJump, S01, E1, time1, lastTime1, lambda0, p, strata, exact, minimalExport));
    return rcpp_result_gen;
END_RCPP
}
// predictCIF_cpp
arma::mat predictCIF_cpp(const std::vector<arma::mat>& hazard, const std::vector<arma::mat>& cumhazard, const arma::mat& eXb, const arma::mat& strata, const std::vector<double>& newtimes, const std::vector<double>& etimes, const std::vector<double>& etimeMax, double t0, int nEventTimes, int nNewTimes, int nData, int cause, int nCause, bool survtype, bool productLimit, bool diag);
RcppExport SEXP _riskRegression_predictCIF_cpp(SEXP hazardSEXP, SEXP cumhazardSEXP, SEXP eXbSEXP, SEXP strataSEXP, SEXP newtimesSEXP, SEXP etimesSEXP, SEXP etimeMaxSEXP, SEXP t0SEXP, SEXP nEventTimesSEXP, SEXP nNewTimesSEXP, SEXP nDataSEXP, SEXP causeSEXP, SEXP nCauseSEXP, SEXP survtypeSEXP, SEXP productLimitSEXP, SEXP diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<arma::mat>& >::type hazard(hazardSEXP);
    Rcpp::traits::input_parameter< const std::vector<arma::mat>& >::type cumhazard(cumhazardSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eXb(eXbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type newtimes(newtimesSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type etimes(etimesSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type etimeMax(etimeMaxSEXP);
    Rcpp::traits::input_parameter< double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< int >::type nEventTimes(nEventTimesSEXP);
    Rcpp::traits::input_parameter< int >::type nNewTimes(nNewTimesSEXP);
    Rcpp::traits::input_parameter< int >::type nData(nDataSEXP);
    Rcpp::traits::input_parameter< int >::type cause(causeSEXP);
    Rcpp::traits::input_parameter< int >::type nCause(nCauseSEXP);
    Rcpp::traits::input_parameter< bool >::type survtype(survtypeSEXP);
    Rcpp::traits::input_parameter< bool >::type productLimit(productLimitSEXP);
    Rcpp::traits::input_parameter< bool >::type diag(diagSEXP);
    rcpp_result_gen = Rcpp::wrap(predictCIF_cpp(hazard, cumhazard, eXb, strata, newtimes, etimes, etimeMax, t0, nEventTimes, nNewTimes, nData, cause, nCause, survtype, productLimit, diag));
    return rcpp_result_gen;
END_RCPP
}
// rowCumSum
NumericMatrix rowCumSum(NumericMatrix x);
RcppExport SEXP _riskRegression_rowCumSum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowCumSum(x));
    return rcpp_result_gen;
END_RCPP
}
// rowSumsCrossprod
NumericMatrix rowSumsCrossprod(NumericMatrix X, NumericMatrix Y, bool transposeY);
RcppExport SEXP _riskRegression_rowSumsCrossprod(SEXP XSEXP, SEXP YSEXP, SEXP transposeYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< bool >::type transposeY(transposeYSEXP);
    rcpp_result_gen = Rcpp::wrap(rowSumsCrossprod(X, Y, transposeY));
    return rcpp_result_gen;
END_RCPP
}
// colCenter_cpp
arma::mat colCenter_cpp(arma::mat X, const arma::colvec& center);
RcppExport SEXP _riskRegression_colCenter_cpp(SEXP XSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(colCenter_cpp(X, center));
    return rcpp_result_gen;
END_RCPP
}
// rowCenter_cpp
arma::mat rowCenter_cpp(arma::mat X, const arma::rowvec& center);
RcppExport SEXP _riskRegression_rowCenter_cpp(SEXP XSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(rowCenter_cpp(X, center));
    return rcpp_result_gen;
END_RCPP
}
// colScale_cpp
arma::mat colScale_cpp(arma::mat X, const arma::colvec& scale);
RcppExport SEXP _riskRegression_colScale_cpp(SEXP XSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(colScale_cpp(X, scale));
    return rcpp_result_gen;
END_RCPP
}
// rowScale_cpp
arma::mat rowScale_cpp(arma::mat X, const arma::rowvec& scale);
RcppExport SEXP _riskRegression_rowScale_cpp(SEXP XSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rowScale_cpp(X, scale));
    return rcpp_result_gen;
END_RCPP
}
// colMultiply_cpp
arma::mat colMultiply_cpp(arma::mat X, const arma::colvec& scale);
RcppExport SEXP _riskRegression_colMultiply_cpp(SEXP XSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(colMultiply_cpp(X, scale));
    return rcpp_result_gen;
END_RCPP
}
// rowMultiply_cpp
arma::mat rowMultiply_cpp(arma::mat X, const arma::rowvec& scale);
RcppExport SEXP _riskRegression_rowMultiply_cpp(SEXP XSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rowMultiply_cpp(X, scale));
    return rcpp_result_gen;
END_RCPP
}
// sliceMultiply_cpp
arma::cube sliceMultiply_cpp(arma::cube X, const arma::mat& M);
RcppExport SEXP _riskRegression_sliceMultiply_cpp(SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(sliceMultiply_cpp(X, M));
    return rcpp_result_gen;
END_RCPP
}
// sliceMultiplyPointer_cpp
void sliceMultiplyPointer_cpp(arma::cube X, const arma::mat& M);
RcppExport SEXP _riskRegression_sliceMultiplyPointer_cpp(SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    sliceMultiplyPointer_cpp(X, M);
    return R_NilValue;
END_RCPP
}
// sliceScale_cpp
arma::cube sliceScale_cpp(arma::cube X, const arma::mat& M);
RcppExport SEXP _riskRegression_sliceScale_cpp(SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(sliceScale_cpp(X, M));
    return rcpp_result_gen;
END_RCPP
}
// sliceScalePointer_cpp
void sliceScalePointer_cpp(arma::cube X, const arma::mat& M);
RcppExport SEXP _riskRegression_sliceScalePointer_cpp(SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    sliceScalePointer_cpp(X, M);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_riskRegression_AUCijFun", (DL_FUNC) &_riskRegression_AUCijFun, 2},
    {"_riskRegression_baseHaz_cpp", (DL_FUNC) &_riskRegression_baseHaz_cpp, 11},
    {"_riskRegression_calcSeHazard_cpp", (DL_FUNC) &_riskRegression_calcSeHazard_cpp, 24},
    {"_riskRegression_calcAIFsurv_cpp", (DL_FUNC) &_riskRegression_calcAIFsurv_cpp, 16},
    {"_riskRegression_calcSeCif_cpp", (DL_FUNC) &_riskRegression_calcSeCif_cpp, 31},
    {"_riskRegression_calcSeCif2_cpp", (DL_FUNC) &_riskRegression_calcSeCif2_cpp, 23},
    {"_riskRegression_colCumSum", (DL_FUNC) &_riskRegression_colCumSum, 1},
    {"_riskRegression_colSumsCrossprod", (DL_FUNC) &_riskRegression_colSumsCrossprod, 3},
    {"_riskRegression_quantileProcess_cpp", (DL_FUNC) &_riskRegression_quantileProcess_cpp, 6},
    {"_riskRegression_sampleMaxProcess_cpp", (DL_FUNC) &_riskRegression_sampleMaxProcess_cpp, 5},
    {"_riskRegression_calcE_cpp", (DL_FUNC) &_riskRegression_calcE_cpp, 6},
    {"_riskRegression_IFbeta_cpp", (DL_FUNC) &_riskRegression_IFbeta_cpp, 10},
    {"_riskRegression_IFbetaApprox_cpp", (DL_FUNC) &_riskRegression_IFbetaApprox_cpp, 6},
    {"_riskRegression_IFlambda0_cpp", (DL_FUNC) &_riskRegression_IFlambda0_cpp, 16},
    {"_riskRegression_predictCIF_cpp", (DL_FUNC) &_riskRegression_predictCIF_cpp, 16},
    {"_riskRegression_rowCumSum", (DL_FUNC) &_riskRegression_rowCumSum, 1},
    {"_riskRegression_rowSumsCrossprod", (DL_FUNC) &_riskRegression_rowSumsCrossprod, 3},
    {"_riskRegression_colCenter_cpp", (DL_FUNC) &_riskRegression_colCenter_cpp, 2},
    {"_riskRegression_rowCenter_cpp", (DL_FUNC) &_riskRegression_rowCenter_cpp, 2},
    {"_riskRegression_colScale_cpp", (DL_FUNC) &_riskRegression_colScale_cpp, 2},
    {"_riskRegression_rowScale_cpp", (DL_FUNC) &_riskRegression_rowScale_cpp, 2},
    {"_riskRegression_colMultiply_cpp", (DL_FUNC) &_riskRegression_colMultiply_cpp, 2},
    {"_riskRegression_rowMultiply_cpp", (DL_FUNC) &_riskRegression_rowMultiply_cpp, 2},
    {"_riskRegression_sliceMultiply_cpp", (DL_FUNC) &_riskRegression_sliceMultiply_cpp, 2},
    {"_riskRegression_sliceMultiplyPointer_cpp", (DL_FUNC) &_riskRegression_sliceMultiplyPointer_cpp, 2},
    {"_riskRegression_sliceScale_cpp", (DL_FUNC) &_riskRegression_sliceScale_cpp, 2},
    {"_riskRegression_sliceScalePointer_cpp", (DL_FUNC) &_riskRegression_sliceScalePointer_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_riskRegression(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

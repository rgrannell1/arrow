// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cChunk
List cChunk(NumericVector num, List coll);
RcppExport SEXP kea_cChunk(SEXP numSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type num(numSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cChunk(num, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cDrop
List cDrop(NumericVector num, List coll);
RcppExport SEXP kea_cDrop(SEXP numSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type num(numSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cDrop(num, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cGroupBy
List cGroupBy(Function fn, List coll);
RcppExport SEXP kea_cGroupBy(SEXP fnSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Function >::type fn(fnSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cGroupBy(fn, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cImplode
CharacterVector cImplode(const CharacterVector str, const CharacterVector strs);
RcppExport SEXP kea_cImplode(SEXP strSEXP, SEXP strsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const CharacterVector >::type str(strSEXP );
        Rcpp::traits::input_parameter< const CharacterVector >::type strs(strsSEXP );
        CharacterVector __result = cImplode(str, strs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cIsIn
LogicalVector cIsIn(SEXP val, List coll);
RcppExport SEXP kea_cIsIn(SEXP valSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type val(valSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        LogicalVector __result = cIsIn(val, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cIsPrefixOf
LogicalVector cIsPrefixOf(const List coll1, const List coll2);
RcppExport SEXP kea_cIsPrefixOf(SEXP coll1SEXP, SEXP coll2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type coll1(coll1SEXP );
        Rcpp::traits::input_parameter< const List >::type coll2(coll2SEXP );
        LogicalVector __result = cIsPrefixOf(coll1, coll2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cIsSubsetOf
LogicalVector cIsSubsetOf(List coll1, List coll2);
RcppExport SEXP kea_cIsSubsetOf(SEXP coll1SEXP, SEXP coll2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll1(coll1SEXP );
        Rcpp::traits::input_parameter< List >::type coll2(coll2SEXP );
        LogicalVector __result = cIsSubsetOf(coll1, coll2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cIsSuffixOf
LogicalVector cIsSuffixOf(const List coll1, const List coll2);
RcppExport SEXP kea_cIsSuffixOf(SEXP coll1SEXP, SEXP coll2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type coll1(coll1SEXP );
        Rcpp::traits::input_parameter< const List >::type coll2(coll2SEXP );
        LogicalVector __result = cIsSuffixOf(coll1, coll2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cNotIn
LogicalVector cNotIn(SEXP val, List coll);
RcppExport SEXP kea_cNotIn(SEXP valSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type val(valSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        LogicalVector __result = cNotIn(val, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cNotSubsetOf
LogicalVector cNotSubsetOf(List coll1, List coll2);
RcppExport SEXP kea_cNotSubsetOf(SEXP coll1SEXP, SEXP coll2SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll1(coll1SEXP );
        Rcpp::traits::input_parameter< List >::type coll2(coll2SEXP );
        LogicalVector __result = cNotSubsetOf(coll1, coll2);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cPowerSetOf
List cPowerSetOf(List coll);
RcppExport SEXP kea_cPowerSetOf(SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cPowerSetOf(coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cRiffle
List cRiffle(SEXP val, List coll);
RcppExport SEXP kea_cRiffle(SEXP valSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type val(valSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cRiffle(val, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cSwap
List cSwap(const SEXP val1, const SEXP val2, List coll);
RcppExport SEXP kea_cSwap(SEXP val1SEXP, SEXP val2SEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const SEXP >::type val1(val1SEXP );
        Rcpp::traits::input_parameter< const SEXP >::type val2(val2SEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cSwap(val1, val2, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cTabulate
List cTabulate(List coll);
RcppExport SEXP kea_cTabulate(SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cTabulate(coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cTake
List cTake(NumericVector num, List coll);
RcppExport SEXP kea_cTake(SEXP numSEXP, SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type num(numSEXP );
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cTake(num, coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cUnzipIndices
List cUnzipIndices(List coll);
RcppExport SEXP kea_cUnzipIndices(SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cUnzipIndices(coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cUnzipKeys
List cUnzipKeys(List coll);
RcppExport SEXP kea_cUnzipKeys(SEXP collSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type coll(collSEXP );
        List __result = cUnzipKeys(coll);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cZip
List cZip(const List colls);
RcppExport SEXP kea_cZip(SEXP collsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type colls(collsSEXP );
        List __result = cZip(colls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cZipKeys
List cZipKeys(const List colls);
RcppExport SEXP kea_cZipKeys(SEXP collsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type colls(collsSEXP );
        List __result = cZipKeys(colls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}

#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
LogicalVector cNotIn (SEXP val, const List& coll) {

	int coll_len = coll.size();
	const int flags = 1 + 2 + 4 + 8 + 0;

	if (coll_len == 0) {
		return LogicalVector::create();
	} else {

		for (int ith = 0; ith < coll_len; ++ith) {
			if ((bool)R_compute_identical(val, coll[ith], flags)) {
				// required due to RcppCore/Rcpp issue #177.
				return LogicalVector::create(false);
			}
		}

		return LogicalVector::create(true);
	}
}

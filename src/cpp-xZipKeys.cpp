#include <Rcpp.h>
#include "functions.h"
using namespace Rcpp;





// [[Rcpp::export]]
List cZipKeys (const List& colls) {

	const R_len_t colls_size = colls.size();

	Must_Be_Collection_Of_Lengths_In_Range("colls", "2", "2", colls, 2, 2);

	if (colls_size == 0) {
		return List::create();
	} else {

		List out (colls_size);
		CharacterVector keys(colls_size);

		for (R_len_t ith = 0; ith < colls_size; ++ith) {

			List coll  = colls[ith];

			Must_Be_Of_Length("key", coll[0], List::create(1));

			String key = coll[0];

			out[ith]   = coll[1];
			keys[ith]  = key;

 		}

		out.attr("names") = keys;
		return out;
	}
}

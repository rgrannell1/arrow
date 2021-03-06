
#' xIsIn
#'
#' Check if a collection contains a value.
#'
#' @section Type Signature:
#'     any -> |any| -> <logical>
#'
#' @param
#'    val an arbitrary value. The value to test for membership
#'    in \bold{coll}.
#'
#' @param
#'    coll a collection. The collection of elements to check against
#'    \bold{val}.
#'
#' @param
#'    ... see above.
#'
#' @return
#'    A boolean value.
#'
#' @section Corner Cases:
#'    The equality check used by \bold{xIsIn} has the same corner cases as \bold{xIs};
#'    equal integers and doubles are treated as different numbers, -0 is equal to +0.
#'    Returns \bold{logical(0)} when \bold{coll} is empty.
#'
#' @family set_functions
#'
#' @template
#'    C++
#'
#' @template
#'    Variadic
#'
#' @example
#'    inst/examples/example-xIsIn.R
#'
#' @rdname xIsIn
#' @export

xIsIn <- MakeFun(function (val, coll)
	cIsIn(val, coll)
)

#' @rdname xIsIn
#' @export

xIsIn_ <- MakeVariadic(xIsIn, 'coll')

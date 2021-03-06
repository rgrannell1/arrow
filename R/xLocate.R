
#' xLocate
#'
#' Get the indices of the elements that return true for a predicate.
#'
#' @section Type Signature:
#'     (any -> <logical>) -> |any| -> <integer>
#'
#' @param
#'    pred a predicate function. The function to test each element
#'    of a collection with.
#'
#' @param
#'    coll a collection. The collection with elements to test.
#'
#' @param
#'    ... see above.
#'
#' @return
#'    An length-one or length-zero whole number.
#'
#' @section Corner Cases:
#'      returns integer(0) if no match is found, or \bold{coll} is length-zero.
#'
#' @template
#'    Variadic
#'
#' @example
#'    inst/examples/example-xLocate.R
#'
#' @family key_functions
#'
#' @rdname xLocate
#' @export

xLocate <- MakeFun(function (pred, coll) {

	MACRO( Must_Have_Arity(pred, 1) )

	if (length(coll) == 0)
		integer(0)
	else

		which( MACRO( Try_Higher_Order_Function( vapply(coll, function (elem) {

			is_match <- MACRO( Try_Higher_Order_Function(pred(elem)) )

			MACRO(Must_Be_Flag(is_match, pred))

			identical(is_match, TRUE)

		}, logical(1), USE.NAMES = FALSE) ) ) )


})

#' @rdname xLocate
#' @export

xLocate_ <- MakeVariadic(xLocate, 'coll')

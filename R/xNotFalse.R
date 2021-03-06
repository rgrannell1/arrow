
#' xNotFalse
#'
#' Is an value not false?
#'
#' @section Type Signature:
#'     any -> <logical>
#'
#' @param
#'    val an arbitrary value.The value to test for
#'    not-falsity.
#'
#' @param
#'    ... see above.
#'
#' @return
#'    A true or false value.
#'
#' @example
#'    inst/examples/example-xNotFalse.R
#'
#' @section Corner Cases:
#'     xNotFalse returns either true or false, to make it
#'     safe for use with if statements. If val is length zero
#'     True is returned.
#'
#' @family value_testing_functions
#'
#' @rdname xNotFalse
#' @export

xNotFalse <- MakeFun(function (val)
	!identical(val, FALSE)
)

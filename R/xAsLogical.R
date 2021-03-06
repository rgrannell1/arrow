
#' xAsLogical
#'
#' Unbox a collection of logicals to a logical vector.
#'
#' @section Type Signature:
#'     |logical| -> <logical>
#'
#' @details
#'    \bold{xAsLogical} unboxes a list, pairlist or vector of
#'    length-one logical values to a logical vector. It does not attempt
#'    to convert non-logical collections to logical vectors.
#'
#' @param
#'    bools a collection of logical values.
#'
#' @param
#'    ... see above.
#'
#' @return
#'    A logical vector.
#'
#' @section Corner Cases:
#'    Numbers are not coerced to logical. NA values can always be unboxed to any type.
#'
#' @template
#'    Variadic
#'
#' @family container_conversion_functions
#' @family unboxing_functions
#'
#' @example
#'    inst/examples/example-xAsLogical.R
#'
#' @template S-Uncertain
#' @rdname xAsLogical
#' @export

xAsLogical <- MakeFun(function (bools)
	bools
)

#' @rdname xAsLogical
#' @export

xAsLogical_ <- MakeVariadic(xAsLogical, 'bools')

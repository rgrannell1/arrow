
#' xFromWords
#'
#' Concatentate a character vector with spaces as delimiters.
#'
#' @section Type Signature:
#'     |character| -> <character>
#'
#' @param
#'    strs a collection of strings. The
#'    strings to collapse into one string.
#'
#' @param
#'    ... see above.
#'
#' @return
#'    A length-one character vector.
#'
#' @section Corner Cases:
#'    Returns the empty character-vector when \bold{strs}
#'    is length-zero.
#'
#' @family text_processing_functions
#'
#' @template
#'    Variadic
#'
#' @example
#'    inst/examples/example-xFromWords.R
#'
#' @rdname xFromWords
#' @export

xFromWords <- MakeFun(function (strs) {

	MACRO( Must_Not_Contain_Na(strs) )

	cImplode(' ', strs)
})

#' @rdname xFromWords
#' @export

xFromWords_ <- MakeVariadic(xFromWords, 'strs')

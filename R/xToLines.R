
#' xToLines
#'
#' Split a string at every newline character.
#'
#' @section Type Signature:
#'     <character> -> <character>
#'
#' @details
#'    The input string is split at newline characters.
#'    Multiple newlines are treated the same as one newline.
#'
#' @param
#'    str a length-one character vector. The string to split into
#'    lines.
#'
#' @return
#'    A character vector.
#'
#' @section Corner Cases:
#'    Returns the empty character-vector when \bold{str}
#'    is length-zero.
#'
#' @family text_processing_functions
#'
#' @example
#'    inst/examples/example-xToLines.R
#'
#' @rdname xToLines
#' @export

xToLines <- MakeFun(function (str) {

	if (length(str) == 0 || nchar(str) == 0)
		character(0)
	else {

		MACRO( Must_Be_Non_Na(str) )
		str_split("\n+", str)

	}

})

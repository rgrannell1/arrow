% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/xMeanBy.R
\name{xMeanBy}
\alias{xMeanBy}
\alias{xMeanBy_}
\title{xMeanBy}
\usage{
xMeanBy(fn, coll)

xMeanBy_(fn, ...)
}
\arguments{
\item{fn}{a unary function. The function to measure the size of
    an element.}

\item{coll}{a collection. The collection to find the mean of.}

\item{...}{see above.}
}
\value{
A length-one double vector.
}
\description{
Return the mean of a collection of numbers according to a measure function.
}
\section{Type Signature}{

    (any -> <numeric>) -> |any| -> <double>
}

\section{Corner Cases}{

   If \bold{nums} is empty then \bold{double(0)} is returned. The mean
   of vectors containing infinite values is infinite. The output of \bold{fn}
   cannot contain NA or NaN values, as these values do not have a defined
   magnitude.
}
\examples{

# 1. Get the mean of random uniform numbers between 0...1

x_(xRepeat(1, 100)) $ xFlatMap(runif) $ x_MeanBy(xI)

# 0.5496172
}
\seealso{
Other math_functions: \code{\link{xLenOf}},
  \code{\link{xLenOf_}}; \code{\link{xMaxBy}},
  \code{\link{xMaxBy_}}; \code{\link{xMedianBy}},
  \code{\link{xMedianBy_}}; \code{\link{xMinBy}},
  \code{\link{xMinBy_}}; \code{\link{xOrderOf}},
  \code{\link{xOrderOf_}}; \code{\link{xPoll}},
  \code{\link{xPoll_}}; \code{\link{xProdBy}},
  \code{\link{xProdBy_}}; \code{\link{xRank}},
  \code{\link{xRank_}}; \code{\link{xSumBy}},
  \code{\link{xSumBy_}}
}


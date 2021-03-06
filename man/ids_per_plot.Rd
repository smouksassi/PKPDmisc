% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ids_per_plot.R
\name{ids_per_plot}
\alias{ids_per_plot}
\title{split IDs into groups to use for subsequent plotting}
\usage{
ids_per_plot(id, id_per_plot = 9)
}
\arguments{
\item{id}{vector of ids (eg id column)}

\item{id_per_plot}{number of ids per plot. Default to 9}
}
\description{
split IDs into groups to use for subsequent plotting
}
\details{
works very well with hadley wickham's purrr package to create a column
to split on then subsequently plot, see \code{vignette("Multiplot")} for details
}


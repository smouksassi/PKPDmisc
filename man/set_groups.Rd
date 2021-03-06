% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/groups.R
\name{set_groups}
\alias{set_groups}
\title{set groups}
\usage{
set_groups(df, groups)
}
\arguments{
\item{df}{data frame}

\item{groups}{list of groups to pass to group_by_}
}
\description{
set groups
}
\details{
useful in tandem with `capture_groups` when concerned about
modification of groups by a function, for example when summarizing with dplyr
Can easily capture and reset groups to maintain original grouping
}
\examples{
\dontrun{
gTheoph <- dplyr::group_by(Theoph, Subject)
grps <- capture_groups(gTheoph) # capture subject
theoph_cmax <- summarize(gTheoph, cmax = max(conc)) # lose Subject grouping
theoph_cmax <- set_groups(theoph_cmax, grps) # resets the original "Subject" grouping
}
}


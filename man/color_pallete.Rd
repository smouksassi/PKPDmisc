% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/color_pallete.R
\name{color_pallete}
\alias{color_pallete}
\title{design-quality color palletes to use in ggplot2}
\usage{
color_pallete(pallete)
}
\arguments{
\item{pallete}{pallete number or name}
}
\description{
design-quality color palletes to use in ggplot2
}
\examples{
\dontrun{
library(PKPDdatasets)
library(PKPDmisc)
library(ggplot2)
library(dplyr)
ggplot(sd_oral_richpk \%>\% filter(ID < 20), 
aes(x = Time,
y= Conc, 
group = ID, 
color = Gender)) + 
  geom_line(size = 1.5) + scale_color_manual(values =color_pallete(1)) +
  base_theme()
} 
}


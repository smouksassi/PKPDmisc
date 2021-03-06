#' replace list elements by name
#' @param list original list
#' @param replacement replacement list
#' @details
#' Finds and replaces list elements by name and throws an error if an 
#'    element is not available in the original list.
#' @examples 
#' \dontrun{
#' list <- list(dv = "dv", idv = "idv")
#' replacement <- list(dv = "conc", idv = "time")
#' list <- replace_list_elements(list, replacement)
#' }
#' @export
replace_list_elements <- function(list, replacement) {
  missing <- which(!names(replacement) %in% names(list))
  if(length(missing) != 0) {
    warning(paste("Nothing named: ", paste(names(replacement)[missing], collapse= ", ", "found to replace") ))
    replacement <- replacement[-missing]
  }
  list[names(replacement)] <- lapply(names(replacement), function(x) list[[x]] <- replacement[[x]])
  return(list)
}
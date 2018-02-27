(TeX-add-style-hook
 "INTO-CPS_toolchain_User_Manual"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("include/intocpsassociation" "a4paper" "12pt" "final")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("fontenc" "T1") ("inputenc" "utf8") ("breakurl" "hyphenbreaks")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-environments-local "xml")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (TeX-run-style-hooks
    "latex2e"
    "listings-modelica"
    "sections/intro"
    "sections/intocpsoverview"
    "sections/intoapp"
    "sections/modelioandsysml"
    "sections/separatetools"
    "sections/dse"
    "sections/rttester"
    "sections/traceability"
    "sections/codegen"
    "sections/issue-handling"
    "sections/conclusions"
    "appendices/acronyms"
    "appendices/backgroundontools"
    "appendices/principles"
    "include/intocpsassociation"
    "include/intocpsassociation12"
    "fontenc"
    "inputenc"
    "longtable"
    "tikz-uml"
    "framed"
    "subcaption"
    "breakurl"
    "color"
    "amsmath"
    "courier"
    "xspace"
    "cleveref"
    "textcomp"
    "listings"
    "vdmlisting")
   (TeX-add-symbols
    '("revisit" 1)
    "intoapp"
    "into"
    "draftnote")
   (LaTeX-add-labels
    "sec:abstract"
    "ch:bib")
   (LaTeX-add-environments
    "draftnoteenv"
    "assumption")
   (LaTeX-add-bibliographies
    "bibliography")
   (LaTeX-add-color-definecolors
    "gray"
    "darkblue"
    "cyan"))
 :latex)


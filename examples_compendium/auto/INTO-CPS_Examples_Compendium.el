(TeX-add-style-hook
 "INTO-CPS_Examples_Compendium"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("include/intocpsassociation" "narrowmargin" "12pt" "a4paper" "final")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("fontenc" "T1") ("inputenc" "utf8")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-environments-local "config")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (TeX-run-style-hooks
    "latex2e"
    "introduction"
    "singletank/singletank"
    "threetank/threetank"
    "fcu/fcu"
    "linefollower/linefollowrobot"
    "turnindicator/turnindicator"
    "uavsingle/uavsingle"
    "ether/ether"
    "uavswarm/uavswarm"
    "vehicle/vehicle"
    "massSpringDamper/massspringdamper"
    "include/intocpsassociation"
    "include/intocpsassociation12"
    "fontenc"
    "inputenc"
    "longtable"
    "multirow"
    "framed"
    "xcolor"
    "rotating"
    "subfigure"
    "amsmath"
    "listings"
    "textcomp")
   (TeX-add-symbols
    '("mnm" 1)
    '("mcl" 1)
    '("miit" 1)
    '("mtt" 1)
    '("msf" 1)
    '("mbf" 1)
    '("mrm" 1)
    '("TTR" 1)
    '("TN" 1)
    '("BI" 1)
    '("I" 1)
    '("B" 1)
    '("T" 1)
    "mi"
    "ee"
    "draftnote"
    "SG")
   (LaTeX-add-labels
    "sec:abstract"
    "ch:bib")
   (LaTeX-add-environments
    "draftnoteenv"
    "assumption")
   (LaTeX-add-bibliographies
    "examples.bib")
   (LaTeX-add-listings-lstdefinestyles
    "cstyle"))
 :latex)


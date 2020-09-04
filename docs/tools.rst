Tools
=====

The INTO-CPS toolchain consists of several tools for developing Cyber-Physical Systems.
These tools provide functionality needed to enable FMI based co-simulation namely as `Creating new FMUs`_, `Verifying compliance of FMUs`_ and `Performing Co-Simulations`_ the simulation of FMUs.
To keep the infrastructure as lightweight and flexible as possible the projects are hosted independently in their own repostories and provide standalone documentation.

A list of the tools and, grouped by the functionality they provide, can be found below:


Performing Co-Simulations
-------------------------

`INTO-CPS Desktop Application <https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The INTO-CPS Application provides a graphical user interface which can be used to configure and orchestrate co-simulation scenarios.
Install instruction are found in the application's `documentation <https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/>`__.


`Maestro <https://github.com/INTO-CPS-Association/maestro>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Maestro is a command line tool that orchestrates co-simulation of FMUs. 
While, the program is used internally by the `INTO-CPS Desktop Application`_ it can also be downloaded and used seperately.
The `GitHub repository <https://github.com/INTO-CPS-Association/maestro>`__ which also acts as its documentation.


Creating new FMUs
-----------------

Several commercial and open-source tools exist, that are enables the creation of FMUs.
An comprehensive list of these can be found in the `tools section <https://fmi-standard.org/tools/>`_ on the FMI-standard's website.

`Overture <http://overturetool.org>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
The Overture community supports the modelling method The Vienna Development Method (VDM) which is a set of modelling techniques that have a long and successful history in both research and industrial application in the development of computer-based systems.

The Overture Tool is an open-source integrated development environment (IDE) for developing and analysing VDM models. The tool suite is written entirely in Java and built on top of the Eclipse platform.


`PyFMU <https://into-cps-association.readthedocs.io/projects/pyfmu/en/develop/>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

PyFMU_ is a command line program that enables the rapid development of FMUs using Python.


Verifying compliance of FMUs
----------------------------

`FMIChecker <https://github.com/INTO-CPS-Association/FMI-VDM-Model>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To maximize compatiblity between an FMU and existing simulation tools it is import to ensure strict compliance to the FMI standard.
Unfortunately, the current situation is less that ideal, since a large portion of FMUs encountered do not implement the standard correctly.
The FMIChecker_ is a command line tool that provides thorough static check of FMUs.
Install instructions can be found on the `GitHub Repository <https://github.com/INTO-CPS-Association/FMI-VDM-Model>`__. Alternatively, the tool can be accessed at this `webpage <https://sweng.au.dk/fmiutils/fmichecker>`__, eliminating the need to install the tool. 


Interfacing with hardware (HIL)
-------------------------------

`Rabbitmq FMU <https://github.com/INTO-CPS-Association/fmu-rabbitmq>`__
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Rabbitmq FMU`_ provides a way to couple the simulation of a system to one or more components of physical system, in a process known as `hardware-in-the-loop <https://en.wikipedia.org/wiki/Hardware-in-the-loop_simulation>`__.

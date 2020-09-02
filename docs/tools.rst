Tools
=====

The INTO-CPS toolchain consists of several tools for developing Cyber-Physical Systems.
These tools provide functionality needed to enable FMI based co-simulation namely as `Creating new FMUs`_, `Verifying compliance of FMUs`_ and `Performing Co-Simulations`_ the simulation of FMUs.
To keep the infrastructure as lightweight and flexible as possible the projects are hosted independently in their own repostories and provide standalone documentation.

A list of the tools and, grouped by the functionality they provide, can be found below:


Performing Co-Simulations
-------------------------

INTO-CPS Desktop Application
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The INTO-CPS Application provides a graphical user interface which can be used to configure and orchestrate co-simulation scenarios.
Install instruction are found in the application's `documentation <https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/>`__


Maestro
^^^^^^^
Maestro is a command line tool that orchestrates co-simulation of FMUs. 
While, the program is used internally by the `INTO-CPS Desktop Application`_ it can also be downloaded and used seperately.
The `GitHub repository <https://github.com/INTO-CPS-Association/maestro>`__ which also acts as its documentation.


Creating new FMUs
-----------------

Several commercial and open-source tools exist, that are enables the creation of FMUs.
An comprehensive list of these can be found in the `tools section <https://fmi-standard.org/tools/>`__ on the FMI-standard's website.

PyFMU
^^^^^

PyFMU is a command line program that enables the rapid development of FMUs using Python.
For install instructions and how to use the tool, see the `documentation <https://into-cps-association.readthedocs.io/projects/pyfmu/en/develop/>`__ of the project.


Verifying compliance of FMUs
-------------------------------------

FMIChecker <https://github.com/INTO-CPS-Association/FMI-VDM-Model>

Web <https://sweng.au.dk/fmiutils/fmichecker>


Interfacing with hardware (HIL)
-------------------------------

Rabbitmq FMU <https://github.com/INTO-CPS-Association/fmu-rabbitmq>
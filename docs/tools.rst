.. _`INTO-CPS Desktop Application`: https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/
.. _`INTO-CPS Cloud Application`: https://github.com/INTO-CPS-Association/into-cps-application-cloud
.. _PyFMU: https://into-cps-association.readthedocs.io/projects/pyfmu/en/develop/
.. _Maestro: https://github.com/INTO-CPS-Association/maestro
.. _Maestro2: https://github.com/INTO-CPS-Association/maestro
.. _Modelio: https://www.modelio.org/
.. _20-sim: https://www.20sim.com/
.. _OpenModelica: https://www.openmodelica.org/
.. _Overture: http://overturetool.org
.. _`FMIChecker`: https://github.com/INTO-CPS-Association/FMI-VDM-Model
.. _`Rabbit FMU`: https://github.com/INTO-CPS-Association/fmu-rabbitmq
.. _`Core`: https://www.verified.de/products/rt-tester/
.. _`Model Based Extension (RTT-MBT)`: https://www.verified.de/products/model-based-testing/
.. _`Maestro CLI Interface`: https://github.com/INTO-CPS-Association/maestro/wiki/Getting-Started:-Running-a-co-simulation-through-maestro-CLI
.. _`INTO-CPS Library`: https://gitlab.au.dk/clagms/intocps-fmi-native-api-example
.. _`Python FMUs`: https://into-cps-association.readthedocs.io/projects/pyfmu/en/develop/
.. _`Maestro v2`: https://into-cps-maestro.readthedocs.io/en/latest/index.html




.. _tools:

*****
Tools
*****

The INTO-CPS toolchain consists of several tools for developing Cyber-Physical Systems.
These tools provide functionality needed to enable FMI based co-simulation namely as `Creating new FMUs`_, verify_ and `Performing Co-Simulations`_ the simulation of FMUs.
To keep the infrastructure as lightweight and flexible as possible the projects are hosted independently in their own repositories and provide standalone documentation.

A list of the tools and, grouped by the functionality they provide, can be found below:


Performing Co-Simulations
==========================

`INTO-CPS Desktop Application`_
-------------------------------
The `INTO-CPS Desktop Application`_ provides a graphical user interface which can be used to configure and orchestrate co-simulation scenarios.
Install instruction are found in the application's `documentation <https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/>`__.


`INTO-CPS Cloud Application`_
-----------------------------
The INTO-CPS Cloud Application is a port of the Desktop Application to run in a cloud environment.

`Modelio`_
----------

.. include:: ./tools/modelio.inc

Maestro_
--------
.. include:: ./tools/maestro.inc


Creating new FMUs
==================

Several commercial and open-source tools exist, that are enables the creation of FMUs.
An comprehensive list of these can be found in the `tools section <https://fmi-standard.org/tools/>`_ on the FMI-standard's website.

Below is a list of tools that are part of INTO-CPS that supports FMI export.

Overture_
---------
The Overture community supports the modelling method The Vienna Development Method (VDM) which is a set of modelling techniques that have a long and successful history in both research and industrial application in the development of computer-based systems.
`The Overture Tool`__ is an open-source integrated development environment (IDE) for developing and analysing VDM models. 
The tool suite is written entirely in Java and built on top of the Eclipse platform.

__ Overture_

.. image:: images/tools_overture.png
    :align: center

By installing a plugin, Overture can export its models as plain `C-code <http://overturetool.org/documentation/generating-c-code.html>`__ and as standalone `FMUs <http://overturetool.org/documentation/fmi/fmi-support.html>`__ that can be imported into a FMI compatible simulation tool such as the `INTO-CPS Desktop Application`_.

PyFMU_
------
PyFMU_ is a command line program that enables the rapid development of FMUs using Python.

`20-sim`_
-----------------------------------
20-sim_ is a modeling and simulation program for mechatronic systems. 
With 20-sim you can enter model graphically, similar to drawing an engineering scheme. 
With these models you can simulate and analyze the behavior of multi-domain dynamic systems and create control systems.
You can even generate C-code and run this code on hardware for rapid prototyping and HIL-simulation.

.. image:: images/tools_20sim.jpg
    :align: center

FMI support for INTO-CPS is provided using a code generation template. 

.. note::
    For 20-sim 4.5, this template can be downloaded from our `GitHub repository <https://github.com/controllab/fmi-export-20sim>`__ and the installation instructions can be found in the included `README <https://github.com/controllab/fmi-export-20sim/blob/master/README.md>`_ file.
    Starting with 20-sim 4.6, the template is available out of the box.

    Instructions on how to set up automated compilation of the .fmu are given under the section External dependencies in the above `README <https://github.com/controllab/fmi-export-20sim/blob/master/README.md>`_ file.


`OpenModelica`_
---------------
OpenModelica_ is an open-source Modelica-based modeling and simulation environment intended for industrial and academic usage.

.. image:: images/tools_openmodelica.png
    :align: center

The short-term goal is to develop an efficient interactive computational environment for the `Modelica <https://modelica.org>`__ language, as well as a rather complete implementation of the language.
It turns out that with support of appropriate tools and libraries, Modelica is very well suited as a computational language for development and execution of both low level and high level numerical algorithms, e.g. for control system design, solving nonlinear equation systems, or to develop optimization algorithms that are applied to complex applications.

The longer-term goal is to have a complete reference implementation of the Modelica language, including simulation of equation based models and additional facilities in the programming environment, as well as convenient facilities for research and experimentation in language design or other research activities. However, our goal is not to reach the level of performance and quality provided by current commercial Modelica environments that can handle large models requiring advanced analysis and optimization by the Modelica compiler.

Documentation
^^^^^^^^^^^^^

The OpenModelica users guide `as pdf or epub <https://openmodelica.org/doc/OpenModelicaUsersGuide/>`__
or as `html <https://openmodelica.org/doc/OpenModelicaUsersGuide/latest/>`__.
The OpenModelica `API documentation <https://build.openmodelica.org/Documentation/OpenModelica.Scripting.html>`__.
More documentation can be found `here <https://openmodelica.org/useresresources/userdocumentation>`__.


Export an FMU from OpenModelica
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


To export an FMU from a Modelica model one can use a exportFMU.mos script:

.. code-block::

    // start exportFMU.mos script
    loadModel(Modelica); getErrorString();
    // loadModel(AnotherLibraryIfNeeded); getErrorString();
    // loadFile("SomeMOFileContainingYourModel.mo"); getErrorString();
    translateModelFMU(ModelName, "2.0", "cs"); getErrorString();
    // end exportFMU.mos

| One can run the exportFMU.mos script via the omc[.exe] executable.
| On Windows:
| :code:`%OPENMODELICAHOME%\bin\omc exportFMU.mos`

| On Linux (if OpenModelica is installed via apt-get):
| :code:`omc exportFMU.mos`

| On MacOS X:
| :code:`omc exportFMU.mos`

Documentation of the function `translateModelFMU <https://build.openmodelica.org/Documentation/OpenModelica.Scripting.translateModelFMU.html>`_.


Link to OpenModelica latest binaries
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The latest release binaries for `Windows <https://openmodelica.org/download/download-windows>`_ can be found `here <https://build.openmodelica.org/omc/builds/windows/releases/1.9.3/>`__.
The latest nightly-builds binaries for Windows can be found `here <https://build.openmodelica.org/omc/builds/windows/nightly-builds/>`__.

We also support `Linux <https://openmodelica.org/download/download-linux>`_ and
`Mac OS <https://openmodelica.org/download/download-mac>`_ installations.

For more information see OpenModelica `users documentation <https://openmodelica.org/useresresources/userdocumentation>`__.

.. _verify:

Verifying compliance of FMUs
============================

To maximize compatibility between an FMU and existing simulation tools it is import to ensure strict compliance to the FMI standard.
Unfortunately, the current situation is less that ideal, since a large portion of FMUs encountered do not implement the standard correctly.

`FMIChecker`_
-------------


.. image:: images/tools_fmichecker.png
    :align: center

The FMIChecker_ is a command line tool that provides thorough static check of FMUs.
Install instructions can be found on the `GitHub Repository`__. Alternatively, the tool can be accessed at this `webpage <https://sweng.au.dk/fmiutils/fmichecker>`__, eliminating the need to install the tool. 

__ FMIChecker_

RT-Tester
---------

`Core`_
^^^^^^^^

`RT-Tester`__ is a test automation tool for automatic test generation, test execution and real-time test evaluation.
Key features include a strong C/C++-based test script language, high performance multi-threading, and hard real-time capability.
The tool has been successfully applied in avionics, rail automation, and automotive test projects.

More information is available on the product web site
`here <https://www.verified.de/products/rt-tester/>`__.

__ `Core`_


`Model Based Extension (RTT-MBT)`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
`RT-Tester Model Based Test Case and Test Data Generator (RTT-MBT)`__ supports model-based testing (MBT), that is, automated generation of test cases, test data, and test procedures from UML/SysML models.
A number of common modelling tools can be used as front-end for this.
The derived test procedures use the RT-Tester Core as a back-end, allowing the system under test to be provided on real hardware, software only, or even just simulation to aid test model development.
RTT-MBT includes requirement tracing from test models down to test executions and allows for powerful status reporting in large scale testing projects.
More information is available on the product web site
`here <https://www.verified.de/products/model-based-testing/>`__.

__ `Model Based Extension (RTT-MBT)`_

FMI/FMU support for RT-Tester / RTT-MBT
""""""""""""""""""""""""""""""""""""""""
The RTT-MBT component is catering for FMI/FMU by a specialised feature
release that allows to cast a test procedures to an FMI2-compliant FMU.
That FMU is in input to the COE.


Links to Documentation
""""""""""""""""""""""
The links to documentation of different tools are:

- `Maestro CLI Interface`_
- `INTO-CPS Library`_
- `Python FMUs`_
- `Maestro v2`_


Downloads
"""""""""
In order to operate properly, it is necessary to first obtain the prerequisite
tools Python-2.7 and gcc-4.9.
An installer collection is available `for Windows <https://secure.verified.de/f5x1hks4/into-cps/one-click/install_Python27_gcc49.exe>`__.

RT-Tester Core, RTT-MBT, RTTUI3, and prepared example projects can be downloaded and 
installed by one click `for Windows <https://secure.verified.de/f5x1hks4/into-cps/one-click/VSI_bundle.exe>`__.

Updates of the installers will be available at the same URL.

Interfacing
===========

`Rabbitmq FMU`_
---------------

`Rabbitmq FMU`_ provides a way to bring external data into an FMI co-simulation.





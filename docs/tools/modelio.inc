Modelio is a combined UML/BPMN modeler supporting a wide range of models and diagrams.
Its main features are:
    
    * SysML support integrated with UML and BPMN
    * XMI import and export
    * Scripting language support (Jython)
    * Extensibility: Modelio can be extended for any language, methodology or modeling technique just by adding modules. You can either use existing modules or else develop your own.

.. image:: images/tools_modelio.jpg
    :align: center

In addition, to its general purpose use, a special SysML profile allows Modelio to be used to setup co-simulation scenarios that can be executed within the INTO-CPS Desktop Application.
For information on how to use this integration see `Desktop Application Modelio integration <https://into-cps-association.readthedocs.io/projects/desktop-application/en/latest/integrations.html#modelio>`_


License
^^^^^^^
**Modelio** is **open source** software. Most of the source code is under the **GNU GPL** license. The module runtime, used to develop extensions to Modelio, is under the **Apache license** providing a very large degree of freedom to anyone wishing to reuse and embed the code.

Full details on Modelio licensing conditions can be found `here <http://www.modelio.org/about-modelio/license.html>`_.

Download and Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^
**Modelio's current version is 3.4.0**.

Binary distribution archives for Linux and Windows are available on the `download page <http://www.modelio.org/downloads/download-modelio.html>`_ of the Modelio community site.

Installation requirements and instructions can be found in our `Quick start guide <http://www.modelio.org/documentation/installation.html>`_ on the community site.

Modelio version contents can be found in the [[Version history]].

Installing INTO-CPS support
"""""""""""""""""""""""""""

A specific project have been created into Modelio.org forge `http://forge.modelio.org/projects/intocps <http://forge.modelio.org/projects/intocps>`_.

This latter will help you with:

    1. A dedicated wiki `http://forge.modelio.org/projects/into-cps-user-manual-english/wiki <http://forge.modelio.org/projects/into-cps-user-manual-english/wiki>`_
    2. Lattest version of INTO-CPS extension `http://forge.modelio.org/projects/intocps-modelio34/files <http://forge.modelio.org/projects/intocps-modelio34/files>`_
    3. Issues reporting `http://forge.modelio.org/projects/intocps/issues/new <http://forge.modelio.org/projects/intocps/issues/new>`_

To be able to use INTO-CPS extension into Modelio you have to first install the INTO-CPS module which is available here:

`http://forge.modelio.org/projects/intocps-modelio34/files <http://forge.modelio.org/projects/intocps-modelio34/files>`_.

and then add it to the Modelio module catalog.

Add INTO-CPS Extension
""""""""""""""""""""""

.. |1| image:: images/modelio/module_catalog.png

.. |2| image:: images/modelio/modulecatalog.png

.. |3| image:: images/modelio/en-installingmodules.png

.. |4| image:: images/modelio/maximize.png

.. |5| image:: images/modelio/add.png

|1|

**Key:**

    1. Run the **Configuration** |2| **Modules catalog...** command.
    2. To add a module, click on **Add a module to the catalog...** and use the file browser to select the modules (\*.jmdac files).
    3. To remove a module, select the module in question and click on the **Remove module from the catalog** button.
    4. To download new versions of modules into the catalog, click on **Check for new versions...**.

Installing modules in a project
""""""""""""""""""""""""""""""""

|3|

Installing a module in a project
""""""""""""""""""""""""""""""""

**Steps:**

    1. Click on [|4|] to expand the Modules catalog.
    2. In the Modules catalog, select the module you want to install.
    3. Click on [|5|] to install the module in the project.

Documentation
"""""""""""""

**For end users**

- `User's manual <http://forge.modelio.org/projects/modelio3-usermanual-english-300/wiki>`_ *(wiki)*
- `Installing a module in to Modelio <http://forge.modelio.org/projects/modelio3-usermanual-english-330/wiki/Modeler-_modeler_modelio_settings_modules_catalog>`_ *(wiki)*
- `Configuring Modelio project modules <http://forge.modelio.org/projects/modelio3-usermanual-english-330/wiki/Modeler-_modeler_managing_projects_configuring_project_modules>`_ *(wiki)*

Connection Export
^^^^^^^^^^^^^^^^^
    * How to export the configuration of a BlockInstance.

To generate a configuration from a BlockInstance, select the desired blockInstance, right click on it and in the INTO-CPS entry choose Generate configuration, 
as shown in |sysml-generateconfig|.

Choose a relevant name |sysml-configuration-name| and click on Generate.


.. |sysml-generateconfig| image:: images/modelio/sysml-generateconfig.png
.. |sysml-configuration-name| image:: images/modelio/sysml-configuration-name.png

FMU Import/Export
^^^^^^^^^^^^^^^^^

Two commands have been implemented in order to link SysML modelling and FMI definition i.e. the modeldescription.xml file defined inside the `FMI 2.0 Specification <https://www.fmi-standard.org/downloads>`_.

FMI Import
""""""""""

* This command imports the `modelDescription.xml` document describing the interface of a FMI and created an corresponding SysML Block under Modelio.
* Importing is easily done via the right click content menu, under a Package, as shown on the screenshot below.

|reversefmi|


FMI Export
""""""""""

* This only exports the `modelDescription.xml` document describing the interface of a FMI and not its behavior.
* Exporting is easily done via the right click content menu, under a SysML Block, as shown on the screenshot below.

|generatefmi|

.. |reversefmi| image:: images/modelio/reversefmi.png

.. |generatefmi| image:: images/modelio/generatefmi.png
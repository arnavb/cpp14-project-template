# Setting up Documentation {#setting_up_documentation}

\tableofcontents

\section local_documentation Setting up Local Documentation

This project relies on [Doxygen](http://www.doxygen.org/) to generate its documentation. In order to do so, a file `Doxyfile.in` is configured with many useful CMake variables from the file `doc/CMakeLists.txt`.
If you need to add extraneous documentation, such as these pages, you need a markdown structure similar to the following:

For your main page (`main_page.md`):

    # Project Name
    
    ... Contents ...
    
    This documentation is divided into the following sections:
    - \subpage pages_one
    - \subpage page_two

Each of the subpage commands tells Doxygen to create a reference to the file with that ID. In order to make this file the main page of your documentation, you need to add the following in `Doxyfile.in`:

    INPUT = @CMAKE_SOURCE_DIR@/doc/ \
            @CMAKE_SOURCE_DIR@/include/

    # ...

    USE_MDFILE_AS_MAINPAGE = @CMAKE_SOURCE_DIR@/doc/main_page.md

A subpage might looks as follows (`page_one.md`):

    # Page One {#page_one}
    
    ... Contents ...

In any of these files, if you have subsections (Created with `[backslash] section id Name`), then you can add a table of contents using the `[backslash] tableofcontents` command.

\section hosted_documentation Setting up Hosted Documentation

The easiest tool to get your documentation up and running on a website is [codedocs.xyz](https://codedocs.xyz/). In order to set that up, we need to add a `.codedocs` file in the root of the repository. Then, the following changes need to be made:

    DOXYFILE = doc/Doxyfile.in # We can reuse our Doxyfile
    
    ... Other variables ...
    
    #---------------------------------------------------------------------------
    # Doxygen Configuration
    #---------------------------------------------------------------------------
    
    # These variables have to be redefined since codedocs cannot run CMake
    PROJECT_NAME = "Project Name" # <-- These constants have to be hardcoded in
    PROJECT_NUMBER = 0.1.0
    PROJECT_BRIEF = "A cross-platform C++14 project template"
    OUTPUT_DIRECTORY = doc/
    INPUT = doc/ include/
    USE_MDFILE_AS_MAINPAGE = doc/main_page.md
    EXTRACT_ALL = NO

    ... Other Variables ...

After this, all you have to do is enable your repository on the Codedocs website and you're good to go!. Codedocs will rebuild your documentation after every push and will give you a README badge as well.

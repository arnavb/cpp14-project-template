# Setting up Continuous Integration {#setting_up_ci}

Setting up continuous integration in a C++ project is a lot easier than would be expected, as CMake handles most of the system level details required get a project building and running on Windows, Linux, and OSX.

This project uses the following CI tools:
- [Travis CI](https://travis-ci.org/)
- [Appveyor CI](https://www.appveyor.com/)
- [Codacy](https://www.codacy.com/)

In the two CI tools mentioned below, the default behavior is to run the following commands unless specified otherwise:
- Configure using `cmake`.
- Build using `cmake --build`.
- Run tests using `ctest`.

\section travis_ci Travis CI

Between Travis CI and Appveyor CI, Travis was much easier to set up than the latter. The current `.travis.yml` contains build jobs for:

- Linux Debug (g++-5)
- Linux Release (g++-5)
- OSX Debug (Default Clang with XCode9.2)
- OSX Release (Default Clang with XCode9.2)

For the debug build on Linux, a memory check is peformed using [Valgrind](http://valgrind.org/).

If you are fine with these settings, then all you have to do is enable your repository on Travis CI and add the badge for _your_ repository to the README.md!

\section appveyor_ci Appveyor CI

While setting up Appveyor was slightly harder than Travis CI, the overall usage is about the same. The current `appveyor.yml` contains the following jobs on Visual Studio 2017:

- Win32 Debug
- Win32 Release
- x64 Debug
- x64 Release

If you are fine with these settings, then all you have to do is enable your repository on Appveyor CI and add the badge for _your_ repository to the README.md!

\section codacy Codacy

Of all the continuous integration tools, Codacy was the easiest to set up. All you have to do is visit the Codacy website and enable your repository. After running checks using Cppcheck (Beware of false positives), you will get a badge that can be placed in your README.md.
# Setting up Continuous Integration {#setting_up_ci}

\tableofcontents

Setting up continuous integration in a C++ project is a lot easier than would be expected, as CMake handles most of the system level details required get a project building and running on Windows, Linux, and OSX.

This project uses the following CI tools:
- [Travis CI](https://travis-ci.org/)
- [Appveyor CI](https://www.appveyor.com/)
- [Codacy](https://www.codacy.com/)

In the two CI tools mentioned below, the default behavior is to run the following commands unless specified otherwise:
- Configure using `cmake`.
- Build using `cmake --build`.
- Run tests using `ctest`.

\section travis_ci Travis CI

Between Travis CI and Appveyor CI, Travis was much easier to set up than the latter. The current `.travis.yml` contains build jobs for:

- Linux Debug (g++-5)
- Linux Release (g++-5)
- OSX Debug (Default Clang with XCode9.2)
- OSX Release (Default Clang with XCode9.2)

For the debug build on Linux, a memory check is peformed using [Valgrind](http://valgrind.org/).

If you are fine with these settings, then all you have to do is enable your repository on Travis CI and add the badge for _your_ repository to the README.md!

\section appveyor_ci Appveyor CI

While setting up Appveyor was slightly harder than Travis CI, the overall usage is about the same. The current `appveyor.yml` contains the following jobs on Visual Studio 2017:

- Win32 Debug
- Win32 Release
- x64 Debug
- x64 Release

If you are fine with these settings, then all you have to do is enable your repository on Appveyor CI and add the badge for _your_ repository to the README.md!

\section codacy Codacy

Of all the continuous integration tools, Codacy was the easiest to set up. All you have to do is visit the Codacy website and enable your repository. After running checks using Cppcheck (Beware of false positives), you will get a badge that can be placed in your README.md.

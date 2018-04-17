# Setting up Continuous Integration {#setting_up_ci}

\tableofcontents

Setting up continuous integration in a C++ project is a lot easier than would be expected, as CMake handles most of the system level details required get a project building and running on Windows, Linux, and OSX.

This project uses the following CI tools:
- [Travis CI](https://travis-ci.org/)
- [Appveyor CI](https://www.appveyor.com/)
- [Codacy](https://www.codacy.com/)
- [Codecov.io](https://codecov.io/)
- [Coverity Scan](https://scan.coverity.com/)

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

\section codecov Codecov.io

Codecov is a tool that is used for hosting code coverage. The code coverage in this project is generated using a module `cmake/Modules/CodeCoverage.cmake` which uses LCOV/Genhtml to create coverage reports. This report is then uploaded to codecov.io at the end of every successful Travis build.
In order to get your project on codecov.io, it needs to be enabled on their website and it, along with Travis CI, will take care of all the rest!

\section coverity_scan Coverity Scan

Setting up Coverity Scan involves creating another branch `coverity_scan`, which will occasionally be merged into to get a static analysis. The following change also needs to be made to the build matrix of `.travis.yml`:

    include:
      - os: linux
        compiler: gcc
        before_install:
          - echo -n | openssl s_client -connect https://scan.coverity.com:443 | sed -ne '/-BEGIN CERTIFICATE-/,/-END CERTIFICATE-/p' | sudo tee -a /etc/ssl/certs/ca-
        addons:
          apt:
            sources:
              - ubuntu-toolchain-r-test
            packages:
              - g++-5
              - cmake
          coverity_scan:
            project:
              name: "username/repository"
              description: "Project description"
            notification_email: your_email@website.com
            build_command_prepend: "cov-configure --comptype gcc --compiler g++-5 --template && cmake -DCMAKE_CXX_COMPILER=g++-5 ."
            build_command: "cmake --build ."
            branch_pattern: coverity_scan
        before_script: echo "Coverity Scan"
        script: echo "Coverity Scan"

This addition to the build matrix (copied almost verbatim from the official website) allows the uploading of results to Coverity Scan, which your repository needs to be enabled on.

After setting up the first build, Coverity Scan will run a scan and give you a README badge. After 1-2 business days, Coverity Scan will also verify your affiliation with the project you have enabled, which will allow you to view defects.

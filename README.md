Phye's template for GNU Projects
================================

Directory Layout
----------------

Typicallly, in order to install the headers to /usr/include/phye/include, we need to make our project as `phye/phye/include`. As is listed below.
        
        admin@phye-s11-arch:phye$pwd
        /home/admin/Workspace/cpp/phye/phye

All directories contained are stated below:

   * *autogen.sh* :
       The bootstrapping script to run the series of autoconf commands to update all intermediate 
       files and generate `configure` finally.
   * *config* :
       Auxillary directory to store autotools intermediate files
   * *configure.ac* :
       Read by automake and autoconf (mainly) to generate configure
   * *doc* :
       Documents
   * *include* :
       All headers
   * *lib* :
       For common util sources, such as error handling
   * *src* :
       All source code files
   * *thirdparty* :
       All thirdparty tars, may contain untarred directories, such as gtest, libevent .etc
   * *ut* :
       Directory to store UT code and UT output
   * *Readme.md* :
       This file
   * *Makefile.am* :
       Read by automake to generate Makefile.in, which will be read by `configure` to generate 
       Makefile.

An example directy layout:

        admin@phye-s11-arch:phye$ls
        autogen.sh  configure.ac  include/  Makefile.am  src/         ut/
        config/     doc/          lib/      README.md    thirdparty/

# TME sujet semaine 4 : thread, atomic, mutex

[Homepage](https://pages.lip6.fr/Yann.Thierry-Mieg/PR)

To use the project :
*  Go to an empty folder (not your workspace)
```
mkdir -p tme4 ; cd tme4 ;

```
*  Clone the project, 
```
git clone https://github.com/yanntm/PSCR-TME4.git

```
* Reconfigure project.
This project is compatible with [autoconf/automake](https://www.lrde.epita.fr/~adl/autotools.html), after cloning, use the mantra 
```
cd PSCR-TME4
autoreconf -vfi
./configure 
```
in the root folder to build makefiles for your project.
* Import in eclipse or open with your favorite editor
For eclipse, `File->Import->existing projects into workspace`
* To build, simply run `make` in the folder or select "Project->Build Project" in Eclipse.


Look at the contents of "configure.ac", "Makefile.am" and "src/Makefile.am" which are the input to autotools, and are relatively simple and easy to read.

(c) Sorbonne Université 2018-2019

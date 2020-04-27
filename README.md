# AHK++
Compiler created for CMPE 152 at SJSU. This compiler is for a really random language based off of C++, Pascal, and AutoHotKey (hence the name AHK++). However, we currently lost what we used from AHK, so it's kinda just pascal++ now. However, we're keeping the name cause it sounds cool. 

## To run
Import all files to your C/C++ Project in eclipse. Ensure ANTLR 4.7.2 is installed and is setup properly to be used with eclipse. Once that is done, change your include settings (Project | Properties | C/C++ Build | Settings | GCC C++ Compiler | Includes) to include ANTLR4, the files in the main folder of the project, the wci folder, and /target/generated-sources/antlr4. Finally, go to GCC C++ Linker (in the same window) and select libraries. Add a new library and enter 'antlr4-runtime'. 

Afterwards, right click Pcl1.g4 | Run As | External Tools Configurations. Create a new ANTLR run configuration and in the 'Arugments' text, enter: 
```
-no-listener -visitor -encoding UTF-8 -Dlanguage=Cpp
```
Finally, create a new run configuration, and set the argument to sample1.pas (we will rename later). 

Now, run the Pcl1.g4 file, and then run the main program (ExprMain.cpp). The .j file should be generated. 

Finally, download Jasmin and the Pascal Run Time Library are in easy-to-find locations. Open terminal to the project folder and type the following: 

```
java -jar /your/path/to/jasmin.jar sample1.j
java -cp .:/your/path/to/PascalRTL.jar sample1
```
This will generate a class file (sample1.j) where you can then run it using Jasmin. 
### Current progress:
```
-Assignment 7 - compile Jasmin code and run the code
-As of 4/27 03:00, all parts of the .g4 file work except for print
```

#### Current problems:
```
-Cannot divide/multiply reals by integers and vice versa. This is why I use 9.0, 3.0, and 2.0 on some parts. 
-Hanging brackets MUST end with a semicolon
```

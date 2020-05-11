# Memertons
Compiler created for CMPE 152 at SJSU. This compiler is for a really random language based off of C++ and Pascal. Wanted to add our own special touch, so we made it all about Pepe the Frog as well. 

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
NOTE: For the second command, ENSURE there is no tilde (~) in the path. If there is, you WILL get errors. 
```
This will generate a class file (sample1.j) where you can then run it using Jasmin. 
### Current progress:
```
-Project done. Procedures/functions do not work (taking an L on that). Error recovery does not exist (also taking an L).
```

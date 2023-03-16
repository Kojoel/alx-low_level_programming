# This README.md file contains the description for all tasks done under the 0x00. C -Hello, World ALX Project

Task0 -> gcc -E $CFILE -o c
/*The script above runs the variable CFIle which contains the main.c file though the preprocessor operations. The -E tag is what deos this. The -c tag on the other hand is what generate a new file called c which compiles and assembles the main.c file.*/

Task1 -> gcc -c $CFILE
/*The script above compiles the c file stored in the local variable CFILE and creates a file with the same name as the c file but with an extension of ".o".*/

Task2 -> gcc -S $CFILE
/*This script converts the c file stored inside the local variable CFILE into an interpreted file with the .s extention*/

Task3 -> gcc -o cisfun $CFILE
/*This script creates an executable file from the c file stored inside the CFILE variable called cisfun*/

To execute the script, just run the main file called Main.c (located in the Main directory), which makes use of the library created for the ConcatRemove function, accessed through the files ConcatRem.c and ConcatRem.h (located in the ConcatRem directory).

If another compiler is used, the 3 files must be exported to the other compiler, or the ConcatRemove function (located in the ConcatRem.c file) must be copied to the Main.c file.

Data entry is done as follows:
	-The first line contains the string s, the starting string.
	-The second line contains the string t, the desired string.
	-The third line contains an integer k, the number of operations.

*Such information is captured by the getString() function, which limits the insertion of only letters of the Portuguese alphabet, ascii [a-z]. To change the lines listed above, it is necessary to use the Enter key, identified by code 13 in the ASCII table (if the compiler used uses another identification code, it is necessary to change it in line 27 of the Main.c file). It is worth mentioning that even if white spaces are introduced in the input string, they are disregarded by the application.

*To capture the information from the third line, the getNumber() function is used, which restricts the use of an integer value between 1 and 100. Following the same code 13 in the ASCII table, to finish inserting the desired value (if the compiler used use another identification code if necessary change it in line 57 of Main.c file).
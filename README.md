# Time a section of code.

Simplistic demonstration of timing a section of code.

It is sometimes useful to time the execution of a section of our code. For example, it can be used to compare the efficiency of different versions of an algorithm. Below is a short example program that demonstrates how to accomplish this:
 
This was tested in MSVC 2017. As a side note, its interesting to see the difference in execution time when this code is compiled as debug vs. release version. The volatile modifier is required for the integer value, otherwise the compiler optimization removes the entire seemingly useless for-loop and reports a 0 length of time for the the execution in the release version.


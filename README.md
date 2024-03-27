A simple, yet dynamic approach to guess a random number using in-built C++ libraries (i.e., cstdlib & ctime)
This code majorly relies on the working of "srand()" function for seeding the initial instances of reference points, and this functionality is achieved using "time()" function.
As time intervals constantly change for every consequtive time differences, there exists a unique initiating point for seeding. 
Thus, this factor helps "rand()" function to continually generate pseudo-random numbers.

Rest part of the code is looked after by (do-while) & (if-else) control statements.


{*NOTE: This program was implemented using OOPS concept (i.e., classes & objects). But, can also be achieved via the conventional method of coding, that is...without making use of 
classes or objects.}

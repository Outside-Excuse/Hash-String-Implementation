# Hash-String-Implementation
Write a C++ program that allows you to decide if a pattern  is contained inside a text using Hash Strings. Your program must convert the pattern and each word inside the text to its equivalent Hash String.

Then, if the Hash String of the pattern matches with some Hash String of the text, then the program should find all occurences in the text using KMP or the Z algorithm. The positions found must be shown one each line, showing line number, starting and ending index of the occurence.

Input Format

A text , with length , and a pattern  with length .

The text and the pattern have the same alphabet  (lowercase letters of the english language alphabet).

The first line corresponds to , and the second line corresponds to .

Constraints



Output Format

For each appearance of the pattern in the text, in a single line show: the number of the line, the starting, and ending index in which the pattern was found in the text.

Sample Input 0

potential
pair potential energy is a crucial concept in physics to measure the interaction
between particles of a system in recent years this kind of potential
energy functions has been used in evolutionary multi objective optimization
to generate pareto front approximations with good diversity properties however
an in depth study on how to use these functions is missing in this paper we provide
an exhaustive analysis of the utilization of pair potential energy functions ppfs
to generate a reference point set and to increase the diversity properties of
pareto front approximations generated by multi objective evolutionary algorithms
according to our experimental results the utilization of ppf based mechanisms
lead to the generation of high diversity pareto front approximations regardless
of the underlying geometry that is it is shown that they are promising
diversity preserving mechanisms in multi objective optimization for
algorithm design algorithm evaluation and problem analysis
Sample Output 0

1 6 14
2 60 68
6 51 59

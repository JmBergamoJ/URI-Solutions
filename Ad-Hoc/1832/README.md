URI Online Judge | 1832
# EBCDIC

Por Edson Alves, Faculdade UnB Gama BR Brazil

Timelimit: 3

EBCDIC (Extended Binary Coded Decimal Interchange Code) is a 8-bits character encoding schema developed by IBM in sixties. It is based on punched cards encoding, and was used in IBM mainframes. Though it uses a larger encoding interval than ASCII 7-bits range, EBCDIC is less user friendly that ASCII because the alphanumeric characters are not contiguous as in the former schema.


The following image shows the EBCDIC encoding table. White cells area unused values, and two or more uppercase characters represents non-printable chars. BLANK is the whitespace character.

![EBCDIC Table] (https://www.urionlinejudge.com.br/gallery/images/problems/UOJ_1832.png)


Write a program that convert a EBCDIC-encoded text to ASCII encoding.

## Input

The input consists in several test cases. Each case is composed by a single line with the 3 digit octal values of each EBCDIC character, separated by a single space.

You may assume that the messages will only correspond to alphanumeric or whitespace characters.

## Output

For each test case the output must be the message in ASCII encoding, followed by a newline character.

Input Samples|	Output Samples
|-|-|
343 205 247 243 226|Texto
324 205 225 242 201 207 205 224 100 361|Mensagem 1
324 205 225 242 201 207 205 224 100 362|Mensagem 2
306 211 224|Fim
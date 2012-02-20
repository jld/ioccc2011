Yet Another Obfuscated Sudoku Generator
=======================================

Introduction
------------

This program generates and prints an instance of everyone's favorite
combinatorial logic puzzle, Sudoku.  In this it revisits the subject
matter of a previous winner (which I unaccountably failed to notice
until it was too late to rework the idea for a different puzzle), but
it takes a different approach.

How It Works
------------

Most people who write Sudoku utilities are, presumably, fans of the
puzzle itself; they have likely put much time and effort into solving
it, in the process developing a collection of strategies for deriving
information from the state of the board, and for those who also
construct puzzles manually, it is likely that the approach is based on
some form of iterative test-solving.  These cognitive biases may
affect programs they write; indeed, the previous IOCCC Sudoku program
was described as taking a similar solving approach to its author.

This program, by contrast, reflects *my* cognitive biases.  It creates
a random Sudoku solution and then describes it to you, omitting some
pathetically obvious parts that can be trivially and unambiguously
reconstructed from the rest.  Humans will find it challenging, and
perhaps greatly so, to perform this informationally meaningless
activity.  (Experimentally, a few percent of the output puzzles will
require a slightly more sophisticated form of inference; humans will
deride this as "trial-and-error" and become unhappy at having to
perform it.  No attempt has been made to either prevent or ensure this
situation.)  Similarly, the implementation of the Sudoku rule which
underlies this is one which I suspect is alien to many in the puzzling
community; and anyone who did happen to recognize it might be puzzled
by some of the choices I've had to make in the service of obfuscation.

Building and Running
--------------------

The code assumes ASCII, and uses the random() function from POSIX
2001; it should otherwise be ANSI C.  In particular, some of the more
obscure causes of undefined behavior have been carefully avoided (or
so I hope), even at the cost of less obfuscation.  It also compiles
with all warnings enabled and warnings-as-errors on two different C
compilers, and passes lint with several kinds of optional nitpicking
enabled (although the system headers on that host did not).

The program takes one optional argument, which is the pseudorandom
seed; if omitted, the current time in seconds is used instead.  The
output format is simple, but it gets the information across.

Obfuscation
-----------

1. The unusual arrangements of whitespace are mostly there for
artistic purposes; given the existence of reformatters, this is not
expected to accomplish much by way of meaningful obfuscation.

2. The macros.  The program begins with a bunch of #define directives,
and approximately everything else is done in terms of them.  However,
expanding them results in a program which -- while perhaps not as
opaque as the original -- is rather verbose, still relatively
unpleasant to read, and certainly doesn't look anything like a normal
C program.  It might be easier just to understand the original.

3. Pointers.  A number of variables are declared with a relatively
uninformative pointer type, and then manipulated.  Certainly
information can be extracted from this sort of code -- it runs, after
all -- but it's not exactly leaping out of the screen at the reader.

4. Some pieces of code which would be dismayingly straightforward
despite the other layers of obfuscation have been locally transformed
to yield a more convoluted sequence which happens to leave the right
values in the right places, or close enough for the context.

5. So there's a string literal with a bunch of gibberish in it.  Yeah.
How about that.

6. The usual suspects: short non-mnemonic identifiers for everything,
the whole program in one giant function, main recursion *and*
considerately harmful goto, etc.

7. As mentioned above, the algorithms used here are, I think, not ones
which a typical programmer would choose to solve the problems that
they're used for.


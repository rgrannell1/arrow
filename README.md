Arrow v0.1
-----------------------------------

**Arrow** is a functional programming framework that adds partial application, 
jQuery-like method calling, function composition, 
and nearly one-hundred higher-order functions and utility functions to the R language.
Arrow helps make R an elegant functional language with an emphasis on the composition
of simple functions to create complex, expressive programs.

## 1 Installation

As of late August 2013 **Arrow** is only available on Github. To install the development version, copy the
following into an R console.

```javascript
install.packages('devtools')
require(devtools)

install_github("arrow", "rgrannell1", "develop")
require(devtools)

# check that arrow installed.
xVersion()
```
All **Arrow** functions are prefixed with the letter "x". This is to avoid naming conflicts and to 
help the user find the function they are looking for.

## 2 Features

### 2.1 Generic & Idiomatic

In general **Arrow** functions are as generic with respect to input type as possible,
though their output types are more rigidly defined.

```javascript
identical(
    xMap( function (x) x, 1:10),
    xMap( function (x) x, as.list(1:10)) )
identical(
    xMap( function (x) x, 1:10),
    xMap( function (x) x, as.pairlist(1:10)) )

# transitively xMap vector == xMap pairlist
```
Having a fixed output type makes arrow functions very easy to compose; Functions that normally
return integers will never return a NULL for some corner case.
Refreshingly, it also means that your code won't use ```if(is.null(x))``` like
full stops in an essay.

```javascript
xSubStr('alonzo-church', c(1:3, 5, 7))
'alonoc'
```

R is unusual (in a good way) in that numbers and other values are always wrapped in 
vectors, so base functions operate on whole vectors as well as single values.
**Arrow** is vectorisation-friendly; where possible functions operate on vectors 
of values.

### 2.2 Functional

Arrow includes the standard map, select, fold, zip, flip, dropwhile, and position higher-order
functions (among others) as well as function composition and partial application.

```javascript

unlapply <- unlist %of% lapply
function (X, FUN, ...) 
{
    fn1(fn2(X, FUN, ...))
}

```

Functions that return functions - like ```xCompose()``` - preserve parameter names 
and produce human-readable code.

```javascript
isPrime <- function (n) {
    n == 2 || all(n %% 2:(n-1) != 0)
}
getPrimes <- xSelect(isPrime)
getPrimes(1:1000)

[1] 2  3  5  7 11 13 17 19 23 29 31 ...
```

FP allows a declarative style of programming; rather than using 
looping and pushing and pulling values into and out of containers, you focus more on 
the definition of the problem in terms of common patterns like filtering lists, 
or accumulating a value by recursing over a list.

Note that the user is not required to know the Lambda Calculus, or to understand monoids
in the category of endofunctors [1] to use this library; functions are only 
included in **Arrow** if they have a plausable use-case, and 
even then their mathematical underpinnings are masked [2].

### 2.3 Arrow Functions

**Arrow** includes a shorthand syntax for unary functions; arrow functions. [4]

```javascript
# a polynomial equation

f <- x := {
    2*x^2 * 3*x + 10
}
g <- x := {
    x^2 + 2*x
}

# Map a composite polynomial function over a vector.
xMap(xPlusLift(f, g), 1:1000)

# grab all underscored vars in base.
xSelect(
    name := {
        grepl('_', name)
    },
    ls('package:base')
)

# get the largest value in a list
xReduce(
    (acc : new) := {
        max(acc, new)
    },
    list(1:1000)
)

```

Curly braces are usually syntactically optional, but they make the function more readable. At the 
moment I know of no acceptable way of extending this syntax to functions of higher arity, though 
this may be included at a later date.

### 2.4 Cascading Style

In this style data is fed into the type constructor [1] ```x_```, and methods are called off that object. 
This small program gets every parametre used in the R base library.

```javascript
x_(ls("package:base"))$  
xMap(function (x) get(x))$
xSelect(is.function)$
xMap(xParams)$
xReducel(union)$
x()
```

The final method - ```x()``` - takes the data out the object constructed by ```x_()``` 
for normal R functions to operate on.

### 2.5 Partial Application & Currying

Specialising general functions like select and fold is simple in **Arrow**.

```javascript
# be gone, na values!
xPartial(xReject, list(pred = is.na))

function (coll) 
{
    fn(.Primitive("is.na"), coll)
}
<environment: 0x5e8eb38>
```

### 2.6 Combinators

Combinators are powerful functions that combine functions in interesting ways. **Arrow** implements many 
combinators, giving them a formal name (eg. ```xPhi```), a descriptive name (eg. ```xBiCompose```) and
most importantly, an avian name (```xPhoenix```)[3].

```javascript
func_add <- xPartial(xBiCompose, list(fn1 = "+"))
# equivelant to the function xPlusLift()
func_add(
    function (x) 2*x + x,
    function (x) 3*x + x
)(1:100)
```

In fact combinators are so powerful that the ```xI``` (identity), ```xK```
(return a constant function), and 
```xS``` (a substitution combinator) that they in themselves can define a programming language!

```javascript
x_(1:100)$
xSelect( xOrLift(
    # two uncommon properties
    n := {n^2 == 2^n},
    n := {n*2 == n*n}
))
[1] 2 4

xModLift( function (n) n^2, xK(6) )(1:4)
[1] 1 4 3 4
```

Of course, this is a less likely use of combinators than defining
your own control structures for functions. Arrow particularily emphasises 
arithmetic on functions, with several functions with short names added for that purpose.

#### 2.7 Existential Quantifiers

**Arrow** includes the powerful quantifiers `xForall` and `xExists`, as well
as other quantifier functions.

For example, to verify that addition is commutative, you could write:

```javascript
xForall(
    (a : b) := {
        a + b == b + a
    }
    1:100,
    1:100
)
```
Or even

```javascript
xForall(
    a := {
        xExists(
            b := {
                a + b == b + a 
            }, 
            1:100
        )
    },
    1:100
)
```







### 2.8 Immutable Values

Using immutable values can make reasoning about code easier.
R provides a mechanism for permenantly binding a value to a name, but it it somewhat clumsy. **Arrow** wraps these 
native functions.

```javascript

xVal(a, 'try change me!')
a <- 'will fail'

Error: cannot change value of locked binding for 'a'
```
**Arrow** also has utility functions for modifying values.

## 3 Footnotes

[1] I won't use *that* word; every mention of *that* word cuts the usership of an FP library by half.

[2] This is a good thing: the worst example of overally mathematical code I saw while researching FP libraries was 
a function called a zygohistomorphic propremorpism. Useful concept I'm sure, but one with a horrible name.

[3] Raymond Smullyan's incredible *To Mock a Mockingbird* aliases combinators like K with a 
birdname (kestrel). These names are used fairly often, so I included them.

[4] Not to be confused with Arrows, the more general cousin of the Category-that-shall-not be named.

## 4 Licensing

**Arrow** is released under the terms of the GNU General Public License version 3. 

<img src="gpl3.png" height = "180"> </img>

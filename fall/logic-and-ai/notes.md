#Prolog Notes

###Chapter 1- Facts, Rules and Queries 

####Basics 

```
man(Socrates).
```

Then asking Prolog

```
?- man(Socrates).
```

results in 

```
yes 
```

Modus Ponens

```
man(Socrates):-mortal(Socrates).
mortal(Socrates).
```

Asking Prolog 

```
?- man(Socrates).
```

```
yes
```

note: you can also chain together modus ponens

You can also step through the following Knowledge Base

```
woman(mia).
woman(jenny).
```

with the following queries 

```
?- woman(X).
```
output
```
mia
```
```
?- ;
```
output
```
jenny
```
```
?- ;
```
output
```
no
```

Rules with variables

'Marcellus kills everyone who gives Mia a footmassage.'

```
kills(marcellus, X) :- givesFootMassage(X, mia).
```




####And Or

'And' (conjunction)

```run(jack):-happy(jack),alive(jack). ```


'Or' (disjunction)


```eat(jack):-hungry(jack);bored(jack). ```

####Syntax

Atoms: lower case or in ' ' e.g. jack, 'jack'

Variables: starts with either uppercase or underscore e.g. Jules, _Jules 

Complex arguments: functor must be an atom

Arity: number of arguments in a complex term


###Lists

A list is a 'pair' of a first element and a list.

####Unifying Lists

To check if two lists can be unified

```
[X,Y,Z] = [a,b,c]
```
```
yes
```
Check if X is a member of a list

```
?- is_member_of(3,[1,2,3]).
```

What elements are in a list (nonmember also works)

```
?- member(X,[1,2,3]).
```

Generate a list containing X

```
?- is_member_of(3,L).
```

Length of a list

```
?- length(?L, ?N)
```

Concatenate lists

```
append([1,2],[2]).
```










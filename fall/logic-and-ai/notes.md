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


###Chapter 2- Matching and Proof Search








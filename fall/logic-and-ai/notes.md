#Prolog Notes

###Chapter 1

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
```
mia
```
```
?- ;
```
```
jenny
```
```
?- ;
```
```
no
```

'And' (conjunction)

```run(jack):-happy(jack),alive(jack). ```


'Or' (disjunction)


```eat(jack):-hungry(jack);bored(jack). ```






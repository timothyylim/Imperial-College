#Prolog Notes

###Chapter 1

Creating the statment

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


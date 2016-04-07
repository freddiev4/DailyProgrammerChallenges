# Description

For a set of men {*A,B,...,Z*} and a set of women {*a,b,...,z*} they have a preference table - *A* would prefer to marry *b*, but will be satisfied to marry *c*; *c* would prefer to marry *B*, will be OK to marry *C*, etc. Matches are considered *unstable* if there exists a pair who likes each other more than their spouses.  The challenge is then to construct a stable set of marriages given the preferences.

The Gale-Shapley Theorem tells us that a stable marriage is always possible, and found in *O*( *n^2* ) time.

# Formal Input Description

You'll be given the individual (uppercase for men, lowercase for women) identifier first, then the identifiers for their preferences for each member of the set of men (uppercase letters) and women (given by lowercase letters). 

# Formal Output Description

You'll emit the list of pairs that satisfy the constraints.

# Sample Input

    A, b, c, a
    B, b, a, c
    C, c, a, b
    a, C, B, A
    b, A, C, B
    c, A, C, B

# Sample Output

**updated** 


    (A; b)
    (B; a)
    (C; c)

# Challenge Input

    A, b, d, g, h, c, j, a, f, i, e
    B, f, b, i, g, a, j, h, e, c, d
    C, b, i, j, g, h, d, e, f, c, a
    D, f, a, e, i, c, j, b, g, d, h
    E, f, d, a, e, i, b, c, g, j, h
    F, d, f, a, c, j, e, i, b, g, h
    G, e, g, c, b, f, d, a, i, j, h
    H, f, i, b, c, e, a, h, g, d, j
    I, i, a, j, f, c, e, b, g, h, d
    J, h, f, c, e, b, a, j, g, d, i
    a, J, C, E, I, B, F, D, G, A, H
    b, I, H, J, C, D, A, E, B, G, F
    c, C, B, I, F, H, A, D, J, G, E
    d, F, G, J, D, C, E, I, H, B, A
    e, D, G, J, C, A, H, I, E, B, F
    f, E, H, C, J, B, F, D, A, G, I
    g, J, F, G, E, I, A, H, B, D, C
    h, E, C, B, H, I, A, G, D, F, J
    i, J, A, F, G, E, D, H, B, I, C
    j, E, A, B, C, J, I, G, D, H, F

# Challenge  Output 

**updated** 

    (A; j)
    (B; c)
    (C; h)
    (D; e)
    (E; f)
    (F; d)
    (G; g)
    (H; i)
    (I; b)
    (J; a)


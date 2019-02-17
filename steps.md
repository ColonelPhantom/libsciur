input -> tokenize -> index

# INDEX FIELDS:
### Term:
- Term
- Number of rows containing the term
- Number of instances of the term

### Occurence
- Term
- DocumentID
- Offset

## 0th normalization
(Term, rows, insts, (documentid, occnum, (offset)))

## Normalised
(Term, rows, insts)
(Term, documentid, occum)
(Term, documentid, offset)

## SQLite

## upscaleDB


# peakassoCompose

This is BIL395 Programming Languages Assignment 2, completed on 5 March 2020.

The program reads a painted ASCII canvas and writes a Peakasso program that redraws it. Solid rectangles of `*` become brushes. Each brush is applied with one `PAINT-CANVAS` statement, so the number of paint statements equals the number of rectangles.

## Run

`peakasso.c` is the program for the assignment. `input.txt` is a sample canvas: the first line is `width height`, and each following line is one row. `*` is painted and a space is empty.

```bash
gcc -o peakasso peakasso.c
./peakasso < input.txt
```

`findRectangles.c` reads the same kind of input and prints rectangle corners. `findRectangles.py` runs a separate hardcoded example and does not read `input.txt`.

```bash
gcc -o findRectangles findRectangles.c
./findRectangles < input.txt
```

```bash
python3 findRectangles.py
```

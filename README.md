# Array Processing and Manipulation in C

Array Processing and Manipulation in C is a collection of nine console-based exercises focused on building a practical understanding of how ordered data can be stored, traversed, transformed, compared, filtered, and combined. The project progresses from foundational operations, such as displaying values in reverse order and calculating aggregate results, to rotations, positional shifts, duplicate removal, intersections, sorted merges, and value-based selection. Each exercise is self-contained and uses keyboard input to demonstrate a distinct array-processing scenario, making the collection suitable for studying core procedural problem-solving techniques and documenting hands-on experience with the C language.

## Project contents

| Exercise | Topic | Behavior |
| --- | --- | --- |
| `exercise_01.c` | Reverse traversal | Reads five integers and displays the sequence in both its original and reverse order. |
| `exercise_02.c` | Aggregate calculations | Reads five integers, then calculates and displays their sum and integer arithmetic mean. |
| `exercise_03.c` | Circular rotation | Reads a user-sized integer array and rotates it left or right by a chosen number of positions. |
| `exercise_04.c` | Positional shifts | Applies a one-position left shift followed by a one-position right shift, filling the newly available position with zero. |
| `exercise_05.c` | Array compaction | Builds a second array that excludes zero values and retains a single occurrence of each remaining integer. |
| `exercise_06.c` | Array intersection | Compares two integer arrays and collects the values that occur in both. |
| `exercise_07.c` | Sorted merge | Sorts two integer arrays, combines them, and sorts the resulting array in ascending order. |
| `exercise_08.c` | Unique sorted merge | Combines two integer arrays into an ascending sequence without repeated values. |
| `exercise_09.c` | Positive-value filtering | Reads five real values and copies the positive values into a second array for display. |

## Technical overview

- Each source file is an independent command-line program with its own entry point.
- Input is collected interactively from standard input, and results are written to standard output.
- Exercises use fixed-size and runtime-sized arrays, indexed traversal, nested comparisons, conditional filtering, swaps, and temporary storage.
- The implementation depends only on the C standard library. No third-party libraries or external data files are required.
- Runtime-sized arrays are used in several exercises, so a compiler with C99 variable-length array support is required.
- Console prompts are written in Italian, while this documentation is written in English.

## Prerequisites

Install a C compiler that supports C99. GCC is used in the commands below and is available through common toolchains on every supported operating system:

- Windows: GCC through MinGW-w64 or an equivalent distribution.
- macOS: GCC, or Clang invoked by replacing `gcc` with `clang` in the commands.
- Linux: GCC from the distribution's standard development toolchain.

Confirm that the compiler is available from the terminal:

```text
gcc --version
```

Run all commands from the repository root, where the `exercise_01.c` through `exercise_09.c` files are located.

## Build instructions

### Windows

Open PowerShell in the repository root and compile every exercise into the `build` directory:

```powershell
New-Item -ItemType Directory -Force build | Out-Null

1..9 | ForEach-Object {
    $id = "{0:D2}" -f $_
    gcc -std=c99 -Wall -Wextra -pedantic "exercise_$id.c" -o "build/exercise_$id.exe"
}
```

To compile a single exercise instead, use its two-digit identifier:

```powershell
gcc -std=c99 -Wall -Wextra -pedantic exercise_01.c -o build/exercise_01.exe
```

### macOS and Linux

Open a terminal in the repository root and compile every exercise into the `build` directory:

```bash
mkdir -p build

for source in exercise_*.c; do
    name="${source%.c}"
    gcc -std=c99 -Wall -Wextra -pedantic "$source" -o "build/$name"
done
```

To compile a single exercise instead, use its two-digit identifier:

```bash
gcc -std=c99 -Wall -Wextra -pedantic exercise_01.c -o build/exercise_01
```

## Run instructions

Every program is interactive. Run one executable, enter the requested values, and read the results printed in the terminal. Running one exercise at a time is recommended because input requirements differ across the collection.

### Windows

```powershell
.\build\exercise_01.exe
```

Replace `01` with any identifier from `02` through `09` to run another exercise.

To execute the complete collection sequentially:

```powershell
1..9 | ForEach-Object {
    $id = "{0:D2}" -f $_
    & ".\build\exercise_$id.exe"
}
```

### macOS and Linux

```bash
./build/exercise_01
```

Replace `01` with any identifier from `02` through `09` to run another exercise.

To execute the complete collection sequentially:

```bash
for executable in build/exercise_*; do
    "$executable"
done
```

## Input guidelines

- Enter numeric values only when prompted and press Enter after each value.
- Exercises 01, 02, and 09 process exactly five values.
- Exercises 03 and 04 request the array length at runtime.
- Exercise 05 accepts an array length of up to 20 elements.
- Exercise 06 accepts two array lengths of up to 30 elements each.
- Exercises 07 and 08 accept two array lengths of up to 20 elements each.
- Exercise 03 additionally requests the rotation direction and the number of positions.
- Exercises 01 through 08 operate on integers; exercise 09 operates on real values.

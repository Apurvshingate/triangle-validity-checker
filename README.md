# Triangle Validity Checker

A simple C program that checks whether three entered angles can form a valid triangle.

## How it works

The program asks for three angle measures in degrees. It reports the triangle as valid when all three angles are greater than zero and their sum is exactly 180 degrees.

The program expects integer angle values.

## Build and run

With GCC on Linux or macOS:

```sh
gcc triangle_validity.c -o triangle_validity
./triangle_validity
```

With GCC (MinGW) on Windows:

```powershell
gcc triangle_validity.c -o triangle_validity.exe
.\triangle_validity.exe
```

## Example

```text
enter angle a
60
enter angle b
60
enter angle c
60
this triangle is Valid
```

For example, `90`, `45`, and `30` are reported as not valid because they add up to 165 degrees.

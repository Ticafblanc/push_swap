# Push Swap - 42 School Project

Implementation of the Push Swap project, an efficient sorting algorithm for 42 school.

## Table of Contents

- [Project Overview](#project-overview)
- [Installation and Compilation](#installation-and-compilation)
- [Usage](#usage)
- [Algorithm Explanation](#algorithm-explanation)
- [Performance](#performance)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Project Overview

The goal of Push Swap is to sort data on a stack, with a limited set of instructions, using the smallest possible number of actions. The project includes two programs:
- `checker`, which takes integer arguments and reads instructions on the standard output. Once read, checker executes them and displays `OK` if the integers are sorted, or `KO` otherwise.
- `push_swap`, which calculates and displays on the standard output the smallest program using Push Swap instruction language that sorts integer arguments.

## Installation and Compilation

```bash
git clone https://github.com/[your_username]/push_swap.git
cd push_swap
make
```

## Usage

Run `push_swap` with a list of integers:

```bash
./push_swap 5 2 3 1 4
```

You can then test the generated operations with `checker`:

```bash
./push_swap 5 2 3 1 4 | ./checker 5 2 3 1 4
```

## Algorithm Explanation

[Provide a brief explanation of the algorithm you implemented, its logic, and decisions made.]

## Performance

[Provide some performance metrics or benchmarks, if applicable.]

## Contributing

Contributions are welcome! Please read the [contributing guidelines](CONTRIBUTING.md) first.

## License

This project is licensed under the [MIT License](LICENSE).

## Contact

For any questions or feedback, please reach out to me at [GitHub profil](https://github.com/Ticafblanc).


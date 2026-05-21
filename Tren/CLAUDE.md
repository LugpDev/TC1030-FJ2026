# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Commands

```bash
make          # Compile all sources into the `tren` executable
make run      # Build and run the executable
make clean    # Remove object files and the executable
```

No test framework is used; verification is done by running the program and inspecting stdout.

## Architecture

This is a C++17 OOP project (ITC/POO course) modeling a train composed of wagons.

**Class hierarchy:**

- `Vagon` (abstract base) — holds `peso`, defines pure virtual `calcularPeso()` and `mostrar()`, overloads `operator>` (compares by calculated weight) and `operator<<` (delegates to `mostrar()`).
- `VagonCarga : Vagon` — cargo wagon; weight = `pesom3 * volumen`.
- `VagonPasajeros : Vagon` — passenger wagon; weight = `num * 70.0 kg`.
- `Tren` — owns a `vector<Vagon*>` plus fixed `locomotora` and `vagoncola` weights. `pesoTotal()` sums only the wagon vector (locomotora/vagoncola are stored but not summed). Wagons are added via `agregarVagon()` or the overloaded `operator+`.

**Key design points:**
- `Vagon*` is the polymorphic handle used throughout — `operator<<` and `operator>` take raw pointers.
- `Tren::operator+` is void-returning (does not chain), wrapping `agregarVagon()`.
- Memory is managed manually with `new`/`delete`; only `Tren` itself is deleted in `main` — wagon pointers in the vector are not freed.

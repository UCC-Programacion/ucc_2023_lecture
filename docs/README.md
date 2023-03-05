# Documentacion

## Estructura del repositorio

Es un proyecto de [`cmake`](https://es.wikipedia.org/wiki/CMake) (cross platform
make) para automatizar la construccion de los ejecutables de cada ejercicio.

Contenido de las carpetas

- `template/`, codigo de referencia para construir ejecutables de 1 archivo,
  multiples archivos y automatizar pruebas.
- `u1/-u5/`, carpetas para los ejercicios correspondientes a las unidades 1-5.
  Cada carpeta tiene sub-carpetas `ej01/-ej15/` correspondientes a los
  ejercicios 01-15 de la unidad correspondiente.

Otras carpetas de configuracion

- `.idea`, configuracion [CLion](https://www.jetbrains.com/clion/) que se puede
  usar con una
  [licencia educativa](https://www.jetbrains.com/community/education/#students/)
- `.devcontainer`, configuracion para poder crear un entorno de desarrollo con
  [GitHub CodeSpaces](https://docs.github.com/es/codespaces/overview) o
  [Docker](https://www.docker.com)
- `.vscode`, configuracion de
  [Visual Studio Code](https://code.visualstudio.com)
- `.github`, configuracion de
  [GitHub Actions](https://github.com/features/actions) para compilar en cada
  `git push` a `main`

## `CMakeLists.txt`

En este archivo se describe como crear cada `cmake` `target`.

Un `target` puede ser un ejecutable o una libreria.

Por ejemplo

```cmake
cmake_minimum_required(VERSION 3.24)
project(ucc_2023)

set(CMAKE_CXX_STANDARD 17)

add_executable(mi_ejecutable main.cpp utils.cpp)
```

- se necesita al menos la `cmake` v3.24
- el proyecto se llama `ucc_2023`
- el estandar de `C++` es [`C++17`](https://es.wikipedia.org/wiki/C%2B%2B17)
- el `target` es un ejecutable con nombre `mi_ejecutable` y depende del codigo
  fuente de `main.cpp` y `utils.cpp`

Para configurar un proyecto de `cmake` en la carpeta `build/` en modo `Debug`,
se debe ejecutar en consola

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug
```

Luego para construir el `target` `mi_ejecutable` en la carpeta `build/` en modo
`Debug`, se debe ejecutar en consola

```bash
cmake --build build --config Debug --target mi_ejecutable
```

Notas

- `CLion` esta preconfigurado para configurar y construir proyectos con `cmake`
- `Visual Studio Code` se puede configurar con extensiones para configurar y
  construir proyectos con `cmake`
- `GitHub CodeSpaces` esta configurado con `.devcontainer/` para generar un
  entorno de desarrollo

En el repositorio hay varios archivos de `CMakeLists.txt` y se relacionan con
`add_subdirectory(nombre_carpeta)`.

Por ejemplo

```cmake
cmake_minimum_required(VERSION 3.24)
project(ucc_2023)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(u1)
add_subdirectory(u2)
add_subdirectory(u3)
add_subdirectory(u4)
add_subdirectory(u5)
```

- `add_subdirectory(u1)` agrega el contenido de `u1/CMakeLists.txt`
- `add_subdirectory(u2)` agrega el contenido de `u2/CMakeLists.txt`
- ...

## Links de interes

- https://hackingcpp.com/cpp/beginners_guide.html
- https://www.learncpp.com/
- [`#pragma once`](https://es.wikipedia.org/wiki/Pragma_once)
- [What are ‘Include Guards’ and #pragma once?](https://64.github.io/cpp-faq/include-guards-pragma-once/)
- [Why 'using namespace std' Is A Bad Practice?](https://youtu.be/8gZNFt0YEZI)
- [Why I don't "using namespace std"?](https://youtu.be/4NYC-VU-svE)
- [Copy-and-Swap](https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Copy-and-swap)
  idiom

Videos

- [C++ by The Cherno](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
- [C++ Tutorials by Portfolio Courses](https://www.youtube.com/playlist?list=PLA1FTfKBAEX6BdpNaWp2uw-YspHwY7qwW)
- [Configurar VSCode + compiladores de MSYS2 en Windows](https://youtu.be/-TkoO8Z07hI?t=263)
- [Better CMake by Jefferson Amstutz](https://youtube.com/playlist?list=PL8i3OhJb4FNV10aIZ8oF0AA46HgA2ed8g)

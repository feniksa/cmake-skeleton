# cmake-skeleton

CMake Skeleton project. src directory contains some static library and executable. tests contains basics
of unit testing with gtest

For most daily puproses will be enough to run:

    cmake -G Ninja -DCMAKE_BUILD_TYPE=debug -DFORCE_COLORED_OUTPUT=true -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

# Generate compile commands

To generate compile_commands.json for YCM plugin, run cmake with MAKE_EXPORT_COMPILE_COMMANDS=1

    cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

# cmake generators

By default, on Linux cmake uses ninja generator. 

## Unix makefiles

For Unix Makefiles build system, run:

    cmake -G 'Unix Makefiles' --config Debug .. 

## ninja

For ninja build system, run:
    
    cmake -G Ninja --config Debug ..

## VS 2017

For VS 2017, run:

   cmake  -G "Visual Studio 15 2017 Win64" --config Debug -A x64 ..

For VS 2019, run:

   cmake  -G "Visual Studio 16 2019 Win64" --config Debug -A x64 ..

For VS 2022, run:

   cmake  -G "Visual Studio 17 2022 Win64" --config Debug -A x64 ..



# Build with cmake with generator

To build project with generator, run from command line:

    cmake --build . --config Debug



# vim

## Reassing debug command

To reassing default debug command (on F9 press), add to .vimrc
    
    nnoremap <F9> :ConqueGdb -cd=build/src --args ./main --n 5<CR>
    set path+=src
    set path+=tests


## Change build system to Make

Add to .vimrc:
   
    nnoremap <F8> :make<CR>
    "set makeprg=ninja\ -C\ build



# cmake-skeleton
CMake Skeleton project with custom modules

For most daily puproses will be enough to run:

    cmake -DCMAKE_BUILD_TYPE=debug  -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

# Generate compile commands

To generate compile_commands.json for YCM plugin, run cmake with MAKE_EXPORT_COMPILE_COMMANDS=1

    cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..

# cmake generators

By default, on Linux cmake uses Unix Makefiles. 

## Unix makefiles

For Unix Makefiles build system, run:

    cmake -G 'Unix Makefiles' --config Debug .. 

## ninja

For ninja build system, run:
    
    cmake -G Ninja --config Debug ..

## VS 2017

For VS 2017, run:

   cmake  -G "Visual Studio 15 2017 Win64" --config Debug ..

# Build with cmake with generator

To build project with generator, run from command line:

    cmake --build . --config Debug



# vim

## Reassing debug command

To reassing default debug command (on F9 press), add to .vimrc
    
    nnoremap <F9> :ConqueGdb -cd=build/src --args ./main<CR>
    set path+=src
    set path+=tests

## YouCompleteMe configuration

To generate YCM configuration, run from vim

:YcmGenerateConfig

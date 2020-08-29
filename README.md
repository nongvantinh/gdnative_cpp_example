# gdnative_cpp_example
## Cloning
Do make sure you clone recursive to pull in both repositories: godot-cpp and godot-headers

`git clone --recursive https://github.com/nongvantinh/gdnative_cpp_example.git`

If you just cloned the example without --recursive, 
the submodules are not automatically initialized. You will need to execute the following commands:
```
cd gdnative_cpp_example
git submodule update --init --recursive
```
# Build cpp sources code.
```
cd gdnative_cpp_example/
mkdir demo/bin
cd godot-cpp
scons platform=linux generate_bindings=yes -j16
cd ..
scons platform=linux -j16

```
Now just open godot and run project.

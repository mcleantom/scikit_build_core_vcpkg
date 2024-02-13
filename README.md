# scikit_build_core_vcpkg
C++ project with python bindings using scikit build core and vcpkg

To install, clone the git repository with submodules:

```
git clone --recurse-submodules https://github.com/mcleantom/scikit_build_core_vcpkg.git
```

Then, build and install the package:

```
cd scikit_build_core_vcpkg
pip install .
```

You can build wheels for the package by running:

```
python -m pip install cibuildwheel==2.16.5
python -m cibuildwheel --platform windows --output-dir wheelhouse
```

or within WSL/Linux:
```
python -m pip install cibuildwheel==2.16.5
python -m cibuildwheel --platform linux --output-dir wheelhouse
```

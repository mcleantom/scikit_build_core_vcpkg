from scikit_build_core_vcpkg import __doc__, __version__, add, subtract

def test_add():
    assert add(1, 2) == 3


def test_subtract():
    assert subtract(2, 1) == 1

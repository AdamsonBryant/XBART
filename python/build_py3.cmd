rem For Windows
mkdir src
copy ..\src src
swig -c++ -python -py3 abarth.i
python setup.py build_ext --inplace
python tests/test.py

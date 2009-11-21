# Scons Output Colorizer Tester

from colorizer import colorizer

col = colorizer()

env = Environment()

col.colorize(env)

env.Library('test_a','test_a.cpp') # Library now produces colored output as well
env.StaticLibrary('test_a','test_a.cpp')
env.SharedLibrary('test_so','test_so.cpp')
env.Program('test', "test.cpp", LIBS=['test_a','test_so'], LIBPATH='.')


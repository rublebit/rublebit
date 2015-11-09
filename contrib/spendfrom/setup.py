from distutils.core import setup
setup(name='RUBITspendfrom',
      version='1.0',
      description='Command-line utility for rublebit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@rublebitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )

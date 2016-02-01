import sys

# represents the python module load path
sys.path

import requests

print sys.modules['requests'].__file__


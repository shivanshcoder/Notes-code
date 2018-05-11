try:
    from setuptools import setup
except ImportError:
    from distutils.core import setup

config = {
    'description': 'My Project',
    'author': 'Name Author',
    'url': 'URL',
    'download_url': 'Where to download it',
    'author_eamil': 'Eamil',
    'version': '0.1',
    'install_requires': ['nose'],
    'packages': ['gothonweb'],
    'scripts': [],
    'name': 'gothonweb',
    
}

setup(**config)
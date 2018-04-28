try:
    from setuptools import setup
except:
    from distutils.core import setup

config = {
        'description': 'My Project',
        'author': 'My Name',
        'url': 'URL to get it',
        'download_url': 'Where to download',
        'author_email': 'Email',
        'version': '0.1',
        'install_requires': ['nose'],
        'packages':['Ex47'],
        'scripts':['bin/testscript.py'],
        'name': 'Ex47'
}

setup(**config)

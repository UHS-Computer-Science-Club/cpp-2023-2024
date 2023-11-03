#!/bin/bash

# installs xcode command line tools
xcode-select --install

# installs homebrew
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# installs cmake 
brew install cmake

# installs ninja
brew install ninja

#!/bin/zsh

# installs xcode command line tools
xcode-select --install

# installs homebrew
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# installs cmake
brew install cmake

# installs ninja
brew install ninja

echo 'If the install script prompts that brew is not found, close the terminal, start a new session, and run `brew install cmake ninja`'
echo "The reason why brew will not be found when you first install it is that the PATH environment variable hasn't been reloaded after being modified. Starting a new shell session will reload the environment variable therefore brew will work from then on."

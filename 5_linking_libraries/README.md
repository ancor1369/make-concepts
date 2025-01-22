
# Compilation steps

# Linking nlohman Json library

Install the nlohmann-json library: sudo apt-get install nlohmann-json3-dev
run: sudo make install-pkg-config

# Run the preprocessor
`g++ -e main.cpp -o main.i`

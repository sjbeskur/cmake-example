#!/bin/bash

pushd target
rm -rf *
cmake ../ && make 

popd
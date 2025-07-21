#!/bin/bash

GREEN='\033[0;32m'
NO_COLOR='\033[0m' # No Color

cd ../ && \
make re
cd ./tests_libft && \
make && \
make leakfull && \
cd ../../ && \
echo ""  && \
echo -e "${GREEN}SUCESSO!${NO_COLOR}" 
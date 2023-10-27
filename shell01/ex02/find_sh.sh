#!/bin/bash

find . -type f -name "*.sh" -exec basename {} \; | tr ".sh"

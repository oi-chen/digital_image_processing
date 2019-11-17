#! /bin/bash
# Run it to clean up generated temporary files.
# Type "chmod +x clean.sh" in the terminal to give this file run permissions.
rm -rf Makefile .qmake.stash build/moc build/obj build/rcc build/ui
echo "All intermediate files have been cleaned up!"
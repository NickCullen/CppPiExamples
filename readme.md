\Small projects which tie in with tutorials written at my blog https://nickcullen.net/blog/

To compile and use a project, change directory into it ("cd" command), make a Build dir and change directory into it, generate build files and then make using makefiles.

For example, to test the "SimpleGPIO" example do the following from the root folder:
```
> cd SimpleGPIO
> mkdir Build && cd Build
> cmake ..
> make
> ./MyEXE
```

The final command "./MyEXE" will run the program.

# SimpleGPIO
Demonstrates initializing the WiringPi library and how to setup GPIO pins for I/O mode and how to toggle them on/off

[Blog link coming soon]("https://nickcullen.net/blog/")

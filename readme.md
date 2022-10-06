**OpenGL Template**

Installation guide:

1. click the use template button or clone the repo

```
git clone https://github.com/scupdev/opengl-template.git
```

2. Add glad and stb_image

- add glad to the project from https://glad.dav1d.de and place the glad.c and glad.h into the src/ folder and src/include/.
Make sure to add glad.h to the CMakeLists.txt file in the src/ folder.

- add stb_image.h from the stb github repo into the src/include/ folder

3. Compile and run

- Windows

```
cmake ./build
cd build/src/
make
./opengltemplate
```
- Linux & Mac
```
sh ./run.sh
```

if SUCESSFUL you will get this output on the screen
![Output image](/output.png "OutPut")
# MyOpenCVTraining

It's a repository for me to record my OpenCV study.

# Xcode OpenCV project configuration

1. Create a new 'Command Line Tool'.
2. Create a new group under the project, named 'OpenCVFramework'.
3. Right click and choose 'add files to...', add all '.dylib' files of opencv libraries.
4. Under 'Build Settings', choose 'Search Paths'.
5. Add '/usr/local/include' to 'Header Search Paths' and '/usr/local/lib' to 'Library Search Paths'.
6. Congratulations! you are ready to start coding.

# Xcode + OpenCV + Dlib
1. Create a new project with OpenCV configuration
2. Set 'Header Search Paths': /usr/local/include & /opt/X11/include
3. Add frameworks: 
     Accelerate.framwork
     CoreMedia.framework
     libdlib.a
     libpng.a
     libopencv_videoio.dylib
     libopencv_core.dylib
     libX11.6.dylib

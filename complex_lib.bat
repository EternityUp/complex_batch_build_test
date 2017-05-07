@echo 配置编译环境
@set VS_PATH=D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\
@echo 编译环境配置完成
@call "%VS_PATH%vcvarsall.bat"
@echo 开始编译
@echo 配置编译选项和路径

@echo Win32环境
set CONFIG_NAME="%1|Win32"
set SOLUTION_PATH=./complex_demo
set SOLUTION_NAME=complex_demo.sln
set PROJECT_NAME=complex_demo.vcxproj
set BUILD_LOG=build_log_32.txt
del %BUILD_LOG%
devenv %SOLUTION_PATH%/%SOLUTION_NAME% %PROJECT_NAME% /Rebuild %CONFIG_NAME% /Out  build_log_32.txt
@echo 编译结束
@echo 将可执行文件和库文件拷贝到同一目录下
xcopy .\lib\minSize_lib\*.*     .\lib\%1\Win32\    /s /h /y /c    
xcopy .\complex_demo\%1\*.exe     .\lib\%1\Win32\  /s /h /y /c   


@echo x64环境
set CONFIG_NAME="%1|x64"
set SOLUTION_PATH=./complex_demo
set SOLUTION_NAME=complex_demo.sln
set PROJECT_NAME=complex_demo.vcxproj
set BUILD_LOG=build_log_64.txt
del %BUILD_LOG%
devenv %SOLUTION_PATH%/%SOLUTION_NAME% %PROJECT_NAME% /Rebuild %CONFIG_NAME% /Out  build_log_64.txt
@echo 编译结束
xcopy .\lib\minSize_lib\*.*     .\lib\%1\x64\    /s /h /y /c     
xcopy .\complex_demo\%1\*.exe     .\lib\%1\x64\  /s /h /y /c    
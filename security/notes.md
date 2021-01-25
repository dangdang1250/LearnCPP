## These examples for Security learning class

# Why should you care?
Many bugs and vulnerabilities are hard to see in code review; they are often subtle edge case scenarios. Tooling and platform mitigations have greatly improved and instill confidence that your code is in fact correct.

## 三个阶段：
1. Code
在编码期间，我们使用的工具就是静态分析工具
**Static analysis**: code analysis performed without running the code that can find potential bugs and vulnerabilities.

**Compiler warnings**: signals problematic constructs that are not errors and can be used alone or with -Werror(warnings are errors)

2. Testing
在测试期间，使用sanitzers/fuzzing
3. Prodution
在成品阶段，使用编译器的选项或操作系统的选项

### What is sanitizer?
g++-7 address.cpp -Wall -Werror
g++-7 address.cpp -fsanitize=address 也不会报错，但run这个程序就会报很多问题出来。有意思

### What is Fuzzing test?
libFuzzer

## Compiler optimizations
a compilation step that is designed to improve performance of the compiled code.
**sped up execution of the code.**

看了这些感觉c++很难。但老姐一出口就让我明白什么是牛人。她说自己写程序就不可能这么写。看别人的程序必须能看出门道。

## 学习安装第三方软件包：gsl: Guideline Support Library
The GSL.assert section has some uti
sudo apt-get install libgsl-dev

如何自己下载，解压，编译，安装呢？
先下载包，然后解压
tar -zxvf gsl-*.*.tar.gz
    -z, --gzip, --gunzip, --ungzip   filter the archive through gzip
    -x, --extract, --get       extract files from an archive
    -v, --verbose              verbosely list files processed
      --warning=KEYWORD      warning control
    -f, --file=ARCHIVE         use archive file or device ARCHIVE
      --force-local          archive file is local even if it has a colon
 
mkdir /home/jcheng6/gsl
cd gsl-2.6
配置到你指定的目录去，这样在make以后，再安装？？
./configure --prefix=/home/jcheng6/gsl
make
make check
make install

安装好后，看安装到哪里。然后加入.bashrc的PATH里，这样编译时，compiler就可以到这个目录下去找了。
export PATH 

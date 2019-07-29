import sys
import glob
import os
import subprocess
# usage : python cleanup.py code1

def cleanup(filename):
    #loop folder under here
    my_dir = os.getcwd();
    for subdir, dirs, files in os.walk(my_dir):
        for file in files:
            #print(os.path.join(subdir, file))
            if file == filename:
                filepath = subdir + os.sep
                os.chdir(filepath)
                p1 = subprocess.run(['rm', filename], capture_output=True)
                #print (filepath)

    p2 = subprocess.run(['find', '.', filename], stdout=subprocess.PIPE, text=True)
    print(p2.stdout)

if __name__ == '__main__':
    if len(sys.argv) < 2:
        print("Usager: python3 cleanup.py code1 ")
    else:
        cleanup(sys.argv[1])
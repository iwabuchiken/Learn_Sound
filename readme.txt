------------------------
06/05/2014 13:42:46

	To run the program
------------------------
# Win
pushd C:\WORKS\WS\NetBeans\Learn_Sound
.\dist\Debug\MinGW_1-Windows\learn_sound.exe

# Ubuntu
pushd /home/iwabuchik/WORKS/WS/WS_Prog/PNGtoPPM
pushd /home/iwabuchik/WORKS/WS/WS_Prog/PNGtoPPM/images
pushd /home/iwabuchik/WORKS/WS/WS_Prog/PNGtoPPM/dist/Debug/GNU-Linux-x86/

/home/iwabuchik/WORKS/WS/WS_Prog/PNGtoPPM/dist/Debug/GNU-Linux-x86/pngtoppm

#merge_png.c
/home/iwabuchik/WORKS/WS/WS_Prog/PNGtoPPM/dist/Debug/GNU-Linux-x86/pngtoppm images/download-jpg.copy.png images/download-jpg.copy-6.png images/download-jpg.merged-1.png


./dist/Debug/GNU-Linux-x86/pngtoppm images/download-jpg.png images/download-jpg.copy.png
------------------------

    Ignored by file system
	
------------------------
^(CVS|SCCS|vssver.?\.scc|#.*#|%.*%|_svn)$|~$|^\.(?!htaccess$).*$


------------------------


	Git
------------------------
//REF http://tobysoft.net/wiki/index.php?git%2F%A5%B3%A5%DE%A5%F3%A5%C9%A4%CE%BE%CA%CE%AC(alias)%C0%DF%C4%EA%A4%F2%A4%B9%A4%EB%CA%FD%CB%A1#t6684adb
git config --global alias.co checkout
git config --global alias.c commit
git config --global alias.s status
git config --global alias.l log

------------------------


	Structure: include
------------------------
main.c  -> pnglib.h -> lib.h
                    -> img_lib.h

pgmlib.h    -> img_lib.h

================ EOF ================
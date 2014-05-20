/* 
 * File:   main.c
 * Author: iwabuchik
 *
 * Created on 2014/05/20, 16:42
 */
#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#include "include/wave.h"
#include "include/audio_lib.h"

/********************************
 Prototypes
 ********************************/
void _test_Chap_1(char **);

/*
 * 
 */
int main(int argc, char** argv) {

//    printf("[%s : %d] Calling => _test_Chap_1(argv)\n", base_name(__FILE__), __LINE__);

    _test_Chap_1(argv);
    
//    printf("[%s : %d] separator => %s\n", base_name(__FILE__), __LINE__, get_FileSep_Str());

    printf("[%s : %d] done\n", base_name(__FILE__), __LINE__);

    return (EXIT_SUCCESS);
}

void _test_Chap_1(char **argv)
{
    /********************************
     Get: Source file path
     ********************************/
//    printf("[%s : %d] Starting => _test_Chap_1()\n", base_name(__FILE__), __LINE__);
    
//    char *audio_file_src = 
    
    
    char *src_file_path = (char *) get_Src_Path(argv, "audio");
    
    printf("[%s : %d] src_file_path => %s\n", base_name(__FILE__), __LINE__, src_file_path);

    
    MONO_PCM pcm0, pcm1;
    
    int n;  // iterator
    
    char *audio_file_src;
    
    if (src_file_path == NULL) {

        char *tmp = "audio\\a.wav";
        
        audio_file_src = (char *) malloc(sizeof(char) * (strlen(tmp) + 1));
        strcpy(audio_file_src, tmp);
        audio_file_src[(strlen(tmp) + 1)] = '\0';
        
    } else {
        
        audio_file_src = src_file_path;
        
    }

    printf("[%s : %d] audio_file_src => %s\n", base_name(__FILE__), __LINE__, audio_file_src);

    
//    char *audio_file_src = "audio\\a.wav";
    char *audio_file_dst = "audio\\b.wav";
    
    mono_wave_read(&pcm0, audio_file_src); /* WAVEファイルからモノラルの音データを入力する */
//    mono_wave_read(&pcm0, "a.wav"); /* WAVEファイルからモノラルの音データを入力する */
    
    printf("[%s : %d] audio file => read\n", base_name(__FILE__), __LINE__);

    pcm1.fs = pcm0.fs; /* 標本化周波数 */
    pcm1.bits = pcm0.bits; /* 量子化精度 */
    pcm1.length = pcm0.length; /* 音データの長さ */
    pcm1.s = calloc(pcm1.length, sizeof(double)); /* メモリの確保 */
    
    for (n = 0; n < pcm1.length; n++)
    {
    pcm1.s[n] = pcm0.s[n]; /* 音データのコピー */
    }

//    mono_wave_write(&pcm1, audio_file_dst); /* WAVEファイルにモノラルの音データを出力する */
//    mono_wave_write(&pcm1, "b.wav"); /* WAVEファイルにモノラルの音データを出力する */
    
    printf("[%s : %d] audio dst => written\n", base_name(__FILE__), __LINE__);

    
    free(pcm0.s); /* メモリの解放 */
    
}

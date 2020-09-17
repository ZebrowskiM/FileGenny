//
// Created by Marek on 1/18/2020.
//

#ifndef FILEGENNY_FILEQUEUE_H
#define FILEGENNY_FILEQUEUE_H
#define FileGenny_Call __stdcall
#define FileGenny_DLL_EXPIMP __declspec(dllexport)
FileGenny_DLL_EXPIMP void FileGenny_Call AddFile(FileType fileType,int Size,char path[]);
#endif //FILEGENNY_FILEQUEUE_H

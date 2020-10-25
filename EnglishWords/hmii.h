#pragma once
//HMI interface
class HumanInterface
{
public:
    //methods for words
    void virtual showAllWordsList() = 0;
    void virtual showList() = 0;
    void virtual openList() = 0;
    void virtual selectList() = 0;
    void virtual makeNewList() = 0;
    void virtual deleteList()= 0;
    //methods for lists
    void virtual selectWord() = 0;
    void virtual setWordToList() = 0;
    void virtual deleteWordFromList() = 0;
};
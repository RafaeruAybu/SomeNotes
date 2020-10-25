#pragma once
//Data Base interface
class DBInterface
{
public:
    void virtual getAllWords() = 0;
    void virtual setALlWords() = 0;
    void virtual SmartsearchForWord() = 0;
    void virtual simpleSearchForWord() = 0;
    void virtual getFromLineNumber() = 0;
    void virtual setToLineNumber() = 0;
};

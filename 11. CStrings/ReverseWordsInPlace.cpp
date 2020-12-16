void flip(char* wordStart, char* wordEnd)
{
    while(wordStart < wordEnd)
    {
        char c = *wordStart;
        *wordStart = *wordEnd;
        *wordEnd = c;

        ++wordStart;
        --wordEnd;
    }
}
// Some -> eomS -> emoS
// 12345 -> 52341 -> 54321

void manipulate(char* text)
{
    char* wordStart = text;
    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (text[i] == ' ')
        {
            flip(wordStart, text + i - 1)
            wordStart = text + i + 1;
        }
    }
    flip(wordStart, text + strlen(text) - 1)
}
// "Some random text."
// Some -> eomS -> emoS

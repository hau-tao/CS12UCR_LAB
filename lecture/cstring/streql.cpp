int streql(const char s1[], const char s2[])
{
    int i= 0;
//continue until at least one cstring ends
for (i=0; s1[i] !='\0' && s2[i] !='\0';++i)
{
    if (s1[i]!=s2[i])
    return 1;
}


return 0;
}

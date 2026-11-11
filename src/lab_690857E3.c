
void copy(char *psource, char *ptarget, unsigned num_char)
{
    // TODO: write your code here
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    // TODO: write your code here
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above
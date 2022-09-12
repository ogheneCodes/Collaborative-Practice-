/*
. Given the following:
• An int variable with block scope and temporary storage
• A constant character variable with block scope
• A float local variable with permanent storage
• A register int variable
• A char pointer initialized with a null character
write declarations for all of them.
*/

//An int variable with block scope and temporary storage
int main(){
    int x;
}
//A constant character variable with block scope
int main(){
    char c;
}
// A float local variable with permanent storage
int main(){
    static float x;
}
// A register int variable
int main(){
    register int z;
}
//A char pointer initialized with a null character
int main(){
    char *ptr = 0; 
}
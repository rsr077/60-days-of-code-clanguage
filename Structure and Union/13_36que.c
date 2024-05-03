#include<stdio.h>
void main(){
    struct x
    {
        float f;
        char p[2];
    };
    union z
    {
        struct x set;
    };
    union z st;
    st.set.f=5.5;
    st.set.p[0]=65;
    st.set.p[1]=66;
    printf("\n %g",st.set.f);
    printf("\n %c",st.set.p[0]);
    printf("\n %c",st.set.p[1]);
}
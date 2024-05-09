#include<stdio.h>
#include<string.h>
// declaring structure
struct struct_example{
    int integer;
    float decimal;
    char name[20];

};
// declaring union 
union union_example{
    int integer;
    float decimal;
    char name [20];
};
void main(){
    // creating variabel for structure
    // and intitializing vlaues difference 
    // six
    struct struct_example s ={ 18,38,"Github"};
    // creating variabel for union 
    // and intiializing values
      union union_example u ={18,38,"Github"};
      printf("\n Structure data :\n integer:%d\n""decimal:%.2f\n name:%s\n",
      s.integer,s.decimal,s.name);
       printf("\n Union data :\n integer:%d\n""decimal:%.2f\n name:%s\n",
      u.integer,u.decimal,u.name);
      // difference two and three 
      printf("\n Sizeof structure :%d\n",sizeof(s));
       printf("\n Sizeof union :%d\n",sizeof(u));
       // difference five 
       printf("\n Accessing all members at a time:");
       s.integer =183;
       s.decimal=90;
       strcpy(u.name,"Github");
       
       printf("Structure data :\n integer:%d\n""decimal :%.2f\n name:%s\n",
       u.integer,u.decimal,u.name);

       
      printf("\n Accessing one member at time:");
      printf("\nstructure data:");
      s.integer =240;
      printf("\n integer :%d",s.integer);
      s.decimal =120;
      printf("\n decimal :%f",s.decimal);
      strcpy(s.name,"C programing");
      printf("\n name :%s\n",u.name);

      // difference four 
      printf("\n Alteringa member value:\n");
      s.integer =1218;
      printf("Structure data:\n integer :%d\n""decimal :%.2f\n name :%s\n",
      s.integer,s.decimal,s.name);
      u.integer =1218;
      printf("union data:\n integer :%d\n""decimal :%.2f\n name :%s\n",
      u.integer,u.decimal,u.name);

    

}
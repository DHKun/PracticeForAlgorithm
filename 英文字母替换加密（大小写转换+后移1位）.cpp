#include<stdio.h>
int main(){
    char word=0;
    for(;(word=getchar())!='\n';)
    {
        if(65<=word&&word<=89)
        {
            word=word+1+32;
            }else if(word==90){
                word=word-25+32;
                }else if(97<=word&&word<=121){
                    word=word+1-32;
                    }else if(word==122){
                        word=word-25-32;}
                        printf("%c",word); 
                        }
                        printf("\n");
                        return 0;
}

// 数组做法：
// #include <stdio.h>
// int main(){
//     char lower_alpha[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//     char upper_alpha[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//     char c;
//     int index=0;
//     while (scanf("%c",&c) && c!='\n'){
//         if (c>='a' && c<='z'){
//             for (int i=0;i<26;i++){
//                 if (lower_alpha[i]==c){
//                     index=(i+1)%26;
//                     printf("%c",upper_alpha[index]);
//                     break;}
//             }

//         }else if (c>='A' && c<='Z'){
//             for (int i=0;i<26;i++){
//                 if (upper_alpha[i]==c){
//                     index=(i+1)%26;
//                     printf("%c",lower_alpha[index]);
//                     break;}
//             }
//         }else{
//             printf("%c",c);
//         }
//     }
//     return 0;
// }


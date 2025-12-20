#include <stdio.h>
struct Date{
    int mm;
    int dd;
    int yyyy;
};
// int compare(struct Date, struct Date);
// int compare(struct Date d1, struct Date d2){
//     if (d1.yyyy == d2.yyyy)
//     {
//         if (d1.mm == d2.mm)
//         {
//             if (d1.dd == d2.dd)
//             {
//                 return 0;
//             }
//             else
//             {
//                 if (d1.dd > d2.dd)
//                 {
//                     return 1;
//                 }
//                 else
//                 {
//                     return -1;
//                 }
//             }
//         }
//         else
//         {
//             if (d1.mm > d2.mm)
//             {
//                 return 1;
//             }
//             else
//             {
//                 return -1;
//             }
//         }
//     }
//     else
//     {
//         if (d1.yyyy > d2.yyyy)
//         {
//             return 1;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// }

int compare(struct Date d1, struct Date d2)
{
    if (d1.yyyy != d2.yyyy)
        return (d1.yyyy > d2.yyyy) ? 1 : -1;

    if (d1.mm != d2.mm)
        return (d1.mm > d2.mm) ? 1 : -1;

    if (d1.dd != d2.dd)
        return (d1.dd > d2.dd) ? 1 : -1;

    return 0;
}

int main(){
    struct Date d1 = {12, 5, 2004};
    struct Date d2 = {12, 5, 2004};
    printf("%d", compare(d1,d2));
    return 0;
}
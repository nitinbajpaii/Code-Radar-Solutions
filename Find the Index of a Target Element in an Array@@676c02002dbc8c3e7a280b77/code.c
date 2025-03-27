// #include <stdio.h>

// int main() {
//     int n, a;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &a);
//     int found = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == a) {
//             printf("%d", i); 
//             found = 1;
//             break; 
//         }
//     }
//     if (!found) {
//         printf("-1");
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    int found =0;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}

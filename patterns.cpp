#include <iostream>
using namespace std;

int main()
{
//    int n;                          // *****
                                      // *****
                                      // *****
                                      // *****
                                      // *****
//   cin >> n;
//     int i = 1;                
//     while(i <= n)
//     {
//         int j = 1;
//         while(j <= n){
//             cout << "*";
//         j++;
//         }
//         cout << endl;
//         i++;
//     }
        

    /*                                           // pattern:
       int n;                                    // 1 2 3 4
       cin >> n;                                 // 1 2 3 4
       for(int i = 1; i <= n; i++)               // 1 2 3 4
        {                                        // 1 2 3 4
        for(int j =1;j<=n; j++ )
        {
            cout << j <<" ";

       }

       cout << endl;
    }   */

    // int n;                                   // pattern:
    // cin >> n;                                // 4 3 2 1
    // for(int i = n; i>=1; i-- ){              // 4 3 2 1
    //     for(int j = n; j >=1; j--){          // 4 3 2 1
    //         cout << j << " ";                // 4 3 2 1

    //     }
    //     cout << endl;
    // }


// PATTERN NO. 4
                                           // pattern:
// int n;
// cin >> n;                               // 1 2 3
// int k=1;                                // 4 5 6
// for (int i = 1; i <=n; i++){            // 7 8 9
//     for(int j = 1; j <=n; j++){
//         cout << k << " ";
//         k++;
//     }
//     cout << endl;
// }
    
// PATTERN NO. 5


    // int n;                                 // PATTERN:
    // cin >> n;                              // *
    // for(int i= 1; i<=n; i++){              // * *
    //     for(int j = 1; j<=i; j++){         // * * *
    //         cout <<"*" << " ";             // * * * *

    //     }
    //     cout << endl;
    // }


// PATTERN NO. 6
                                          // PATTERN:
// int n;                                 // 1
// cin >> n;                              // 2 2
// for(int i =1; i<=n; i++){              // 3 3 3
//     for(int j =1; j <=i; j++){         // 4 4 4 4
//         cout << i << " ";
//     }
//     cout << endl;
// }

// PATTERN NO. 7
                                        // pattern:
// int n;                               // 1
// cin >> n;                            // 2 3
// int k =1;                            // 4 5 6
// for(int i = 1; i<=n; i++){           // 7 8 9 10
//     for(int j = 1; j<=i; j++){
//         cout << k <<" ";
//         k++;
//     }
//     cout << endl;
// }

// PATTERN NO. 8

// int n;
// cin >> n;                                      //  pattern:                                               1
// for (int i = 1; i <= n; i++){                  //  1               
//     int k =i;                                  //  2 3
//     for(int j = 1; j <=i; j++){                //  3 4 5
//         cout << k << " ";                      //  4 5 6 7
//         k++;
    
//     }
//     cout << endl;
// }

// or

// int n;
// cin >> n;
// for(int i =1; i<=n; i++){
//     for(int j = 1; j<=i; j++){
//         cout << i + j -1 << " ";

//     }
//     cout << endl;
// }

// PATTERN 9:

// int n;                              // pattern:
// cin >> n;                           // 1
// for(int i = 1; i <=n; i++){         // 2 1
//     for(int j = 1; j <=i; j++){     // 3 2 1
//         cout << i -(j-1) << " ";    // 4 3 2 1
//     }
//     cout << endl;
// }

//PATTERN 10:

// int n;                                   // pattern:
// cin >> n;                                // A A A A
// for(int i = 1; i <= n; i++){             // B B B B
//     for(int j = 1; j <=n; j++){          // C C C C
//         cout << char('A'+(i-1)) << " ";  // D D D D
    
//     }
//     cout << endl;
// }


// PATTERN 11:                                  // pattern:
// int n;                                       // A B C D
// cin >>n;                                     // A B C D
// for(int i =1; i<=n; i++){                    // A B C D
//     for(int j =1; j<=n; j++){                // A B C D
//         cout << char('A' +(j-1)) << " ";
//     }
//     cout << endl;
// }

// PATTERN 12:
//                                   // pattern:     
// int n;                            // A B C
// cin >> n;                         // D E F
// int k = 'A';                      // G H I
// for(int i = 1; i<=n; i++){
//     for(int j =1; j<=n; j++){
//         cout << char(k) << " ";
//         k++;
//     }
//     cout << endl;
// }


// PATTERN 13:
//                                                 // pattern:
// int n;                                          // A B C
// cin >> n;                                       // B C D
// for(int i=1; i<=n; i++){                        // C D E
//     for(int j=1; j<=n; j++){//
//         cout << char('A'+(i + j -2)) << " ";
//     }
//     cout << endl;
// }

// PATTERN 14:
//                                                 // pattern:
// int n;                                          // A
// cin >> n;                                       // B B
// for(int i = 1; i<=n; i++){                      // C C C
//     for(int j = 1; j <= i; j++){                // D D D D
//         cout << char('A'+ i-1) << " ";
    
//     }
//     cout << endl;
// }

// PATTERN 15:
//                                              // pattern:
// int n;                                       // A
// cin >> n;                                    // B C
// char k = 'A';                                // D E F
// for(int i = 1; i<=n; i++){                   // G H I J
//     for(int j = 1; j <=i; j++){
//         cout << k << " ";
//         k++;
//     }
//     cout << endl;
// }

// PATTERN 16:
//                                              // pattern:
// int n;                                       // A
// cin >> n;                                    // B C
// for(int i = 1; i <=n; i++){                  // C D E
//     for(int j = 1; j<=i; j++){               // D E F G
//         cout << char('A'+ (i+j-2)) << " ";
//     }
//     cout << endl;
// }

// PATTERN 17:
//                                              // pattern:
// int n;                                       // D
// cin >>n;                                     // C D
// for(int i = 1; i<=n; i++){                   // B C D
//     for(int j = 1; j <=i; j++){              // A B C D
//         cout << char('A'+ (n-i+j)-1) << " ";
//     }
//     cout << endl;
// }

// PATTERN 18:
//
// int n;                                           // pattern:
// cin >>n;                                         //       *
// // this is for printing spaces                   //      **
// for(int i = 1; i<=n; i++){                       //     ***
//     for(int j = 1; j<= (n-i); j++){              //    ****
//         cout << " ";
//     }
//     // this is for printing stars
//     for(int k = 1; k <=i; k++){ 
//         cout << "*";
//     }
//     cout << endl;

// }

//PATTERN 19:
//                                         //  pattern:
// int n;                                  //  ****
// cin >> n;                               //   ***
// // for printing spaces                  //    **
// for(int i = 1; i<= n; i++){             //     *
//     for(int j = 1; j<=(i-1); j++){
//         cout << " ";
//     }
// // for printing stars
// for(int k =1; k<=(n-i+1); k++){
//     cout << "*";
// }
// cout << endl;

// }

// PATTERN 20:
//                                                //  pattern:
// int n;                                         //        1
// cin >> n;                                      //       22
// for(int i = 1; i<=n; i++){                     //      333
//     for(int j = 1; j <= (n-i); j++){           //     4444
//         cout << " ";
//     }
//     for(int k = 1; k<= i; k++){
//         cout << i;
//     }
//     cout << endl;
// }

 // PATTERN 21:
 //                                               //  pattern:
//  int n;                                        //    1234
//  cin >> n;                                     //     234
//  for(int i =1; i<=n; i++){                     //      34
//     for(int j = 1; j <= (i-1); j++){           //       4
//         cout << " ";
//     }
//     for(int k = 1; k <=(n-i+1); k++){
//         cout << k+i-1;
//     }
//     cout << endl; 
//  }

// PATTERN 22:
//                                           //  pattern:
// int n;                                    //         1
// cin >> n;                                 //        23
// int num =1;                               //       456
// for(int i = 1; i<=n; i++){                //      78910
    
//     for(int j = 1; j<=(n-i); j++){
//         cout << " ";
//     }
//     for(int k=1; k<= i; k++){
//         cout << num;
//         num++;
        
//     }
//     cout << endl;
    
// }

// PATTERN 23:
//                                               //    pattern:
// int n;                                        //         1
// cin >> n;                                     //        121
// // for space 1                                //       12321
// for(int i = 1; i <= n; i++){                  //      1234321
//     for(int j = 1; j<= (n-i); j++){
//         cout << " " << " ";
//     }

// // for printing numbers

//     for(int k = 1; k <= i; k++){
//         cout << k << " ";
//     }

//     for(int l = 1; l <=(i-1); l++){
//         cout << (i-l) << " ";
//     }
//     cout << endl;   
// }

// PATTERN 24:
//
// int n;
// cin >> n;
// // for first triangle
// int num = 0;
// for(int i = 1; i <=n; i++)
// {
//     for(int j =1; j <=(n-i+1); j++)                   //      patttern:
//     {                                                 //     1234554321
//         cout << j;                                    //     1234**4321  
//  }                                                    //     123****321
//     for(int k = 1; k <=num; k++)                      //     12******21
//     {                                                 //     1********1
//         cout << "*";
//     }
//     for(int l = 1; l<=(n-i+1); l++)
//     {
//         cout << (n-i-l)+2;
        
//     }

//     cout << endl;
//      num +=2;

// }

// int n;
// cin >> n;
// for(int i = 1; i <=n; i++){
//     for(int j =i; j<=n; j++){
//         cout << "*" << " ";
//     }
// // for spaces
// for(int k=1; k<=(i*2-2); k++){
//     cout << ' ' << " ";
// }

// // for stars
// for(int l = i;l<=n; l++){
//     cout << "*" << " ";
// }

//     cout << endl;
// }
// cout << endl;
// // for lower part
// for(int a = 1; a<=n; a++){
//     for(int b =1; b<=a; b++){
//         cout << "*"<< " ";
//     }
//     // for spaces
//     for(int c = 1; c<=(2*(n-a)); c++){
//         cout << " " << " ";
//     }

//     // for stars
//     for(int d = 1; d<=a; d++){
//         cout << "*" << " ";
//     }
//     cout << endl;
// }


}

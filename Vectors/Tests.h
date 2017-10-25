#pragma once
//Vector2
Vector2 test1(3, 3);
Vector2 test2(3, 3);
Vector2 test3(4, 5);
Vector2 add1 = test1 + test3;
Vector2 result1(7, 8);
Vector2 sub1 = test3 - test1;
Vector2 result2(1, 2);
Vector2 scale1 = test2 * 2;
Vector2 result3(6, 6);

//Vector3
Vector3 test4(4, 5, 6);
Vector3 test5(4, 5, 6);
Vector3 test6(7, 8, 9);
Vector3 add2 = test4 + test6;
Vector3 sub2 = test6 - test4;
Vector3 scale2 = test5 * 3;
Vector3 result4(11, 13, 15);
Vector3 result5(3, 3, 3);
Vector3 result6(12, 15, 18);
Vector3 result7(-3, 6, -3);

//Vector4
Vector4 test7(5, 5, 5, 5);
Vector4 test8(5, 5, 5, 5);
Vector4 test9(6, 8, 9, 2);
Vector4 add3 = test7 + test9;
Vector4 sub3 = test9 - test7;
Vector4 scale3 = test7 * 3;
Vector4 result8(11, 13, 14, 7);
Vector4 result9(1, 3, 4, -2);
Vector4 result10(15, 15, 15, 15);
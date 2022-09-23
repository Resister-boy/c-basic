// Call by Value
// 기본적으로 C언어에서 지원하는 방식
// 함수에서 값을 복사해 전달하는 방식으로 인자로 전달되는 변수를 함수의 매개변수에 복사
// 복사된 변수는 인자로 전달한 변수와는 별개의 변수가 되며, 매개 변수를 변경해도 원래 변수에는 영향 X
// ... 원본 값을 변경할 필요가 없는 경우에는 call by value를 사용


// Call by Reference
// 함수에서 값을 전달하는 대신 주소 값을 전달하는 방식
// 엄밀한 의미에서 C언어에서는 주소 값 자체를 복사해서 넘겨는 것이므로 Call by Value
// 이런 방식을 Call by Address라고 하기도 함
// C언어에서는 Cal by Reference를 공식적으로 지원하지 않지만, 
// 의미적 결과적 의미에서 call by Address를 활용해 Call by Reference와 같은 기능을 수행할 수 있음
let cat: string = 'bmw';
let isAdult: boolean = true;
let a: number[] = [1, 2, 3, 4, 5];
let a2: Array<number> = [6, 7, 8, 9];

let week1: string[] = ['mon', 'tue', 'wed'];
let week2: Array<string> = ['mon', 'tue', 'wed'];

week1.push('thu');

// tuple
let b: [string, number];
// 각각 type을 다르게 사용 가능

b = ['sm', 60];
b[0].toLowerCase(); // type: string -> 문자열 function사용 O
b[1].toString(); // type: number(숫자) -> 숫자 function사용 O

//  void -> 함수 사용시 아무것도 반환하지 않을 때
function sayHello(): void {
  console.log('hello');
}

//  never -> error반환 || 무한 루프
function showError(): never {
  throw new Error(); // error 반환
}

function infLoop(): never {
  let q: number = 1;
  while (true) {
    q += 1; // 종료 조건 X -> 무한 루프
  }
}

// enum -> 비슷한 값들끼리 묶음
enum OS {
  Window,
  iOS,
  Android,
}
// 아무 값도 할당하지 않으면 위에서부터 순서대로(0부터) 1씩 증가한 값을 갖게
// 되지만, 값을 할당하면 그 할당된 값으로 부터 1씩 증가

let myOS: OS;
// 특정 값만 선언 가능
myOS = OS.iOS;

// null, undifined
let x: null = null;
let y: undefined = undefined;

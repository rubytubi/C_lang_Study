//function
function add(num1: number, num2: number): number {
  return num1 + num2;
}

function isAdult(age: number): boolean {
  return age > 19;
}

function hello(name?: string): string {
  return `Hello, ${name || 'world'}`;
}

const ret = hello();
const ret2 = hello('bob');

function hi(name: string, age?: number): string {
  if (age !== undefined) return `Hello, ${name}. U R ${age}!`;
  else return `Hello, ${name}~!`;
}

console.log(hi('Min'));
console.log(hi('Hyo'));

// optional param이 맨 앞에 오게 하고 싶다면
function hi2(age?: number | undefined, name: string): string {
  if (age !== undefined) return `Hello, ${name}. U R ${age}!`;
  else return `Hello, ${name}~!`;
}

console.log(hi2(undefined, '성민'));

//나머지 매개변수
function add2(...nums: number[]) {
  return nums.reduce((result, num) => result + num, 0);
}

add2(1, 2, 3); // 6
add2(1, 2, 3, 4, 5); // 15

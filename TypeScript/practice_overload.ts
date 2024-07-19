interface User {
  name: string;
  age: number;
}

function join(name: string, age: string): string; //overload
function join(name: string, age: number): User; //overload
function join(name: string, age: number | string): User | string {
  if (typeof age === 'number') {
    return {
      name,
      age,
    };
  } else {
    return '나이는 숫자로 입력해라.';
  }
}

const sam: User = join('sam', 30);
const john: string = join('john', '30');

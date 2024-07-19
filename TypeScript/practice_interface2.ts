//interface -> 함수 정의
interface Add {
  (num1: number, num2: number): number;
  //  반환값 설정
}

const add: Add = function (x, y) {
  return x + y;
};

console.log(add(30, 50));

interface isAdult {
  (age: number): boolean;
}

const a: isAdult = (age) => {
  return age > 19;
};

console.log(a(30));

//interface -> 클래스 정의
interface Car {
  color: string;
  wheels: number;
  start(): void;
}

class BMW implements Car {
  color;
  wheels = 4;

  constructor(c: string) {
    this.color = c;
  }

  start() {
    console.log('  GO!');
  }
}

const b = new BMW('spacegray');
console.log(b);

//Extension (확장) 가능!!!!!
interface Benz extends Car {
  door: number;
  stop(): void;
}

const benz: Benz = {
  color: 'black',
  wheels: 4,
  door: 5,
  stop() {
    console.log("don't go");
  },
  start() {
    console.log('GO');
  },
};

console.log(benz);

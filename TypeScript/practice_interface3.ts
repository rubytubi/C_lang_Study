//interface는 확장을 여러개 할 수도 있다!

interface Car {
  color: string;
  wheels: number;
  start(): void;
}

interface Toy {
  name: string;
}

// 동시 확장
interface ToyCar extends Car, Toy {
  price: number;
}

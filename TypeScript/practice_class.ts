// 접근 제한자(Access modifier) - public, private, protected
// '#' = private 표현
class Car {
  name: string = 'CAR';
  color: string;
  constructor(color: string, name) {
    this.color = color;
    this.name = name;
  }
  start() {
    console.log('start!');
    console.log(this.name);
  }
}

class BMW extends Car {
  constructor(color: string, name) {
    super(color, name);
  }
  showName() {
    console.log(super.name);
  }
}

const z4 = new BMW('spacegray', 'www');
console.log(z4.name);
// z4.name = 'www';

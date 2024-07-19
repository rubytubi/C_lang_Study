interface User {
  name: string;
}

const Sam: User = { name: 'Sam' };

function showName(this: User, age: Number, gender: 'm' | 'f') {
  console.log(this.name, age, gender);
}

const a = showName.bind(Sam);
a(25, 'm');

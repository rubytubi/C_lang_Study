interface User {
  name: string;
  age: number;
  gender?:
      string;  //-> ?을 뒤에 붙이면 값이 있어도 되고 없어도 되는 값으로 바뀜
  readonly birthYear: number;  // readonly -> 읽기 전용 (수정 불가능)
}

let user: User = {name: 'lsm', age: 100, birthYear: 2000}

                 user.age = 25;
user.gender = 'macho male';

console.log(user);

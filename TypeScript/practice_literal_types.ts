//Literal Types

const userName1 = 'Bob'; //const: 변하지 않는 값
let userName2: string | number = 'Tom'; //let: 변경할 수 있는 값

type Job = 'police' | 'developer' | 'teacher';

interface User {
  name: string;
  job: Job;
}

const user: User = {
  name: 'Bob',
  job: 'developer',
};

interface HighSchoolStudent {
  name: number | string;
  grade: 1 | 2 | 3;
}

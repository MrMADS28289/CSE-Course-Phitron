// 1
let marks = 85; // example input

if (marks >= 80) {
  console.log("A+");
} else if (marks >= 70) {
  console.log("A");
} else if (marks >= 60) {
  console.log("A-");
} else if (marks >= 50) {
  console.log("B");
} else if (marks >= 40) {
  console.log("C");
} else if (marks >= 33) {
  console.log("D");
} else {
  console.log("F");
}

// 2
let age = 19;

if (age >= 21) {
  console.log("বিয়ের উপযুক্ত");
} else {
  console.log("বিয়ের বয়স হয়নি");
}

// 3
let nums = [5, 2, 9, 1, 3, 4, 20];

nums.sort(function (a, b) {
  return a - b;
});

console.log(nums);

// 4
let year = 2024;

if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
  console.log("Leap year");
} else {
  console.log("Not a leap year");
}

// 5
for (let i = 1; i <= 50; i++) {
  if (i % 3 === 0 && i % 5 === 0) {
    console.log(i);
  }
}

// 6
var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

for (let i = 0; i < friends.length; i++) {
  if (friends[i].length === 5) {
    console.log(friends[i]);
  }
}

// 7
var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

for (let i = 0; i < numbers.length; i++) {
  if (numbers[i] % 2 === 0) {
    console.log(numbers[i]);
  }
}

// 8
var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

let max = numbers[0];
for (let i = 1; i < numbers.length; i++) {
  if (numbers[i] > max) {
    max = numbers[i];
  }
}
console.log("Max number is:", max);

// extra

function monthlySavings(payments, livingCost) {
  // Bonus condition: input validation
  if (!Array.isArray(payments) || typeof livingCost !== "number") {
    return "invalid input";
  }

  let totalIncome = 0;

  for (let i = 0; i < payments.length; i++) {
    let payment = payments[i];

    if (payment >= 3000) {
      payment -= payment * 0.2; // 20% Tax
    }

    totalIncome += payment;
  }

  let savings = totalIncome - livingCost;

  if (savings >= 0) {
    return savings;
  } else {
    return "earn more";
  }
}

for (let i = 0; i <= 1000; i++) {
  setTimeout(() => {
    console.log(`i love you ${i} Ritu`);
  }, 500);
}

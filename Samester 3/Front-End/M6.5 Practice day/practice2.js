// 1. গ্রেড মেকিং
let marks = 75;

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

// 2. একটি নাম্বার ইনপুট নিলে বলবে এটি জোড় না বিজোড়
let number = 9;

if (number % 2 === 0) {
  console.log("Even");
} else {
  console.log("Odd");
}

// 3. ১-২০ পর্যন্ত সংখ্যা গুলো বের করে তাদের যোগফল নির্ণয় করো
let sum = 0;
for (let i = 1; i <= 20; i++) {
  sum += i;
}
console.log("Total Sum:", sum);

// 4. একটি নাম্বার ইনপুট নিলে বলবে এটি লিপ ইয়ার কি না
let year = 2024;

if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
  console.log("Leap year");
} else {
  console.log("Not a leap year");
}

// 5. ১-৫০ এর মধ্যে ৩ এবং ৫ দ্বারা বিভাজ্য সংখ্যা গুলো বের করো
for (let i = 1; i <= 50; i++) {
  if (i % 3 === 0 && i % 5 === 0) {
    console.log(i);
  }
}

// 6. friends array থেকে যাদের নামের অক্ষরের সংখ্যা ৫, তাদের দেখাও
let friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

for (let i = 0; i < friends.length; i++) {
  if (friends[i].length === 5) {
    console.log(friends[i]);
  }
}

// 7. একটি সংখ্যা array থেকে সব জোড় সংখ্যা গুলো বের করো (ডুপ্লিকেট সহ)
let numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

for (let i = 0; i < numbers.length; i++) {
  if (numbers[i] % 2 === 0) {
    console.log(numbers[i]);
  }
}

// 8. উপরের array থেকে সর্বোচ্চ সংখ্যাটি বের করো
let max = numbers[0];

for (let i = 1; i < numbers.length; i++) {
  if (numbers[i] > max) {
    max = numbers[i];
  }
}
console.log("Max number is:", max);

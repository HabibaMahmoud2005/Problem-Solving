/*Given a list of integers and a single sum value, return the first two values (parse from the left please) in order of appearance that add up to form the sum.

If there are two or more pairs with the required sum, the pair whose second element has the smallest index is the solution.*/
"use strict";
function sumPairs(ints, s) {
  const seen = new Set();

  for (const int of ints) {
    const difference = s - int;
    if (seen.has(difference)) {
      return [difference, int];
    }
    seen.add(int);
  }

  return undefined;
}
// alternatice solution
/*
"use strict";
function sumPairs(ints, s) {
  const map = new Map(); // number -> index

  for (let i = 0; i < ints.length; i++) {
    const int = ints[i];
    const difference = s - int;

    if (map.has(difference)) {
      return [difference, int];
    }
    map.set(int, i);
  }

  return undefined;
}

*/
//Sample Tests
describe("Sum of Pairs", function () {
  it("Example Tests", function () {
    assert.deepEqual(
      sumPairs([1, 4, 8, 7, 3, 15], 8),
      [1, 7],
      "Basic: [1, 4, 8, 7, 3, 15] should return [1, 7] for sum = 8"
    );
    assert.deepEqual(
      sumPairs([1, -2, 3, 0, -6, 1], -6),
      [0, -6],
      "Negatives: [1, -2, 3, 0, -6, 1] should return [0, -6] for sum = -6"
    );
    assert.deepEqual(
      sumPairs([20, -13, 40], -7),
      undefined,
      "No Match: [20, -13, 40] should return undefined for sum = -7"
    );
    assert.deepEqual(
      sumPairs([1, 2, 3, 4, 1, 0], 2),
      [1, 1],
      "First Match From Left: [1, 2, 3, 4, 1, 0] should return [1, 1] for sum = 2"
    );
    assert.deepEqual(
      sumPairs([10, 5, 2, 3, 7, 5], 10),
      [3, 7],
      "First Match From Left REDUX!: [10, 5, 2, 3, 7, 5] should return [3, 7] for sum = 10"
    );
    assert.deepEqual(
      sumPairs([4, -2, 3, 3, 4], 8),
      [4, 4],
      "Duplicates: [4, -2, 3, 3, 4] should return [4, 4] for sum = 8"
    );
    assert.deepEqual(
      sumPairs([0, 2, 0], 0),
      [0, 0],
      "Zeroes: [0, 2, 0] should return [0, 0] for sum = 0"
    );
    assert.deepEqual(
      sumPairs([5, 9, 13, -3], 10),
      [13, -3],
      "Subtraction: [5, 9, 13, -3] should return [13, -3] for sum = 10"
    );
  });
});

---
name: clean-code-complexity
description: "Use when writing, explaining, reviewing, or optimizing code in any programming language, especially algorithm and data-structure problems. Prefer clean readable code, suitable complexity analysis, edge-case checks, and language-appropriate conventions."
---

# Clean Code and Complexity

Apply these rules whenever you write or modify code, regardless of programming language.

## Understand the Task

- Restate the required input, output, constraints, and assumptions briefly when they are not obvious.
- Identify edge cases before choosing the algorithm.
- Preserve the existing public API, input/output format, and project conventions unless the task requires a change.

## Choose the Algorithm

- Prefer the simplest correct approach that satisfies the constraints.
- Explain why the chosen approach fits the constraints.
- Avoid premature optimization and unnecessary abstractions.
- Use standard-library or ecosystem data structures and algorithms when they improve clarity and reliability.
- Do not trade correctness or readability for a minor theoretical improvement unless constraints justify it.

## Write Clean Code

- Use descriptive names for variables, functions, classes, and types.
- Keep functions focused on one responsibility and reasonably small.
- Make control flow straightforward; reduce nesting with early returns when that improves readability.
- Avoid duplicated logic, magic values, dead code, and unrelated refactors.
- Prefer immutable or read-only values where practical.
- Follow the target language's idiomatic formatting, naming, error handling, and resource-management conventions.
- Add comments only when they explain a non-obvious decision or invariant; do not narrate obvious code.
- Handle errors explicitly and avoid silently ignoring invalid input or failed operations.

## Complexity Analysis

Always include:

- **Time complexity:** state the tightest practical Big-O bound and identify the dominant operation.
- **Space complexity:** include auxiliary memory separately from input/output storage when relevant.
- Mention amortized, average-case, worst-case, recursion-stack, or expected complexity when those distinctions matter.
- Account for hidden costs such as sorting, hashing assumptions, copying, string concatenation, nested library calls, and recursion depth.
- Do not claim `O(1)` space when the algorithm allocates output or uses a call stack that grows with input.

## Verify Correctness

- Check empty, singleton, minimum, maximum, duplicate, negative, already sorted, and impossible cases when applicable.
- Consider integer overflow, precision, encoding, nullability, bounds, mutation, and resource limits according to the language and problem.
- For algorithm explanations, provide a short dry run or invariant when it makes correctness easier to verify.
- If tests exist, update or add focused tests for the changed behavior.
- Run the narrowest relevant formatter, compiler, linter, or test command after editing.

## Response Format

For a coding solution, structure the response as appropriate:

1. Approach and why it works.
2. Code using the requested language and its idioms.
3. Time and space complexity.
4. Important edge cases or a brief dry run.
5. Validation result, including any assumptions or remaining test gaps.

Keep explanations concise unless the user asks for a detailed tutorial. Use the user's language when practical, including Hindi or Hinglish.

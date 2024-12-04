### Assignment: Convert Binary Array Tree to BST Using Array or Vector

**Instructions:**
1. **Extract the Elements:**
   - Extract all elements from the binary array tree into a temporary array or vector.

2. **Sort the Elements:**
   - Sort the array to arrange the elements in order, ensuring the BST property is maintained.

3. **Rebuild the BST:**
   - Use a recursive function to build the BST by selecting the middle element as the root and repeating for left and right subtrees.

**Pros and Cons:**
- **Pros:**
  - Easier search after conversion due to the BST property.
  - Balanced structure if the middle element is chosen each time.

- **Cons:**
  - Sorting adds time complexity (`O(n log n)`).
  - Requires additional memory for temporary storage.

Feel free to draw diagrams to illustrate the conversion process.

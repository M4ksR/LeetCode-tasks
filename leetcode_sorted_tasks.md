## 🟡Easy 
```
✅ - 31
❌ - 7
```

✅1. Two Sum
https://leetcode.com/problems/two-sum/  

если нашли currNumber в мапе => выводим currNumberIndex и map[currNumber]  
мапа[target - currNumber] = currNumberIndex

---

✅14. Longest Common Prefix
https://leetcode.com/problems/longest-common-prefix/  

берем первую строку как стартовую и проходя по ее буквам сверяем что у остальных
слов такие же. если не совпали или длина превысила длину минимального слова
то возвращаем то что уже накопилось

---

✅20. Valid Parentheses
https://leetcode.com/problems/valid-parentheses/  

если скобка открывающаяся - кладем ее в стек. если закрывающаяся то проверяем
что на вершине стека лежит соответствующая ей открывающаяся скобка. если это не так
то false. по завершении цикла проверить: если стек пустой => true, иначе => false

---

✅21. Merge Two Sorted Lists
https://leetcode.com/problems/merge-two-sorted-lists/  

задать начало списка через ListNode() и взять указатель на него который в последствии будет указателем на последний элемент списка. далее сделать перебор. пока какой-то из списков не закончится сравниваем значение двух узлов и потом

nextNode->next = list  
list = list->next  
nextNode = nextNode->next  

после цикла делаем дописываем остаток через тернарный оператор  
currNode->next = (list1 == nullptr) ? list2 : list1;

---

✅27. Remove Element
https://leetcode.com/problems/remove-element/  

erase возвращает итератор на следующий элемент, стоящий за элементом, что был удален

---

✅66. Plus One
https://leetcode.com/problems/plus-one/  

идем циклом от конца до начала. если 9, то заменяем на 0 и идем дальше
если цифра отличная от 9 то делаем +1 и возвращаем ответ
если раннего return не произошло вставляем единицу в начало через insert(vec.begin(),1)

---

✅70. Climbing Stairs
https://leetcode.com/problems/climbing-stairs/  

используем формулу динамического подсчета dp[i] = dp[i-2] + dp[i-1] так как например в ступеньку 5 мы можем попасть со ступеньки 3 и со ступеньки 4 а например в ступеньку 6 со ступеньки 4 и со ступеньки 5

тогда если хранить 2 состояния prev1 и prev2 со стартовыми значениями 1 и 1 то при цикле for (int i = 2; i <= n; ++i) и промежуточными значениями prev2 = prev1 и prev1 = curr результатом будет prev1

---

✅88. Merge Sorted Array
https://leetcode.com/problems/merge-sorted-array/  

создаем 3 указателя

i = m - 1  
j = n - 1  
k = m + n - 1  

пока j >= 0 самый большой элемент кладем на вершину списка и сдвигаем i j на 1

---

✅100. Same Tree
https://leetcode.com/problems/same-tree/

завести 3 базовых случая:  
p == nullptr && q == nullptr  
p == nullptr || q == nullptr  
p == q  

в остальном рекурсивно проверять левый и правый узел

---

✅104. Maximum Depth of Binary Tree
https://leetcode.com/problems/maximum-depth-of-binary-tree/

рекурсивно считаем глубину дерева. базовый случай root == nullptr

---

✅111. Minimum Depth of Binary Tree
https://leetcode.com/problems/minimum-depth-of-binary-tree/

идея через очередь. изначально кладем root и выполняем до тех пор пока очередь не пустая. запомнили размер - столько узлов будем извлекать. взяли узел положили двух его детей. если у какого-то из детей нет дочерних узлов то вернули k + 1

---

✅136. Single Number
https://leetcode.com/problems/single-number/

использовать $\oplus$

[4,2,1,1,2] => $4\oplus2\oplus1\oplus1\oplus2 = 4 \oplus (2 \oplus 2) \oplus (1 \oplus 1) = 4 \oplus 0 = 4 \Rightarrow 4$ 

---

✅141. Linked List Cycle
https://leetcode.com/problems/linked-list-cycle/

использовать алгоритм флойда slow-fast. slow делает 1 шаг вперед, fast делает 2 шага вперед

---

✅169. Majority Element
https://leetcode.com/problems/majority-element/

начинаем перебирать числа. если количество повторений 0 то в качестве кандидата берем это число. если число совпадает с кандидатом то количество повторений += 1
если не совпадает то число повторений -= 1

[3,4,5,3,4,4]

| curr | can | count |
| :---: | :---: | :---: |
| 3 | 3 | 1 |
| 4 | 3 | 0 |
| 5 | 5 | 1 |
| 3 | 5 | 0 |
| 4 | 4 | 1 |
| 4 | 4 | 2 |

return can;  $\Rightarrow$  4 - ответ

---

✅171. Excel Sheet Column Number
https://leetcode.com/problems/excel-sheet-column-number/

по схеме горнера представить буквенную запись

"AAX" => $26^3\cdot$ ('A' - 26 + 1)  +  $26^2\cdot$ ('A' - 26 + 1)  +  $26^1\cdot$ ('X' - 26 + 1)

---

✅190. Reverse Bits
https://leetcode.com/problems/reverse-bits/

взяли последний бит через & 1  
результат на 1 бит влево через << и приписали полученный бит через |  
число на 1 вправо  

так 32 раза

---

✅191. Number of 1 Bits
https://leetcode.com/problems/number-of-1-bits/

проходимся по битам через & >> и считаем единички

---

✅202. Happy Number
https://leetcode.com/problems/happy-number/

создать 2 указателя. первый делает 1 действие, второй 2 действия. если существует цикл то рано или поздно второй будет равен первому

---

✅205. Isomorphic Strings
https://leetcode.com/problems/isomorphic-strings/

сделать функцию проверки одного направления и проверить сначала s→t потом t→s либо создать 2 хешмапы и сразу проверять оба направления

---

✅206. Reverse Linked List
https://leetcode.com/problems/reverse-linked-list/

создать 2 указателя currNode и nextNode. идти слева направо  

ListNode* tmp = nextNode->next;  
nextNode->next = currNode;  
currNode = nextNode;  
nextNode = tmp;  

---

✅217. Contains Duplicate
https://leetcode.com/problems/contains-duplicate/

новые элементы складывать в множество а при наличии такого же возвращать true

---

✅226. Invert Binary Tree
https://leetcode.com/problems/invert-binary-tree/

очередью / рекурсивно идем по каждому элементу дерева и меняем 2 его узла
nullptr в очередь не добавляем

---

❌228. Summary Ranges
https://leetcode.com/problems/summary-ranges/



---

✅242. Valid Anagram
https://leetcode.com/problems/valid-anagram/

использовать хешмапу / сделать массив на 26 символов: ++s и --t. если в конце найдется ненулевое число то false иначе true

---

✅268. Missing Number
https://leetcode.com/problems/missing-number/

n = vec.size()  
expectedSum = n * (n + 1) / 2

вернуть expectedSum - actualSum

---

✅278. First Bad Version
https://leetcode.com/problems/first-bad-version/

бинарный поиск в [0,n]

---

✅283. Move Zeroes
https://leetcode.com/problems/move-zeroes/

ведем два указателя. i - место слева куда будем делать swap и j - текущий элемент

swap(nums[j], nums[i++]) в случае если nums[j] $\ne$ 0 

---

✅338. Counting Bits
https://leetcode.com/problems/counting-bits/

$dp[i] = 1 + dp[i\ \&\ (i - 1)]$

---

✅350. Intersection of Two Arrays II
https://leetcode.com/problems/intersection-of-two-arrays-ii/

собираем буквы наименьшего вектора в хешмапу. проходимся по наибольшему и складываем одинаковые в новый массив

---

✅485. Max Consecutive Ones
https://leetcode.com/problems/max-consecutive-ones/

ноль - сбросили счетчик, единица - прибавили счетчик
вернули максимум из счетчика / максимального значения

---

❌543. Diameter of Binary Tree
https://leetcode.com/problems/diameter-of-binary-tree/



---

❌637. Average of Levels in Binary Tree
https://leetcode.com/problems/average-of-levels-in-binary-tree/



---

❌680. Valid Palindrome II
https://leetcode.com/problems/valid-palindrome-ii/



---

❌703. Kth Largest Element in a Stream
https://leetcode.com/problems/kth-largest-element-in-a-stream/



---

✅704. Binary Search
https://leetcode.com/problems/binary-search/

l = 0, r = nums.size() - 1
left = mid + 1
right = mid - 1

---

✅771. Jewels and Stones
https://leetcode.com/problems/jewels-and-stones/

использовать статический массив типа bool на 128 элементов. значение буквы в таблице ASCII = индекс

---

❌1791. Find Center of Star Graph
https://leetcode.com/problems/find-center-of-star-graph/



---

❌3194. Minimum Average of Smallest and Largest Elements
https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/



---


## 🟡Medium
```
✅ - 0
❌ - 116
```

❌2. Add Two Numbers
https://leetcode.com/problems/add-two-numbers/



---

❌3. Longest Substring Without Repeating Characters
https://leetcode.com/problems/longest-substring-without-repeating-characters/



---

❌5. Longest Palindromic Substring
https://leetcode.com/problems/longest-palindromic-substring/



---

❌11. Container With Most Water
https://leetcode.com/problems/container-with-most-water/



---

❌15. 3Sum
https://leetcode.com/problems/3sum/



---

❌17. Letter Combinations of a Phone Number
https://leetcode.com/problems/letter-combinations-of-a-phone-number/



---

❌18. 4Sum
https://leetcode.com/problems/4sum/



---

❌19. Remove Nth Node From End of List
https://leetcode.com/problems/remove-nth-node-from-end-of-list/



---

❌22. Generate Parentheses
https://leetcode.com/problems/generate-parentheses/



---

❌31. Next Permutation
https://leetcode.com/problems/next-permutation/



---

❌33. Search in Rotated Sorted Array
https://leetcode.com/problems/search-in-rotated-sorted-array/



---

❌34. Find First and Last Position of Element in Sorted Array
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/



---

❌38. Count and Say
https://leetcode.com/problems/count-and-say/



---

❌39. Combination Sum
https://leetcode.com/problems/combination-sum/



---

❌40. Combination Sum II
https://leetcode.com/problems/combination-sum-ii/



---

❌43. Multiply Strings
https://leetcode.com/problems/multiply-strings/



---

❌46. Permutations
https://leetcode.com/problems/permutations/



---

❌49. Group Anagrams
https://leetcode.com/problems/group-anagrams/



---

❌50. Pow(x, n)
https://leetcode.com/problems/powx-n/



---

❌53. Maximum Subarray
https://leetcode.com/problems/maximum-subarray/



---

❌54. Spiral Matrix
https://leetcode.com/problems/spiral-matrix/



---

❌55. Jump Game
https://leetcode.com/problems/jump-game/



---

❌56. Merge Intervals
https://leetcode.com/problems/merge-intervals/



---

❌57. Insert Interval
https://leetcode.com/problems/insert-interval/



---

❌61. Rotate List
https://leetcode.com/problems/rotate-list/



---

❌62. Unique Paths
https://leetcode.com/problems/unique-paths/



---

❌63. Unique Paths II
https://leetcode.com/problems/unique-paths-ii/



---

❌72. Edit Distance
https://leetcode.com/problems/edit-distance/



---

❌73. Set Matrix Zeroes
https://leetcode.com/problems/set-matrix-zeroes/



---

❌74. Search a 2D Matrix
https://leetcode.com/problems/search-a-2d-matrix/



---

❌78. Subsets
https://leetcode.com/problems/subsets/



---

❌79. Word Search
https://leetcode.com/problems/word-search/



---

❌90. Subsets II
https://leetcode.com/problems/subsets-ii/



---

❌91. Decode Ways
https://leetcode.com/problems/decode-ways/



---

❌98. Validate Binary Search Tree
https://leetcode.com/problems/validate-binary-search-tree/



---

❌102. Binary Tree Level Order Traversal
https://leetcode.com/problems/binary-tree-level-order-traversal/



---

❌103. Binary Tree Zigzag Level Order Traversal
https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/



---

❌105. Construct Binary Tree from Preorder and Inorder Traversal
https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/



---

❌107. Binary Tree Level Order Traversal II
https://leetcode.com/problems/binary-tree-level-order-traversal-ii/



---

❌113. Path Sum II
https://leetcode.com/problems/path-sum-ii/



---

❌114. Flatten Binary Tree to Linked List
https://leetcode.com/problems/flatten-binary-tree-to-linked-list/



---

❌128. Longest Consecutive Sequence
https://leetcode.com/problems/longest-consecutive-sequence/



---

❌130. Surrounded Regions
https://leetcode.com/problems/surrounded-regions/



---

❌131. Palindrome Partitioning
https://leetcode.com/problems/palindrome-partitioning/



---

❌133. Clone Graph
https://leetcode.com/problems/clone-graph/



---

❌138. Copy List with Random Pointer
https://leetcode.com/problems/copy-list-with-random-pointer/



---

❌139. Word Break
https://leetcode.com/problems/word-break/



---

❌143. Reorder List
https://leetcode.com/problems/reorder-list/



---

❌146. LRU Cache
https://leetcode.com/problems/lru-cache/



---

❌148. Sort List
https://leetcode.com/problems/sort-list/



---

❌150. Evaluate Reverse Polish Notation
https://leetcode.com/problems/evaluate-reverse-polish-notation/



---

❌153. Find Minimum in Rotated Sorted Array
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/



---

❌155. Min Stack
https://leetcode.com/problems/min-stack/



---

❌167. Two Sum II - Input Array Is Sorted
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/



---

❌172. Factorial Trailing Zeroes
https://leetcode.com/problems/factorial-trailing-zeroes/



---

❌189. Rotate Array
https://leetcode.com/problems/rotate-array/



---

❌198. House Robber
https://leetcode.com/problems/house-robber/



---

❌199. Binary Tree Right Side View
https://leetcode.com/problems/binary-tree-right-side-view/



---

❌200. Number of Islands
https://leetcode.com/problems/number-of-islands/



---

❌207. Course Schedule
https://leetcode.com/problems/course-schedule/



---

❌208. Implement Trie (Prefix Tree)
https://leetcode.com/problems/implement-trie-prefix-tree/



---

❌209. Minimum Size Subarray Sum
https://leetcode.com/problems/minimum-size-subarray-sum/



---

❌210. Course Schedule II
https://leetcode.com/problems/course-schedule-ii/



---

❌211. Design Add and Search Words Data Structure
https://leetcode.com/problems/design-add-and-search-words-data-structure/



---

❌215. Kth Largest Element in an Array
https://leetcode.com/problems/kth-largest-element-in-an-array/



---

❌230. Kth Smallest Element in a BST
https://leetcode.com/problems/kth-smallest-element-in-a-bst/



---

❌236. Lowest Common Ancestor of a Binary Tree
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/



---

❌238. Product of Array Except Self
https://leetcode.com/problems/product-of-array-except-self/



---

❌240. Search a 2D Matrix II
https://leetcode.com/problems/search-a-2d-matrix-ii/



---

❌252. Meeting Rooms
https://leetcode.com/problems/meeting-rooms/



---

❌253. Meeting Rooms II
https://leetcode.com/problems/meeting-rooms-ii/



---

❌261. Graph Valid Tree
https://leetcode.com/problems/graph-valid-tree/



---

❌271. Encode and Decode Strings
https://leetcode.com/problems/encode-and-decode-strings/



---

❌279. Perfect Squares
https://leetcode.com/problems/perfect-squares/



---

❌300. Longest Increasing Subsequence
https://leetcode.com/problems/longest-increasing-subsequence/



---

❌310. Minimum Height Trees
https://leetcode.com/problems/minimum-height-trees/



---

❌322. Coin Change
https://leetcode.com/problems/coin-change/



---

❌323. Number of Connected Components
https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/



---

❌340. Longest Substring with At Most K Distinct Characters
https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/



---

❌347. Top K Frequent Elements
https://leetcode.com/problems/top-k-frequent-elements/



---

❌355. Design Twitter
https://leetcode.com/problems/design-twitter/



---

❌371. Sum of Two Integers
https://leetcode.com/problems/sum-of-two-integers/



---

❌380. Insert Delete GetRandom O(1)
https://leetcode.com/problems/insert-delete-getrandom-o1/



---

❌394. Decode String
https://leetcode.com/problems/decode-string/



---

❌399. Evaluate Division
https://leetcode.com/problems/evaluate-division/



---

❌416. Partition Equal Subset Sum
https://leetcode.com/problems/partition-equal-subset-sum/



---

❌417. Pacific Atlantic Water Flow
https://leetcode.com/problems/pacific-atlantic-water-flow/



---

❌424. Longest Repeating Character Replacement
https://leetcode.com/problems/longest-repeating-character-replacement/



---

❌430. Flatten a Multilevel Doubly Linked List
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/



---

❌435. Non-overlapping Intervals
https://leetcode.com/problems/non-overlapping-intervals/



---

❌438. Find All Anagrams in a String
https://leetcode.com/problems/find-all-anagrams-in-a-string/



---

❌443. String Compression
https://leetcode.com/problems/string-compression/



---

❌445. Add Two Numbers II
https://leetcode.com/problems/add-two-numbers-ii/



---

❌452. Minimum Number of Arrows to Burst Balloons
https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/



---

❌494. Target Sum
https://leetcode.com/problems/target-sum/



---

❌525. Contiguous Array
https://leetcode.com/problems/contiguous-array/



---

❌542. 01 Matrix
https://leetcode.com/problems/01-matrix/



---

❌547. Number of Provinces
https://leetcode.com/problems/number-of-provinces/



---

❌560. Subarray Sum Equals K
https://leetcode.com/problems/subarray-sum-equals-k/



---

❌572. Subtree of Another Tree
https://leetcode.com/problems/subtree-of-another-tree/



---

❌621. Task Scheduler
https://leetcode.com/problems/task-scheduler/



---

❌647. Palindromic Substrings
https://leetcode.com/problems/palindromic-substrings/



---

❌684. Redundant Connection
https://leetcode.com/problems/redundant-connection/



---

❌695. Max Area of Island
https://leetcode.com/problems/max-area-of-island/



---

❌713. Subarray Product Less Than K
https://leetcode.com/problems/subarray-product-less-than-k/



---

❌721. Accounts Merge
https://leetcode.com/problems/accounts-merge/



---

❌739. Daily Temperatures
https://leetcode.com/problems/daily-temperatures/



---

❌767. Reorganize String
https://leetcode.com/problems/reorganize-string/



---

❌849. Maximize Distance to Closest Person
https://leetcode.com/problems/maximize-distance-to-closest-person/



---

❌912. Sort an Array
https://leetcode.com/problems/sort-an-array/



---

❌981. Time Based Key-Value Store
https://leetcode.com/problems/time-based-key-value-store/



---

❌994. Rotting Oranges
https://leetcode.com/problems/rotting-oranges/



---

❌1091. Shortest Path in Binary Matrix
https://leetcode.com/problems/shortest-path-in-binary-matrix/



---

❌1143. Longest Common Subsequence
https://leetcode.com/problems/longest-common-subsequence/



---

❌1493. Longest Subarray of 1's After Deleting One Element
https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/



---

❌3301. Maximize the Total Height of Unique Towers
https://leetcode.com/problems/maximize-the-total-height-of-unique-towers/



---


## 🟡Hard (15)
```
✅ - 0
❌ - 15
```

❌4. Median of Two Sorted Arrays
https://leetcode.com/problems/median-of-two-sorted-arrays/



---

❌23. Merge k Sorted Lists
https://leetcode.com/problems/merge-k-sorted-lists/



---

❌42. Trapping Rain Water
https://leetcode.com/problems/trapping-rain-water/



---

❌51. N-Queens
https://leetcode.com/problems/n-queens/



---

❌76. Minimum Window Substring
https://leetcode.com/problems/minimum-window-substring/



---

❌84. Largest Rectangle in Histogram
https://leetcode.com/problems/largest-rectangle-in-histogram/



---

❌124. Binary Tree Maximum Path Sum
https://leetcode.com/problems/binary-tree-maximum-path-sum/



---

❌127. Word Ladder
https://leetcode.com/problems/word-ladder/



---

❌140. Word Break II
https://leetcode.com/problems/word-break-ii/



---

❌212. Word Search II
https://leetcode.com/problems/word-search-ii/



---

❌224. Basic Calculator
https://leetcode.com/problems/basic-calculator/



---

❌239. Sliding Window Maximum
https://leetcode.com/problems/sliding-window-maximum/



---

❌295. Find Median from Data Stream
https://leetcode.com/problems/find-median-from-data-stream/



---

❌297. Serialize and Deserialize Binary Tree
https://leetcode.com/problems/serialize-and-deserialize-binary-tree/



---

❌460. LFU Cache
https://leetcode.com/problems/lfu-cache/



---

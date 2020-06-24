<h3> Unique Binary Search Trees </h3>
<div><p>Given <em>n</em>, how many structurally unique <strong>BST's</strong> (binary search trees) that store values 1 ...&nbsp;<em>n</em>?</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> 3
<strong>Output:</strong> 5
<strong>Explanation:
</strong>Given <em>n</em> = 3, there are a total of 5 unique BST's:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
</pre>
</div>
</br>
<h3> Solution explanation </h3>
<p>The problem can be solved in a dynamic programming way. I’ll explain the intuition and formulas in the following.</p><p>
</p><p>Given a sequence 1…n, to construct a Binary Search Tree (BST) out of the sequence, we could enumerate each number i in the sequence, and use the number as the root, naturally, the subsequence 1…(i-1) on its left side would lay on the left branch of the root, and similarly the right subsequence (i+1)…n lay on the right branch of the root. We then can construct the subtree from the subsequence recursively. Through the above approach, we could ensure that the BST that we construct are all unique, since they have unique roots.</p><p>
</p><p>The problem is to calculate the number of unique BST. To do so, we need to define two functions:</p><p>
</p><p><code>G(n)</code>: the number of unique BST for a sequence of length n.</p><p>
</p><p><code>F(i, n), 1 &lt;= i &lt;= n</code>: the number of unique BST, where the number i is the root of BST, and the sequence ranges from 1 to n.</p><p>
</p><p>As one can see, <code>G(n)</code> is the actual function we need to calculate in order to solve the problem. And <code>G(n)</code> can be derived from <code>F(i, n)</code>, which at the end, would recursively refer to <code>G(n)</code>.</p><p>
</p><p>First of all, given the above definitions, we can see that the total number of unique BST <code>G(n)</code>, is the sum of BST <code>F(i)</code> using each number i as a root.<br>
<em>i.e.</em></p><p>
</p><pre><code>G(n) = F(1, n) + F(2, n) + ... + F(n, n). 
</code></pre>
<p></p><p>Particularly, the bottom cases, there is only one combination to construct a BST out of a sequence of length 1 (only a root) or 0 (empty tree).<br>
<em>i.e.</em></p><p>
</p><pre><code>G(0)=1, G(1)=1. 
</code></pre>
<p></p><p>Given a sequence 1…n, we pick a number i out of the sequence as the root, then the number of unique BST with the specified root <code>F(i)</code>, is the cartesian product of the number of BST for its left and right subtrees. For example, <code>F(3, 7)</code>: the number of unique BST tree with number 3 as its root. To construct an unique BST out of the entire sequence [1, 2, 3, 4, 5, 6, 7] with 3 as the root, which is to say, we need to construct an unique BST out of its left subsequence [1, 2] and another BST out of the right subsequence [4, 5, 6, 7], and then combine them together (<em>i.e.</em> cartesian product). The tricky part is that we could consider the number of unique BST out of sequence [1,2] as <code>G(2)</code>, and the number of of unique BST out of sequence [4, 5, 6, 7] as <code>G(4)</code>. Therefore, <code>F(3,7) = G(2) * G(4)</code>.</p><p>
</p><p><em>i.e.</em></p><p>
</p><pre><code>F(i, n) = G(i-1) * G(n-i)	1 &lt;= i &lt;= n 
</code></pre>
<p></p><p>Combining the above two formulas, we obtain the recursive formula for <code>G(n)</code>. <em>i.e.</em></p><p>
</p><pre><code>G(n) = G(0) * G(n-1) + G(1) * G(n-2) + … + G(n-1) * G(0) 
</code></pre>
<p></p><p>In terms of calculation, we need to start with the lower number, since the value of <code>G(n)</code> depends on the values of <code>G(0) … G(n-1)</code>.</p><p>
</br>
<h3> This Solution was provided by liasion who is also a staff member of leetcode . So all thanks to him.</h3>
<h3> Longest Duplicate Substring </h3>
<div><p>Given a string <code>S</code>, consider all <em>duplicated substrings</em>: (contiguous) substrings of S that occur 2 or more times.&nbsp; (The occurrences&nbsp;may overlap.)</p>

<p>Return <strong>any</strong> duplicated&nbsp;substring that has the longest possible length.&nbsp; (If <code>S</code> does not have a duplicated substring, the answer is <code>""</code>.)</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">"banana"</span>
<strong>Output: </strong><span id="example-output-1">"ana"</span>
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-2-1">"abcd"</span>
<strong>Output: </strong><span id="example-output-2">""</span>
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>2 &lt;= S.length &lt;= 10^5</code></li>
	<li><code>S</code> consists of lowercase English letters.</li>
</ol>
</div>
<div class="hints-area"><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #1&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>Binary search for the length of the answer.  (If there's an answer of length 10, then there are answers of length 9, 8, 7, ...)</div></div></div></div></div></div><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #2&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>To check whether an answer of length K exists, we can use Rabin-Karp 's algorithm.</div></div></div></div></div></div></div>
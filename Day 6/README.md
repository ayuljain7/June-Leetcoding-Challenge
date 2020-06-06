<h3> Queue Reconstruction by Height </h3>
<div><p>Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers <code>(h, k)</code>, where <code>h</code> is the height of the person and <code>k</code> is the number of people in front of this person who have a height greater than or equal to <code>h</code>. Write an algorithm to reconstruct the queue.</p>

<p><b>Note:</b><br>
The number of people is less than 1,100.</p>
&nbsp;

<p><b>Example</b></p>

<pre>Input:
[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]

Output:
[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
</pre>

<p>&nbsp;</p>
</div>
<div class="hints-area"><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #1&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>What can you say about the position of the shortest person? <br>
If the position of the shortest person is <i>i</i>, how many people would be in front of the shortest person?</div></div></div></div></div></div><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #2&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>Once you fix the position of the shortest person, what can you say about the position of the second shortest person?</div></div></div></div></div></div></div>
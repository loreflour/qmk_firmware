# konomu's one handed keyboard

<p>

This keymap is based on the Frogpad, the concept of which was [first devised around April of 1997](https://patents.google.com/patent/US5793312A)
by Ryozo "Ken" Tsubai and [design finalized around February of 2004](https://patents.google.com/patent/WO2005078928A1)
by Tsubai and Linda Marroquin.</p>

<p align="center">
    <img src="https://i.imgur.com/VWQMUk7.png" alt="default layout" width="500">
</p>

# Improvements over the original Frogpad

*Significantly improved same finger bigram frequency. (Less S-bigrams)
*Significantly improved neighbor finger bigram frequency. (More N-bigrams)
*Slight improvement in surface layer letter frequency. (Moved G and C to surface layer, in exchange for P and Y)
	*This means you'll need to chord letters less.
*In the case of same finger bigrams, increased the amount of downward motions, which are more comfortable.
	*For example, swapping A and I was an efficient change because 'ea' and 'ie' are both more common than 'ae' and 'ei'.

![improvement](https://i.imgur.com/auVktOh.png)

## Guidelines for usage
<p>The defined COMBO_TERM in the config.h is set to 60, which means that to type a letter on the combo layer, you must hit both keys
(it doesn't matter in which order) within 60 milliseconds of each other to produce that letter. I find that this value is most optimal for 
avoiding errors. Sometimes, if you hit the spacebar too early after a key, it'll produce a comboed letter—and other times, you'll find that you
didn't hit the two keys fast enough to produce that comboed letter, instead, sending a surface layer letter and a space. These errors will
reduce naturally with practice. If you want, you can tweak this COMBO_TERM value to your liking.</p>
<p>Although it is possible to type two comboed letters quickly by pressing the initial comboed letter and then quickly rolling to the next, 
I don't recommend it. I personally find that I can't reliably type the double comboed letters quickly enough, and instead find myself with
one comboed letter and another surface layer letter. This is why when I want to type two or more comboed letters in a row, I press 
space multiple times.</p>
<p>This keymap uses G Heavy Industries' Combo and Chording engine, of which the documentation is at http://combos.gboards.ca/</p>

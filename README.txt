-- Summary --

Anti-Bot Forms adds a defensive alteration to site forms, requiring the
user to process Javascript on the page in order for a form to submit without
errors.

Few spam bots implement a Javascript engine, and most of the bot traffic an
average site sees are drive-bys: the bot hits the site in the hope that it's
running a specific widely used platform, and tries to be as economical as
possible in delivering spam.

Thus most spam bot traffic can be blocked just by requiring Javascript activity
in order to submit forms.

-- Caveats --

This won't work for large sites that merit individual attention from spammers.
It won't work if lots of people choose to use exactly the same tactic in their
fight against spam bots. It also does nothing to block manually submitted spam.

-- Variety is Key --

Adding Javascript to forms in order to block bots is only effective if everyone
uses a slightly different approach. There are many, many ways to put that
Javascript onto the page and then alter a form's fields, and only variety in
those ways can prevent spammers from simply using regular expressions to bypass
the most common forms.

Thus Anti-Bot Forms offers hooks to allow you to replace the default method of
altering forms with one of your own that uses different Javascript to achieve
the same end result. It is recommended that you do so.

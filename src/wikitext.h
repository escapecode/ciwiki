/* 
 *  CiWiki a fork of DidiWiki, a small lightweight wiki engine. 
 *  CiWiki Copyright 2010...2015 Jean-Pierre Redonnet <inphilly@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 */

#ifndef _HAVE_WIKI_TEXT_HEADER
#define _HAVE_WIKI_TEXT_HEADER

#define BACK \
"href='javascript:javascript:history.go(-1)'>&#60&#60&#60Back\n" \

#define EDITHEADER \
\
"<div id='header'>\n" \
"<form method='get' action='Search'>\n" \
"<table border='0' width='100%%'>\n" \
"<tr>\n" \
"<td align='left' ><strong>%s</strong>" \
" ( <a href=%s?edit title='Edit this wiki page contents. [alt-j]' accesskey='j'>Edit</a> | " \
"<a href=%s?delete title='Delete page. [alt-d]' accesskey='d'>Delete</a> ) </td>" \
"<td align='right' >\n" \
"<a href='Login' title='Login page. [alt-l]' accesskey='l'>%s</a> &nbsp; &nbsp; &nbsp;|\n"  \
"<a href='WikiHome' title='Visit Wiki home page. [alt-z]' accesskey='z'>Home</a> |\n"  \
"<a href='Index' title='List all pages in the wiki. [alt-i]' accesskey='i' >Index</a> | \n"  \
"<a href='Changes' title='List recent changes in the wiki. [alt-r]' accesskey='r' >Changes</a> | \n"  \
"<a href='Create' title='Add a new wiki page by title. [alt-c]' accesskey='c'>Add</a> | \n"    \
"<a href='WikiHelp' title='Get help on wiki usage and formatting.'>Help</a>  \n"    \
"<input type='text' name='expr' size='15' placeholder='search for word(s)' title='Enter text to search for and press return.' /> </td>\n"  \
"</tr>\n"                                                                \
"</table>\n"                                                             \
"</form>\n"                                                              \
"</div>\n"                                                               \
"<p>&nbsp;</p> \n" \
"<div id='wikidata'>\n"

#define PAGEHEADER                                                       \
                                                                         \
"<div id='header'>\n"                                                    \
"<form method='get' action='Search'>\n"                                 \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n"                                                                 \
"<td align='left' ><strong>%s</strong> %s</td>\n"         \
"<td align='right' >\n"                                    \
"<a href='WikiHome' title='Visit Wiki home page. [alt-z]' accesskey='z'>Home</a> |\n"  \
"<a href='Index' title='List all pages in the wiki. [alt-i]' accesskey='i' >Index</a> | \n"  \
"<a href='Changes' title='List recent changes in the wiki. [alt-r]' accesskey='r' >Changes</a> | \n"                                    \
"<a href='Create' title='Add a new wiki page by title. [alt-c]' accesskey='c'>Add</a> | \n"                                         \
"<a href='WikiHelp' title='Get help on wiki usage and formatting.'>Help</a>  \n"                                       \
"<input type='text' name='expr' size='15' title='Enter text to search for and press return.' /> </td>\n"                               \
"</tr>\n"                                                                \
"</table>\n"                                                             \
"</form>\n"                                                              \
"</div>\n"                                                               \
"<div id='wikidata'>\n"


#define PAGEFOOTER                                                       \
                                                                         \
"</div><div id='footer'>CiWiki Version: " VERSION "</div>\n"


#define SHORTHELP                                                    \
                                                                         \
"<div id='header'>\n"                                                    \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n"                                                                 \
"<td align='left' > =H1 ==H2 ===H3 | *bold* | /italic/ | _underscore_ | -strikethrough- | +highlight+ | 'quote | "\
"[link] | * list | ** sublist | # ordered | ---- | {{toc}} | {{private}}</td>\n"\
"</tr>\n"                                                           \
"</table>\n"                                                             \
"</div>\n"                                                               \
"<div id='wikidata'>\n"


#define LOGINFORM                                                       \
                                                                        \
"<h1>Login</h1>"                                                        \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n"                                                                 \
"<td align='right'>User name:</td>"                                      \
"<td align='left'><input type='text' name='username' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>Password:</td>"                                       \
"<td align='left'><input type='password' name='password' /></td>\n"        \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' value='Login' /> &nbsp; &nbsp; <a href='NewAccount'>Register</a></td>\n" \
"</tr></table>\n"                                                      \
"</form>\n" 



#define LOGINFORM2                                                      \
                                                                        \
"<h1>Login</h1>"                                                        \
"<p><a href='NewAccount'>New user? Please create a new account.</a></p>\n" \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n"                                                                 \
"<td align='right'>User name:</td>"                                      \
"<td align='left'><input type='text' name='username' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>Password:</td>"                                       \
"<td align='left'><input id='password' name='password' style='padding: 5px;' type='password' />\n" \
"<i>Show it:</i><input id='reveal' name='reveal' onchange='reveal_pass(this); ' type='checkbox' value='1' /></td>\n"    \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' value='Login' /></td>\n" \
"</tr></table>\n"                                                      \
"</form>\n"                                                      \
"<script type='text/javascript'>\n"        \
"function reveal_pass(check_box){\n"        \
" var textbox_elem = document.getElementById('password');\n"        \
" if(check_box.checked)\n"        \
" textbox_elem.setAttribute('type', 'text');\n"        \
" else\n"        \
" textbox_elem.setAttribute('type', 'password');\n"        \
"}\n"        \
"</script>\n"



#define NEWLOGINFORM                                                       \
                                                                        \
"<h1>Create a new Account</h1>"                                         \
"You will receive your validation code on your email</p>\n" \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n" \
"<td align='right'>User name:</td>"                                      \
"<td align='left'><input type='text' name='username' pattern='.{5,}' title='5 characters minimum'required /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>Password:</td>"                                       \
"<td align='left'><input type='password' name='password' pattern='.{5,}' title='5 characters minimum' required /></td>\n"        \
"</tr><tr>\n"                                                           \
"<td align='right'>Your Email:</td>"                                     \
"<td align='left'><input type='email' name='email' placeholder='Enter a valid email address' required /></td>\n"  \
"</tr><tr>\n"                                                           \
"<td align='left' colspan=2><br>A validation code will be returned by mail.<br><br></td>\n"     \
"</tr><tr>\n"                                                           \
"<td align='right'>Validation Code:</td>"                                \
"<td align='left'><input type='text' name='code' /></td>\n" \
"</tr><tr>\n"                                                           \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' value='Process it' /></td>\n" \
"</tr></table>\n"                                                      \
"<input type='hidden' name='newaccount' value='on' />  \n"              \
"</form>\n" 


#define CHGPWDFORM                                                      \
                                                                        \
"<form method=POST action='Login'>\n"                                   \
"<table border='0' width='100%%'>\n"                                    \
"<tr>\n"                                                                \
"<td align='right'>Old password:</td>"                                  \
"<td align='left'><input type='text' name='password' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>New password:</td>"                                  \
"<td align='left'><input type='text' name='newpassword' /></td>\n"      \
"</tr><tr>\n"                                                           \
"<td align='right'>Reenter your password:</td>"                         \
"<td align='left'><input type='text' name='newpasswordbis' /></td>\n"   \
"</tr><tr>\n"                                                           \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' value='Login' /></td>\n"\
"</tr></table>\n"                                                       \
"</form>\n" 


#define LOGINFO                                                         \
                                                                        \
"<h1>Login Information</h1>"                                            \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                    \
"<tr>\n"                                                                \
"<td align='right'>IP Address:</td><td>%s</td>"                         \
"</tr><tr>\n"                                                           \
"<td align='right'>Login name:</td><td>%s</td>"                         \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' name='logoff' value='Log Off' /></td>\n"\
"</tr><td span=2><br>Change your password:<br></td><tr>\n"             \
"<td align='right'>Old password:</td>"                                  \
"<td align='left'><input type='text' name='password' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>New password:</td>"                                  \
"<td align='left'><input type='text' name='newpassword' /></td>\n"      \
"</tr><tr>\n"                                                           \
"<td align='right'>Reenter your password:</td>"                         \
"<td align='left'><input type='text' name='newpasswordbis' /></td>\n"   \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' name='chgpwd' value='Change Password' /></td>\n"\
"</tr><tr>\n"                                                           \
"</tr><td span=2><br><a href='javascript:javascript:history.go(-1)'>Return to the previous page.</a></td><tr>\n"             \
"</tr></table>\n"                                                      \
"</form>\n" 


#define CREATEFORM                                                       \
                                                                        \
"<form method=POST action='Create'>\n"                                  \
"Page name:<input type='text' name='title' />\n"                        \
"Select a template:\n"         \
"<select name='template'>\n"                        \
"  <option value='none'>none</option>\n"                        \
"  <option value='01.template'>template 1</option>\n"                        \
"  <option value='02.template'>template 2</option>\n"                        \
"  <option value='03.template'>template 3</option>\n"                        \
"  <option value='04.template'>template 4</option>\n"                        \
"  <option value='05.template'>template 5</option>\n"                        \
"</select>\n"                        \
"<p><input type='submit' value='Create' /></p>\n"                        \
"</form>\n" 


#define EDITFORM                                                         \
                                                                         \
"<form method=POST action='%s?edit' name='editform'>\n"                        \
"<textarea name='wikitext' rows='20' cols='80' wrap='virtual'>%s</textarea>\n" \
"<p><input type='submit' name='save' value='Save' title='[alt-k]' accesskey='k'>" \
"<input type='submit' name='preview' value='Preview' title='[alt-p]' accesskey='p'>" \
"<input type='submit' name='cancel' value='Cancel' title='[alt-c]' accesskey='c'></p>\n"                            \
"</form>\n"             \
"<script language='JavaScript'>\n"   \
"<!--\n"                             \
"/* Give the textarea focus ...less mouse usage but may annoy people ?*/ \n" \
"document.editform.wikitext.focus()\n" \
"document.editform.wikitext.scrollTop = document.editform.wikitext.scrollHeight;\n"          \
"//-->\n"                            \
"</script>\n"


#define EDITPREVIEW                                                      \
                                                                         \
"<div id=\"header\"><strong>Preview:</strong></div>\n"


#define DELETEFORM                                                       \
                                                                         \
"<form method=POST action='%s?delete' name='deleteform'>\n"              \
"Are you really sure you want to delete the page <strong>%s</strong>?\n" \
"<p><input type='submit' name='confirm' Value='OK'>\n"                   \
"<input type='submit' name='cancel' value='Cancel'></form>"


#define HOMETEXT ""                                                      \
                                                                         \
"==Welcome to !CiWiki\n" \
"[images/ciwiki.svg]\n" \
"\n" \
"This /!CiWiki / website is a lightweight [http://en.wikipedia.org/wiki/Wiki WikiWikiWeb].\n" \
"\n" \
"Essentially, this website is an easy way for anyone to make and edit webpage.  Even this page you are currently reading can be changed easily.\n" \
"For a reference of what you can do, [http://wikipedia.org] is also a !WikiWikiWeb website like CiWiki. It too allows their users to make changes to online encyclopedia webpage articles.\n" \
"\n" \
"===Some ways to use !CiWiki\n" \
"You can set up your CiWiki website in many ways \n" \
"* Make an online cookbook where people can share their own [Example_Cookie_Recipe recipes]\n" \
"* Make a [Example_Grocery_List To Do list] of your tasks.  You can make your To Do tasks visible by others, or only by people with access\n" \
"* Blog about a topic or make an onlne trip journal.  You can even add photos and videos\n" \
"* Write a book.  Each webpage you create can be a different chapter of the book.  You decide what chapters others can see\n" \
"* Create [Example_Training training documentation] that you or others can update whenever changes have to be made\n" \
"* Make an encyclopedia website just like [http://wikipedia.org]\n" \
"\n" \
"\n" \
"Formatting webpage text, images, links, etc. is easily handled requiring no coding experience.  You can quickly learn how to use !CiWiki by going to WikiHelp.  You can also play around making webpage articles by visiting WikiSandbox.\n" \
"\n" \
"From a technical perspective, !CiWiki software is lightweight, doesn't require a web server or database, doesn't need a code interpreter (like PHP), and doesn't require you to install other software.\n"


#define HOMEREDIRECT ""                                                  \
                                                                         \
"==Redirect yor home page to /html/index.html\n"                          \
"html=redirect.index.html\n"                                             \
"if you are not automatically redirected, please click on \n"             \
"html=index.html\n"                                                      \
"\n"


#define HELPTEXT ""                                                      \
                                                                         \
"{{toc}}\n" \
"=Credits \n" \
"!CiWiki is an updated version of !DidiWiki. \n\n" \
"!CiWiki was created by Jean-Pierre Redonnet and is available on [https://github.com/RhoneAlpes/ciwiki Github]\n\n" \
"!DidiWiki was created by Matthew Allum \n" \
"\n" \
"Please visit [https://github.com/RhoneAlpes/ciwiki Github] to see a list of development contributers. \n" \
"=Quick Overview \n"                                                    \
"===Finding a !CiWiki page \n" \
"In the upper right is a search box.  Any word(s) entered will be searched against all text af any pages\n" \
"\n"                                                                     \
"To search through the page titles only, click on the /Index/ link on the top menu. \n" \
"Since all of the /Page/ titles are visible, you can than use your browser's built in search, keys (e.g. <ctrl>-f) \n"           \
"===Creating Webpages Quickly and Easily \n" \
"To make changes to pages, you will need to create an account and login.  You can create an account via the [Login login] menu option at the topl. \n" \
"\n" \
"!CiWiki allows you to type in short lines of text to automatically format a page. \n" \
"For example, you can do something as easy like typing /*!youtube=link */ to have a Youtube video appear on your page. \n" \
"\n"                                                                     \
"To practice, visit WikiSandbox\n"                         \
"=Using Key Tags to Format Articles \n"                                                                     \
"==Headings \n" \
"An /=/ character creates headings.  The number of /=/ represents the heading level \n"                                                    \
"The formatting for the area you are reading now uses the following headings \n" \
" =Using Key Tags to Format Articles\n"                                                   \
" ==Headings\n"                                        \
" ==Horizontal lines\n"                                        \
"==Horizonal line\n"                                                 \
" -- will create a horizontal line\n"                                                                 \
"--\n"                                                                 \
"==Working with Text \n" \
"===Base Text Formatting\n"                                                                 \
" \n" \
"  *Bold text*, /italic text/, _underscore text_ and -strikethrough- /*combination*/ \n"  \
"*Bold text*, /italic text/, _underscore text_ and -strikethrough- /*combination*/ \n"    \
"===Paragraphs\n"                                                                     \
"Paragraphs are separated by an empty line\n"                            \
"\n"                                                                     \
"Like this. Another paragraph.\n"                                        \
"\n"                                                                     \
" Paragraphs are separated by a blank line.\n"                           \
"\n"                                                                     \
" Like this. Another paragraph.\n"                                       \
"===Quotations \n" \
"Indented quotations begin with ' \n"                                             \
"\n"                                                                     \
" 'I had a monumental idea this morning, but I didn't like it\n"         \
"'I had a monumental idea this morning, but I didn't like it \n"          \
"===Keywords\n" \
" use /`/ to make a keyword\n" \
" There is a `keyword` in this line.\n" \
"There is a `keyword` in this line.\n" \
"\n" \
"===Coloring \n"                                                                 \
"\n"                                                                     \
" Text {B}blue{B}\n"                                                    \
"Text {B}blue{B}\n"                                                    \
" Background (Y)color(Y)\n"                                             \
"Background (Y)color(Y)\n"                                             \
"\n"                                                                    \
"Foreground: {B}B blue{B}  {C}C cyan{C}  {G}G green{G}  {P}P pink{P}  {R}R red{R}  {Y}Y yellow{Y}\n" \
"\n"                                                                    \
"Background: (B)B blue(B)  (C)C cyan(C)  (G)G green(G)  (P)P pink(P)  (R)R red(R)  (Y)Y yellow(Y)\n" \
"\n"                                                                  \
" +Highlight+\n"                                                      \
"+Highlight+\n"                                                       \
"-----\n"                                                              \
"==Tag Rules\n" \
"===Explicitly Typed Text\n" \
"Lines prefixed with a space are unformatted\n" \
"This line isn't prefixed with a space \n" \
" This line is \n" \
"===HTML Tags HTML Automatically Rewritten\n" \
"If /<Inline> <html> <is> <escaped>/ is written, it will be rewritten (i.e. escaped) \n" \
"so that the browser won't treat it as code to be executed.\n" \
"\n" \
"----\n" \
"==Links \n" \
"| *Type* | *Formatting* | *Example* | *What makes it a link* \n" \
"|Wiki link|!MyLink |This is MyLink|If text is mixed upper and lowercase (ie /camelcase/) it is a link to a page with that same name \n" \
"|External|!http:// |This is a http://link.com |If a word starts with !http:// \n" \
"|Forced|![links] |This is a link to [google.com] | surrounding textr with brackets\n" \
"|Named|![http://www.freepan.org FreePAN]|This is a [http://www.freepan.org FreePAN]|Using brackets and putting a space between link and it's name \n" \
"\n"                                                                     \
"Sometimes !WordsShouldNotMakeAWikiLink so put a '! ' beforehand.\n"      \
" Sometimes !WordsShouldNotMakeAWikiLink so put a '! ' beforehand.\n"     \
"\n"                                                                     \
"Open external links in new tags:\n"                                     \
" {{http://google.com=new_tab}} opens external link in a new tab\n"                \
" {{http://google.com=current_tab}} opens external link in a current tab\n"        \
"==Images \n" \
"Links to images display the image:\n"                                   \
" [images/ciwiki.svg]\n"                                \
"[images/ciwiki.svg]\n"                                \
" http://www.google.com/images/logo.gif\n"                                \
"http://www.google.com/images/logo.gif\n"                                \
"\n"                                                                     \
"Put the following examples before an image link to transform an image \n" \
" {{width=100 height=50 border=2}}\n"          \
" {{picture=default}}\n"  \
"\n"                                                                     \
"{{width=100 height=50 border=1 right}} http://www.google.com/images/logo.gif\n"\
"===Images with Links \n" \
"Example image with an http links have picture with an !http:// link inside, like \n" \
" ![http://www.google.com/images/logo.gif http://www.google.com]\n" \
"[http://www.google.com/images/logo.gif http://www.google.com]\n" \
"==Video \n" \
"video=http://localhost/fake_video_link.mp4 \n" \
"\n"                                                                     \
"Use ![provider]=!http://location format\n" \
" youtube=http://www.youtube.com/v/AAABBCCC \n" \
" video=http://www.location.com/f.mp4 \n" \
"===Video Providers\n" \
"|dailymotion|http://www.dailymotion.com/swf/---adress--- \n"             \
"|flash|http://.....\n"             \
"|veoh|http://..... \n" \
"|video|!http://www.locatoin.com/f.mp4 \n" \
"|vimeo|=http://..... \n"             \
"|youtube|http://www.youtube.com/v/---adress--- \n" \
"\n"                                                                     \
"==Lists \n" \
"===Unordered lists \n" \
"begin with a '* '. The number of asterisks determines the level:\n" \
"* foo\n"                                                                \
"* bar\n"                                                                \
"** boom\n"                                                              \
"** bam\n"                                                               \
"* baz\n"                                                                \
"\n"                                                                     \
"  * foo\n"                                                              \
"  * bar\n"                                                              \
"  ** boom\n"                                                            \
"  ** bam\n"                                                             \
"  * baz\n"                                                              \
"\n"                                                                     \
"===Ordered lists \n" \
"work the same, but use a '#'\n"                           \
"# foo\n"                                                                \
"# bar\n"                                                                \
"## boom\n"                                                              \
"## bam\n"                                                               \
"# baz\n"                                                                \
"\n"                                                                     \
"  # foo\n"                                                              \
"  # bar\n"                                                              \
"  ## boom\n"                                                            \
"  ## bam\n"                                                             \
"  # baz\n"                                                              \
"----\n"                                                                 \
"==Tables \n" \
"begin the line with a '|' and before every new column after.\n"  \
"\n"                                                                     \
"| row:1,col:1 | row:1,col:2\n"                                          \
"| row:2,col:1 | row:2,col:2\n"                                          \
" | row:1,col:1 | row:1,col:2\n"                                         \
" | row:2,col:1 | row:2,col:2\n"                                         \
"---\n"                                                                  \
"==Expand and Collapse (aka Accordions) \n"                                                                 \
"===Expand \n" \
" {{expand}} and {{collapse}} use javascript and must be enabled in the user's browser.\n" \
"Expand text\n"                                                          \
"\n"                                                                     \
" {{expand}}  or  {{expand=your label here}}\n"                          \
" text, links, images\n"                                                 \
" {{-expand}}\n"                                                         \
"\n"                                                                     \
"{{expand}}\n"                                                           \
"This was inside an expand\n"                                                          \
"{{-expand}}\n"                                                         \
"====Multi-leveled Expands\n"                                                        \
" {{expand}}\n"                                                         \
" This was inside an expand\n"                                                          \
" {{expand}}\n"                                                         \
" This was further inside\n"                                                           \
" {{-expand}}\n"                                                         \
" {{-expand}}\n"                                                         \
"{{expand}}\n"                                                         \
"This was inside an expand\n"                                                          \
"{{expand}}\n"                                                         \
"This was further inside\n"                                                           \
"{{-expand}}\n"                                                         \
"{{-expand}}\n"                                                         \
"===Collapse\n"                                                                 \
"Collapse is a pre-opened expand \n"                                    \
"\n"                                                                     \
" {{collapse}}  or  {{collapse=your label here}}\n"                       \
" text, links, images\n"                                                 \
" {{-collapse}}\n"                                                        \
"\n"                                                                     \
"{{collapse}}\n"                                                          \
"text, links: http://www.google.com\n"                                  \
"{{-collapse}}\n"                                                        \
"==Forms\n" \
"===Overview \n" \
"With /forms/, uses can add / remove todo type check items.  The state of an items checkbox can be updated by users as well \n" \
" {{entry}} or {{entry tiny/small/medium/large/huge date}}\n" \
" !{{data}}   (remove ! before this tag) - Entries are added in the page after the tag data\n" \
" {{delete}} deletes the selected field\n" \
" {{save}} saves the checked fields\n" \
"===Example \n" \
" {{entry}}\n" \
" {{data}}\n" \
" {{delete}}{{save}}\n" \
"{{entry}}\n" \
"{{data}}\n" \
"{{delete}}{{save}}\n" \
"----\n"  \
"==Table of contents \n" \
"A /table of contents/ will be created at the top of the page containing all of the heading in the page  \n" \
"(see the top of this article for an example of a table of contents) \n" \
" {{toc}}\n" \
"{{collapse=Table of contents}}{{toc}}{{-collapse}}\n" \
"can be between collapse or expand \n" \
"==Scheduling \n" \
" Schedule text with {{schedule=date;show this text if date is true;show this text if false}}\n" \
" or {{schedule=date;show it is true}} or {{schedule=date;;show it is false}}\n" \
" date can be the day of the week Monday...Sunday or the month January...December\n" \
" or the day of he month 1,2,...31 or the month + the day of he month, ex. July 04\n" \
" Example: {{schedule=Monday;+It's Monday Deal with it.+}}\n" \
"{{schedule=Monday;+It's Monday. Deal with it.+}}\n" \
" {{schedule=d/m/n}} set the date of the page to perform a test\n" \
" d=0...6 (Sunday...Saturday) m=1...12 (January...December) n=1...31 \n" \
"\n" \
"==File Upload \n" \
" To upload file or image into the server with {{upload}}\n" \
"Upload your file below then go to Index [Index?Folder=images images] \n" \
"or [Index?Folder=files files] to check your file uploaded:\n\n" \
"(Note:size allowed can be set to 0 or limited.)\n" \
"{{upload}}\n" \
"\n" \
"==Private Zones\n" \
" {{private}} will restrict showing anything after this tag, and will require \n" \
" logging in to be able to view.\n" \
" If you are not logged in, you will not be able to see anything on this page after this sentence \n" \
"{{private}}\n" \
" If you can see this, you are logged in!\n" \
"\n" \
"----\n" 

#define EXAMPLERECIPE ""                                                  \
                                                                         \
"=Chocolate Chip Cookie Recipe \n" \
"[images/chocolate_chip_cookie.svg] \n" \
" \n" \
"These cookies are super delicious and super moist!  Don't be afraid to /not/ share these with those undeserving. \n" \
" \n" \
"==Ingredients \n" \
"* 3 Cups flour \n" \
"* 2 Cups chocolate chips \n" \
"* 1 Cup sugar \n" \
"* 1 Cup brown sugar \n" \
"* 1 Cup butter \n" \
"* 2 Eggs \n" \
"* 2 tsp vanilla \n" \
"* 1 tsp baking powder \n" \
"* pinch of salt \n" \
"* 1 cup of nuts optional \n" \
" \n" \
"==Directions \n" \
"# Preheat oven to 350F \n" \
"# blend together everything except eggs and butter \n" \
"# blend in eggs and butter \n" \
"# place heaping spoonful of dough on cookie sheet and press into cookie shape \n" \
"# bake cookies for 8 - 12 minutes \n" \
" \n" \
"Let cool, and enjoy. \n" \
"\n"

#define EXAMPLEGROCERIES ""                                                  \
                                                                         \
"=Grocery Checklist \n" \
"==Item To Buy \n" \
"Add a new grocery /item/ to your list \n" \
"{{entry}} \n" \
"==Groceries \n" \
"-- \n" \
"{{data}} \n" \
"{{checkbox=1523889143;0}} milk \n" \
" \n" \
"{{checkbox=1523888171;0}} orange juice \n" \
" \n" \
"{{checkbox=1523888125;1}} bread \n" \
" \n" \
"-- \n" \
"{{save}} checkmark values to let you know what items you bought \n" \
" \n" \
"{{delete}} checked items if you don't want to get those items \n" \
"\n"

#define EXAMPLETECHNICAL ""                                                  \
                                                                         \
"=RS-25 Rocket Engine Technical Manual \n" \
"[images/schematic.svg] \n" \
"==Overview \n" \
"The RS-25 Rocket engine is a self sustaining engine requiring no fuel source.  The rocket can be modified for interplanetary using simple modifications. \n" \
" \n" \
"==Upgrade Procedures \n" \
"# Put on safety googles \n" \
"# Remove the flange recombustionator \n" \
"# Insert hyperspanning tool under L3 \n" \
"# Turn L3 to upgrade position \n" \
"\n"

#define SVGWIKI "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?> \n" \
"<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.0//EN\" \n" \
"\"http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd\"> \n" \
"<!-- Created with Inkscape (\"http://www.inkscape.org/\") --> \n" \
"<svg \n" \
"   id=\"svg1\" \n" \
"   sodipodi:version=\"0.32\" \n" \
"   inkscape:version=\"0.36\" \n" \
"   xmlns=\"http://www.w3.org/2000/svg\" \n" \
"   xmlns:sodipodi=\"http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd\" \n" \
"   xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" \n" \
"   xmlns:xlink=\"http://www.w3.org/1999/xlink\" \n" \
"   width=\"160pt\" \n" \
"   height=\"160pt\" \n" \
"   sodipodi:docbase=\"/root\" \n" \
"   sodipodi:docname=\"/root/ciwiki.svg\"> \n" \
"  <defs \n" \
"     id=\"defs3\" /> \n" \
"  <sodipodi:namedview \n" \
"     id=\"base\" /> \n" \
"  <path \n" \
"     style=\"font-size:200;font-weight:bold;fill:#007c00;fill-opacity:0.75;stroke:#000000;stroke-width:3pt;font-family:DejaVu Serif;\" \n" \
"     d=\"M 156.523 132.148 C 152.682 147.187 145.781 158.353 135.82 165.645 C 125.859 172.936 112.48 176.582 95.6836 176.582 C 71.0742 176.582 51.6081 169.811 37.2852 156.27 C 23.0273 142.663 15.8984 124.238 15.8984 100.996 C 15.8984 77.6888 23.0273 59.2643 37.2852 45.7227 C 51.6081 32.1159 71.0742 25.3125 95.6836 25.3125 C 104.342 25.3125 113.359 26.3542 122.734 28.4375 C 132.109 30.5208 142.038 33.6784 152.52 37.9102 L 152.52 73.75 L 140.117 73.75 C 137.578 61.5104 132.956 52.3633 126.25 46.3086 C 119.544 40.1888 110.69 37.1289 99.6875 37.1289 C 85.4948 37.1289 74.9479 42.3698 68.0469 52.8516 C 61.1458 63.2682 57.6953 79.3164 57.6953 100.996 C 57.6953 122.676 61.1458 138.724 68.0469 149.141 C 74.9479 159.557 85.5599 164.766 99.8828 164.766 C 109.583 164.766 117.493 162.064 123.613 156.66 C 129.798 151.257 134.29 143.086 137.09 132.148 L 156.523 132.148 z \" \n" \
"     id=\"path580\" /> \n" \
"  <path \n" \
"     style=\"font-size:48;font-weight:normal;fill:#130091;fill-opacity:0.75;stroke-width:3pt;font-family:DejaVu Sans;\" \n" \
"     d=\"M 181.453 93.75 L 185.766 93.75 L 185.766 120 L 181.453 120 L 181.453 93.75 z M 181.453 83.5312 L 185.766 83.5312 L 185.766 88.9922 L 181.453 88.9922 L 181.453 83.5312 z M 153.492 83.5312 L 157.828 83.5312 L 157.828 105.07 L 170.695 93.75 L 176.203 93.75 L 162.281 106.031 L 176.789 120 L 171.164 120 L 157.828 107.18 L 157.828 120 L 153.492 120 L 153.492 83.5312 z M 140.32 93.75 L 144.633 93.75 L 144.633 120 L 140.32 120 L 140.32 93.75 z M 140.32 83.5312 L 144.633 83.5312 L 144.633 88.9922 L 140.32 88.9922 L 140.32 83.5312 z M 89.9297 85.0078 L 94.7109 85.0078 L 102.07 114.586 L 109.406 85.0078 L 114.727 85.0078 L 122.086 114.586 L 129.422 85.0078 L 134.227 85.0078 L 125.438 120 L 119.484 120 L 112.102 89.625 L 104.648 120 L 98.6953 120 L 89.9297 85.0078 z M 79.5234 93.75 L 83.8359 93.75 L 83.8359 120 L 79.5234 120 L 79.5234 93.75 z M 79.5234 83.5312 L 83.8359 83.5312 L 83.8359 88.9922 L 79.5234 88.9922 L 79.5234 83.5312 z \" \n" \
"     id=\"path581\" /> \n" \
"</svg> \n" \
"\n"

#define SVGCOOKIE "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?> \n" \
"<!-- Created with Inkscape (http://www.inkscape.org/) --> \n" \
"<svg xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\" xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:sodipodi=\"http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd\" xmlns:cc=\"http://creativecommons.org/ns#\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xmlns:dc=\"http://purl.org/dc/elements/1.1/\" xmlns:svg=\"http://www.w3.org/2000/svg\" xmlns:ns1=\"http://sozi.baierouge.fr\" id=\"svg2\" sodipodi:docname=\"tumblr_lip191nLtt1qb383v.gif\" viewBox=\"0 0 300 300\" version=\"1.1\" inkscape:version=\"0.48.1 r9760\"> \n" \
"  <defs id=\"defs6\"> \n" \
"    <linearGradient id=\"linearGradient5827\" inkscape:collect=\"always\"> \n" \
"      <stop id=\"stop5829\" style=\"stop-color:#552200\" offset=\"0\"/> \n" \
"      <stop id=\"stop5831\" style=\"stop-color:#502d16\" offset=\"1\"/> \n" \
"    </linearGradient> \n" \
"    <filter id=\"filter4554\" inkscape:collect=\"always\" color-interpolation-filters=\"sRGB\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur4556\" stdDeviation=\"0.85280066\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5257\" inkscape:collect=\"always\" color-interpolation-filters=\"sRGB\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5259\" stdDeviation=\"1.322233\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5283\" inkscape:collect=\"always\" color-interpolation-filters=\"sRGB\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5285\" stdDeviation=\"1.6138598\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5313\" inkscape:collect=\"always\" color-interpolation-filters=\"sRGB\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5315\" stdDeviation=\"1.5799431\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5355\" height=\"1.2176\" width=\"1.1718\" color-interpolation-filters=\"sRGB\" y=\"-.10881\" x=\"-.085886\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5357\" stdDeviation=\"2.2503169\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5395\" height=\"1.1945\" width=\"1.2428\" color-interpolation-filters=\"sRGB\" y=\"-.097260\" x=\"-.12141\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5397\" stdDeviation=\"2.3952995\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5431\" height=\"1.2158\" width=\"1.1375\" color-interpolation-filters=\"sRGB\" y=\"-.10790\" x=\"-.068767\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5433\" stdDeviation=\"1.8114427\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5477\" height=\"1.2663\" width=\"1.2618\" color-interpolation-filters=\"sRGB\" y=\"-.13314\" x=\"-.13088\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5479\" stdDeviation=\"1.7058865\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5591\" height=\"1.4308\" width=\"1.6818\" color-interpolation-filters=\"sRGB\" y=\"-.21541\" x=\"-.34090\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5593\" stdDeviation=\"4.2305518\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5649\" height=\"1.2578\" width=\"1.2705\" color-interpolation-filters=\"sRGB\" y=\"-.12891\" x=\"-.13524\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5651\" stdDeviation=\"2.8944791\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5695\" height=\"1.1651\" width=\"1.2294\" color-interpolation-filters=\"sRGB\" y=\"-.082544\" x=\"-.11470\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5697\" stdDeviation=\"1.4732554\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5753\" height=\"1.2676\" width=\"1.3118\" color-interpolation-filters=\"sRGB\" y=\"-.13378\" x=\"-.15590\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5755\" stdDeviation=\"0.91534267\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter5823\" height=\"1.3321\" width=\"1.3988\" color-interpolation-filters=\"sRGB\" y=\"-.16606\" x=\"-.19938\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur5825\" stdDeviation=\"1.6312148\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter6042\" height=\"3.5985\" width=\"1.16\" color-interpolation-filters=\"sRGB\" y=\"-1.2993\" x=\"-.080014\" inkscape:collect=\"always\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur6044\" stdDeviation=\"15.052548\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <filter id=\"filter6056\" inkscape:collect=\"always\" color-interpolation-filters=\"sRGB\"> \n" \
"      <feGaussianBlur id=\"feGaussianBlur6058\" stdDeviation=\"5.3288763\" inkscape:collect=\"always\"/> \n" \
"    </filter> \n" \
"    <radialGradient id=\"radialGradient6343\" gradientUnits=\"userSpaceOnUse\" cy=\"173.27\" cx=\"653.73\" gradientTransform=\"matrix(1 0 0 1.2037 0 -34.237)\" r=\"173\" inkscape:collect=\"always\"> \n" \
"      <stop id=\"stop2995\" style=\"stop-color:#e6cc99\" offset=\"0\"/> \n" \
"      <stop id=\"stop2993\" style=\"stop-color:#e3a362\" offset=\"1\"/> \n" \
"    </radialGradient> \n" \
"    <linearGradient id=\"linearGradient6345\" y2=\"77.331\" gradientUnits=\"userSpaceOnUse\" x2=\"637.74\" y1=\"-52.669\" x1=\"555.73\" inkscape:collect=\"always\"> \n" \
"      <stop id=\"stop4562\" style=\"stop-color:#cc8c59\" offset=\"0\"/> \n" \
"      <stop id=\"stop4564\" style=\"stop-color:#cc8c59;stop-opacity:0\" offset=\"1\"/> \n" \
"    </linearGradient> \n" \
"    <radialGradient id=\"radialGradient6347\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"185.51\" cx=\"733.62\" gradientTransform=\"matrix(1 0 0 1.2444 0 -45.335)\" r=\"23.465\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6349\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"111.09\" cx=\"710.77\" gradientTransform=\"matrix(1 0 0 .98305 0 1.8834)\" r=\"15.641\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6351\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"196.84\" cx=\"606.89\" gradientTransform=\"matrix(1 0 0 .77458 0 44.372)\" r=\"29.496\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6353\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"29.317\" cx=\"601.69\" gradientTransform=\"matrix(1 0 0 1.257 0 -7.5355)\" r=\"21.728\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6355\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"214.44\" cx=\"537.8\" gradientTransform=\"matrix(1 0 0 1.0508 0 -10.898)\" r=\"21.719\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6357\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"129.81\" cx=\"513.49\" gradientTransform=\"matrix(1 0 0 1.5826 0 -75.626)\" r=\"14.892\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6359\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"264.7\" cx=\"614.81\" gradientTransform=\"matrix(1 0 0 1.09 0 -23.83)\" r=\"25.306\" inkscape:collect=\"always\"/> \n" \
"    <radialGradient id=\"radialGradient6361\" xlink:href=\"#linearGradient5827\" gradientUnits=\"userSpaceOnUse\" cy=\"35.358\" cx=\"710.91\" gradientTransform=\"matrix(1 0 0 .61036 0 13.777)\" r=\"29.684\" inkscape:collect=\"always\"/> \n" \
"    <linearGradient id=\"linearGradient6363\" y2=\"153.33\" gradientUnits=\"userSpaceOnUse\" x2=\"814.74\" y1=\"591.33\" x1=\"576.73\" inkscape:collect=\"always\"> \n" \
"      <stop id=\"stop6012\" style=\"stop-color:#552200\" offset=\"0\"/> \n" \
"      <stop id=\"stop6014\" style=\"stop-color:#552200;stop-opacity:0\" offset=\"1\"/> \n" \
"    </linearGradient> \n" \
"  </defs> \n" \
"  <sodipodi:namedview id=\"namedview4\" bordercolor=\"#666666\" inkscape:pageshadow=\"2\" guidetolerance=\"10\" pagecolor=\"#ffffff\" gridtolerance=\"10\" inkscape:window-maximized=\"1\" inkscape:zoom=\"0.5340517\" objecttolerance=\"10\" borderopacity=\"1\" inkscape:current-layer=\"svg2\" inkscape:cx=\"756.33165\" inkscape:cy=\"-106.77914\" inkscape:window-y=\"26\" inkscape:window-x=\"0\" inkscape:window-width=\"1280\" showgrid=\"false\" inkscape:pageopacity=\"0\" inkscape:window-height=\"969\"/> \n" \
"  <g id=\"g6060\" transform=\"matrix(.75798 0 0 .75798 -337.94 32.375)\"> \n" \
"    <path id=\"path6046\" style=\"opacity:.48161;filter:url(#filter6056);fill:#000000\" inkscape:connector-curvature=\"0\" d=\"m617.5 332.82c-3.025-1.1204-5.9275-2.4544-6.45-2.9646-0.5225-0.51013-1.9759-0.92751-3.2297-0.92751-3.3497 0-18.651-3.1388-19.845-4.0707-0.56348-0.43995-3.2635-1.557-6-2.4823-2.7365-0.92531-5.2005-2.0218-5.4755-2.4367-0.275-0.41485-2.6784-1.7418-5.3408-2.9487-6.8026-3.0837-17.331-9.6524-21.033-13.122-1.7194-1.6117-3.427-2.9325-3.7947-2.935-0.36762-0.003-2.4636-1.6921-4.6577-3.7546s-6.6183-6.1279-9.8316-9.0343c-7.5818-6.8576-11.51-10.639-13.236-12.741-3.7263-4.5387-8.1339-10.604-9.5534-13.147-2.1723-3.8912-3.7863-6.338-5.553-8.4181-6.9395-8.1704-18.195-32.623-17.139-37.234 0.10385-0.45338-0.27234-0.53932-0.83596-0.19098-0.56363 0.34834-1.0582 0.26929-1.0991-0.17567-0.26031-2.834-1.0886-5.8012-1.749-6.2656-0.42506-0.29888-1.5902-3.4684-2.5893-7.0434-0.99904-3.575-2.0576-7.175-2.3523-8-0.29471-0.825-0.64197-2.4-0.77167-3.5-0.12971-1.1-0.54187-3.575-0.9159-5.5-0.37404-1.925-0.71829-4.722-0.76501-6.2156-0.0467-1.4936-0.38453-2.5304-0.75071-2.3041-0.36618 0.22631-0.61675-1.2517-0.55683-3.2844 0.0599-2.0327-0.62539-7.6199-1.5229-12.416-0.99479-5.3158-1.255-8.8457-0.6665-9.0418 0.6052-0.20173 0.50655-3.0419-0.26444-7.6128-1.4738-8.738-0.90662-15.335 1.8554-21.579 1.3214-2.9873 1.907-6.0296 1.6526-8.5863-0.23348-2.3469 0.0333-3.9598 0.65508-3.9598 0.57696 0 0.81367-0.9 0.52601-2s-0.0886-2 0.44239-2c0.53096 0 0.71103-0.41157 0.40014-0.91459-0.31088-0.50302-0.20127-1.0655 0.24358-1.25 0.95368-0.39548 5.2036-12.738 5.2036-15.112 0-0.89952 1.2662-3.7928 2.8137-6.4295 1.5476-2.6367 3.5864-7.1708 4.5307-10.076 0.94433-2.905 3.3551-8.305 5.3573-12s4.5758-8.5182 5.7193-10.718c1.1434-2.2 2.3052-4.225 2.5818-4.5 0.27655-0.275 1.8516-2.5099 3.5-4.9664 3.672-5.4719 3.7652-5.5861 12.896-15.807 8.7338-9.7766 11.448-12.046 15.334-12.823 1.9796-0.39591 3.232-1.4719 3.9609-3.4028 0.58622-1.5531 2.92-3.9942 5.1861-5.4248s4.1202-3.0454 4.1202-3.5885 0.3375-0.89185 0.75-0.775c1.1407 0.32313 5.2879-2.1467 9.853-5.8679 2.2566-1.8395 4.5742-3.3445 5.15-3.3445 0.57587 0 4.5795-2.8254 8.897-6.2786 9.8294-7.8619 14.862-10.184 20.445-9.4355 2.7002 0.36218 5.2788 0.02675 7.336-0.95426 2.9138-1.3895 3.4509-1.3571 6.5918 0.39763 3.4117 1.906 3.4273 1.9051 6.7617-0.35764 1.8382-1.2474 5.3848-2.5743 7.8813-2.9487 4.6213-0.69301 32.156 0.03573 40.334 1.0675 9.1313 1.152 17.583 2.799 20.558 4.0063 1.6819 0.68247 5.0827 1.0388 7.5573 0.79185 4.4629-0.44538 18.394 1.9059 21.676 3.6585 0.93989 0.50192 6.3457 2.1304 12.013 3.6189 11.212 2.9449 15.613 5.3264 18.696 10.117 1.1 1.7095 3.7393 3.8856 5.8652 4.8359 4.2222 1.8873 7.4656 4.4793 14.679 11.731 2.5986 2.6125 5.1455 4.75 5.66 4.75 4.5465 0 29.931 42.742 31.929 53.763 0.26876 1.4821 0.83817 2.9294 1.2653 3.2161 0.89042 0.59763 1.0186 1.0219 5.5949 18.521 1.8698 7.15 3.8909 14.575 4.4914 16.5 2.9419 9.4314 4.197 19.761 4.2527 35 0.0463 12.669-0.89815 34.128-1.5844 36-0.30237 0.825-0.5019 2.85-0.44339 4.5 0.22437 6.3285-1.6149 14.649-4.0674 18.4-0.8631 1.3201-1.689 2.8951-1.8352 3.5-2.2908 9.4734-3.1561 11.81-5.0134 13.541-1.9802 1.8448-8.5725 14.401-11.229 21.387-1.2297 3.2344-13.13 21.192-20.304 30.639-2.7283 3.5928-9.0782 10.496-14.111 15.342-11.97 11.524-13.463 12.84-17.093 15.067-1.6817 1.0317-3.2826 2.2064-3.5576 2.6105-0.275 0.40404-1.9625 1.484-3.75 2.3998-1.7875 0.91586-3.25 2.1036-3.25 2.6395 0 0.53588-0.5671 0.97432-1.2602 0.97432-0.69312 0-2.4028 1.0125-3.7993 2.25-3.2831 2.9092-7.4281 5.3068-13.94 8.0634-14.167 5.9965-30.43 11.55-35.587 12.151-2.1523 0.251-6.8383 0.92123-10.413 1.4894-3.575 0.56818-14.6 1.2451-24.5 1.5042-16.338 0.42767-18.508 0.28311-23.5-1.5659z\"/> \n" \
"    <path id=\"path5894\" sodipodi:rx=\"225.74913\" sodipodi:ry=\"13.902439\" style=\"opacity:.34448;filter:url(#filter6042);fill:#333333\" sodipodi:type=\"arc\" d=\"m993.03 381.99c0 7.6781-101.07 13.902-225.75 13.902s-225.75-6.2243-225.75-13.902c0-7.6781 101.07-13.902 225.75-13.902s225.75 6.2243 225.75 13.902z\" transform=\"matrix(.48055 0 0 .39440 275.19 182.69)\" sodipodi:cy=\"381.98605\" sodipodi:cx=\"767.28223\"/> \n" \
"    <path id=\"path2989\" d=\"m615.5 333.82c-3.025-1.1204-5.9275-2.4544-6.45-2.9646-0.5225-0.51013-1.9759-0.92751-3.2297-0.92751-3.3497 0-18.651-3.1388-19.845-4.0707-0.56348-0.43995-3.2635-1.557-6-2.4823-2.7365-0.92531-5.2005-2.0218-5.4755-2.4367-0.275-0.41485-2.6784-1.7418-5.3408-2.9487-6.8026-3.0837-17.331-9.6524-21.033-13.122-1.7194-1.6117-3.427-2.9325-3.7947-2.935-0.36762-0.003-2.4636-1.6921-4.6577-3.7546s-6.6183-6.1279-9.8316-9.0343c-7.5818-6.8576-11.51-10.639-13.236-12.741-3.7263-4.5387-8.1339-10.604-9.5534-13.147-2.1723-3.8912-3.7863-6.338-5.553-8.4181-6.9395-8.1704-18.195-32.623-17.139-37.234 0.10385-0.45338-0.27234-0.53932-0.83596-0.19098-0.56363 0.34834-1.0582 0.26929-1.0991-0.17567-0.26031-2.834-1.0886-5.8012-1.749-6.2656-0.42506-0.29888-1.5902-3.4684-2.5893-7.0434-0.99904-3.575-2.0576-7.175-2.3523-8-0.29471-0.825-0.64197-2.4-0.77167-3.5-0.12971-1.1-0.54187-3.575-0.9159-5.5-0.37404-1.925-0.71829-4.722-0.76501-6.2156-0.0467-1.4936-0.38453-2.5304-0.75071-2.3041-0.36618 0.22631-0.61675-1.2517-0.55683-3.2844 0.0599-2.0327-0.62539-7.6199-1.5229-12.416-0.99479-5.3158-1.255-8.8457-0.6665-9.0418 0.6052-0.20173 0.50655-3.0419-0.26444-7.6128-1.4738-8.738-0.90662-15.335 1.8554-21.579 1.3214-2.9873 1.907-6.0296 1.6526-8.5863-0.23348-2.3469 0.0333-3.9598 0.65508-3.9598 0.57696 0 0.81367-0.9 0.52601-2s-0.0886-2 0.44239-2c0.53096 0 0.71103-0.41157 0.40014-0.91459-0.31088-0.50302-0.20127-1.0655 0.24358-1.25 0.95368-0.39548 5.2036-12.738 5.2036-15.112 0-0.89952 1.2662-3.7928 2.8137-6.4295 1.5476-2.6367 3.5864-7.1708 4.5307-10.076 0.94433-2.905 3.3551-8.305 5.3573-12s4.5758-8.5182 5.7193-10.718c1.1434-2.2 2.3052-4.225 2.5818-4.5 0.27655-0.275 1.8516-2.5099 3.5-4.9664 3.672-5.4719 3.7652-5.5861 12.896-15.807 8.7338-9.7766 11.448-12.046 15.334-12.823 1.9796-0.39591 3.232-1.4719 3.9609-3.4028 0.58622-1.5531 2.92-3.9942 5.1861-5.4248s4.1202-3.0454 4.1202-3.5885 0.3375-0.89185 0.75-0.775c1.1407 0.32313 5.2879-2.1467 9.853-5.8679 2.2566-1.8395 4.5742-3.3445 5.15-3.3445 0.57587 0 4.5795-2.8254 8.897-6.2786 9.8294-7.8619 14.862-10.184 20.445-9.4355 2.7002 0.36218 5.2788 0.02675 7.336-0.95426 2.9138-1.3895 3.4509-1.3571 6.5918 0.39763 3.4117 1.906 3.4273 1.9051 6.7617-0.35764 1.8382-1.2474 5.3848-2.5743 7.8813-2.9487 4.6213-0.69301 32.156 0.03573 40.334 1.0675 9.1313 1.152 17.583 2.799 20.558 4.0063 1.6819 0.68247 5.0827 1.0388 7.5573 0.79185 4.4629-0.44538 18.394 1.9059 21.676 3.6585 0.93989 0.50192 6.3457 2.1304 12.013 3.6189 11.212 2.9449 15.613 5.3264 18.696 10.117 1.1 1.7095 3.7393 3.8856 5.8652 4.8359 4.2222 1.8873 7.4656 4.4793 14.679 11.731 2.5986 2.6125 5.1455 4.75 5.66 4.75 4.5465 0 29.931 42.742 31.929 53.763 0.26876 1.4821 0.83817 2.9294 1.2653 3.2161 0.89042 0.59763 1.0186 1.0219 5.5949 18.521 1.8698 7.15 3.8909 14.575 4.4914 16.5 2.9419 9.4314 4.197 19.761 4.2527 35 0.0463 12.669-0.89815 34.128-1.5844 36-0.30237 0.825-0.5019 2.85-0.44339 4.5 0.22437 6.3285-1.6149 14.649-4.0674 18.4-0.8631 1.3201-1.689 2.8951-1.8352 3.5-2.2908 9.4734-3.1561 11.81-5.0134 13.541-1.9802 1.8448-8.5725 14.401-11.229 21.387-1.2297 3.2344-13.13 21.192-20.304 30.639-2.7283 3.5928-9.0782 10.496-14.111 15.342-11.97 11.524-13.463 12.84-17.093 15.067-1.6817 1.0317-3.2826 2.2064-3.5576 2.6105-0.275 0.40404-1.9625 1.484-3.75 2.3998-1.7875 0.91586-3.25 2.1036-3.25 2.6395 0 0.53588-0.5671 0.97432-1.2602 0.97432-0.69312 0-2.4028 1.0125-3.7993 2.25-3.2831 2.9092-7.4281 5.3068-13.94 8.0634-14.167 5.9965-30.43 11.55-35.587 12.151-2.1523 0.251-6.8383 0.92123-10.413 1.4894-3.575 0.56818-14.6 1.2451-24.5 1.5042-16.338 0.42767-18.508 0.28311-23.5-1.5659z\" style=\"fill:url(#radialGradient6343)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path4558\" style=\"fill:url(#linearGradient6345)\" inkscape:connector-curvature=\"0\" d=\"m615.5 333.82c-3.025-1.1204-5.9275-2.4544-6.45-2.9646-0.5225-0.51013-1.9759-0.92751-3.2297-0.92751-3.3497 0-18.651-3.1388-19.845-4.0707-0.56348-0.43995-3.2635-1.557-6-2.4823-2.7365-0.92531-5.2005-2.0218-5.4755-2.4367-0.275-0.41485-2.6784-1.7418-5.3408-2.9487-6.8026-3.0837-17.331-9.6524-21.033-13.122-1.7194-1.6117-3.427-2.9325-3.7947-2.935-0.36762-0.003-2.4636-1.6921-4.6577-3.7546s-6.6183-6.1279-9.8316-9.0343c-7.5818-6.8576-11.51-10.639-13.236-12.741-3.7263-4.5387-8.1339-10.604-9.5534-13.147-2.1723-3.8912-3.7863-6.338-5.553-8.4181-6.9395-8.1704-18.195-32.623-17.139-37.234 0.10385-0.45338-0.27234-0.53932-0.83596-0.19098-0.56363 0.34834-1.0582 0.26929-1.0991-0.17567-0.26031-2.834-1.0886-5.8012-1.749-6.2656-0.42506-0.29888-1.5902-3.4684-2.5893-7.0434-0.99904-3.575-2.0576-7.175-2.3523-8-0.29471-0.825-0.64197-2.4-0.77167-3.5-0.12971-1.1-0.54187-3.575-0.9159-5.5-0.37404-1.925-0.71829-4.722-0.76501-6.2156-0.0467-1.4936-0.38453-2.5304-0.75071-2.3041-0.36618 0.22631-0.61675-1.2517-0.55683-3.2844 0.0599-2.0327-0.62539-7.6199-1.5229-12.416-0.99479-5.3158-1.255-8.8457-0.6665-9.0418 0.6052-0.20173 0.50655-3.0419-0.26444-7.6128-1.4738-8.738-0.90662-15.335 1.8554-21.579 1.3214-2.9873 1.907-6.0296 1.6526-8.5863-0.23348-2.3469 0.0333-3.9598 0.65508-3.9598 0.57696 0 0.81367-0.9 0.52601-2s-0.0886-2 0.44239-2c0.53096 0 0.71103-0.41157 0.40014-0.91459-0.31088-0.50302-0.20127-1.0655 0.24358-1.25 0.95368-0.39548 5.2036-12.738 5.2036-15.112 0-0.89952 1.2662-3.7928 2.8137-6.4295 1.5476-2.6367 3.5864-7.1708 4.5307-10.076 0.94433-2.905 3.3551-8.305 5.3573-12s4.5758-8.5182 5.7193-10.718c1.1434-2.2 2.3052-4.225 2.5818-4.5 0.27655-0.275 1.8516-2.5099 3.5-4.9664 3.672-5.4719 3.7652-5.5861 12.896-15.807 8.7338-9.7766 11.448-12.046 15.334-12.823 1.9796-0.39591 3.232-1.4719 3.9609-3.4028 0.58622-1.5531 2.92-3.9942 5.1861-5.4248s4.1202-3.0454 4.1202-3.5885 0.3375-0.89185 0.75-0.775c1.1407 0.32313 5.2879-2.1467 9.853-5.8679 2.2566-1.8395 4.5742-3.3445 5.15-3.3445 0.57587 0 4.5795-2.8254 8.897-6.2786 9.8294-7.8619 14.862-10.184 20.445-9.4355 2.7002 0.36218 5.2788 0.02675 7.336-0.95426 2.9138-1.3895 3.4509-1.3571 6.5918 0.39763 3.4117 1.906 3.4273 1.9051 6.7617-0.35764 1.8382-1.2474 5.3848-2.5743 7.8813-2.9487 4.6213-0.69301 32.156 0.03573 40.334 1.0675 9.1313 1.152 17.583 2.799 20.558 4.0063 1.6819 0.68247 5.0827 1.0388 7.5573 0.79185 4.4629-0.44538 18.394 1.9059 21.676 3.6585 0.93989 0.50192 6.3457 2.1304 12.013 3.6189 11.212 2.9449 15.613 5.3264 18.696 10.117 1.1 1.7095 3.7393 3.8856 5.8652 4.8359 4.2222 1.8873 7.4656 4.4793 14.679 11.731 2.5986 2.6125 5.1455 4.75 5.66 4.75 4.5465 0 29.931 42.742 31.929 53.763 0.26876 1.4821 0.83817 2.9294 1.2653 3.2161 0.89042 0.59763 1.0186 1.0219 5.5949 18.521 1.8698 7.15 3.8909 14.575 4.4914 16.5 2.9419 9.4314 4.197 19.761 4.2527 35 0.0463 12.669-0.89815 34.128-1.5844 36-0.30237 0.825-0.5019 2.85-0.44339 4.5 0.22437 6.3285-1.6149 14.649-4.0674 18.4-0.8631 1.3201-1.689 2.8951-1.8352 3.5-2.2908 9.4734-3.1561 11.81-5.0134 13.541-1.9802 1.8448-8.5725 14.401-11.229 21.387-1.2297 3.2344-13.13 21.192-20.304 30.639-2.7283 3.5928-9.0782 10.496-14.111 15.342-11.97 11.524-13.463 12.84-17.093 15.067-1.6817 1.0317-3.2826 2.2064-3.5576 2.6105-0.275 0.40404-1.9625 1.484-3.75 2.3998-1.7875 0.91586-3.25 2.1036-3.25 2.6395 0 0.53588-0.5671 0.97432-1.2602 0.97432-0.69312 0-2.4028 1.0125-3.7993 2.25-3.2831 2.9092-7.4281 5.3068-13.94 8.0634-14.167 5.9965-30.43 11.55-35.587 12.151-2.1523 0.251-6.8383 0.92123-10.413 1.4894-3.575 0.56818-14.6 1.2451-24.5 1.5042-16.338 0.42767-18.508 0.28311-23.5-1.5659z\"/> \n" \
"    <path id=\"path5287\" d=\"m742.38 154.34c-3.4654 0.11838-2.8407 5.2788-6.4688 4.5625-1.96 0.71659-1.9553 3.0837-4.4375 2.4062-3.1384 1.0296-7.0903 2.5451-10.312 1.625-1.6493-2.7888-7.6933-2.6282-6.0938 1.5-0.57514 3.5809-5.9048 6.3558-4.625 11-0.46623 1.8669 0.2625 3.8644-1.9375 5.0938-1.4062 4.1396 4.5231 6.0385 5.249 9.8979 2.7377 6.5172 8.4904 10.745 12.407 16.383-4.0332-0.0869-2.4558 4.5307 0.4375 4.9062-0.65604 2.8494 2.017 3.5195 3.8125 4.2188 3.4279 2.6512 4.8683-2.2363 2.8438-4.625 0.16168-3.5348-3.5881-6.254-0.3125-9.3125 3.3302-3.5883 3.806-8.6279 5.3438-12.812 2.0033-2.6289 5.0078-4.7523 5.25-8.625 0.77315-5.6097 2.8604-12.065-0.40625-17.094 0.12082-2.6152 2.7282-0.40109 4.125 0.0625 3.4517-2.1978 10.512 2.5272 12.062-3.0938-1.6763-4.1634-7.5863-1.0227-9.0938-4.5625-1.6551-0.4487-3.4613-0.65559-5.0312-0.8125-0.77541-0.59319-1.8486-0.82479-2.8125-0.71875z\" style=\"filter:url(#filter5313);fill:#804d33\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path4962\" d=\"m731.08 213.7c-0.3455-0.55897-1.0471-0.75742-1.5591-0.44098-0.8347 0.51591-1.0784-0.125-0.8569-2.2537 0.041-0.39102-0.7468-1.0344-1.75-1.4297-1.6668-0.65683-1.6737-0.72482-0.08-0.78904 2.9861-0.12037 1.4318-3.9688-3.4011-8.4212-2.477-2.282-5.7252-6.5888-7.2181-9.5708-1.493-2.9819-3.5969-6.1871-4.6755-7.1225-1.7545-1.5217-1.7977-1.8365-0.4095-2.9885 0.8533-0.70822 1.3112-1.914 1.0175-2.6794-0.2938-0.76545-0.089-1.1168 0.4545-0.78077 0.5437 0.33602 0.9885 0.16095 0.9885-0.38905s-0.433-1.2676-0.9623-1.5947c-1.1239-0.69462 0.7836-5.5233 2.1819-5.5233 0.4941 0 0.6447-0.41062 0.3345-0.91248-0.3101-0.50187 0.5808-0.78683 1.9799-0.63325 1.5452 0.16962 2.3814-0.15916 2.13-0.83751-0.2277-0.61422-0.9964-0.97887-1.7082-0.81034-1.058 0.25049-1.0585 0.0223 0-1.25 1.0531-1.269 1.0536-1.5564 0-1.5564-0.709 0-0.9919-0.29724-0.6286-0.66054 0.3633-0.36329 1.5036 0.1024 2.5339 1.0349 1.5246 1.3797 2.6338 1.5246 5.9569 0.7779 2.2458-0.50461 4.3306-0.6703 4.6327-0.36819s0.5493 0.0966 0.5493-0.45661c0-0.55324 1.3071-0.92814 2.9047-0.8331 2.055 0.12225 2.7551-0.21735 2.393-1.1608-0.3281-0.85521 0.2554-1.3336 1.6267-1.3336 1.1761 0 2.429-0.7875 2.7841-1.75 0.9083-2.4618 2.5104-3.3132 3.9642-2.1067 0.6818 0.56589 1.7094 0.73859 2.2835 0.38378s1.0438-0.14199 1.0438 0.47293 0.5196 0.79695 1.1545 0.40451c0.7153-0.44208 0.8831-0.27432 0.441 0.44098-0.4939 0.79918 0.5176 1.1545 3.2865 1.1545 2.2 0 4.2547 0.4121 4.566 0.91579 0.6533 1.057-6.4879 0.79563-8.2647-0.3025-0.656-0.40545-1.1833-0.20487-1.1833 0.45014 0 0.88218-0.3787 0.86717-1.495-0.0593-1.2052-1.0003-1.9859-0.91905-4.0282 0.41912-1.3933 0.91292-3.0401 1.3466-3.6595 0.96378-0.6877-0.42503-0.8484-0.24652-0.4128 0.45844 0.3925 0.63498 1.362 1.1545 2.1546 1.1545 0.7925 0 1.4409 0.675 1.4409 1.5s0.3375 1.5 0.75 1.4999c0.4125-0.00004 0.6722 1.4625 0.577 3.25-0.095 1.7875-0.2342 3.2501-0.309 3.2501-0.075 0-0.2791 1.575-0.454 3.5-0.4289 4.7219-2.3312 9.2619-3.5621 8.5012-0.551-0.34056-1.0019 0.0449-1.0019 0.85649 0 0.81163-0.4029 1.6257-0.8953 1.809-0.4925 0.18333-1.1259 2.079-1.4076 4.2126-0.2816 2.1336-1.4624 5.1646-2.6238 6.7356-2.8391 3.84-4.2476 7.6604-2.9801 8.0829 0.5462 0.18205 1.1143 1.4686 1.2626 2.8589 0.1482 1.3904 0.6054 3.0714 1.0159 3.7356 0.4105 0.66424 0.5214 1.2077 0.2464 1.2077s-0.7827-0.45734-1.1281-1.0163z\" style=\"fill:url(#radialGradient6347)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5757\" style=\"filter:url(#filter5823);fill:#e0a367\" inkscape:connector-curvature=\"0\" d=\"m677.9 202c0.1062-1.5315 0.7814-3.4051 1.5005-4.1636 0.7192-0.75842 1.0618-2.0193 0.7615-2.8019-0.3003-0.78265-0.1506-1.1786 0.3327-0.87987 0.8805 0.54413 4.7029-6.2783 4.3082-7.6892-0.1154-0.4125 0.4793-0.75 1.3215-0.75 0.8423 0 1.7904-0.675 2.107-1.5s1.004-1.5 1.5276-1.5c0.5237 0 0.6232 0.5625 0.2212 1.25s0.1339 0.51573 1.1909-0.38172c1.0571-0.89745 3.0025-1.9619 4.3232-2.3654 1.9942-0.60932 2.2909-0.446 1.75 0.96351-0.3582 0.93345-0.6513 2.096-0.6513 2.5835 0 0.48745-1.2375 1.5576-2.75 2.3782-1.5125 0.82054-2.3574 1.5099-1.8775 1.5319 0.4798 0.022 0.319 0.70693-0.3575 1.522-0.6765 0.81509-1.4444 3.1776-1.7065 5.25-0.5928 4.6867-3.6845 7.8473-8.5015 8.6907-3.5576 0.62291-3.6859 0.54453-3.5-2.138z\"/> \n" \
"    <path id=\"path4956\" d=\"m679.9 205c0.1062-1.5315 0.7814-3.4051 1.5005-4.1636 0.7192-0.75842 1.0618-2.0193 0.7615-2.8019-0.3003-0.78265-0.1506-1.1786 0.3327-0.87987 0.8805 0.54413 4.7029-6.2783 4.3082-7.6892-0.1154-0.4125 0.4793-0.75 1.3215-0.75 0.8423 0 1.7904-0.675 2.107-1.5s1.004-1.5 1.5276-1.5c0.5237 0 0.6232 0.5625 0.2212 1.25s0.1339 0.51573 1.1909-0.38172c1.0571-0.89745 3.0025-1.9619 4.3232-2.3654 1.9942-0.60932 2.2909-0.446 1.75 0.96351-0.3582 0.93345-0.6513 2.096-0.6513 2.5835 0 0.48745-1.2375 1.5576-2.75 2.3782-1.5125 0.82054-2.3574 1.5099-1.8775 1.5319 0.4798 0.022 0.319 0.70693-0.3575 1.522-0.6765 0.81509-1.4444 3.1776-1.7065 5.25-0.5928 4.6867-3.6845 7.8473-8.5015 8.6907-3.5576 0.62291-3.6859 0.54453-3.5-2.138z\" style=\"fill:#552200\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5699\" style=\"filter:url(#filter5753);fill:#cd6936\" inkscape:connector-curvature=\"0\" d=\"m673.59 181.85c0-0.68758-0.4302-0.98427-0.9559-0.65931-0.5258 0.32495-2.5075-0.0574-4.4037-0.8497-4.1495-1.7338-5.5167-4.9973-3.1768-7.5829 0.9041-0.99904 1.7146-2.7551 1.801-3.9023 0.086-1.1472 0.7064-2.2966 1.3777-2.5542 0.7557-0.28997 1.084 0.24137 0.8619 1.3948-0.1974 1.0248 0.2902 2.1123 1.0835 2.4167 0.7933 0.30442 1.8745 1.69 2.4026 3.0791 0.6384 1.6793 1.7225 2.5256 3.235 2.5256 1.9119-0.00007 2.2597 0.51011 2.1802 3.1982-0.052 1.759-0.6862 3.3955-1.4093 3.6365-0.9122 0.30407-1.1122-0.13937-0.6531-1.4482 0.6275-1.7887 0.584-1.7858-0.8406 0.0547-0.8336 1.0769-1.5025 1.3846-1.5025 0.69096z\"/> \n" \
"    <path id=\"path4924\" d=\"m672.59 179.85c0-0.68758-0.4302-0.98427-0.9559-0.65931-0.5258 0.32495-2.5075-0.0574-4.4037-0.8497-4.1495-1.7338-5.5167-4.9973-3.1768-7.5829 0.9041-0.99904 1.7146-2.7551 1.801-3.9023 0.086-1.1472 0.7064-2.2966 1.3777-2.5542 0.7557-0.28997 1.084 0.24137 0.8619 1.3948-0.1974 1.0248 0.2902 2.1123 1.0835 2.4167 0.7933 0.30442 1.8745 1.69 2.4026 3.0791 0.6384 1.6793 1.7225 2.5256 3.235 2.5256 1.9119-0.00007 2.2597 0.51011 2.1802 3.1982-0.052 1.759-0.6862 3.3955-1.4093 3.6365-0.9122 0.30407-1.1122-0.13937-0.6531-1.4482 0.6275-1.7887 0.584-1.7858-0.8406 0.0547-0.8336 1.0769-1.5025 1.3846-1.5025 0.69096z\" style=\"fill:#552200\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5435\" style=\"filter:url(#filter5477);fill:#993300\" inkscape:connector-curvature=\"0\" d=\"m704.45 124.05c-0.1993-0.46048-1.7124-1.5942-3.3624-2.5194-3.712-2.0815-5.1312-8.564-2.8944-13.221 0.7669-1.597 1.3944-3.5236 1.3944-4.2814 0-0.75776 0.7532-1.6668 1.6736-2.02 0.9205-0.35323 2.4543-1.4229 3.4084-2.377 1.5452-1.5452 1.5747-1.9632 0.2697-3.8264-0.8058-1.1504-1.0656-2.0916-0.5773-2.0916 0.4882 0 1.4524 1.0552 2.1426 2.3449 0.9211 1.7211 1.8871 2.2241 3.6311 1.8907 1.3494-0.25795 3.0407 0.21031 3.914 1.0837 1.8046 1.8046 2.0451 3.1122 0.3834 2.0853-0.721-0.44563-0.8828-0.27393-0.4309 0.45729 0.398 0.64395 1.1621 0.89986 1.6979 0.56869 0.5359-0.33118 2.2976 0.89898 3.9149 2.7337 1.6174 1.8347 2.9479 2.7468 2.9567 2.0268 0.01-0.71996 0.5051-1.0067 1.1031-0.63714 0.5979 0.36953 0.869 1.5057 0.6025 2.5248-0.2785 1.0652 0 1.7612 0.6629 1.6371 0.6311-0.11869 1.25 0.90919 1.3754 2.2842 0.2652 2.9072 0.9146 6.4664 1.8248 10 0.5489 2.1309 0.3309 2.0112-1.4763-0.81012-1.1661-1.8206-1.8466-3.7528-1.5122-4.2938 0.7034-1.1382-1.1072-3.5811-3.6713-4.9534-1.195-0.63955-2.0043-0.5715-2.4868 0.2091-0.4437 0.71794-0.2769 0.88637 0.4393 0.44369 0.6803-0.4204 1.1545-0.086 1.1545 0.81411 0 0.94705-0.57 1.3089-1.5 0.95203-0.9285-0.3563-1.5 0.004-1.5 0.94662 0 1.6884-5.1119 6.9016-7.1805 7.3227-0.7257 0.14776-2.2814 0.55549-3.4571 0.90607-1.1756 0.35058-2.3006 0.26066-2.5-0.19981z\"/> \n" \
"    <path id=\"path4798\" d=\"m702.45 126.05c-0.1993-0.46048-1.7124-1.5942-3.3624-2.5194-3.712-2.0815-5.1312-8.564-2.8944-13.221 0.7669-1.597 1.3944-3.5236 1.3944-4.2814 0-0.75776 0.7532-1.6668 1.6736-2.02 0.9205-0.35323 2.4543-1.4229 3.4084-2.377 1.5452-1.5452 1.5747-1.9632 0.2697-3.8264-0.8058-1.1504-1.0656-2.0916-0.5773-2.0916 0.4882 0 1.4524 1.0552 2.1426 2.3449 0.9211 1.7211 1.8871 2.2241 3.6311 1.8907 1.3494-0.25795 3.0407 0.21031 3.914 1.0837 1.8046 1.8046 2.0451 3.1122 0.3834 2.0853-0.721-0.44563-0.8828-0.27393-0.4309 0.45729 0.398 0.64395 1.1621 0.89986 1.6979 0.56869 0.5359-0.33118 2.2976 0.89898 3.9149 2.7337 1.6174 1.8347 2.9479 2.7468 2.9567 2.0268 0.01-0.71996 0.5051-1.0067 1.1031-0.63714 0.5979 0.36953 0.869 1.5057 0.6025 2.5248-0.2785 1.0652 0 1.7612 0.6629 1.6371 0.6311-0.11869 1.25 0.90919 1.3754 2.2842 0.2652 2.9072 0.9146 6.4664 1.8248 10 0.5489 2.1309 0.3309 2.0112-1.4763-0.81012-1.1661-1.8206-1.8466-3.7528-1.5122-4.2938 0.7034-1.1382-1.1072-3.5811-3.6713-4.9534-1.195-0.63955-2.0043-0.5715-2.4868 0.2091-0.4437 0.71794-0.2769 0.88637 0.4393 0.44369 0.6803-0.4204 1.1545-0.086 1.1545 0.81411 0 0.94705-0.57 1.3089-1.5 0.95203-0.9285-0.3563-1.5 0.004-1.5 0.94662 0 1.6884-5.1119 6.9016-7.1805 7.3227-0.7257 0.14776-2.2814 0.55549-3.4571 0.90607-1.1756 0.35058-2.3006 0.26066-2.5-0.19981z\" style=\"fill:url(#radialGradient6349)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <g id=\"g3521\" style=\"filter:url(#filter4554);fill:#cc6633\" transform=\"matrix(1.0057 0 0 1.0057 142.2 -423.28)\"> \n" \
"      <path id=\"path3519\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m488.03 742.3c0.33992-0.55 0.81648-1 1.059-1 0.24254 0 0.44098 0.45 0.44098 1s-0.47656 1-1.059 1c-0.58246 0-0.7809-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3517\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m459.89 741.52c0.36895-0.59698 0.21348-1.3681-0.34549-1.7135-0.55897-0.34546-1.0479-0.0391-1.0866 0.6809-0.0386 0.71996-0.42806 0.40902-0.86535-0.69098-0.43728-1.1-0.40701-3.0382 0.0673-4.3072 0.55642-1.4887 0.50866-2.0886-0.13465-1.691-0.54834 0.33889-0.99698 0.12548-0.99698-0.47424s0.70947-1.3626 1.5766-1.6954c0.86714-0.33275 1.981-1.6686 2.4752-2.9686 0.49426-1.3 1.7015-2.3636 2.6828-2.3636 0.98131 0 2.3463-0.9 3.0332-2 1.6608-2.6594 4.2163-2.6556 3.5204 0.005-0.28843 1.1029 0.0742 2.7266 0.80587 3.6082 1.1148 1.3433 1.0876 1.7878-0.16838 2.7447-0.82425 0.62799-1.3448 1.8873-1.1569 2.7986 0.45174 2.1899-1.6334 3.4046-3.1061 1.8094-0.89128-0.96539-0.87093-1.0947 0.0871-0.55385 0.68881 0.38889 1.25 0.18224 1.25-0.46028 0-0.6413-0.62017-0.92803-1.3781-0.63716-0.75798 0.29086-1.949 0.002-2.6467-0.64301-0.97061-0.89662-1.1128-0.8945-0.60554 0.009 0.36466 0.6495 0.20567 1.4636-0.3533 1.809-0.55897 0.34583-1.0163 1.9254-1.0163 3.5104 0 1.5851-0.51953 3.203-1.1545 3.5955-0.68907 0.42587-0.88407 0.27594-0.48369-0.37188z\"/> \n" \
"      <path id=\"path3515\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m519.53 739.92c0-0.20765 0.6853-0.9463 1.5229-1.6414 1.2734-1.0568 1.4197-0.99492 0.89301 0.37756-0.53789 1.4017-2.4159 2.3842-2.4159 1.2639z\"/> \n" \
"      <path id=\"path3513\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m505.59 733.96c-0.7427-1.7386-1.9892-3.9039-2.7699-4.8118-0.95667-1.1125-1.0722-1.8654-0.3544-2.309 0.58583-0.36206 1.0651-0.18174 1.0651 0.40072s0.57798 1.059 1.2844 1.059 2.0175 1.2411 2.9136 2.758c1.3016 2.2034 1.3861 3.0904 0.42036 4.4111-1.0703 1.4637-1.3635 1.2909-2.5592-1.508z\"/> \n" \
"      <path id=\"path3511\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m561.78 731.55c-1.5802-0.53235-1.5377-1.2909 0.20108-3.5852 1.3387-1.7664 1.4579-1.7603 3.3909 0.17268 1.659 1.659 1.7499 2.1007 0.52879 2.5693-0.95028 0.36466-1.252 0.12547-0.84852-0.67268 0.34435-0.6812 0.0302-0.52405-0.69806 0.34922-0.72829 0.87327-1.8867 1.3983-2.5742 1.1667z\"/> \n" \
"      <path id=\"path3509\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m520.03 725.3c0.33992-0.55 0.81648-1 1.059-1 0.24254 0 0.44098 0.45 0.44098 1s-0.47656 1-1.059 1c-0.58246 0-0.7809-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3507\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m555.53 725.24c0-0.58246 0.45-0.7809 1-0.44098s1 0.81648 1 1.059c0 0.24254-0.45 0.44098-1 0.44098s-1-0.47656-1-1.059z\"/> \n" \
"      <path id=\"path3505\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m413.53 721.9c0-0.21616 0.675-0.65203 1.5-0.96862 0.825-0.31658 1.5-0.13972 1.5 0.39301 0 0.53274-0.675 0.96862-1.5 0.96862s-1.5-0.17686-1.5-0.39301z\"/> \n" \
"      <path id=\"path3503\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m419.53 721.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3501\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m431.53 720.8c-1.0196-1.2285-0.95124-1.5 0.37756-1.5 0.89234 0 1.6224 0.675 1.6224 1.5s-0.1699 1.5-0.37756 1.5c-0.20765 0-0.93775-0.675-1.6224-1.5z\"/> \n" \
"      <path id=\"path3499\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m556.61 718.71c0.048-1.165 0.28494-1.4019 0.60416-0.60417 0.28887 0.72187 0.25335 1.5844-0.0789 1.9167-0.3323 0.33229-0.56864-0.25834-0.52522-1.3125z\"/> \n" \
"      <path id=\"path3497\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m424.53 714.63c0-0.73333 0.6-1.3333 1.3333-1.3333 0.73334 0 1.3333 0.6 1.3333 1.3333 0 0.73334-0.6 1.3333-1.3333 1.3333-0.73333 0-1.3333-0.6-1.3333-1.3333z\"/> \n" \
"      <path id=\"path3495\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m456.94 715.15c-0.65929-1.0668 3.2571-4.8668 4.9909-4.8426 0.60334 0.008 1.772 0.47719 2.597 1.0417 1.2386 0.84754 1.1554 0.97556-0.47756 0.73469-1.0877-0.16044-1.9877 0.2333-2 0.87497-0.0466 2.4237-3.9359 4.0913-5.1103 2.1912z\"/> \n" \
"      <path id=\"path3493\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m510.1 713.55c0.49777-0.4125 1.2409-1.2 1.6514-1.75 0.42591-0.57068 0.7529-0.24868 0.76164 0.75 0.009 0.97279-0.72489 1.75-1.6514 1.75-0.91666 0-1.2594-0.3375-0.76163-0.75z\"/> \n" \
"      <path id=\"path3491\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m532.03 711.3c0.33992-0.55 1.068-1 1.618-1s0.72189 0.45 0.38197 1-1.068 1-1.618 1-0.72189-0.45-0.38197-1z\"/> \n" \
"      <path id=\"path3489\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m564.04 711.28c0.34546-0.55897 1.047-0.75742 1.559-0.44098 1.387 0.85723 1.1284 1.4573-0.62812 1.4573-0.85746 0-1.2764-0.45734-0.9309-1.0163z\"/> \n" \
"      <path id=\"path3487\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m401.6 708.89c-1.4282-1.7209-0.0332-2.808 1.9739-1.5384 0.79874 0.50529 1.0022 0.95722 0.45225 1.0043-0.55 0.0471-0.1 0.47234 1 0.94503 1.9507 0.83826 1.9476 0.86116-0.12756 0.92971-1.1702 0.0387-2.6545-0.56465-3.2986-1.3407z\"/> \n" \
"      <path id=\"path3485\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m577.99 709.23c-0.36253-0.58659-0.41903-1.3066-0.12555-1.6001 0.71632-0.71631 2.6667 0.54583 2.6667 1.7257 0 1.278-1.7264 1.1927-2.5411-0.12555z\"/> \n" \
"      <path id=\"path3483\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m593.18 708.83c-0.30982-0.80739-0.13297-1.734 0.39301-2.059 0.52598-0.32508 0.95633 0.33551 0.95633 1.468 0 2.4146-0.55611 2.6582-1.3493 0.59105z\"/> \n" \
"      <path id=\"path3481\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m577.53 705.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3479\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m407.53 703.46c0-1.0117 1.0908-2.3365 2.4241-2.944 1.9579-0.89207 2.6791-0.78986 3.75 0.53145 0.9041 1.1155 0.93674 1.4022 0.10258 0.90141-0.70844-0.42535-1.9595 0.1252-2.9722 1.308-2.1691 2.5333-3.3044 2.6031-3.3044 0.20307z\"/> \n" \
"      <path id=\"path3477\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m420.34 704.61c0.72187-0.28887 1.5844-0.25335 1.9167 0.0789 0.33229 0.33229-0.25834 0.56864-1.3125 0.52522-1.165-0.048-1.4019-0.28494-0.60417-0.60416z\"/> \n" \
"      <path id=\"path3475\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m532.02 702.28c-0.34546-0.55897-1.1166-0.71444-1.7135-0.34549-0.6326 0.39096-0.799 0.2074-0.39887-0.44002 0.75801-1.2265 3.6225-0.50786 3.6225 0.90881 0 1.1917-0.73442 1.1317-1.5101-0.1233z\"/> \n" \
"      <path id=\"path3473\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m577.62 700.9c-0.9417-1.1347-0.91868-1.4028 0.1075-1.2522 1.3817 0.20279 2.2725 1.5144 1.5316 2.2553-0.24245 0.24246-0.98007-0.20891-1.6391-1.003z\"/> \n" \
"      <path id=\"path3471\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m382.39 699.63c-0.60861-0.73333-0.68748-1.3333-0.17525-1.3333 0.51222 0 1.7519 0.6 2.7548 1.3333 1.5968 1.1676 1.6186 1.3333 0.17526 1.3333-0.90651 0-2.1462-0.6-2.7548-1.3333z\"/> \n" \
"      <path id=\"path3469\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m389.09 700.4c-1.7459-0.68336-1.6201-0.92126 1.2411-2.3486 2.1743-1.0847 3.3941-1.2479 3.8471-0.51484 0.37808 0.61174 0.19657 0.7849-0.42199 0.40261-0.59698-0.36895-1.3992-0.16317-1.7826 0.45729-0.38346 0.62046-0.0771 1.5209 0.6809 2.001 1.1375 0.72051 1.1163 0.86329-0.12188 0.81791-0.825-0.0302-2.3742-0.39714-3.4426-0.81534z\"/> \n" \
"      <path id=\"path3467\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m431.53 700.36c0-0.51754 0.44485-1.2159 0.98855-1.5519 0.56686-0.35034 0.7345 0.0511 0.39301 0.94098-0.66479 1.7324-1.3816 2.0494-1.3816 0.61096z\"/> \n" \
"      <path id=\"path3465\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m569.92 699.71c0.33385-0.86998 0.61388-2.1075 0.6223-2.75 0.009-0.71675 0.36009-0.62358 0.90748 0.24111 1.0257 1.6203 0.33924 4.0907-1.1368 4.0907-0.55 0-0.72685-0.7118-0.39301-1.5818z\"/> \n" \
"      <path id=\"path3463\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m430.53 697.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3461\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m441.53 693.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3459\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m409.22 691.93c-0.62779-1.636 2.2288-4.6442 4.3881-4.6209 0.96947 0.0104 1.0607 0.24886 0.28694 0.75-0.62387 0.40408-1.2989 1.5974-1.5 2.6518-0.4568 2.3949-2.4327 3.1535-3.175 1.2191z\"/> \n" \
"      <path id=\"path3457\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m388.63 689c-1.2649-2.1063-1.2436-2.1276 0.47833-0.47833 0.99123 0.94941 1.587 1.9414 1.3239 2.2045-0.26308 0.26308-1.0741-0.5137-1.8022-1.7262z\"/> \n" \
"      <path id=\"path3455\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m394.44 685.93c-1.764-1.3446-1.3862-4.2328 0.65624-5.0165 2.076-0.79666 6.4344 1.0757 6.4344 2.7642 0 2.0375-5.2038 3.6905-7.0906 2.2523z\"/> \n" \
"      <path id=\"path3453\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m376.83 683.05c-1.1272-1.2375-2.5798-3.2782-3.2282-4.535-1.1264-2.1834-1.0238-2.2745 2.3084-2.0501 1.918 0.12917 3.464 0.4824 3.4355 0.78496-0.18272 1.9408 0.40455 2.9608 1.935 3.3608 1.5232 0.39807 1.5354 0.47236 0.0936 0.57333-1.1449 0.0802-1.4949 0.73363-1.1334 2.116 0.69346 2.6518-0.8725 2.537-3.411-0.25z\"/> \n" \
"      <path id=\"path3451\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m620.53 684.3c-0.90129-0.58246-1.0246-0.97549-0.30902-0.98469 0.65504-0.008 1.4691 0.43469 1.809 0.98469 0.7673 1.2415 0.42112 1.2415-1.5 0z\"/> \n" \
"      <path id=\"path3449\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m413.86 680.99c0-0.71761 1.0329-1.7922 2.2954-2.388 1.7704-0.8355 2.7043-0.74885 4.0833 0.37892 0.98338 0.80418 1.2255 1.1772 0.53796 0.82898-0.6875-0.34825-1.25-0.19875-1.25 0.33222s-0.9 0.73005-2 0.44239c-1.1182-0.29241-2-0.0307-2 0.59362 0 0.61415-0.375 1.1166-0.83333 1.1166-0.45834 0-0.83334-0.58714-0.83334-1.3048z\"/> \n" \
"      <path id=\"path3447\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m410.11 671.65c-0.52667-1.3725-0.38034-1.4343 0.89301-0.37756 1.7352 1.4401 1.9158 2.019 0.62988 2.019-0.49116 0-1.1765-0.73865-1.5229-1.6414z\"/> \n" \
"      <path id=\"path3445\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m374.99 671.23c-0.36253-0.58659-0.4085-1.3172-0.10214-1.6235 0.82264-0.82264 3.6433 0.46152 3.6433 1.6587 0 1.3572-2.6971 1.3305-3.5411-0.0351z\"/> \n" \
"      <path id=\"path3443\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m403.08 666.06c-1.4373-2.052-1.4216-2.2843 0.1924-2.8505 1.8054-0.63331 4.168 1.5098 4.2272 3.8345 0.052 2.0425-2.7342 1.4222-4.4196-0.98407z\"/> \n" \
"      <path id=\"path3441\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m376.03 665.3c0.33992-0.55 0.81648-1 1.059-1 0.24254 0 0.44098 0.45 0.44098 1s-0.47656 1-1.059 1c-0.58246 0-0.7809-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3439\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m598.08 663.49c0.76864-1.5408 2.5674-3.9005 3.9972-5.2437 2.3952-2.2502 2.6764-2.3051 3.5755-0.69857 0.53671 0.95904 1.6019 1.7437 2.3671 1.7437 0.76521 0 1.7124 0.51953 2.1048 1.1545 0.46456 0.75168 0.27169 0.88143-0.55278 0.37188-0.69648-0.43044-1.5535-0.33887-1.9045 0.20349-0.5152 0.79605-9.5894 5.2701-10.689 5.2701-0.16293 0 0.33265-1.2606 1.1013-2.8014z\"/> \n" \
"      <path id=\"path3437\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m636.04 660.91c-0.28151-0.88694-0.71718-2.2732-0.96816-3.0806-0.63638-2.0472 0.98807-2.8012 2.3916-1.11 0.79535 0.95834 0.8311 1.6044 0.11331 2.048-0.57671 0.35642-1.0417 1.184-1.0332 1.839 0.0106 0.8205 0.27605 0.77976 0.8535-0.13099 1.0665-1.6821 5.7979-2.2546 5.7979-0.70162 0 0.64064-0.9375 1.0819-2.0833 0.98068-1.1458-0.10126-2.6405 0.25515-3.3215 0.79202-0.86176 0.67939-1.3938 0.4859-1.75-0.63649z\"/> \n" \
"      <path id=\"path3435\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m350.14 655.98c-1.1503-4.2889-0.64043-5.2738 1.3878-2.6808 2.3463 2.9996 2.4322 3.6202 0.59854 4.3238-0.86267 0.33104-1.6263-0.30063-1.9864-1.643z\"/> \n" \
"      <path id=\"path3433\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m398.53 657.3c-0.90129-0.58246-1.0246-0.97549-0.30902-0.98469 0.65504-0.008 1.4691 0.43469 1.809 0.98469 0.7673 1.2415 0.42112 1.2415-1.5 0z\"/> \n" \
"      <path id=\"path3431\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m372.53 655.08c0-0.43296 1.1516-0.7872 2.559-0.7872 1.4075 0 2.2986 0.42137 1.9803 0.93637-0.68735 1.1122-4.5393 0.98557-4.5393-0.14917z\"/> \n" \
"      <path id=\"path3429\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m583.07 654.37c-0.31644-0.512-0.19299-1.1672 0.27431-1.456 0.46731-0.28881 0.84965 0.13009 0.84965 0.9309 0 1.6862-0.31534 1.8335-1.124 0.52511z\"/> \n" \
"      <path id=\"path3427\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m349.61 646.93c0.22917-0.2005 1.4292-0.89133 2.6667-1.5352 1.8646-0.97013 2.25-0.90769 2.25 0.36455 0 0.99645-0.9358 1.5352-2.6667 1.5352-1.4667 0-2.4792-0.16405-2.25-0.36455z\"/> \n" \
"      <path id=\"path3425\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m574.49 645.36c1.4103-2.6352 1.303-5.8034-0.21482-6.3455-0.6875-0.24554-0.87875-0.84179-0.425-1.325 0.4609-0.49083 1.2715-0.0807 1.8368 0.92935 0.65524 1.1709 1.9502 1.7163 3.675 1.548 1.4648-0.14297 3.7217 0.31766 5.0155 1.0236 1.2937 0.70596 3.1908 1.0643 4.2158 0.79624 1.0745-0.281 1.7722-0.002 1.6478 0.6601-0.13077 0.69527 1.0649 1.0893 3.0342 0.99999 3.4344-0.15581 4.1019 0.69554 1.9473 2.4837-0.94262 0.78231-1.9976 0.72063-3.8167-0.22313-3.3294-1.7273-8.0218-3.0019-9.8627-2.6789-0.81511 0.14301-2.6846 1.1163-4.1544 2.1629-3.3942 2.4168-4.2044 2.4081-2.8988-0.0314z\"/> \n" \
"      <path id=\"path3423\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m641.88 646.15c1.2016-0.69061 2.5906-0.73534 3.9533-0.1273 1.7728 0.79102 1.4835 0.95727-1.8525 1.0647-3.2558 0.10483-3.6264-0.0606-2.1008-0.93739z\"/> \n" \
"      <path id=\"path3421\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m511.67 643.26c-0.80248-2.302-0.76574-2.9772 0.15217-2.7968 0.66554 0.13081 2.7117-0.56037 4.547-1.536 3.2092-1.7059 3.3236-1.7044 2.9878 0.0391-0.21191 1.1004-1.5235 2.027-3.3369 2.3577-2.3566 0.42966-2.9375 1.0123-2.7496 2.7577 0.33433 3.1059-0.35458 2.7522-1.6004-0.82172z\"/> \n" \
"      <path id=\"path3419\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m601.1 644.4c-1.7881-0.70047-1.8002-0.80346-0.16821-1.4297 2.4942-0.9571 5.5951-0.8362 5.5951 0.21814 0 0.71274-2.6392 2.3261-3.3318 2.0367-0.0925-0.0387-1.0353-0.40996-2.0951-0.82513z\"/> \n" \
"      <path id=\"path3417\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m626.06 642.33c-1.7375-1.9199-1.719-1.9365 0.83721-0.75 1.4378 0.6674 2.6176 1.551 2.6219 1.9634 0.0142 1.365-1.6558 0.77919-3.4591-1.2134z\"/> \n" \
"      <path id=\"path3415\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m435.2 642.63c-1.3083-1.3083-0.6341-2.1376 1.3221-1.626 1.0938 0.28604 1.7423 0.91891 1.441 1.4064-0.65005 1.0518-1.8366 1.1461-2.7631 0.21964z\"/> \n" \
"      <path id=\"path3413\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m564.53 642.36c0-0.51754 0.44485-1.2159 0.98855-1.5519 0.56686-0.35034 0.7345 0.0511 0.39301 0.94098-0.66479 1.7324-1.3816 2.0494-1.3816 0.61096z\"/> \n" \
"      <path id=\"path3411\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m497.53 640.8c0-0.825-0.47656-1.5-1.059-1.5-0.58246 0-0.73364-0.52647-0.33595-1.1699 0.47003-0.76053 0.19907-0.96886-0.77432-0.59534-1.1149 0.42781-1.4974-0.15643-1.4974-2.287 0-1.5739 0.59314-3.0892 1.3181-3.3674 1.6302-0.62555 3.8177 3.0118 2.355 3.9158-0.63109 0.39004-0.43848 1.7014 0.52298 3.5607 0.87325 1.6887 1.0848 2.9432 0.49633 2.9432-0.56412 0-1.0257-0.675-1.0257-1.5z\"/> \n" \
"      <path id=\"path3409\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m541.28 639.79c-0.38817-2.0306-0.21979-2.2931 0.88342-1.3776 1.5226 1.2637 1.8462 3.8863 0.47958 3.8863-0.48589 0-1.0992-1.1289-1.363-2.5087z\"/> \n" \
"      <path id=\"path3407\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m610.23 640.67c-0.34562-0.34562 0.93204-2.5327 2.8392-4.8602 2.7654-3.3748 3.9665-4.1364 5.9312-3.7609 3.6188 0.69178 4.7812 2.5215 3.0695 4.8315-1.3975 1.8859-1.4467 1.8845-2.9447-0.082-1.4963-1.9643-1.5786-1.942-4.6125 1.25-3.3627 3.5379-3.365 3.5393-4.2827 2.6216z\"/> \n" \
"      <path id=\"path3405\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m342.99 637.23c-0.91669-1.4832-0.0546-2.0993 1.8922-1.3522 0.90056 0.34557 1.3884 1.0312 1.0841 1.5235-0.74846 1.211-2.1727 1.1291-2.9764-0.17131z\"/> \n" \
"      <path id=\"path3403\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m355.13 636.45c-0.80213-1.2979 1.0228-5.1558 2.4389-5.1558 1.2798 0 1.1692 1.0034-0.4281 3.8851-0.83459 1.5057-1.576 1.9742-2.0108 1.2707z\"/> \n" \
"      <path id=\"path3401\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m413.53 635.3c0-0.55 0.68912-1 1.5314-1 0.84227 0 1.7948-0.68649 2.1168-1.5255 0.4626-1.2055 0.88693-1.2753 2.0229-0.33251 1.2004 0.99629 0.91491 1.4128-1.7316 2.5255-3.7973 1.5966-3.9395 1.6086-3.9395 0.3325z\"/> \n" \
"      <path id=\"path3399\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m359.53 633.53c0.5582-3.8926 23.718-7.6901 1.75 1.2641-1.3208 0.54375-1.75 0.23372-1.75-1.2641z\"/> \n" \
"      <path id=\"path3397\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m497.53 630.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3395\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m535.34 630.61c0.72187-0.28887 1.5844-0.25335 1.9167 0.0789 0.33229 0.33229-0.25834 0.56864-1.3125 0.52522-1.165-0.048-1.4019-0.28494-0.60417-0.60416z\"/> \n" \
"      <path id=\"path3393\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m638 630.25c-0.95021-1.5375 0.35135-2.5295 1.6348-1.246 0.71818 0.71818 0.73543 1.2775 0.0524 1.6996-0.55992 0.34605-1.3192 0.1419-1.6873-0.45366z\"/> \n" \
"      <path id=\"path3391\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m597.17 628.8c0.31659-0.825 1.0326-1.5 1.5911-1.5 0.58531 0 0.48812 0.63541-0.22943 1.5-0.68469 0.825-1.4007 1.5-1.5911 1.5-0.19039 0-0.0871-0.675 0.22943-1.5z\"/> \n" \
"      <path id=\"path3387\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m469.53 622.8c0.68469-0.825 1.8648-1.5 2.6224-1.5 0.75766 0 1.3776-0.45 1.3776-1 0-1.3874-0.17565-1.3215-4 1.5-1.8637 1.375-2.9062 2.5-2.3167 2.5s1.632-0.675 2.3167-1.5z\"/> \n" \
"      <path id=\"path3385\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m464.53 608.3c0-0.55-0.47656-1-1.059-1-0.58246 0-0.7809 0.45-0.44098 1s0.81648 1 1.059 1c0.24254 0 0.44098-0.45 0.44098-1z\"/> \n" \
"      <path id=\"path3383\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m347.53 626.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3381\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m414.53 625.51c0-1.0709 0.74068-1.7857 1.8503-1.7857 1.284 0 1.7074 0.54656 1.3834 1.7857-0.25683 0.98214-1.0895 1.7857-1.8503 1.7857-0.76085 0-1.3834-0.80357-1.3834-1.7857z\"/> \n" \
"      <path id=\"path3379\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m333.53 624.24c0-1.1325 0.43035-1.793 0.95633-1.468 0.52597 0.32507 0.70283 1.2516 0.39301 2.059-0.79323 2.0671-1.3493 1.8235-1.3493-0.59105z\"/> \n" \
"      <path id=\"path3377\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m630.53 622.24c0-1.1325 0.43035-1.793 0.95633-1.468 0.52598 0.32507 0.70283 1.2516 0.39301 2.059-0.79323 2.0671-1.3493 1.8235-1.3493-0.59105z\"/> \n" \
"      <path id=\"path3375\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m419.25 619.05c-0.27844-1.7875-0.10451-3.6775 0.3865-4.2 1.5495-1.6488 0.9701-2.7093-1.1181-2.0466-1.6648 0.52839-2.1339 0.0667-2.7259-2.6826-0.70513-3.2748-0.70672-4.6577-0.009-8.0419 0.53614-2.6014 1.7302-3.3671 1.8644-1.1956 0.0651 1.0542 0.0414 2.3254-0.0528 2.825s0.38612 1.2528 1.0673 1.6738c0.96574 0.59686 0.9223 1.1548-0.19721 2.5336-0.78964 0.9725-0.90429 1.4495-0.2548 1.0599 1.7994-1.0792 2.7012 1.2085 2.9794 7.5587 0.26975 6.1564-1.0964 7.9284-1.9396 2.5157z\"/> \n" \
"      <path id=\"path3373\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m419.03 611.3c0.33992-0.55 0.14148-1-0.44098-1s-1.059 0.45-1.059 1 0.19844 1 0.44098 1 0.7191-0.45 1.059-1z\"/> \n" \
"      <path id=\"path3371\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m444.53 620.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3367\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m432.99 615.23c-0.36253-0.58659-0.44468-1.281-0.18255-1.5431 0.26212-0.26213 0.74306 0.21781 1.0688 1.0665 0.67618 1.7621 0.0999 2.0721-0.8862 0.4766z\"/> \n" \
"      <path id=\"path3365\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m651.53 615.26c0-1.3622 1.4898-1.8988 2.8823-1.0382 0.93825 0.57987 0.72218 0.94292-0.79775 1.3404-1.1465 0.29982-2.0845 0.16381-2.0845-0.30224z\"/> \n" \
"      <path id=\"path3363\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m338.77 605.98c1.5087-0.58395 3.0036-1.8825 3.322-2.8856 0.31838-1.0032 1.0229-1.5495 1.5656-1.2141 1.8005 1.1128-1.6008 4.6972-4.6823 4.9344l-2.9484 0.22701z\"/> \n" \
"      <path id=\"path3361\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m629.09 605c0.37553-0.98622 0.93469-1.5412 1.2426-1.2333 0.30789 0.30789 0.00064 1.1148-0.68278 1.7931-0.98762 0.98026-1.1025 0.8654-0.5598-0.5598z\"/> \n" \
"      <path id=\"path3359\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m398.78 598.04c0.5158-1.5474 4.7482-1.6692 4.7482-0.13659-1.0245 2.7548-3.903 2.0615-4.7482 0.13659z\"/> \n" \
"      <path id=\"path3357\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m544.53 598.92c0-0.20765 0.7875-0.99515 1.75-1.75 1.5861-1.2439 1.6214-1.2085 0.37756 0.37756-1.3064 1.6658-2.1276 2.1955-2.1276 1.3724z\"/> \n" \
"      <path id=\"path3355\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m437.53 596.8c0-0.825 0.62686-1.5 1.393-1.5 0.76616 0 1.652 0.675 1.9686 1.5 0.39152 1.0203-0.054 1.5-1.393 1.5-1.0832 0-1.9686-0.67464-1.9686-1.5z\"/> \n" \
"      <path id=\"path3353\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m500.53 595.96c0-0.821-0.5625-1.7197-1.25-1.9971-0.6875-0.27741-0.0391-0.53991 1.441-0.58333 1.48-0.0434 2.9691-0.52895 3.309-1.079 0.71997-1.1649 2.5258-1.3496 2.4447-0.25-0.0304 0.4125-1.3804 1.7967-3 3.0761-2.2389 1.7686-2.9447 1.9683-2.9447 0.83333z\"/> \n" \
"      <path id=\"path3351\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m395.53 594.33c0-0.53273 0.675-0.70959 1.5-0.39301 0.825 0.31659 1.5 0.75246 1.5 0.96862 0 0.21615-0.675 0.39301-1.5 0.39301s-1.5-0.43588-1.5-0.96862z\"/> \n" \
"      <path id=\"path3349\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m542.21 593.91c-0.31025-0.80851 0.066-1.993 0.83619-2.6322 1.1414-0.94729 1.3211-0.75092 0.97192 1.0622-0.55912 2.9032-1.1122 3.3835-1.8081 1.57z\"/> \n" \
"      <path id=\"path3347\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m548.02 593.14c0.0872-1.1834 1.2558-3.0959 2.597-4.25 1.41-1.2134 2.2856-2.8913 2.076-3.9785-0.19939-1.0341 0.22277-2.2419 0.93812-2.684 1.4653-0.90562 2.8961-0.32155 2.8961 1.1822 0 0.55-0.34918 0.7842-0.77595 0.52044s-0.76427 1.7346-0.75 4.4408c0.0143 2.7062-0.31155 4.9204-0.72405 4.9205-0.4125 0.00011-0.75-0.44981-0.75-0.99981 0-1.8094-1.7556-1.0427-2.2898 1-0.71115 2.7194-3.4196 2.5918-3.2175-0.15164z\"/> \n" \
"      <path id=\"path3345\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m404.53 592.86c0-0.85746 0.45-1.559 1-1.559s1 0.42344 1 0.94098-0.45 1.2191-1 1.559c-0.55 0.33992-1-0.0835-1-0.94098z\"/> \n" \
"      <path id=\"path3341\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m507.53 591.33c0-0.53273 0.675-0.70959 1.5-0.39301 0.825 0.31659 1.5 0.75246 1.5 0.96862 0 0.21615-0.675 0.39301-1.5 0.39301s-1.5-0.43588-1.5-0.96862z\"/> \n" \
"      <path id=\"path3339\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m362.1 590.4c-2.7015-1.0579-0.64869-2.1355 5.1502-2.7033 4.7455-0.4647 5.5271 0.28386 1.1721 1.1226-1.3101 0.2523-2.5335 0.91319-2.7186 1.4686-0.38455 1.1536-0.90277 1.1698-3.6036 0.11213z\"/> \n" \
"      <path id=\"path3337\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m344.61 589.61c-0.11408-1.7209 1.6556-2.5475 2.5065-1.1708 0.43129 0.69784 0.29172 0.9039-0.34549 0.51008-0.58801-0.36341-1.297-0.0954-1.5756 0.59549-0.3625 0.89914-0.52891 0.91769-0.58541 0.0652z\"/> \n" \
"      <path id=\"path3335\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m405.53 589.39c0-1.0384 1.9022-2.5417 2.4657-1.9486 0.18294 0.19258-0.297 0.93038-1.0665 1.6396-0.76953 0.70918-1.3991 0.84824-1.3991 0.30901z\"/> \n" \
"      <path id=\"path3333\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m470.09 588.39c-0.37254-0.60278-1.9867-1.096-3.5869-1.096-2.1712 0-2.764-0.37943-2.3359-1.495 0.43966-1.1457 1.5421-1.3468 4.7186-0.86084 5.1379 0.78611 5.4094 1.02 3.4537 2.9756-1.0715 1.0715-1.7878 1.2231-2.2495 0.47619z\"/> \n" \
"      <path id=\"path3331\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m637.53 588.36c0-0.51754 0.45-1.2191 1-1.559 0.55-0.33992 1 0.0835 1 0.94098 0 0.85746-0.45 1.559-1 1.559s-1-0.42344-1-0.94098z\"/> \n" \
"      <path id=\"path3329\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m410.03 587.3c-0.99397-1.6083 0.42513-3 3.059-3 2.8848 0 3.0927 0.78479 0.69098 2.608-2.1271 1.6147-2.9417 1.6999-3.75 0.39205z\"/> \n" \
"      <path id=\"path3327\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m422.65 585.42c-1.0312-1.0312-2.1562-2.4938-2.5-3.25-0.48246-1.0614-0.75804-1.0899-1.2083-0.125-0.32084 0.6875-1.0213 1.25-1.5565 1.25-0.53526 0-0.17233-1.3558 0.80652-3.0128 1.6622-2.8138 1.8292-2.8789 2.5297-0.98546 0.66249 1.7909 1.7867 2.4554 7.7072 4.5555 1.103 0.39126 0.99595 0.8063-0.5 1.9385-2.5015 1.8932-3.0533 1.8545-5.2785-0.37071z\"/> \n" \
"      <path id=\"path3325\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m478.73 583.1c-0.66-0.66-1.2-1.7475-1.2-2.4167 0-0.66916-0.47575-1.3752-1.0572-1.5691-1.6275-0.54252-0.0485-3.5534 2.1675-4.1328 1.5696-0.41047 1.8502-0.13226 1.3754 1.3637-0.32806 1.0336-0.0799 2.8447 0.55156 4.0245 1.348 2.5187-0.0184 4.5493-1.8372 2.7304z\"/> \n" \
"      <path id=\"path3323\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m615.7 580.76c-0.61864-1.3578-1.5985-2.4686-2.1776-2.4686-0.58139 0-0.94722-1.5671-0.81705-3.5 0.12964-1.925 0.6203-3.5 1.0903-3.5 0.47005 0 0.62287-0.375 0.33961-0.83333-0.28327-0.45834 0.0437-0.83334 0.72669-0.83334 0.68295 0 1.3162 0.7125 1.4073 1.5833 0.091 0.87083 0.56857 3.7369 1.0612 6.369 0.99164 5.2987 0.11408 7.0119-1.6304 3.183z\"/> \n" \
"      <path id=\"path3321\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m389.67 578.62c0.64924-0.78229 1.4504-1.0635 1.7803-0.625 0.32995 0.43853 0.95092 1.0786 1.3799 1.4223 0.42902 0.34375-0.37213 0.625-1.7803 0.625-2.1004 0-2.3483-0.25554-1.3799-1.4223z\"/> \n" \
"      <path id=\"path3319\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m552.19 578.85c-0.37092-0.96661-0.0755-1.2647 0.88726-0.89522 0.79383 0.30462 1.1944 0.95671 0.89006 1.4491-0.76643 1.2401-1.1327 1.126-1.7773-0.55385z\"/> \n" \
"      <path id=\"path3317\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m659.56 578.36c-0.7412-1.3849-0.70709-2.1438 0.11932-2.6545 0.71794-0.44371 0.88637-0.27695 0.44369 0.43931-0.43485 0.70361-0.007 1.1853 1.0955 1.2335 1.0601 0.0463 1.289 0.28861 0.55279 0.58541-0.69093 0.27855-1.0019 0.91803-0.69098 1.421 0.31088 0.50302 0.32952 0.91459 0.0414 0.91459-0.28811 0-0.99088-0.87269-1.5617-1.9393z\"/> \n" \
"      <path id=\"path3315\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m515.09 577.59c-0.54268-1.4252-0.42782-1.5401 0.5598-0.5598 0.68342 0.67834 0.99067 1.4852 0.68278 1.7931-0.30789 0.30789-0.86705-0.24711-1.2426-1.2333z\"/> \n" \
"      <path id=\"path3313\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m639.12 576.79c-1.9185-2.9279-0.66017-3.3355 1.8238-0.59069 0.97547 1.0779 1.3064 2.1564 0.76437 2.4914-0.52567 0.32488-1.6904-0.53045-2.5882-1.9007z\"/> \n" \
"      <path id=\"path3311\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m379.07 577.37c-0.66191-1.071 1.9166-3.2767 2.799-2.3943 0.36189 0.3619 0.65799 0.98485 0.65799 1.3843 0 1.1213-2.8699 1.9598-3.457 1.01z\"/> \n" \
"      <path id=\"path3309\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m487.31 577.2c1.4356-1.5318 7.2162-2.1608 7.2162-0.78522 0 0.48564-0.7875 0.88912-1.75 0.89663-0.9625 0.008-2.875 0.29373-4.25 0.63605-2.0868 0.51953-2.2878 0.39601-1.2162-0.74746z\"/> \n" \
"      <path id=\"path3307\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m361.03 576.3c-0.33992-0.55-0.14148-1 0.44098-1s1.059 0.45 1.059 1-0.19844 1-0.44098 1-0.7191-0.45-1.059-1z\"/> \n" \
"      <path id=\"path3305\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m392.53 576.91c0-0.21089 1.1114-0.59588 2.4697-0.85555 1.3584-0.25966 2.2318-0.0871 1.941 0.38343-0.51208 0.82856-4.4107 1.2459-4.4107 0.47212z\"/> \n" \
"      <path id=\"path3303\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m409.84 575.86c0.19825-0.5875 1.2215-1.0849 2.2739-1.1054s2.588-0.44435 3.4123-0.94196c1.245-0.75156 1.2886-0.64502 0.25748 0.62922-0.68273 0.84368-1.027 1.7482-0.76516 2.0101 0.2619 0.2619-0.87723 0.47617-2.5314 0.47617-1.6913 0-2.8498-0.46748-2.6471-1.0682z\"/> \n" \
"      <path id=\"path3301\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m379.04 572.31c-0.34546-0.55897-0.26406-1.0232 0.1809-1.0316 0.44496-0.008 0.13402-0.45153-0.69098-0.98469-1.302-0.84143-1.2832-0.9714 0.14301-0.98469 0.90366-0.008 1.8965 0.64528 2.2063 1.4527 0.65889 1.717-0.91574 3.0426-1.8393 1.5483z\"/> \n" \
"      <path id=\"path3299\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m480.61 571.71c0.048-1.165 0.28494-1.4019 0.60416-0.60417 0.28887 0.72187 0.25335 1.5844-0.0789 1.9167-0.3323 0.33229-0.56864-0.25834-0.52522-1.3125z\"/> \n" \
"      <path id=\"path3297\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m463.03 571.3c-1.6304-0.70061-1.6875-0.87242-0.30902-0.92971 0.93004-0.0387 1.9691 0.37971 2.309 0.92971 0.71066 1.1499 0.67591 1.1499-2 0z\"/> \n" \
"      <path id=\"path3295\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m456.53 568.3c0-0.55 1.2375-0.96837 2.75-0.92971 2.4368 0.0623 2.5222 0.16815 0.75 0.92971-2.7314 1.1737-3.5 1.1737-3.5 0z\"/> \n" \
"      <path id=\"path3291\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m371.53 556.86c0-0.24254-0.45-0.7191-1-1.059-0.55-0.33992-1-0.14148-1 0.44098s0.45 1.059 1 1.059 1-0.19844 1-0.44098z\"/> \n" \
"      <path id=\"path3289\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m359.12 549.55c-1.0924-1.0924-1.8415 0.64486-1.0572 2.4518 0.74368 1.7134 0.79759 1.7118 1.2119-0.0351 0.2385-1.0056 0.16886-2.093-0.15476-2.4167z\"/> \n" \
"      <path id=\"path3287\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m361.26 544.31c-0.0889-1.1797-0.5161-1.6218-1.0507-1.0871-0.49552 0.49552-0.59861 1.3902-0.22907 1.9881 1.0067 1.6288 1.447 1.3188 1.2798-0.90096z\"/> \n" \
"      <path id=\"path3285\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m361.84 538.99c-0.47588-0.77-0.797-0.73698-1.0797 0.11101-0.22127 0.66384-0.88342 0.90965-1.4714 0.54624-0.6169-0.38126-0.77871-0.19089-0.38256 0.4501 0.37759 0.61096 1.3445 0.85833 2.1488 0.54972 0.80423-0.30861 1.1574-1.0543 0.78489-1.6571z\"/> \n" \
"      <path id=\"path3283\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m637.09 566.59c-0.54268-1.4252-0.42782-1.5401 0.5598-0.5598 0.68342 0.67834 0.99067 1.4852 0.68278 1.7931-0.30789 0.30789-0.86705-0.24711-1.2426-1.2333z\"/> \n" \
"      <path id=\"path3281\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m344.28 565.61c-0.9625-0.25152-1.75-1.2868-1.75-2.3007 0-1.0138-0.5625-2.0703-1.25-2.3477-0.76593-0.30906-0.59155-0.53496 0.45031-0.58333 0.93517-0.0434 2.1067 0.6472 2.6034 1.5347 0.72339 1.2926 1.317 1.3921 2.984 0.5 2.754-1.4739 2.9712-1.4327 4.1598 0.78818 0.85462 1.5969 0.718 1.8234-0.85196 1.4129-1.0284-0.26893-2.1721 0.00024-2.5417 0.59815-0.69863 1.1304-0.91416 1.153-3.8038 0.39779z\"/> \n" \
"      <path id=\"path3279\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m406.67 564.97c-0.64618-0.7786-0.89177-2.1534-0.54575-3.0551 0.34602-0.90171 0.10694-2.2687-0.5313-3.0377-0.88324-1.0642-0.87305-1.5758 0.0426-2.1418 0.81062-0.50099 0.94108-0.31963 0.39993 0.55596-0.60892 0.98526-0.13562 1.1719 1.9573 0.77181 2.6711-0.51061 2.7418-0.41287 2.1849 3.0187-0.71195 4.3873-1.9524 5.7622-3.5077 3.8881z\"/> \n" \
"      <path id=\"path3277\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m480.53 564.29c0-0.55538 0.9-1.7804 2-2.7222 1.1-0.94185 2-2.2874 2-2.9902 0-0.70277 0.49814-1.2778 1.107-1.2778 0.60884 0 0.83192 0.71681 0.49573 1.5929-0.33619 0.8761-0.88311 2.6761-1.2154 4-0.59012 2.3512-4.3873 3.5606-4.3873 1.3973z\"/> \n" \
"      <path id=\"path3275\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m611.53 564.24c0-0.58246-0.41891-0.80012-0.9309-0.48369-1.463 0.90422-2.4286-1.4989-1.1227-2.7944 0.89419-0.88714 0.99922-0.70903 0.44293 0.75117-0.47286 1.2412-0.35775 1.6845 0.32744 1.261 0.58115-0.35917 1.6127 0.017 2.2924 0.83595 0.85785 1.0336 0.8925 1.489 0.1133 1.489-0.61734-0.00003-1.1224-0.47659-1.1224-1.059z\"/> \n" \
"      <path id=\"path3273\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m575.15 561.23c-0.99759-1.6888-1.5866-3.9394-1.3089-5.0014 0.30773-1.1768 0.10014-1.6807-0.53154-1.2903-0.57165 0.35329-0.83815 0.0456-0.59424-0.68612 0.89576-2.6873 2.7591-1.9818 4.5767 1.7329 1.0268 2.0985 1.7822 4.3779 1.6787 5.0654-0.10349 0.6875-0.24442 1.7-0.31317 2.25-0.23352 1.8682-1.6882 1.0095-3.5076-2.0705z\"/> \n" \
"      <path id=\"path3271\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m563.76 561.3c0.68696-1.1 1.6173-2 2.0675-2 0.45016 0 0.4683-0.5625 0.0403-1.25-0.89337-1.4351-0.5281-5.8724 0.57892-7.0328 0.94358-0.98908 4.0812 0.16163 4.0812 1.4968 0 0.55-0.63776 0.75527-1.4172 0.45615-0.77948-0.29911-1.6535 0.0719-1.9423 0.82449-0.35714 0.93068 0.0962 1.2487 1.4172 0.99427 2.8058-0.54035 2.4418 2.1377-0.55768 4.1031-1.375 0.90093-2.5 2.2613-2.5 3.023 0 0.76174-0.67881 1.385-1.5085 1.385-1.2582 0-1.3012-0.33189-0.25945-2z\"/> \n" \
"      <path id=\"path3269\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m453.61 560.75c-0.0434-0.5775 0.46105-1.59 1.121-2.25 0.93333-0.93333 0.93333-1.2 0-1.2-2.8768 0-0.8583-1.5169 2.2268-1.6735 3.8814-0.19704 5.5591 2.1161 3.2266 4.4487-1.0858 1.0858-1.8993 1.1636-3.4561 0.33045-1.5274-0.81743-2.1613-0.77937-2.5377 0.15238-0.27595 0.68311-0.53725 0.76951-0.58067 0.19201z\"/> \n" \
"      <path id=\"path3267\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m332.32 558.25c-2.5486-2.7965-0.68083-3.0728 2.1925-0.32435 1.6589 1.5868 1.9897 2.3436 1 2.2879-0.81343-0.0458-2.2501-0.92942-3.1925-1.9635z\"/> \n" \
"      <path id=\"path3265\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m554.03 558.54c-1.65-0.85157-3.225-1.8615-3.5-2.2442-0.275-0.38276-1.625-1.2381-3-1.9008-2.3455-1.1304-2.3809-1.1094-0.573 0.33996 1.0598 0.84966 1.6449 1.8269 1.3001 2.1717-0.68139 0.68138-6.7271-5.5166-6.7271-6.8965 0-1.2521 4.3718 0.33273 5.2997 1.9212 0.43983 0.75296 1.4268 1.369 2.1933 1.369 0.76648 0 2.022 0.89714 2.79 1.9936 0.76802 1.0965 1.6213 1.7687 1.8962 1.4939 0.27487-0.27488 1.3168 0.40299 2.3153 1.5064 2.0926 2.3123 2.0258 2.3205-1.9944 0.24568z\"/> \n" \
"      <path id=\"path3263\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m489.28 556.1c1.0899-2.1847 1.7811-2.681 2.5972-1.8649 1.3733 1.3733-0.20908 4.2734-2.5165 4.612-1.4045 0.20613-1.4128-0.077-0.0807-2.7471z\"/> \n" \
"      <path id=\"path3261\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m494.26 558.17c0.67834-0.68342 1.4852-0.99067 1.7931-0.68278 0.30789 0.30789-0.24711 0.86705-1.2333 1.2426-1.4252 0.54268-1.5401 0.42782-0.5598-0.5598z\"/> \n" \
"      <path id=\"path3259\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m633.13 558.46c-0.28327-0.45834 0.12038-0.83334 0.89699-0.83334s1.1803 0.375 0.89699 0.83334c-0.28326 0.45833-0.68691 0.83333-0.89699 0.83333s-0.61373-0.375-0.89699-0.83333z\"/> \n" \
"      <path id=\"path3257\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m500.09 557.39c-0.30822-0.49871 0.34022-0.67122 1.441-0.38337 2.335 0.61061 2.6302 1.2901 0.5604 1.2901-0.79254 0-1.6932-0.40803-2.0014-0.90674z\"/> \n" \
"      <path id=\"path3255\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m628.16 557.5c-0.74465-1.2049 3.8812-5.1265 5.1339-4.3524 0.62395 0.38563 0.82071 1.1393 0.43724 1.6747-1.149 1.6045-5.0697 3.4889-5.5711 2.6776z\"/> \n" \
"      <path id=\"path3253\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m510.99 556.23c-0.36253-0.58659-0.44468-1.281-0.18255-1.5431 0.26212-0.26213 0.74306 0.21781 1.0688 1.0665 0.67618 1.7621 0.0999 2.0721-0.8862 0.4766z\"/> \n" \
"      <path id=\"path3251\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m608.79 555.34c-0.67338-1.0782-0.95848-2.6532-0.63356-3.5 0.34849-0.90815 0.0343-1.5684-0.76621-1.6098-0.74635-0.0386-0.45699-0.45702 0.64301-0.92971 2.7593-1.1857 3.5-1.1732 3.5 0.059 0 0.58246-0.45341 0.77879-1.0076 0.43629-0.60157-0.37179-0.55142 0.37845 0.12446 1.8618 0.63887 1.4022 1.7048 2.2648 2.4468 1.98 0.72314-0.2775 2.1296 0.0115 3.1255 0.64226 1.5654 0.99139 1.4522 1.0714-0.835 0.5908-1.8104-0.38047-2.8266-0.0847-3.2186 0.93688-0.7797 2.0319-1.9162 1.8746-3.3789-0.46759z\"/> \n" \
"      <path id=\"path3247\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m531.55 552.82c-0.78875-0.95039-0.86462-1.5242-0.20152-1.5242 1.2086 0 2.6176 1.8972 1.9241 2.5907-0.2517 0.2517-1.0269-0.22824-1.7226-1.0665z\"/> \n" \
"      <path id=\"path3245\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m663.17 552.8c0.31659-0.825 0.75246-1.5 0.96862-1.5 0.21615 0 0.39301 0.675 0.39301 1.5s-0.43588 1.5-0.96862 1.5c-0.53273 0-0.70959-0.675-0.39301-1.5z\"/> \n" \
"      <path id=\"path3243\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m415.53 550.86c0-0.85746-0.40186-1.559-0.89301-1.559-0.49116 0-1.152-0.675-1.4686-1.5-0.88095-2.2957 0.65162-1.726 2.6131 0.97149 1.0737 1.4766 1.3639 2.6482 0.75 3.0276-0.55081 0.34042-1.0015-0.0826-1.0015-0.94007z\"/> \n" \
"      <path id=\"path3241\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m421.11 549.65c-0.52667-1.3725-0.38034-1.4343 0.89301-0.37756 1.7352 1.4401 1.9158 2.019 0.62988 2.019-0.49116 0-1.1765-0.73865-1.5229-1.6414z\"/> \n" \
"      <path id=\"path3239\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m538.24 550.6c-0.98614-0.25608-2.9874-1.0853-4.4473-1.8427-1.7519-0.90889-3.0521-1.047-3.8243-0.40607-0.77988 0.64725-1.5465 0.51737-2.2992-0.38952-0.86508-1.0424-0.68546-1.7621 0.76804-3.0775 1.0435-0.94431 2.1575-1.2957 2.4757-0.78095 0.31816 0.51478 1.8253 1.2091 3.3493 1.543 1.524 0.33387 3.5793 1.742 4.5675 3.1292 0.98818 1.3872 1.6632 2.4699 1.5 2.4061-0.16317-0.0638-1.1035-0.32552-2.0897-0.5816z\"/> \n" \
"      <path id=\"path3237\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m635.28 550.63c0.6875-0.27741 1.25-1.156 1.25-1.9524 0-0.79643 0.675-1.7071 1.5-2.0236 0.825-0.31659 1.5-0.96334 1.5-1.4372 0-0.4739-0.74882-0.57428-1.664-0.22308-1.1189 0.42936-1.4272 0.25527-0.94099-0.53138 0.39769-0.64345 0.24651-1.1699-0.33595-1.1699s-1.059-0.42331-1.059-0.9407c0-0.51738 1.2375-0.29515 2.75 0.49384 1.5125 0.789 3.2434 1.4373 3.8464 1.4407 1.1883 0.007 7.4036 2.9373 7.4036 3.4909 0 0.18605-0.7875 0.21153-1.75 0.0566-0.9625-0.15491-2.5375 0.12574-3.5 0.62367-1.1227 0.5808-1.75 0.53425-1.75-0.12986 0-1.7173-2.5717-1.1659-4.5 0.96482-0.99549 1.1-2.3027 1.9645-2.905 1.921-0.63208-0.0456-0.56656-0.29218 0.15499-0.58334z\"/> \n" \
"      <path id=\"path3235\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m340.53 548.41c0-0.55 0.45-1.2781 1-1.618 0.55-0.33992 1-0.16803 1 0.38197s-0.45 1.2781-1 1.618c-0.55 0.33992-1 0.16803-1-0.38197z\"/> \n" \
"      <path id=\"path3233\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m574.03 547.3c0.33992-0.55 1.0415-1 1.559-1 0.51754 0 0.94098 0.45 0.94098 1s-0.70156 1-1.559 1c-0.85746 0-1.2809-0.45-0.94098-1z\"/> \n" \
"      <path id=\"path3231\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m610.24 546.56c-0.23697-0.42147-0.72962-2.1163-1.0948-3.7663l-0.66395-3 2.0034 2.5c1.1019 1.375 2.0135 2.8109 2.0257 3.191 0.0345 1.072-1.7872 1.9348-2.2704 1.0753z\"/> \n" \
"      <path id=\"path3229\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m412.03 543.3c-1.747-1.9305-1.7466-2 0.0117-2 1.0019 0 1.5256 0.2961 1.1637 0.65799-0.36189 0.3619-0.15679 1.2619 0.45578 2 1.7586 2.1189 0.37794 1.562-1.6311-0.65799z\"/> \n" \
"      <path id=\"path3227\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m522.93 543.05-1.905-2.25 2.25 1.905c2.1144 1.7902 2.7052 2.595 1.905 2.595-0.18976 0-1.2023-1.0125-2.25-2.25z\"/> \n" \
"      <path id=\"path3225\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m478.11 540.73c-0.79046-0.79046-1.8669-1.4372-2.392-1.4372-1.3232 0-2.2149-3.8654-1.0568-4.5811 0.5189-0.3207 2.6396 1.1646 4.7126 3.3008 3.0167 3.1085 3.4102 3.9109 1.9713 4.0193-0.98883 0.0745-2.4446-0.51131-3.2351-1.3018z\"/> \n" \
"      <path id=\"path3223\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m491.53 540.03c0-0.83141 0.85875-2.5722 1.9083-3.8684l1.9083-2.3567-0.51907 2.7154c-0.60015 3.1394-3.2976 6.0104-3.2976 3.5097z\"/> \n" \
"      <path id=\"path3221\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m407.86 538.8c0-0.825 0.375-1.5 0.83334-1.5 0.45833 0 0.83333 0.675 0.83333 1.5s-0.375 1.5-0.83333 1.5c-0.45834 0-0.83334-0.675-0.83334-1.5z\"/> \n" \
"      <path id=\"path3219\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m519.53 538.26c0-0.44078-0.27314-1.5132-0.60699-2.3832-0.39831-1.038-0.0545-1.5818 1-1.5818 0.88385 0 1.607 0.72314 1.607 1.607 0 0.97588 0.55658 1.3934 1.4172 1.0631 0.77948-0.29911 1.6249-0.003 1.8786 0.65857 0.28821 0.75106-0.61916 1.2466-2.4172 1.32-1.5833 0.0647-2.8786-0.24299-2.8786-0.68376z\"/> \n" \
"      <path id=\"path3215\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m648.53 536.3c-1.213-0.78387-1.0694-0.9723 0.75-0.98469 1.2375-0.008 2.25 0.43469 2.25 0.98469 0 1.2529-1.0612 1.2529-3 0z\"/> \n" \
"      <path id=\"path3213\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m654.75 531.67c-0.11846-1.4312 0.21523-2.2228 0.78786-1.8689 1.1857 0.73282 1.3158 3.1786 0.20548 3.8648-0.43332 0.26781-0.88033-0.63034-0.99334-1.9959z\"/> \n" \
"      <path id=\"path3211\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m520.78 531.74c-0.6875-0.74632-1.232-2.1634-1.21-3.1491 0.029-1.2972 0.46489-1.0082 1.5783 1.0462 1.7151 3.1648 1.5385 4.1729-0.3683 2.1029z\"/> \n" \
"      <path id=\"path3209\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m610.81 532.05c-1.4992-1.9384-2.4422-3.75-1.9522-3.75 0.24421 0 1.1811 1.125 2.0821 2.5 1.6858 2.5729 1.592 3.4764-0.1299 1.25z\"/> \n" \
"      <path id=\"path3207\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m343.09 530.76c-1.0676-0.80751-1.4602-1.4682-0.87244-1.4682 0.58777 0 1.6289 0.675 2.3136 1.5 1.5572 1.8763 1.0673 1.8655-1.4411-0.0318z\"/> \n" \
"      <path id=\"path3205\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m476.88 529.14c-0.0736-1.8009-0.64048-3.4433-1.2597-3.6497-0.61925-0.20641-1.797-1.0464-2.6172-1.8666-1.3218-1.3218-1.2526-1.7948 0.60814-4.1607 2.7598-3.509 10.919-4.0388 10.919-0.709 0 0.72909 0.675 1.5846 1.5 1.9012 2.2187 0.85137 1.8356 3.6384-0.5 3.6384-1.1 0-2-0.49814-2-1.107 0-0.60884-0.62017-0.86901-1.3781-0.57814-0.75798 0.29086-1.8438 0.0632-2.4129-0.50588-0.5691-0.5691-1.557-0.71195-2.1953-0.31745-0.79574 0.49179-0.50877 1.1738 0.91287 2.1696 2.5349 1.7755 2.6186 3.4441 0.31531 6.2885l-1.7581 2.1712z\"/> \n" \
"      <path id=\"path3203\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m498.53 531.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3201\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m440.2 528.63c-0.97014-0.97013-0.8165-3.3333 0.2167-3.3333 0.48585 0 1.1187 0.9 1.4064 2 0.51404 1.9657-0.31208 2.6443-1.6231 1.3333z\"/> \n" \
"      <path id=\"path3199\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m443.96 526.1c0.23673-1.8192 0.46767-3.5327 0.51321-3.8077 0.0455-0.275 0.47076 0.11231 0.94492 0.8607 0.95321 1.5044 0.35803 4.8663-1.0114 5.7126-0.48245 0.29818-0.68351-0.94633-0.44678-2.7656z\"/> \n" \
"      <path id=\"path3197\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m404.56 527.14c-0.0167-0.9136-1.4592-2.8634-3.2055-4.3328-2.3592-1.9851-2.8401-2.8787-1.8715-3.4773 0.86231-0.53294 2.2996 0.32867 4.2458 2.5453 2.3438 2.6694 2.7306 3.7145 1.9019 5.1384-0.92124 1.583-1.0437 1.5974-1.0707 0.12638z\"/> \n" \
"      <path id=\"path3195\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m635.03 527.3c-0.33992-0.55-0.16803-1 0.38197-1s1.2781 0.45 1.618 1c0.33992 0.55 0.16803 1-0.38197 1s-1.2781-0.45-1.618-1z\"/> \n" \
"      <path id=\"path3193\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m341.53 523.92c0-0.20765 0.7875-0.99515 1.75-1.75 1.5861-1.2439 1.6214-1.2085 0.37755 0.37756-1.3064 1.6658-2.1276 2.1955-2.1276 1.3724z\"/> \n" \
"      <path id=\"path3191\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m495.76 522.3c-1.5159-2.4274-1.5774-3.3328-0.16697-2.4612 0.5866 0.36254 1.6392-0.12404 2.3392-1.0813 1.204-1.6466 1.3104-1.6421 1.9724 0.0831 0.44819 1.168 0.0507 2.4727-1.1057 3.629-1.7406 1.7406-1.8498 1.7345-3.039-0.16971z\"/> \n" \
"      <path id=\"path3189\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m441.29 522.63c0.69093-0.27855 0.9589-0.98755 0.59549-1.5756-0.39382-0.63721-0.18776-0.77678 0.51008-0.34549 1.3767 0.85086 0.55006 2.6205-1.1708 2.5065-0.85244-0.0565-0.83389-0.22291 0.0652-0.58541z\"/> \n" \
"      <path id=\"path3187\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m503.76 522.11c0.49828-1.4948 2.7711-2.3179 2.7711-1.0035 0 0.53699-0.7126 1.2498-1.5836 1.584-0.97391 0.37373-1.4311 0.15024-1.1875-0.58051z\"/> \n" \
"      <path id=\"path3185\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m414.53 520.8c0-0.825 0.45-1.5 1-1.5s1 0.675 1 1.5-0.45 1.5-1 1.5-1-0.675-1-1.5z\"/> \n" \
"      <path id=\"path3183\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m334.99 520.23c-0.36253-0.58659-0.38909-1.3366-0.059-1.6667 0.33008-0.33007 0.60014-0.0486 0.60014 0.62555 0 0.67413 0.51953 0.9046 1.1545 0.51216 0.7153-0.44208 0.88306-0.27432 0.44098 0.44098-0.88413 1.4306-1.2964 1.4475-2.1366 0.088z\"/> \n" \
"      <path id=\"path3181\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m340.34 520.61c0.72187-0.28887 1.5844-0.25335 1.9167 0.0789 0.33229 0.33229-0.25834 0.56864-1.3125 0.52522-1.165-0.048-1.4019-0.28494-0.60417-0.60416z\"/> \n" \
"      <path id=\"path3179\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m510.77 520.63c-0.69093-0.27855-1.014-0.89837-0.71798-1.3774 0.64813-1.0487 3.4742-0.11426 3.4742 1.1487 0 0.96323-0.77475 1.0275-2.7562 0.22865z\"/> \n" \
"      <path id=\"path3177\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m446.22 518.35c0.29587-1.1315 0.93547-2.0572 1.4213-2.0572 1.3488 0 1.0529 1.6144-0.53796 2.9347-1.1662 0.9679-1.3248 0.81041-0.88336-0.87756z\"/> \n" \
"      <path id=\"path3175\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m588.22 518.36c1.8074-1.7137 7.3112-2.5306 7.3112-1.085 0 1.3772-1.5925 2.0711-5.4504 2.3749-3.2213 0.25369-3.3757 0.14668-1.8608-1.2898z\"/> \n" \
"      <path id=\"path3173\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m364.53 518.83c0-1.0146 2.9201-2.4671 3.3997-1.6911 0.31778 0.51418-0.31715 1.1689-1.411 1.4549-1.0938 0.28604-1.9888 0.3923-1.9888 0.23614z\"/> \n" \
"      <path id=\"path3171\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m515.78 518.59c-1.2375-0.23836-2.25-1.0771-2.25-1.8638 0-1.7015 3.128-1.9025 4.7268-0.30365 0.83573 0.83573 2.0498 0.55635 4.7-1.0816 4.266-2.6365 4.5968-2.0753 0.83342 1.4143-2.6975 2.5012-3.5436 2.695-8.0102 1.8347z\"/> \n" \
"      <path id=\"path3169\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m443.53 514.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3167\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m448.79 513.14c-0.12125-1.6096 0.12265-1.8535 0.98809-0.98809 0.75682 0.75682 0.81178 1.4864 0.16099 2.1372-0.65079 0.65079-1.043 0.25853-1.1491-1.1491z\"/> \n" \
"      <path id=\"path3165\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m451.86 513.89c0-0.77256 0.6-1.1744 1.3333-0.89301 0.73333 0.28141 1.3333 0.9135 1.3333 1.4047 0 0.49115-0.6 0.89301-1.3333 0.89301-0.73334 0-1.3333-0.6321-1.3333-1.4047z\"/> \n" \
"      <path id=\"path3163\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m612.09 513.59c-0.54268-1.4252-0.42782-1.5401 0.5598-0.5598 0.68342 0.67834 0.99067 1.4852 0.68278 1.7931-0.30789 0.30789-0.86705-0.24711-1.2426-1.2333z\"/> \n" \
"      <path id=\"path3161\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m475.13 513.46c-0.28327-0.45834 0.12038-0.83334 0.89699-0.83334s1.1803 0.375 0.89699 0.83334c-0.28326 0.45833-0.68691 0.83333-0.89699 0.83333s-0.61373-0.375-0.89699-0.83333z\"/> \n" \
"      <path id=\"path3159\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m445.98 511.21c-0.36954-0.59793-0.26752-1.4915 0.2267-1.9857 0.53144-0.53144 0.89858-0.0873 0.89858 1.0871 0 2.2722-0.18501 2.42-1.1253 0.89858z\"/> \n" \
"      <path id=\"path3157\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m510.53 511.47c0-0.45706-1.2375-1.4688-2.75-2.2484-2.827-1.457-4.2078-2.8285-4.2347-4.2058-0.0217-1.1106 3.0086 0.64831 6.1747 3.5842 1.4795 1.3719 3.2795 2.7303 4 3.0187 0.72048 0.28841 0.29746 0.5599-0.94004 0.60332-1.2375 0.0434-2.25-0.29501-2.25-0.75207z\"/> \n" \
"      <path id=\"path3155\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m526.53 509.91c0-0.76085-1.0125-1.6871-2.25-2.0583-2.1861-0.65574-2.1932-0.69967-0.25-1.5464 2.5724-1.1208 3.553-1.199 3.2876-0.26201-0.11685 0.4125 0.34898 1.7625 1.0352 3 1.0525 1.898 1.0075 2.25-0.28755 2.25-0.84435 0-1.5352-0.62252-1.5352-1.3834z\"/> \n" \
"      <path id=\"path3153\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m452.53 509.1c1.7225-2.067 1.1022-2.8604-1.75-2.2382-2.1176 0.46196-2.405 0.35488-1.25-0.46563 1.3333-0.94718 1.3333-1.0804 0-1.1993-0.825-0.0735-1.9374-0.0472-2.4719 0.0587-0.53456 0.10582-0.16955-0.69422 0.81113-1.7779 1.3752-1.5196 1.4831-2.0903 0.47194-2.495-0.85635-0.34275-0.70412-0.55215 0.43887-0.60371 2.0044-0.0904 2.2628 1.0083 0.6228 2.6482-0.83627 0.83627-0.0729 1.4111 2.9578 2.2272 4.3828 1.1802 6.4827 3.0456 3.4284 3.0456-1.0225 0-2.399 0.45-3.059 1-0.87273 0.72727-0.92727 0.67273-0.2-0.2z\"/> \n" \
"      <path id=\"path3151\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m483.92 508.73c0.33624-0.87622 0.61134-1.8079 0.61134-2.0704 0-0.26248 0.45-0.19912 1 0.1408 1.4842 0.91728 1.2133 2.2042-0.61134 2.9044-1.1794 0.45257-1.4474 0.19124-1-0.9748z\"/> \n" \
"      <path id=\"path3149\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m610.1 508.63c-0.35188-0.91697-0.27255-2.0344 0.17628-2.4833 0.44884-0.44884 0.90855 0.30141 1.0216 1.6672 0.23735 2.8678-0.27626 3.2177-1.1979 0.81606z\"/> \n" \
"      <path id=\"path3147\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m605.3 508.13c0.5811-0.5811 1.6468-0.85979 2.3683-0.61931 0.74895 0.24965 0.29565 0.70294-1.0566 1.0566-1.6634 0.43497-2.0538 0.30483-1.3117-0.43724z\"/> \n" \
"      <path id=\"path3145\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m443.53 507.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3143\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m363.03 506.3c0.33992-0.55 1.0415-1 1.559-1 0.51754 0 0.94098 0.45 0.94098 1s-0.70156 1-1.559 1c-0.85746 0-1.2809-0.45-0.94098-1z\"/> \n" \
"      <path id=\"path3141\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m369.33 504.54c-0.49518-1.809-0.13242-2.3758 1.837-2.8701 1.3497-0.33876 2.7509-0.31903 3.1138 0.0438 0.36287 0.36286-0.30899 0.91309-1.493 1.2227-1.184 0.30963-2.3076 1.3043-2.4968 2.2103-0.25801 1.2356-0.49824 1.0839-0.96103-0.6068z\"/> \n" \
"      <path id=\"path3139\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m431.53 505.24c0-0.58246 0.45-0.7809 1-0.44098s1 0.81648 1 1.059c0 0.24254-0.45 0.44098-1 0.44098s-1-0.47656-1-1.059z\"/> \n" \
"      <path id=\"path3137\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m359.53 503.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3135\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m526.53 502.3c0-1.8667 0.26667-2.1333 1.2-1.2 0.93333 0.93333 0.93333 1.4667 0 2.4-0.93333 0.93333-1.2 0.66667-1.2-1.2z\"/> \n" \
"      <path id=\"path3133\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m414.94 501.87c-1.2212-0.85533-2.5733-1.0922-3.3818-0.59252-0.74094 0.45793-1.9954 0.58385-2.7877 0.27981-1.3074-0.50168-6.431-5.1235-5.9454-5.3631 0.1125-0.0555 2.0046-0.1863 4.2046-0.29065 3.4131-0.16189 4.5638 0.36647 7.8425 3.6009 3.8497 3.7978 3.8853 5.0394 0.0678 2.3655z\"/> \n" \
"      <path id=\"path3131\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m516.62 501.91c-0.71013-0.85565-0.80998-1.6706-0.24728-2.0184 0.51907-0.32081 1.2265 0.15354 1.5721 1.0541 0.84811 2.2101 0.13807 2.727-1.3248 0.96432z\"/> \n" \
"      <path id=\"path3129\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m375.54 501.55c0.0387-1.8948 1.8165-2.7509 5.7347-2.7618 5.4951-0.0153 5.4148 0.98112-0.19282 2.3931-5.2601 1.3245-5.5618 1.3446-5.5419 0.36871z\"/> \n" \
"      <path id=\"path3127\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m564.44 500.49c-1.718-1.8313-3.757-5.1638-2.4163-3.9492 0.45007 0.40773 1.411 0.24944 2.1354-0.35175 1.0103-0.83849 1.5932-0.48709 2.5025 1.5087 0.65199 1.431 1.5898 2.6018 2.0839 2.6018 0.49418 0 0.62039 0.45 0.28047 1-0.89955 1.4555-2.771 1.1252-4.586-0.80943z\"/> \n" \
"      <path id=\"path3125\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m356.53 500.3c0-0.55 0.675-1 1.5-1s1.5 0.45 1.5 1-0.675 1-1.5 1-1.5-0.45-1.5-1z\"/> \n" \
"      <path id=\"path3123\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m419.4 499.55c-1.2439-1.5861-1.2085-1.6214 0.37756-0.37756 0.9625 0.75485 1.75 1.5424 1.75 1.75 0 0.82304-0.82119 0.29331-2.1276-1.3724z\"/> \n" \
"      <path id=\"path3121\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m347.34 499.49c-1.8199-0.34028-3.3117-3.1205-1.7804-3.3181 0.53274-0.0687 1.5311-0.21168 2.2186-0.31763 1.4307-0.22047 6.75 2.5493 6.75 3.5147 0 0.63777-4.059 0.70609-7.1882 0.12098z\"/> \n" \
"      <path id=\"path3119\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m450.39 498.49c0.961-0.67331 1.0274-1.1162 0.225-1.5011-0.73603-0.35312-0.74951-0.47539-0.0382-0.34605 1.537 0.27946 1.3766 2.0267-0.225 2.4511-1.0458 0.27715-1.0378 0.14989 0.0382-0.60395z\"/> \n" \
"      <path id=\"path3117\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m528.17 497.8c0.31659-0.825 0.97746-1.5 1.4686-1.5 0.49115 0 0.89301 0.675 0.89301 1.5s-0.66088 1.5-1.4686 1.5c-0.89459 0-1.2436-0.58629-0.89301-1.5z\"/> \n" \
"      <path id=\"path3115\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m479.53 497.3c0-0.55 0.45-1 1-1s1 0.45 1 1-0.45 1-1 1-1-0.45-1-1z\"/> \n" \
"      <path id=\"path3113\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m648.53 497.42c0-0.48265 0.74867-1.4952 1.6637-2.25 1.5086-1.2445 1.5519-1.1627 0.46482 0.87756-1.2399 2.327-2.1285 2.8999-2.1285 1.3724z\"/> \n" \
"      <path id=\"path3111\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m483.24 495.3c-0.28766-1.1-0.11514-2 0.38337-2s0.90638 0.9 0.90638 2-0.17252 2-0.38337 2-0.61872-0.9-0.90638-2z\"/> \n" \
"      <path id=\"path3109\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m486.86 495.84c0-0.80081 0.38234-1.2197 0.84965-0.9309 0.4673 0.28881 0.59075 0.94401 0.27431 1.456-0.80862 1.3084-1.124 1.1611-1.124-0.52511z\"/> \n" \
"      <path id=\"path3107\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m490.77 496.05c-0.55003-0.6875-1.276-2.375-1.6132-3.75-0.33724-1.375-0.35481-1.9375-0.0391-1.25 0.31576 0.6875 1.2116 1.25 1.9908 1.25 0.84445 0 1.4167 1.0098 1.4167 2.5 0 2.8187-0.31862 3.0456-1.7552 1.25z\"/> \n" \
"      <path id=\"path3105\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m397.77 495.63c-0.69093-0.27855-1.0211-0.88693-0.73369-1.352 0.2874-0.46502 0.0652-1.1282-0.49377-1.4736-0.55897-0.34546-1.0163-0.19137-1.0163 0.34242 0 0.82383-0.88746 0.86648-4 0.19221-0.275-0.0596 0.33236-0.73892 1.3497-1.5096 2.2791-1.7267 6.227-0.2619 6.9719 2.5868 0.50001 1.9121 0.15465 2.1138-2.0779 1.2137z\"/> \n" \
"      <path id=\"path3103\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m422.53 492.3c-0.90129-0.58246-1.0246-0.97549-0.30902-0.98469 0.65504-0.008 1.4691 0.43469 1.809 0.98469 0.7673 1.2415 0.42112 1.2415-1.5 0z\"/> \n" \
"      <path id=\"path3101\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m480.28 489.81c-2.7815-2.4481-3.5829-4.5164-1.75-4.5164 0.55 0 1.0449-1.9125 1.0997-4.25 0.082-3.4973 0.23003-3.8072 0.83561-1.75 0.80691 2.7411 0.75013 3.6122-0.41076 6.3009-0.54191 1.2551-0.0803 2.5431 1.5233 4.25 2.9295 3.1183 2.2642 3.1006-1.2978-0.0345z\"/> \n" \
"      <path id=\"path3099\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m369.34 488.61c0.72187-0.28887 1.5844-0.25335 1.9167 0.0789 0.33229 0.3323-0.25834 0.56864-1.3125 0.52522-1.165-0.048-1.4019-0.28494-0.60417-0.60416z\"/> \n" \
"      <path id=\"path3097\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m487.49 487.13c-1.1451-2.2329-1.1183-2.2597 0.60945-0.60946 0.99401 0.94941 1.533 2.0004 1.1978 2.3356s-1.1485-0.44159-1.8073-1.7262z\"/> \n" \
"      <path id=\"path3095\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m533.26 487.36c-0.28877-1.1043 0.0768-2.1591 0.85134-2.4563 1.6691-0.64049 2.7939 0.97906 2.0415 2.9396-0.78784 2.0531-2.2954 1.8012-2.8929-0.48331z\"/> \n" \
"      <path id=\"path3093\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m537.54 487.73c-0.008-2.522 5.4537-8.8818 6.8737-8.0042 0.56072 0.34655 1.5079-0.28252 2.1048-1.3979 1.2543-2.3436 3.015-2.6913 3.015-0.59539 0 0.78794-0.88752 1.7143-1.9723 2.0586-1.0848 0.34428-3.7818 2.7371-5.9936 5.3174-3.2279 3.7658-4.0225 4.283-4.0277 2.6215z\"/> \n" \
"      <path id=\"path3091\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m410.69 484.99c-0.62777-0.75642-0.89426-1.6225-0.59218-1.9245 0.92527-0.92527 4.5383 0.41866 4.1618 1.5481-0.56206 1.6862-2.3281 1.8724-3.5696 0.37647z\"/> \n" \
"      <path id=\"path3089\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m493.26 481.38c-0.43497-1.6634-0.30483-2.0538 0.43724-1.3117 0.5811 0.5811 0.85979 1.6468 0.61931 2.3683-0.24965 0.74894-0.70294 0.29565-1.0566-1.0566z\"/> \n" \
"      <path id=\"path3087\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m384.96 480.41c0-1.1452 0.51517-1.6887 1.3112-1.3832 0.99906 0.38338 1.0379 0.83248 0.16327 1.8864-1.4583 1.7572-1.4745 1.7516-1.4745-0.50317z\"/> \n" \
"      <path id=\"path3085\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m553 481.25c-0.95021-1.5375 0.35135-2.5295 1.6348-1.246 0.71818 0.71818 0.73543 1.2775 0.0524 1.6996-0.55992 0.34605-1.3192 0.1419-1.6873-0.45366z\"/> \n" \
"      <path id=\"path3083\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m592.53 479.3c0-0.55 0.70156-1 1.559-1 0.85746 0 1.2809 0.45 0.94098 1s-1.0415 1-1.559 1c-0.51754 0-0.94098-0.45-0.94098-1z\"/> \n" \
"      <path id=\"path3081\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m494.53 476.86c0-0.85745 0.45-1.559 1-1.559s1 0.42344 1 0.94098-0.45 1.2191-1 1.559c-0.55 0.33992-1-0.0835-1-0.94099z\"/> \n" \
"      <path id=\"path3079\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m476.53 474.91c0-0.76085 0.94142-1.6296 2.092-1.9304 2.0075-0.52496 2.0214-0.46903 0.34501 1.3834-2.0785 2.2967-2.4371 2.3772-2.4371 0.54708z\"/> \n" \
"      <path id=\"path3077\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m410.22 473.55c-0.23459-0.4125-0.45799-2.2808-0.49645-4.1517-0.0595-2.8964 0.13382-3.1935 1.3017-2 0.7544 0.77095 1.675 2.6392 2.0458 4.1517 0.51653 2.1068 0.31185 2.75-0.87517 2.75-0.85217 0-1.7413-0.3375-1.9759-0.75z\"/> \n" \
"      <path id=\"path3075\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m454.53 471.24c0-0.58246 0.45-0.7809 1-0.44098s1 0.81647 1 1.059c0 0.24255-0.45 0.44099-1 0.44099s-1-0.47656-1-1.059z\"/> \n" \
"      <path id=\"path3069\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m572.19 453.86c-0.30295-0.78946-0.0136-1.6539 0.64301-1.921 0.6566-0.26711 0.40632-0.52119-0.55618-0.56461-0.9625-0.0434-1.75 0.10925-1.75 0.33927 0 0.96358 1.2529 3.5818 1.714 3.5818 0.275 0 0.25213-0.64593-0.0508-1.4354z\"/> \n" \
"      <path id=\"path3067\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m382.53 456.92c0-0.20765 0.7875-0.99515 1.75-1.75 1.5861-1.2439 1.6214-1.2085 0.37755 0.37756-1.3064 1.6658-2.1276 2.1955-2.1276 1.3724z\"/> \n" \
"      <path id=\"path3065\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m393.53 451.3c0-0.55 0.47656-1 1.059-1 0.58246 0 0.7809 0.45 0.44098 1s-0.81648 1-1.059 1c-0.24254 0-0.44098-0.45-0.44098-1z\"/> \n" \
"      <path id=\"path3063\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m596.8 444.29c0.0776-1.0301 1.0403-2.108 2.1393-2.3954 2.8666-0.74963 2.9011-0.23688 0.14528 2.1592-2.274 1.9772-2.4168 1.992-2.2846 0.23618z\"/> \n" \
"      <path id=\"path3061\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m381.03 444.3c-0.731-1.1828 0.24752-1.1828 3 0 1.9282 0.82859 1.9214 0.86195-0.19098 0.92972-1.205 0.0387-2.4691-0.37972-2.809-0.92972z\"/> \n" \
"      <path id=\"path3059\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m518.97 442.74c-1.864-1.4934-1.8518-1.5119 0.30887-0.46482 1.2375 0.59969 2.25 1.2995 2.25 1.5552 0 0.76522-0.51861 0.54423-2.5589-1.0904z\"/> \n" \
"      <path id=\"path3057\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m399.53 440.24c0-0.58245 0.45-0.7809 1-0.44098s1 0.81648 1 1.059c0 0.24254-0.45 0.44098-1 0.44098s-1-0.47656-1-1.059z\"/> \n" \
"      <path id=\"path3055\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m513.17 438.87c-0.97145-1.4826-1.626-3.6384-1.4545-4.7906 0.30155-2.026 0.41868-2.0047 3.5618 0.64803 3.4729 2.931 4.1291 4.5651 1.8333 4.5651-0.77916 0-1.5872 0.51145-1.7955 1.1366-0.20837 0.62511-1.1737-0.0765-2.1451-1.5591z\"/> \n" \
"      <path id=\"path3053\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m431.53 439.3c-1.2927-0.8354-1.2663-0.97149 0.19098-0.98469 0.93004-0.008 1.9691 0.43469 2.309 0.98469 0.78218 1.2656-0.54163 1.2656-2.5 0z\"/> \n" \
"      <path id=\"path3051\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m612.66 439.3c-0.15227-2.2685 1.469-4.4558 2.3027-3.1068 0.37621 0.60872 0.24045 1.1068-0.30168 1.1068s-1.1915 0.7875-1.443 1.75c-0.32404 1.24-0.48667 1.3128-0.55802 0.25z\"/> \n" \
"      <path id=\"path3049\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m398.99 437.23c-0.36253-0.58659-0.44468-1.281-0.18255-1.5431 0.26212-0.26213 0.74306 0.21781 1.0688 1.0665 0.67618 1.7621 0.0999 2.0721-0.8862 0.4766z\"/> \n" \
"      <path id=\"path3047\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m584.18 437.54c-0.25869-0.41856 0.11858-1.5664 0.83836-2.5508 1.1994-1.6403 1.2964-1.5769 1.1613 0.76032-0.14403 2.4923-1.0594 3.3119-1.9997 1.7905z\"/> \n" \
"      <path id=\"path3045\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m416.61 435.71c0.048-1.1649 0.28494-1.4019 0.60416-0.60417 0.28887 0.72188 0.25335 1.5844-0.0789 1.9167-0.3323 0.33229-0.56864-0.25834-0.52522-1.3125z\"/> \n" \
"      <path id=\"path3043\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m590.67 431.93c0.70581-1.5749 1.465-2.3182 1.6872-1.6518 0.22214 0.6664-0.35535 1.9549-1.2833 2.8634-1.5794 1.5462-1.6052 1.4688-0.40388-1.2116z\"/> \n" \
"      <path id=\"path3041\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m402.96 429.6c0.14577-0.9932 0.59714-1.7308 1.003-1.6391 1.5186 0.34296 1.5766 1.0841 0.1758 2.2466-1.1742 0.97451-1.3944 0.86105-1.1788-0.6075z\"/> \n" \
"      <path id=\"path3039\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m593.53 430.26c0-0.53274 0.675-0.96862 1.5-0.96862s1.5 0.17686 1.5 0.39301c0 0.21616-0.675 0.65204-1.5 0.96862s-1.5 0.13973-1.5-0.39301z\"/> \n" \
"      <path id=\"path3037\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m592.53 424.24c0-0.58245 0.45-0.7809 1-0.44098s1 0.81648 1 1.059c0 0.24254-0.45 0.44098-1 0.44098s-1-0.47656-1-1.059z\"/> \n" \
"      <path id=\"path3035\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m564.1 422.41c-0.24166-0.39101 0.64155-0.71093 1.9627-0.71093 1.3211 0 2.179 0.22303 1.9065 0.49561-0.8286 0.82861-3.4016 0.9718-3.8692 0.21532z\"/> \n" \
"      <path id=\"path3033\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m546.44 421.01c-1.88-1.4427-2.1089-4.3849-0.34123-4.3849 0.68138 0 0.983 0.6645 0.67085 1.478-0.31218 0.81353 0.26615 2.0873 1.2865 2.8333 1.0195 0.74546 1.4301 1.3411 0.91248 1.3236s-1.6555-0.57999-2.5286-1.25z\"/> \n" \
"      <path id=\"path3031\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m592.14 420.73c-0.61835-1.6114 0.22579-1.8246 2.2197-0.56071 1.0851 0.68783 1.0539 0.95296-0.16725 1.4216-0.82559 0.31681-1.7492-0.0706-2.0525-0.86084z\"/> \n" \
"      <path id=\"path3029\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m524.2 412.63c-1.1506-1.1506-0.72824-2.3333 0.83333-2.3333 0.825 0 1.5 0.675 1.5 1.5 0 1.5616-1.1827 1.984-2.3333 0.83333z\"/> \n" \
"      <path id=\"path3027\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m542.54 412.55c0.008-0.4125 0.45153-1.425 0.98469-2.25 0.78387-1.213 0.9723-1.0694 0.98469 0.75 0.008 1.2375-0.43469 2.25-0.98469 2.25s-0.99311-0.3375-0.98469-0.75z\"/> \n" \
"      <path id=\"path3025\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m461.6 408.89c-0.8213-0.9896-0.85047-1.6091-0.0977-2.0743 0.59033-0.36484 0.94968-0.12366 0.79856 0.53597-0.15113 0.65964 0.21272 1.3806 0.80855 1.6021 0.59584 0.22153 1.0833-0.2782 1.0833-1.1105 0-0.83231-0.84697-1.7821-1.8822-2.1107-1.0376-0.32931-1.7593-1.3454-1.6083-2.2645 0.15063-0.91691-0.0758-2.2245-0.50312-2.9057-0.52411-0.83546-0.29706-1.0544 0.69764-0.67268 0.81104 0.31122 2.4576-0.41715 3.6591-1.6186 2.0405-2.0405 2.2927-2.0742 3.8273-0.51099 0.90357 0.92041 1.1929 1.5903 0.64286 1.4887-2.2376-0.4134-2.6734 0.14029-1.3724 1.744 0.93255 1.1497 0.9718 1.4513 0.12244 0.94099-1.1318-0.67998-1.7847 1.0824-1.3549 3.6576 0.20551 1.2312-1.8682 4.7095-2.8078 4.7095-0.4633 0-1.3693-0.63493-2.0134-1.411z\"/> \n" \
"      <path id=\"path3023\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m473.93 409.05c-0.39564-0.6875-0.36633-0.93163 0.0651-0.54252 0.43145 0.38911 1.6553-0.28589 2.7197-1.5l1.9352-2.2075-1.6744 2.75c-1.9089 3.1352-2.0614 3.2103-3.0456 1.5z\"/> \n" \
"      <path id=\"path3021\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m496.92 408.47c0.3481-0.56324-0.16009-1.1888-1.1293-1.3902-1.4899-0.30955-1.4316-0.45684 0.37706-0.95312 3.3299-0.91367 5.1039 0.69976 2.3751 2.1602-1.2509 0.66947-1.9738 0.75107-1.6228 0.18316z\"/> \n" \
"      <path id=\"path3019\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m576.04 408.31c-0.35034-0.56686 0.0511-0.73451 0.94098-0.39301 1.7324 0.66479 2.0494 1.3816 0.61096 1.3816-0.51754 0-1.2159-0.44484-1.5519-0.98854z\"/> \n" \
"      <path id=\"path3017\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m488.72 407.22c0.19708-0.59125 0.78583-1.075 1.3083-1.075 0.5225 0 1.1112 0.48375 1.3083 1.075 0.19709 0.59125-0.39166 1.075-1.3083 1.075-0.91667 0-1.5054-0.48375-1.3083-1.075z\"/> \n" \
"      <path id=\"path3015\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m491.19 405.47c-1.6238-1.7942-1.3302-3.175 0.67498-3.175 0.55 0 0.70391 0.2961 0.34201 0.658-0.36189 0.36189-0.14777 1.2728 0.47584 2.0242 1.7546 2.1142 0.38402 2.5667-1.4928 0.49282z\"/> \n" \
"      <path id=\"path3013\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m542.03 405.3c-0.33992-0.55-0.16803-1 0.38197-1s1.2781 0.45 1.618 1c0.33992 0.55 0.16803 1-0.38197 1s-1.2781-0.45-1.618-1z\"/> \n" \
"      <path id=\"path3011\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m550.23 403.63c0.38053-0.99163 0.23315-1.4135-0.36471-1.044-0.5518 0.34103-1.0033-0.028-1.0033-0.82008 0-0.98994 0.36742-1.1352 1.1754-0.46469 0.64643 0.5365 1.5324 0.64186 1.9688 0.23413s0.26666 0.27117-0.37719 1.5087c-1.3611 2.6161-2.3344 3.0238-1.399 0.58596z\"/> \n" \
"      <path id=\"path3009\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m458.53 403.4c0-0.67412-0.51953-0.90459-1.1545-0.51215-0.74421 0.45994-0.88179 0.27226-0.38713-0.52812 0.54526-0.88225 1.0772-0.9318 1.8378-0.17117 0.58876 0.58875 0.76297 1.378 0.38713 1.7538-0.37583 0.37584-0.68333 0.13178-0.68333-0.54235z\"/> \n" \
"      <path id=\"path3007\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m472.99 402.23c-0.37508-0.60689-0.11516-1.6267 0.57761-2.2663 0.95749-0.88398 1.103-0.88357 0.60663 0.002-0.35911 0.64053-0.10979 1.3456 0.55405 1.5669 0.88044 0.29348 0.90082 0.59154 0.0753 1.1017-0.6224 0.38467-1.4385 0.20285-1.8136-0.40405z\"/> \n" \
"      <path id=\"path3005\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m543.09 402c0.37553-0.98622 0.93469-1.5412 1.2426-1.2333 0.30789 0.30789 0.00064 1.1148-0.68278 1.7931-0.98762 0.98027-1.1025 0.8654-0.5598-0.55979z\"/> \n" \
"      <path id=\"path3001\" style=\"fill:#cc6633\" inkscape:connector-curvature=\"0\" d=\"m477.07 400.36c-0.36254-0.5866-0.1275-1.0665 0.52231-1.0665 0.84825 0 0.88103-0.36199 0.11622-1.2835-0.70891-0.85419-0.73593-1.7741-0.0808-2.75 0.79043-1.1774 0.92699-1.0722 0.6928 0.53353-0.18938 1.2984 0.20617 1.8925 1.1276 1.6936 1.2143-0.26216 1.219-0.0455 0.033 1.5-0.76247 0.99353-1.4686 1.9489-1.5691 2.123-0.10055 0.17409-0.47945-0.16341-0.84198-0.75z\"/> \n" \
"    </g> \n" \
"    <path id=\"path5319\" d=\"m600 172.22c-2.6048-1.191-3.6928 3.9563-5.9375 1.3125-2.0783 0.0122-3.2715-0.54209-5.0625-1.25-3.1078-0.26369-4.9202 3.9068-7.6562 2.0625-4.5215-1.447-8.0381 4.2201-4.2188 7.0938-1.498 2.7248 1.4782 4.3127 1.9375 6.9375 3.7771 2.7808 6.7593-3.2766 6.3438-6.0938 1.4516 0.23363 4.2373-1.962 4.2188-1.8125-0.74552 2.7046 2.5546 2.9891-0.34375 4.8125-2.0864 4.0419 3.6994 4.6598 5.0625 7.2812 0.6973 4.0542 1.2048 8.2977 3.4062 11.875-0.20358 2.2891-0.406 5.0227-3.3438 4.625-3.8892 0.18184-6.8757 7.0176-1.375 6.4688 4.9828 3.4675 10.643 6.3361 16.812 6.0625 8.8594-0.68524 15.812-6.7397 20.594-13.875 1.0917-2.7249 3.5378-3.919 4.3438-6.7188 5.3891-6.3253 4.6361-16.779-1.6562-22.125 0.35144-4.5053-5.1364-4.5385-8.25-3.7812-3.2225 1.9246-1.4049 6.3976 0.4375 8.125-0.0421 2.5262-4.2986-1.9855-6.0938-1.3438-4.2391-0.8647-8.0088-2.5122-10.312-6.125-2.5342 0.26826-2.3684-3.9635-5.0312-2.6875-1.2303-0.45085-2.5421-1.5725-3.875-0.84375zm-9.625 6.7188c-1.2592 0.19967-0.55115 0.0423 0 0z\" style=\"filter:url(#filter5355);fill:#996633\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path4982\" d=\"m603.67 218.4c-0.5958-0.5958-1.0833-0.75912-1.0833-0.36295 0 0.93045-7.6627-2.9656-8.5012-4.3223-0.3503-0.56683-1.1684-0.71188-1.8179-0.32233-0.6727 0.40349-0.5903-0.0198 0.1916-0.98369 0.7548-0.93058 2.6939-1.692 4.309-1.692s2.6841-0.40844 2.3756-0.90765c-0.3085-0.4992-0.1719-1.9594 0.3036-3.2448 0.6061-1.6385 0.3972-3.0505-0.6988-4.7233-0.8599-1.3124-1.6432-3.7897-1.7408-5.5052-0.2593-4.5603-1.3848-6.6548-4.1387-7.7018-3.1715-1.2058-2.4402-3.3245 1.2948-3.7509 1.6075-0.18352 3.5978-0.92999 4.4228-1.6588 0.825-0.72884 2.5364-1.4787 3.8031-1.6663 2.1691-0.32135 2.2091-0.45743 0.6871-2.3412-0.9813-1.2146-1.8017-1.5648-2.089-0.89181-0.2603 0.6095-1.1332 1.9595-1.9397 3-1.3524 1.7448-1.4169 1.7504-0.8304 0.0726 0.6003-1.7169 0.4317-1.7338-2.9975-0.30103-3.2389 1.3533-5.1914 0.70107-2.6336-0.87975 1.6593-1.0255 1.1325-2.3232-1.25-3.0794-2.5722-0.81641-3.3675-0.49169-2.9756 1.215 0.1509 0.65711-1.1043 1.4976-2.7894 1.8677-2.4435 0.53668-2.9408 1.0606-2.456 2.5879 0.3464 1.0916-0.025 2.5476-0.8635 3.3862-1.295 1.295-1.5431 1.2838-2.0716-0.0933-0.3302-0.8605-0.3044-2.0435 0.057-2.6288 0.4178-0.67592 0.1745-0.76558-0.6667-0.24571-0.9863 0.60957-1.1447 0.35029-0.6206-1.0156 0.3871-1.0088 0.2746-2.0993-0.2499-2.4235-2.1556-1.3322-1.5486-3.3244 1.0588-3.4752 1.47-0.085 2.456 0.19625 2.191 0.62506-0.265 0.4288 0.2197 0.77964 1.0771 0.77964 0.8575 0 1.5591-0.37777 1.5591-0.83948 0-0.46172 1.125-1.3521 2.5-1.9786 1.7848-0.81321 2.5-0.82577 2.5-0.0439 0 0.60286 0.899 0.86008 2 0.57218 1.1-0.28766 2-0.11796 2 0.3771 0 1.317 4.3236 0.44164 4.7944-0.97068 0.3045-0.91343 0.781-0.89155 1.9948 0.0916 1.3163 1.0663 1.4528 1.0562 0.782-0.058-0.6483-1.0769-0.4105-1.1346 1.1766-0.28518 1.0941 0.58552 2.2105 0.84329 2.4809 0.57283 0.2705-0.27047 0.4422 0.71571 0.3815 2.1915-0.062 1.496 0.5134 2.8957 1.2991 3.1634 0.9434 0.32137 1.2141-0.0286 0.8189-1.0586-0.9626-2.5085 0.4964-2.9178 1.7052-0.47829 0.7601 1.534 3.0033 2.812 7.0892 4.0389 7.4039 2.2232 8.5705 2.8438 9.9105 5.272 0.5868 1.0632 1.462 2.2204 1.945 2.5714 0.4829 0.351 0.6004 1.0875 0.261 1.6367-0.3394 0.54917 0.093 1.5878 0.9608 2.308 1.3528 1.1227 1.5295 1.0319 1.239-0.6367-0.2249-1.2914 0.1657-1.8572 1.1611-1.6817 1.0741 0.18939 0.9675-0.15187-0.3755-1.202-1.1134-0.87065-1.6259-2.1165-1.2614-3.0664 0.356-0.92781 0.1986-1.3433-0.3746-0.98903-0.5437 0.33598-0.9886-0.1172-0.9886-1.0071 0-0.88992-0.385-1.3801-0.8555-1.0893-0.4706 0.29082-0.6395-0.6013-0.3755-1.9825 0.3216-1.6824 0.066-2.415-0.7735-2.2197-0.6894 0.16032-1.3452-0.721-1.4574-1.9585-0.1439-1.5891 0.3345-2.25 1.6291-2.25 1.008 0 1.8328 0.45 1.8328 1s0.4766 1 1.0591 1c0.5824 0 0.7379-0.51953 0.3454-1.1545-0.4456-0.72104-0.2739-0.88282 0.4573-0.4309 0.644 0.39798 0.9125 1.1417 0.5967 1.6527-0.3159 0.51099 0.6294 1.9644 2.1004 3.2297 3.7699 3.2427 4.3679 11.594 1.1532 16.104-1.2149 1.7044-2.2301 3.5489-2.256 4.0989-0.026 0.55-0.6225 0.87635-1.3258 0.72522-0.7034-0.15112-1.0131 0.15528-0.6883 0.68089 0.3249 0.52562-0.4292 2.0882-1.6757 3.4723-1.2464 1.3842-3.375 3.9475-4.7301 5.6963-4.2044 5.4259-16.64 8.9214-19.953 5.6085z\" style=\"fill:url(#radialGradient6351)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5359\" d=\"m607.03-0.78125c-2.9383 0.86643-5.3801 4.0214-2.8125 6.9062 1.6159 1.6002-2.6684 2.2629-0.6875-0.3125 0.21428-3.1618-3.6555-2.8682-5.3125-1.7188-1.8474-2.3506-5.395-0.82215-4.6562 2.0938-2.5506 1.9813-5.1723 6.0294-2.2812 8.375-2.507 0.94784-2.3355 6.3959-5.2812 4.2812-3.7821-0.24912-1.534 3.4769-1.625 4.8438-2.0002 1.7822 0.68191 4.1566-0.125 5.375-2.1064 0.73259-3.7914 2.3185-3.4062 4.6562-2.5113 3.1416 1.425 5.9108 0.125 9.125 0.30917 3.6387 4.6178 5.3207 4.1875 9.1562 1.4176 2.2218 3.3233 8.7751 5.8125 5.0625 3.0323-2.0657 6.5735-8.9296 10.188-3.7812 6.8002 6.6944 1.1207-2.6787 3.8125-4.3438 1.7566-0.34642 3.4581-1.0974 2.625 1.2812 1.7976 3.4826 6.5 4.0942 9.7812 4.4375 3.3099 3.1572 5.4923-2.3248 3.3125-4.9375 2.7868-0.12503 2.2325-3.7243 4.9688-3.875 3.593-2.0501 0.79649-6.3184-2.5-4.8125-1.0102-1.4792-4.3576-0.88065-1.4375-2.4062 5.1085-6.2061-1.0193-14.197-4.25-19.719-1.6537-2.9152 4.7364-0.63902 4.125-4.25 1.9885-3.1972-0.11123-6.2914-3.5625-6.4375-2.0306-1.8849-5.251-2.6905-5.1562-5.9062-1.1094-1.8609-3.6171-3.7942-5.8438-3.0938z\" style=\"filter:url(#filter5395);fill:#b36633\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path4654\" d=\"m586.03 54.252c-0.8571-1.308-1.4202-2.9794-1.2515-3.7141 0.1687-0.73478-0.7262-2.369-1.9888-3.6316-1.5519-1.5519-2.0903-2.9426-1.6619-4.2925 0.3486-1.0983 0.1154-2.6215-0.5182-3.3849-0.8149-0.98186-0.8494-1.9536-0.1178-3.3205 0.5688-1.0628 0.7911-2.1755 0.494-2.4726s0.3451-0.82117 1.4272-1.1646 2.2348-1.622 2.5617-2.8413c0.8787-3.2777 0.7201-4.4166-0.3784-2.7169-0.5824 0.90129-0.9755 1.0246-0.9847 0.30902-0.01-0.65504 0.4566-1.4826 1.0333-1.839 0.7046-0.43549 0.6226-1.1645-0.25-2.2227-1.1537-1.399-1.046-1.4401 0.9657-0.36815 1.2454 0.6636 2.1864 0.84977 2.0913 0.41372-0.3279-1.502 1.5171-4.796 3.473-6.2007 1.8922-1.359 1.8966-1.4544 0.1271-2.7483-1.7451-1.276-1.7033-1.476 0.8696-4.1615 1.4865-1.5516 2.3589-3.1995 1.9387-3.6621-0.4202-0.46255-0.1941-0.51275 0.5023-0.11157 0.6965 0.40118 0.9786 1.195 0.6269 1.7641-0.3517 0.56905 0.541 0.2612 1.9837-0.68411 2.9564-1.9371 3.3829-1.0184 1.064 2.2923-1.1765 1.6796-1.983 1.9992-3.2857 1.302-1.3569-0.72614-1.7266-0.51275-1.7266 0.99648 0 2.2976 3.7145 2.658 5.4792 0.5316 0.634-0.7639 3.1639-1.8953 5.622-2.5143 4.1197-1.0374 4.3723-1.2807 3.2292-3.1111-1.5318-2.4529-3.1933-2.6186-2.3635-0.23572 0.5235 1.5031 0.402 1.4823-0.861-0.14732-1.7439-2.2502-1.133-3.7696 1.1616-2.8891 1.15 0.44128 1.4002 0.25122 0.8473-0.64344-0.6214-1.0055-0.3368-1.03 1.3678-0.11771 1.1839 0.6336 2.0257 1.8563 1.8707 2.7171-0.155 0.86082 0.5991 2.0748 1.6759 2.6978 1.0768 0.62295 2.5714 1.6951 3.3214 2.3826s2.0547 1.25 2.8993 1.25c0.9893 0 1.3196 0.56262 0.9285 1.5818-0.3338 0.86998-0.607 1.9736-0.607 2.4525 0 0.47889-1.3811 0.69591-3.0693 0.48226-2.403-0.30412-2.839-0.11104-2.0086 0.88952 0.5833 0.70288 0.8253 1.5132 0.5377 1.8008-0.2875 0.28756 1.0664 2.9359 3.0087 5.8852 4.1853 6.355 4.8177 12.149 1.5188 13.915-1.566 0.83813-1.7958 1.4825-1.0352 2.9037 0.5377 1.0046 0.6934 2.1107 0.3461 2.458-0.3473 0.34732-0.1065 0.63148 0.5352 0.63148 0.6416 0 1.1666-0.54 1.1666-1.2 0-0.8869 0.2927-0.90728 1.1219-0.07814 0.617 0.61702 1.8158 0.85555 2.664 0.53006 1.0125-0.38854 1.2939-0.18996 0.8192 0.57814-0.3977 0.64346-1.3715 1.1699-2.1641 1.1699-0.7925 0-1.441 0.675-1.441 1.5s-0.45 1.5-1 1.5-1-0.675-1-1.5-0.5024-1.5-1.1165-1.5c-1.0875 0-0.9283 1.5717 0.7092 7 0.6495 2.1531 0.5439 2.3277-0.7613 1.2587-0.8334-0.68273-1.7971-0.95966-2.1413-0.6154-0.7882 0.78819-6.6901-1.5986-6.6901-2.7056 0-0.45082 0.4981-1.1275 1.1068-1.5037 2.0287-1.2538-1.1296-2.2182-4.6583-1.4224-1.8416 0.41535-3.6574 0.47015-4.0351 0.12178s-0.4657 0.58814-0.1955 2.0811l0.4912 2.7145-2.7843-1.9826c-2.0073-1.4293-2.9866-1.6554-3.5091-0.81001-0.4768 0.77149-0.2442 0.93597 0.6798 0.48083 0.7725-0.38048 0.531-0.11251-0.5367 0.59549s-2.982 2.2811-4.254 3.4959l-2.3129 2.2086-1.5582-2.3782z\" style=\"fill:url(#radialGradient6353)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5595\" d=\"m541.75 187.66c-6.5741 0.19651-12.235 4.1635-17.531 7.5-5.4972-1.5313-14.047 2.975-11.688 9.375 2.4541 1.8004-1.0112 4.6642 0.34375 7.3438 0.53516 3.58 3.365 5.1032 4.0938 8.3438 1.9532 1.4789 4.6995 1.9418 5.4375 4.8438 1.5032 6.176 8.2169 7.6854 13.156 10.156 1.8862 2.4128 4.4131 3.823 7.4375 3.2812 2.4198 7.1137 12.272-0.17732 12.375-5.4688 1.1093-2.6407 4.4434-4.2371 3.9062-7.6875 0.18181-3.7777 5.3101-5.8366 4-9.75-0.0755-3.8406-2.1026-7.1448-1.9062-11.125-0.95781-3.4923-1.4323-7.2357-3.1875-10.312-4.6705-2.8995-9.0148-7.1228-15.094-6.5312-0.44792 0.0103-0.89688-0.0208-1.3438 0.0312z\" style=\"filter:url(#filter5649);fill:#996633\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5034\" d=\"m547.96 237c0.5962-0.88084 0.3587-1.289-0.75-1.289-0.8924 0-1.6225-0.41074-1.6225-0.91276s-1.35-0.7-3-0.43996c-2.1278 0.33536-3 0.0665-3-0.92481 0-0.80082-2.3486-2.1959-5.5-3.2671-3.0326-1.0308-5.5-2.476-5.5-3.2214 0-0.74356-0.4448-1.077-0.9885-0.74098-0.5669 0.35034-0.7345-0.0511-0.393-0.94098 0.3275-0.85357 0.1944-1.5519-0.2959-1.5519-0.4902 0-1.6888-1.35-2.6635-3s-2.4698-3-3.3226-3c-0.932 0-1.332-0.56914-1.0029-1.4269 0.5158-1.3442-1.5466-4.0233-2.4256-3.1507-0.2244 0.22278-0.5072-0.96786-0.6285-2.6458-0.1212-1.678 0.045-2.7856 0.3691-2.4613 0.7365 0.73651 3.3514-1.7944 3.3514-3.2438 0-0.58929-0.8734-1.0714-1.9409-1.0714-2.5606 0-3.3874-1.4826-1.6371-2.9352 0.9584-0.79535 1.6044-0.8311 2.048-0.11331 0.3564 0.57671 1.1575 1.0486 1.7802 1.0486 0.6226 0 0.2586-0.64135-0.809-1.4252-1.772-1.301-1.5739-1.3902 2.2721-1.0232 2.8196 0.26901 4.4736-0.0411 5-0.93756 0.4327-0.73675 3.0332-2.5263 5.7788-3.9768 6.7984-3.5915 14.023-3.6468 18.102-0.13843 1.598 1.3743 3.318 2.4993 3.8222 2.5 0.5042 0.00067 0.6325 0.28539 0.2852 0.6327-0.3473 0.34732-0.1065 1.5848 0.5352 2.75 1.4549 2.6417 1.7944 4.1965 1.8823 8.6185 0.038 1.925 0.5895 4.1489 1.2251 4.942 0.7658 0.95559 0.7832 1.2191 0.052 0.78136-0.6212-0.37177-1.6291 0.49235-2.3053 1.9763-1.0749 2.3592-1.0351 2.4989 0.378 1.3261 0.8686-0.72094 1.8685-1.0217 2.2219-0.66829 0.3533 0.35337 0.1175 0.6425-0.5242 0.6425s-1.1667 0.68912-1.1667 1.5314c0 0.84227-0.6083 1.7648-1.3517 2.0501-0.8095 0.31063-1.1701 1.4689-0.899 2.8874 0.3192 1.6696-0.3169 3.0379-2.1554 4.6364-1.4345 1.2473-2.1908 2.5258-1.6807 2.841 0.5101 0.31527-0.2742 1.9364-1.7429 3.6024-1.4686 1.6661-2.2777 2.4492-1.7978 1.7402z\" style=\"fill:url(#radialGradient6355)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5481\" style=\"filter:url(#filter5591);fill:#804033\" inkscape:connector-curvature=\"0\" d=\"m524.59 152.58c0-0.44107-0.6759-0.54258-1.502-0.22557-2.3935 0.91846-8.6549-2.1118-12.998-6.2905-4.6354-4.46-7.8057-9.0448-7.0736-10.23 0.2803-0.45344-0.1844-1.6782-1.0326-2.7218-0.8481-1.0435-1.2142-1.2653-0.8134-0.49281 0.4527 0.87254 0.3269 1.1562-0.332 0.749-0.5833-0.36052-0.807-1.6254-0.497-2.8109 0.4353-1.6644 0.2431-1.9622-0.8438-1.307-1.1701 0.70523-1.1908 0.58068-0.1225-0.73837 0.7068-0.87269 1.1967-1.9716 1.0885-2.442-0.1081-0.47039 0.3261-2.122 0.965-3.6704 0.6388-1.5483 1.1614-3.184 1.1614-3.635 0-0.45094 1.1394-1.5664 2.5319-2.4788 1.3925-0.91242 2.3031-2.029 2.0236-2.4814-0.7169-1.1599 2.929-4.2554 3.936-3.3419 0.4561 0.4137 0.5247 0.22077 0.1525-0.42872-0.3721-0.6495-0.2119-1.4681 0.356-1.8191 0.568-0.35101 0.7997-1.0151 0.515-1.4758-0.2848-0.4607 0.2809-0.62881 1.2569-0.37356 1.863 0.48718 4.5079 7.0584 3.173 7.8834-0.4257 0.26313-0.9759-0.0869-1.2226-0.77782-0.2466-0.69093-0.7992-0.9296-1.2279-0.5304-0.4286 0.39921-0.2101 1.4117 0.4856 2.25 1.0449 1.259 0.9827 1.5242-0.3575 1.5242-0.8924 0-1.6743 0.7875-1.7376 1.75-0.2108 3.2025 0.2954 5.7461 1.2105 6.0833 0.4976 0.18334 0.9046 1.192 0.9046 2.2415s0.9256 2.4745 2.0568 3.1667c1.1313 0.69216 2.9776 2.7366 4.103 4.5432 1.3623 2.1868 2.5967 3.1136 3.6932 2.7728 0.9059-0.28152 2.097-0.18464 2.647 0.21531 1.3379 0.97287 1.831 3.5498 0.5248 2.7425-0.9448-0.58393-1.5346 1.6264-1.0618 3.979 0.9794 4.8725 0.7223 9.1724-0.5483 9.1724-0.7781 0-1.4147-0.36088-1.4147-0.80195z\"/> \n" \
"    <path id=\"path4874\" d=\"m524.59 152.58c0-0.44107-0.6759-0.54258-1.502-0.22557-2.3935 0.91846-8.6549-2.1118-12.998-6.2905-4.6354-4.46-7.8057-9.0448-7.0736-10.23 0.2803-0.45344-0.1844-1.6782-1.0326-2.7218-0.8481-1.0435-1.2142-1.2653-0.8134-0.49281 0.4527 0.87254 0.3269 1.1562-0.332 0.749-0.5833-0.36052-0.807-1.6254-0.497-2.8109 0.4353-1.6644 0.2431-1.9622-0.8438-1.307-1.1701 0.70523-1.1908 0.58068-0.1225-0.73837 0.7068-0.87269 1.1967-1.9716 1.0885-2.442-0.1081-0.47039 0.3261-2.122 0.965-3.6704 0.6388-1.5483 1.1614-3.184 1.1614-3.635 0-0.45094 1.1394-1.5664 2.5319-2.4788 1.3925-0.91242 2.3031-2.029 2.0236-2.4814-0.7169-1.1599 2.929-4.2554 3.936-3.3419 0.4561 0.4137 0.5247 0.22077 0.1525-0.42872-0.3721-0.6495-0.2119-1.4681 0.356-1.8191 0.568-0.35101 0.7997-1.0151 0.515-1.4758-0.2848-0.4607 0.2809-0.62881 1.2569-0.37356 1.863 0.48718 4.5079 7.0584 3.173 7.8834-0.4257 0.26313-0.9759-0.0869-1.2226-0.77782-0.2466-0.69093-0.7992-0.9296-1.2279-0.5304-0.4286 0.39921-0.2101 1.4117 0.4856 2.25 1.0449 1.259 0.9827 1.5242-0.3575 1.5242-0.8924 0-1.6743 0.7875-1.7376 1.75-0.2108 3.2025 0.2954 5.7461 1.2105 6.0833 0.4976 0.18334 0.9046 1.192 0.9046 2.2415s0.9256 2.4745 2.0568 3.1667c1.1313 0.69216 2.9776 2.7366 4.103 4.5432 1.3623 2.1868 2.5967 3.1136 3.6932 2.7728 0.9059-0.28152 2.097-0.18464 2.647 0.21531 1.3379 0.97287 1.831 3.5498 0.5248 2.7425-0.9448-0.58393-1.5346 1.6264-1.0618 3.979 0.9794 4.8725 0.7223 9.1724-0.5483 9.1724-0.7781 0-1.4147-0.36088-1.4147-0.80195z\" style=\"fill:url(#radialGradient6357)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5653\" style=\"filter:url(#filter5695);fill:#803e00\" inkscape:connector-curvature=\"0\" d=\"m597.59 134.74c0-0.53273-0.6642-0.71373-1.476-0.40221-0.9663 0.3708-2.2091-0.67609-3.5988-3.0314-1.1675-1.9788-2.5548-3.5978-3.083-3.5978-0.5281 0-0.6821 0.45-0.3422 1 0.34 0.55 0.1415 1-0.4409 1-1.3413 0-1.381-1.683-0.059-2.5 1.4359-0.88747 1.2372-2.1199-0.6454-4.0025-1.3385-1.3385-1.8222-1.3985-2.5943-0.32143-0.6918 0.96513-0.788 0.82749-0.3547-0.5079 0.3269-1.0075 0.5944-2.245 0.5944-2.75 0-0.50501 0.4765-0.91821 1.059-0.91821 0.5824 0 0.8123 0.39919 0.5107 0.8871-0.3015 0.4879 0.2344 0.8254 1.191 0.75 1.198-0.0944 1.7145 0.56306 1.6599 2.1129-0.044 1.2375 0.3203 2.25 0.809 2.25 0.4886 0 0.6034 0.46115 0.255 1.0248-0.3483 0.56362-0.058 0.90112 0.6456 0.75 0.7034-0.15113 1.3393 0.17522 1.4131 0.72522 0.3098 2.3073 2.0582 5.0224 3.4286 5.324 1.1625 0.25586 1.1099-0.0761-0.25-1.5787-0.9471-1.0465-1.722-2.5688-1.722-3.3828 0-0.81407-0.6141-2.32-1.3646-3.3464-0.8624-1.1794-1.2381-3.7341-1.0207-6.9411 0.2389-3.5236 0.049-4.6163-0.62-3.5748-0.5302 0.825-0.9709 1.0376-0.9794 0.47251-0.01-0.56513 0.6853-2.0276 1.5414-3.25 0.8726-1.2457 1.0923-2.2225 0.5-2.2225-0.5811 0-1.0567 0.45-1.0567 1s-0.45 1-1 1c-1.5403 0-0.7329-2.2714 1.6331-4.5939 2.8582-2.8057 3.8255-6.1487 2.3081-7.977-1.0018-1.2071-0.9396-1.3657 0.343-0.87359 1.008 0.38683 2.1696-0.31842 3.2564-1.9771 2.7396-4.1812 10.388-2.7927 16.104 2.9235 1.5782 1.5782 1.8131 2.8991 0.3552 1.9981-0.55-0.33992-1-0.0826-1 0.57183 0 0.80118-1.1424 1.0045-3.4974 0.62231-3.1367-0.50902-3.7812-0.19495-6.25 3.0454-2.5977 3.4096-2.7593 4.2361-2.873 14.687-0.066 6.0906-0.3693 11.974-0.6735 13.074s-0.5875 2.3375-0.6296 2.75c-0.1138 1.1155-2.0765 0.90889-2.0765-0.21862z\"/> \n" \
"    <path id=\"path4830\" d=\"m598.59 135.74c0-0.53273-0.6642-0.71373-1.476-0.40221-0.9663 0.3708-2.2091-0.67609-3.5988-3.0314-1.1675-1.9788-2.5548-3.5978-3.083-3.5978-0.5281 0-0.6821 0.45-0.3422 1 0.34 0.55 0.1415 1-0.4409 1-1.3413 0-1.381-1.683-0.059-2.5 1.4359-0.88747 1.2372-2.1199-0.6454-4.0025-1.3385-1.3385-1.8222-1.3985-2.5943-0.32143-0.6918 0.96513-0.788 0.82749-0.3547-0.5079 0.3269-1.0075 0.5944-2.245 0.5944-2.75 0-0.50501 0.4765-0.91821 1.059-0.91821 0.5824 0 0.8123 0.39919 0.5107 0.8871-0.3015 0.4879 0.2344 0.8254 1.191 0.75 1.198-0.0944 1.7145 0.56306 1.6599 2.1129-0.044 1.2375 0.3203 2.25 0.809 2.25 0.4886 0 0.6034 0.46115 0.255 1.0248-0.3483 0.56362-0.058 0.90112 0.6456 0.75 0.7034-0.15113 1.3393 0.17522 1.4131 0.72522 0.3098 2.3073 2.0582 5.0224 3.4286 5.324 1.1625 0.25586 1.1099-0.0761-0.25-1.5787-0.9471-1.0465-1.722-2.5688-1.722-3.3828 0-0.81407-0.6141-2.32-1.3646-3.3464-0.8624-1.1794-1.2381-3.7341-1.0207-6.9411 0.2389-3.5236 0.049-4.6163-0.62-3.5748-0.5302 0.825-0.9709 1.0376-0.9794 0.47251-0.01-0.56513 0.6853-2.0276 1.5414-3.25 0.8726-1.2457 1.0923-2.2225 0.5-2.2225-0.5811 0-1.0567 0.45-1.0567 1s-0.45 1-1 1c-1.5403 0-0.7329-2.2714 1.6331-4.5939 2.8582-2.8057 3.8255-6.1487 2.3081-7.977-1.0018-1.2071-0.9396-1.3657 0.343-0.87359 1.008 0.38683 2.1696-0.31842 3.2564-1.9771 2.7396-4.1812 10.388-2.7927 16.104 2.9235 1.5782 1.5782 1.8131 2.8991 0.3552 1.9981-0.55-0.33992-1-0.0826-1 0.57183 0 0.80118-1.1424 1.0045-3.4974 0.62231-3.1367-0.50902-3.7812-0.19495-6.25 3.0454-2.5977 3.4096-2.7593 4.2361-2.873 14.687-0.066 6.0906-0.3693 11.974-0.6735 13.074s-0.5875 2.3375-0.6296 2.75c-0.1138 1.1155-2.0765 0.90889-2.0765-0.21862z\" style=\"fill:#552200\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5183\" style=\"filter:url(#filter5257);fill:#8c5933\" inkscape:connector-curvature=\"0\" d=\"m617.97 234.32c-0.1939-0.0751-0.1233 0.2955 0.1562 1.0938 0.5952 1.6997 0.4871 1.805-0.8125 0.75-1.5091-1.225-2.8437-0.76912-2.8437 0.96875 0 0.4908 0.4006 0.62501 0.9062 0.3125 0.5057-0.31252 1.6318 0.163 2.5 1.0312 1.1928 1.1928 1.3431 2.0413 0.5625 3.5-1.2396 2.3162-1.9814 2.3974-4.5313 0.46875-2.3404-1.7702-3.8265-1.9652-2.8437-0.375 0.4457 0.72104 0.2625 0.88942-0.4687 0.4375-0.6436-0.39798-0.9102-1.1442-0.5938-1.6562 0.3165-0.51199 0.1137-0.9375-0.4688-0.9375-0.9517 0-1.2218 0.73329-0.9687 2.625 0.1553 1.1599-2.3009 2.1414-4.1563 1.6562-1.0034-0.26242-2.5853-1.3298-3.5312-2.375-1.8237-2.0152-4.0665-2.4082-6.1875-1.0625-0.9837 0.62409-1.0358 1.4757-0.2187 3.625 0.869 2.2855 0.7973 2.6671-0.2813 1.9375-0.731-0.49438-0.5196-0.16316 0.4687 0.75 1.7533 1.6198 2.5941 4.4346 1.0313 3.4688-0.4321-0.26708-0.7813 0.35576-0.7813 1.375 0.0001 2.0288 0.8976 1.7306 4.3126-1.3438 1.2393-1.1158 2.25-1.4906 2.25-0.84375 0 0.64587-0.3498 1.1875-0.7813 1.1875-0.4314 0-1.6142 1.3826-2.625 3.0938-1.3988 2.368-2.0311 2.7861-2.6875 1.75-1.2635-1.9943-1.4522 1.7963-0.3438 6.9062 0.1305 0.60127 0.2572 1.026 0.4063 1.375-0.014 0.30295-0.031 0.59997-0.031 0.90625 0 0.90338 0.069 1.7843 0.1876 2.6562-0.6172 0.15446-1.3336 0.47071-2 0.9375l-2.2188 1.5625 2.3125 3.1562c1.2757 1.7374 2.9496 4.3938 3.7187 5.9062 0.7694 1.5125 1.9624 2.75 2.6563 2.75s2.8481 1.0125 4.7813 2.25c2.4336 1.5579 3.3536 2.7927 3 4-0.3717 1.2684-0.072 1.5603 1.0624 1.125 0.8578-0.32917 1.3499-0.92932 1.0938-1.3438-0.2562-0.41443 1.8205-0.32223 4.625 0.1875 3.5672 0.64837 5.958 0.56995 7.9375-0.25 1.5563-0.64462 2.992-1.0382 3.1875-0.84375s2.5006-1.5375 5.1562-3.875c4.7198-4.1545 7.4066-5.4984 5.9688-3-0.4179 0.72624-0.3414 0.89041 0.1875 0.40625 0.5007-0.45834 0.9125-1.3583 0.9375-2 0.025-0.64167 0.5638-1.0621 1.1875-0.9375 0.6794 0.13574 0.9751-0.71143 0.7187-2.125-0.2352-1.2973 0.2102-3.922 1-5.8125 1.141-2.7305 1.4736-7.2812 0.5313-7.2812-0.1004 0-0.2723-1.526-0.375-3.375-0.1046-1.8841-0.9471-3.932-1.9375-4.6562-0.9878-0.72232-1.3551-1.5396-0.8125-1.875 1.2413-0.76713 0.9244-2.9576-0.7187-4.9375-0.9521-1.1473-1.8856-1.3295-3.6563-0.65625-1.5939 0.60601-2.633 0.55786-3.0937-0.1875-0.419-0.67799-0.2325-0.83961 0.4687-0.40625 0.635 0.39244 1.1563 0.23871 1.1563-0.34375s-0.705-1.0625-1.5626-1.0625c-0.8571 0-1.2783-0.44834-0.9374-1 0.3658-0.59194-0.3237-0.86675-1.6876-0.65625-2.5404 0.3921-6.8087-1.9261-6.8437-3.7188-0.012-0.62424-0.905-2.25-2-3.625-0.7946-0.99782-1.2749-1.5186-1.4687-1.5938z\"/> \n" \
"    <path id=\"path5138\" d=\"m616.09 237.12c-0.1939-0.0751-0.1233 0.2955 0.1562 1.0938 0.5952 1.6997 0.4871 1.805-0.8125 0.75-1.5091-1.225-2.8437-0.76912-2.8437 0.96875 0 0.4908 0.4006 0.62501 0.9062 0.3125 0.5057-0.31252 1.6318 0.163 2.5 1.0312 1.1928 1.1928 1.3431 2.0413 0.5625 3.5-1.2396 2.3162-1.9814 2.3974-4.5313 0.46875-2.3404-1.7702-3.8265-1.9652-2.8437-0.375 0.4457 0.72104 0.2625 0.88942-0.4687 0.4375-0.6436-0.39798-0.9102-1.1442-0.5938-1.6562 0.3165-0.51199 0.1137-0.9375-0.4688-0.9375-0.9517 0-1.2218 0.73329-0.9687 2.625 0.1553 1.1599-2.3009 2.1414-4.1563 1.6562-1.0034-0.26242-2.5853-1.3298-3.5312-2.375-1.8237-2.0152-4.0665-2.4082-6.1875-1.0625-0.9837 0.62409-1.0358 1.4757-0.2187 3.625 0.869 2.2855 0.7973 2.6671-0.2813 1.9375-0.731-0.49438-0.5196-0.16316 0.4687 0.75 1.7533 1.6198 2.5941 4.4346 1.0313 3.4688-0.4321-0.26708-0.7813 0.35576-0.7813 1.375 0.0001 2.0288 0.8976 1.7306 4.3126-1.3438 1.2393-1.1158 2.25-1.4906 2.25-0.84375 0 0.64587-0.3498 1.1875-0.7813 1.1875-0.4314 0-1.6142 1.3826-2.625 3.0938-1.3988 2.368-2.0311 2.7861-2.6875 1.75-1.2635-1.9943-1.4522 1.7963-0.3438 6.9062 0.1305 0.60127 0.2572 1.026 0.4063 1.375-0.014 0.30295-0.031 0.59997-0.031 0.90625 0 0.90338 0.069 1.7843 0.1876 2.6562-0.6172 0.15446-1.3336 0.47071-2 0.9375l-2.2188 1.5625 2.3125 3.1562c1.2757 1.7374 2.9496 4.3938 3.7187 5.9062 0.7694 1.5125 1.9624 2.75 2.6563 2.75s2.8481 1.0125 4.7813 2.25c2.4336 1.5579 3.3536 2.7927 3 4-0.3717 1.2684-0.072 1.5603 1.0624 1.125 0.8578-0.32917 1.3499-0.92932 1.0938-1.3438-0.2562-0.41443 1.8205-0.32223 4.625 0.1875 3.5672 0.64837 5.958 0.56995 7.9375-0.25 1.5563-0.64462 2.992-1.0382 3.1875-0.84375s2.5006-1.5375 5.1562-3.875c4.7198-4.1545 7.4066-5.4984 5.9688-3-0.4179 0.72624-0.3414 0.89041 0.1875 0.40625 0.5007-0.45834 0.9125-1.3583 0.9375-2 0.025-0.64167 0.5638-1.0621 1.1875-0.9375 0.6794 0.13574 0.9751-0.71143 0.7187-2.125-0.2352-1.2973 0.2102-3.922 1-5.8125 1.141-2.7305 1.4736-7.2812 0.5313-7.2812-0.1004 0-0.2723-1.526-0.375-3.375-0.1046-1.8841-0.9471-3.932-1.9375-4.6562-0.9878-0.72232-1.3551-1.5396-0.8125-1.875 1.2413-0.76713 0.9244-2.9576-0.7187-4.9375-0.9521-1.1473-1.8856-1.3295-3.6563-0.65625-1.5939 0.60601-2.633 0.55786-3.0937-0.1875-0.419-0.67799-0.2325-0.83961 0.4687-0.40625 0.635 0.39244 1.1563 0.23871 1.1563-0.34375s-0.705-1.0625-1.5626-1.0625c-0.8571 0-1.2783-0.44834-0.9374-1 0.3658-0.59194-0.3237-0.86675-1.6876-0.65625-2.5404 0.3921-6.8087-1.9261-6.8437-3.7188-0.012-0.62424-0.905-2.25-2-3.625-0.7946-0.99782-1.2749-1.5186-1.4687-1.5938z\" style=\"fill:url(#radialGradient6359)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5261\" style=\"filter:url(#filter5283);fill:#b38033\" inkscape:connector-curvature=\"0\" d=\"m693.59 287.13c0-0.87278-1.359-2.0998-3.0199-2.7268-2.109-0.79605-2.8318-1.5994-2.396-2.6631 0.6251-1.5256 2.4105-14.631 2.8355-20.812 0.1625-2.3635-0.1427-3.1475-1.0847-2.786-0.721 0.27667-1.2271 0.18173-1.1247-0.21098 0.1023-0.3927-0.1705-1.7648-0.6064-3.0491-0.5883-1.7333-0.2651-2.8965 1.2541-4.5136 2.961-3.1519 5.1898-8.9559 4.1104-10.704-0.5169-0.83702-2.6596-1.5176-5.0815-1.6141-3.4378-0.13686-4.7587-0.80847-7.3757-3.75-1.7533-1.9708-3.7371-3.5833-4.4085-3.5833-0.6713 0-0.929-0.47185-0.5726-1.0486 0.4355-0.70452 1.1614-0.62252 2.2127 0.24994 0.8605 0.71418 2.3955 1.1577 3.411 0.9857 1.0155-0.17204 1.8463 0.16549 1.8463 0.75006s1.0929 1.0629 2.4286 1.0629 3.1036 0.675 3.9286 1.5 2.107 1.5 2.8489 1.5 2.2914 0.66013 3.4433 1.467c1.5231 1.0668 2.9271 1.2281 5.1472 0.59139 1.6791-0.48155 3.2094-0.71904 3.4007-0.52775s1.6304 0.58037 3.198 0.86463c1.5675 0.28426 3.0959 0.76261 3.3963 1.063 0.3004 0.30038 1.3056-0.14118 2.2339-0.98126 1.5155-1.3716 1.8234-1.364 3.0169 0.074 1.1109 1.3386 1.0934 1.7505-0.1067 2.5099-1.0841 0.68602-1.1151 0.91222-0.1266 0.92379 0.7333 0.009 0.9952 0.52307 0.5954 1.1698-0.426 0.68934-0.2759 0.88406 0.3726 0.48327 0.5974-0.36918 1.7559 0.28507 2.5746 1.4539 1.4665 2.0938 4.3147 1.7955 3.0101-0.31529-0.396-0.64083-0.2063-0.79834 0.4632-0.38454 2.073 1.2812-0.9147 4.6237-3.5432 3.964-1.5337-0.38493-2.2868-0.12732-2.2971 0.78572-0.012 1.054-0.2264 1.0246-0.9574-0.13164-0.6999-1.1071-0.8669-0.78547-0.6497 1.2516 0.1608 1.5079 0.6637 3.0784 1.1177 3.49 0.454 0.41162 0.4587 0.11637 0.011-0.65611-0.5077-0.87508-0.4302-1.1668 0.2056-0.77387 0.5612 0.34686 0.7905 1.8333 0.5095 3.3031-0.3989 2.0865-0.205 2.4951 0.8841 1.8635 0.7672-0.44492 1.0614-0.44071 0.6537 0.009-0.4078 0.45007-0.3024 1.3472 0.2341 1.9936 0.6699 0.80718 0.5279 1.1754-0.4531 1.1754-0.7858 0-1.3411-0.43125-1.2342-0.95834 0.107-0.52708-0.368-1.1646-1.0555-1.4167-0.7198-0.26392-1.25 0.34055-1.25 1.425 0 1.0358-0.4717 2.355-1.0483 2.9316-0.5765 0.57654-1.1683 2.354-1.315 3.95-0.1475 1.6043-0.7966 2.79-1.4518 2.6518-0.6517-0.1375-1.2535 0.3125-1.3372 1-0.084 0.6875-0.2031 1.7515-0.2651 2.3645-0.062 0.61296-0.705 1.8281-1.4289 2.7003-1.1863 1.4294-1.8307 3.3343-2.0925 6.1852-0.051 0.55-0.4899 0.3714-0.9763-0.39688-0.7142-1.1279-1.1427-0.98351-2.2253 0.75-0.7374 1.1808-1.662 2.1469-2.0547 2.1469s-1.839 1.125-3.214 2.5c-2.8652 2.8656-4.591 3.2088-4.591 0.91355z\"/> \n" \
"    <path id=\"path5110\" d=\"m691.59 286.13c0-0.87278-1.359-2.0998-3.0199-2.7268-2.109-0.79605-2.8318-1.5994-2.396-2.6631 0.6251-1.5256 2.4105-14.631 2.8355-20.812 0.1625-2.3635-0.1427-3.1475-1.0847-2.786-0.721 0.27667-1.2271 0.18173-1.1247-0.21098 0.1023-0.3927-0.1705-1.7648-0.6064-3.0491-0.5883-1.7333-0.2651-2.8965 1.2541-4.5136 2.961-3.1519 5.1898-8.9559 4.1104-10.704-0.5169-0.83702-2.6596-1.5176-5.0815-1.6141-3.4378-0.13686-4.7587-0.80847-7.3757-3.75-1.7533-1.9708-3.7371-3.5833-4.4085-3.5833-0.6713 0-0.929-0.47185-0.5726-1.0486 0.4355-0.70452 1.1614-0.62252 2.2127 0.24994 0.8605 0.71418 2.3955 1.1577 3.411 0.9857 1.0155-0.17204 1.8463 0.16549 1.8463 0.75006s1.0929 1.0629 2.4286 1.0629 3.1036 0.675 3.9286 1.5 2.107 1.5 2.8489 1.5 2.2914 0.66013 3.4433 1.467c1.5231 1.0668 2.9271 1.2281 5.1472 0.59139 1.6791-0.48155 3.2094-0.71904 3.4007-0.52775s1.6304 0.58037 3.198 0.86463c1.5675 0.28426 3.0959 0.76261 3.3963 1.063 0.3004 0.30038 1.3056-0.14118 2.2339-0.98126 1.5155-1.3716 1.8234-1.364 3.0169 0.074 1.1109 1.3386 1.0934 1.7505-0.1067 2.5099-1.0841 0.68602-1.1151 0.91222-0.1266 0.92379 0.7333 0.009 0.9952 0.52307 0.5954 1.1698-0.426 0.68934-0.2759 0.88406 0.3726 0.48327 0.5974-0.36918 1.7559 0.28507 2.5746 1.4539 1.4665 2.0938 4.3147 1.7955 3.0101-0.31529-0.396-0.64083-0.2063-0.79834 0.4632-0.38454 2.073 1.2812-0.9147 4.6237-3.5432 3.964-1.5337-0.38493-2.2868-0.12732-2.2971 0.78572-0.012 1.054-0.2264 1.0246-0.9574-0.13164-0.6999-1.1071-0.8669-0.78547-0.6497 1.2516 0.1608 1.5079 0.6637 3.0784 1.1177 3.49 0.454 0.41162 0.4587 0.11637 0.011-0.65611-0.5077-0.87508-0.4302-1.1668 0.2056-0.77387 0.5612 0.34686 0.7905 1.8333 0.5095 3.3031-0.3989 2.0865-0.205 2.4951 0.8841 1.8635 0.7672-0.44492 1.0614-0.44071 0.6537 0.009-0.4078 0.45007-0.3024 1.3472 0.2341 1.9936 0.6699 0.80718 0.5279 1.1754-0.4531 1.1754-0.7858 0-1.3411-0.43125-1.2342-0.95834 0.107-0.52708-0.368-1.1646-1.0555-1.4167-0.7198-0.26392-1.25 0.34055-1.25 1.425 0 1.0358-0.4717 2.355-1.0483 2.9316-0.5765 0.57654-1.1683 2.354-1.315 3.95-0.1475 1.6043-0.7966 2.79-1.4518 2.6518-0.6517-0.1375-1.2535 0.3125-1.3372 1-0.084 0.6875-0.2031 1.7515-0.2651 2.3645-0.062 0.61296-0.705 1.8281-1.4289 2.7003-1.1863 1.4294-1.8307 3.3343-2.0925 6.1852-0.051 0.55-0.4899 0.3714-0.9763-0.39688-0.7142-1.1279-1.1427-0.98351-2.2253 0.75-0.7374 1.1808-1.662 2.1469-2.0547 2.1469s-1.839 1.125-3.214 2.5c-2.8652 2.8656-4.591 3.2088-4.591 0.91355z\" style=\"fill:#552200\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path5399\" d=\"m684.72 13.281c-3.165 0.5936-1.9501 4.6029-0.96875 5.9375-0.16988 3.1739-4.7053 5.664-2.7812 9.375-2.2776 1.7721-2.1494 5.857 0.5625 7.7188 1.4679 2.9299-0.86432 10.845 4.5 9.1875 2.2498-1.7992 3.5446-5.1691 4.4688-7.3438 2.9542 6.1233 8.5113 11.22 13.812 15.062 7.8261-0.26103 16.521 1.7886 23.656-2.0625 3.5138 0.1375 5.3452-3.6918 8.9688-2.625 3.3458 0.08734 7.6206-4.9746 4.6562-6.8125-2.3411 0.10273-2.6949 1.2512-2.6562-1.4688-1.0918-2.4996-4.5527-0.18672-3.5312-3.625-1.2789-2.2438-5.2435-1.7352-4.125-5.4375 0.31147-2.4709-2.7671-4.2205-4.1875-3.1875 1.2708-4.0034-4.1019-2.0494-5.0625-5.3125-3.9348-1.6439-8.7518-2.7951-12.969-2.5625-1.919 1.3036-5.0356-0.45305-7.2812 1.125-1.5103-3.4815-5.3677-7.963-9.5938-6.4688-1.1651-2.1195-4.2104 0.19279-6.2812-1.4688-0.38351-0.10142-0.7975-0.07319-1.1875-0.03125zm3.875 13.438c0.75321 0.63937-0.6982 3.7175-2.3438 1.6875-3.3531-0.57061 1.4732-2.1783 2.3438-1.6875z\" style=\"filter:url(#filter5431);fill:#996633\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path4646\" d=\"m699.13 48.213c-2.8932-2.75-5.8267-6.4625-6.5189-8.25-1.4396-3.7179-4.0049-4.3532-4.038-1-0.019 1.9397-3.7306 8.1273-4.0488 6.75-0.063-0.275-0.2327-2.2327-0.3758-4.3505-0.1432-2.1178-0.6966-4.1428-1.2297-4.5-0.5331-0.35722-1.2441-1.3957-1.5798-2.3078-0.8964-2.4349 4.0365-3.5246 5.694-1.2578 1.0824 1.4803 1.463 1.1945 3.2682-2.4543l2.0432-4.1296h-3.8248c-2.5878 0-4.1546 0.56602-4.8442 1.75-0.9707 1.6667-1.0207 1.6667-1.0497 0-0.017-0.9625 0.8321-2.6125 1.8863-3.6667s1.6542-2.1792 1.3333-2.5c-0.3208-0.32083 0.1933-0.58333 1.1424-0.58333s1.4767 0.40285 1.1724 0.89522 0.1425 1.1622 0.9929 1.4885c0.8854 0.33976 1.2851 0.17086 0.9353-0.39522-0.3361-0.5437-0.079-0.98855 0.5705-0.98855 0.8843 0 0.8706-0.3745-0.054-1.489-0.6797-0.81894-1.5942-1.2675-2.0322-0.99676-1.2937 0.79954-3.977-0.61498-3.977-2.0965 0-1.0306 0.5916-1.1434 2.3972-0.45686 1.3185 0.50127 2.7406 0.60264 3.1603 0.22525 0.4198-0.37739 0.4395-0.12366 0.044 0.56384-0.8589 1.4926 1.9727 1.7483 2.8919 0.26112 0.896-1.4498 5.5145 1.8788 6.6119 4.7653 0.6857 1.8035 1.3686 2.2352 2.6588 1.6807 2.246-0.96536 4.27-0.94458 6.6502 0.06828 1.4277 0.60754 1.7135 0.49001 1.1247-0.46258-0.5646-0.91365-0.2556-1.1251 1.086-0.74299 1.0314 0.29374 3.7896 0.83183 6.1295 1.1957 2.3398 0.36392 3.9962 1.0791 3.6809 1.5894-0.3154 0.51023-1.1048 0.618-1.7543 0.23949s-0.3236 0.28915 0.7241 1.4837c2.1281 2.4262 3.5471 3.024 1.595 0.67189-0.785-0.94589-0.852-1.5-0.1814-1.5 0.5848 0 1.346 0.45734 1.6915 1.0163 0.3455 0.55897 1.1595 0.69759 1.809 0.30804s0.5059 0.13949-0.3191 1.1756c-0.825 1.0362-0.9846 1.5751-0.3548 1.1977 0.6299-0.37742 1.4225 0.0363 1.7614 0.91938 0.4243 1.1057 0.1808 1.4386-0.782 1.0691-0.973-0.37335-1.2506 0.02793-0.9129 1.3195 0.6174 2.3608 3.2883 1.4571 3.2883-1.1126 0-1.0412 0.3883-1.893 0.8629-1.893s0.8703 1.0125 0.8792 2.25c0.03 4.1268 0.2506 4.8726 1.2579 4.25 0.55-0.33992 1-0.11492 1 0.5s0.4612 0.83303 1.0248 0.48469 0.9603-0.2624 0.8816 0.19098c-0.079 0.45338-0.09 1.9268-0.025 3.2743 0.092 1.9056 0.3851 2.1833 1.3184 1.25 1.6477-1.6477 2.8554-1.508 2.18 0.25211-0.9274 2.4167 0.5572 3.8333 2.459 2.3464 1.4978-1.1709 1.5214-1.1209 0.2408 0.50896-0.9162 1.1661-2.4387 1.7007-4.2904 1.5064-1.5787-0.16559-3.2304 0.28158-3.6705 0.99372s-1.9703 1.4195-3.4004 1.572c-1.4301 0.15247-3.2247 0.79557-3.9881 1.4291-0.8764 0.72735-4.8058 1.067-10.662 0.92154l-9.2736-0.23034-5.2605-5z\" style=\"fill:url(#radialGradient6361)\" inkscape:connector-curvature=\"0\"/> \n" \
"    <path id=\"path6008\" d=\"m615.5 333.82c-3.025-1.1204-5.9275-2.4544-6.45-2.9646-0.5225-0.51013-1.9759-0.92751-3.2297-0.92751-3.3497 0-18.651-3.1388-19.845-4.0707-0.56348-0.43995-3.2635-1.557-6-2.4823-2.7365-0.92531-5.2005-2.0218-5.4755-2.4367-0.275-0.41485-2.6784-1.7418-5.3408-2.9487-6.8026-3.0837-17.331-9.6524-21.033-13.122-1.7194-1.6117-3.427-2.9325-3.7947-2.935-0.36762-0.003-2.4636-1.6921-4.6577-3.7546s-6.6183-6.1279-9.8316-9.0343c-7.5818-6.8576-11.51-10.639-13.236-12.741-3.7263-4.5387-8.1339-10.604-9.5534-13.147-2.1723-3.8912-3.7863-6.338-5.553-8.4181-6.9395-8.1704-18.195-32.623-17.139-37.234 0.10385-0.45338-0.27234-0.53932-0.83596-0.19098-0.56363 0.34834-1.0582 0.26929-1.0991-0.17567-0.26031-2.834-1.0886-5.8012-1.749-6.2656-0.42506-0.29888-1.5902-3.4684-2.5893-7.0434-0.99904-3.575-2.0576-7.175-2.3523-8-0.29471-0.825-0.64197-2.4-0.77167-3.5-0.12971-1.1-0.54187-3.575-0.9159-5.5-0.37404-1.925-0.71829-4.722-0.76501-6.2156-0.0467-1.4936-0.38453-2.5304-0.75071-2.3041-0.36618 0.22631-0.61675-1.2517-0.55683-3.2844 0.0599-2.0327-0.62539-7.6199-1.5229-12.416-0.99479-5.3158-1.255-8.8457-0.6665-9.0418 0.6052-0.20173 0.50655-3.0419-0.26444-7.6128-1.4738-8.738-0.90662-15.335 1.8554-21.579 1.3214-2.9873 1.907-6.0296 1.6526-8.5863-0.23348-2.3469 0.0333-3.9598 0.65508-3.9598 0.57696 0 0.81367-0.9 0.52601-2s-0.0886-2 0.44239-2c0.53096 0 0.71103-0.41157 0.40014-0.91459-0.31088-0.50302-0.20127-1.0655 0.24358-1.25 0.95368-0.39548 5.2036-12.738 5.2036-15.112 0-0.89952 1.2662-3.7928 2.8137-6.4295 1.5476-2.6367 3.5864-7.1708 4.5307-10.076 0.94433-2.905 3.3551-8.305 5.3573-12s4.5758-8.5182 5.7193-10.718c1.1434-2.2 2.3052-4.225 2.5818-4.5 0.27655-0.275 1.8516-2.5099 3.5-4.9664 3.672-5.4719 3.7652-5.5861 12.896-15.807 8.7338-9.7766 11.448-12.046 15.334-12.823 1.9796-0.39591 3.232-1.4719 3.9609-3.4028 0.58622-1.5531 2.92-3.9942 5.1861-5.4248s4.1202-3.0454 4.1202-3.5885 0.3375-0.89185 0.75-0.775c1.1407 0.32313 5.2879-2.1467 9.853-5.8679 2.2566-1.8395 4.5742-3.3445 5.15-3.3445 0.57587 0 4.5795-2.8254 8.897-6.2786 9.8294-7.8619 14.862-10.184 20.445-9.4355 2.7002 0.36218 5.2788 0.02675 7.336-0.95426 2.9138-1.3895 3.4509-1.3571 6.5918 0.39763 3.4117 1.906 3.4273 1.9051 6.7617-0.35764 1.8382-1.2474 5.3848-2.5743 7.8813-2.9487 4.6213-0.69301 32.156 0.03573 40.334 1.0675 9.1313 1.152 17.583 2.799 20.558 4.0063 1.6819 0.68247 5.0827 1.0388 7.5573 0.79185 4.4629-0.44538 18.394 1.9059 21.676 3.6585 0.93989 0.50192 6.3457 2.1304 12.013 3.6189 11.212 2.9449 15.613 5.3264 18.696 10.117 1.1 1.7095 3.7393 3.8856 5.8652 4.8359 4.2222 1.8873 7.4656 4.4793 14.679 11.731 2.5986 2.6125 5.1455 4.75 5.66 4.75 4.5465 0 29.931 42.742 31.929 53.763 0.26876 1.4821 0.83817 2.9294 1.2653 3.2161 0.89042 0.59763 1.0186 1.0219 5.5949 18.521 1.8698 7.15 3.8909 14.575 4.4914 16.5 2.9419 9.4314 4.197 19.761 4.2527 35 0.0463 12.669-0.89815 34.128-1.5844 36-0.30237 0.825-0.5019 2.85-0.44339 4.5 0.22437 6.3285-1.6149 14.649-4.0674 18.4-0.8631 1.3201-1.689 2.8951-1.8352 3.5-2.2908 9.4734-3.1561 11.81-5.0134 13.541-1.9802 1.8448-8.5725 14.401-11.229 21.387-1.2297 3.2344-13.13 21.192-20.304 30.639-2.7283 3.5928-9.0782 10.496-14.111 15.342-11.97 11.524-13.463 12.84-17.093 15.067-1.6817 1.0317-3.2826 2.2064-3.5576 2.6105-0.275 0.40404-1.9625 1.484-3.75 2.3998-1.7875 0.91586-3.25 2.1036-3.25 2.6395 0 0.53588-0.5671 0.97432-1.2602 0.97432-0.69312 0-2.4028 1.0125-3.7993 2.25-3.2831 2.9092-7.4281 5.3068-13.94 8.0634-14.167 5.9965-30.43 11.55-35.587 12.151-2.1523 0.251-6.8383 0.92123-10.413 1.4894-3.575 0.56818-14.6 1.2451-24.5 1.5042-16.338 0.42767-18.508 0.28311-23.5-1.5659z\" style=\"fill:url(#linearGradient6363)\" inkscape:connector-curvature=\"0\"/> \n" \
"  </g> \n" \
"  <metadata> \n" \
"    <rdf:RDF> \n" \
"      <cc:Work> \n" \
"        <dc:format>image/svg+xml</dc:format> \n" \
"        <dc:type rdf:resource=\"http://purl.org/dc/dcmitype/StillImage\"/> \n" \
"        <cc:license rdf:resource=\"http://creativecommons.org/licenses/publicdomain/\"/> \n" \
"        <dc:publisher> \n" \
"          <cc:Agent rdf:about=\"http://openclipart.org/\"> \n" \
"            <dc:title>Openclipart</dc:title> \n" \
"          </cc:Agent> \n" \
"        </dc:publisher> \n" \
"        <dc:title>Chocolate Cookie</dc:title> \n" \
"        <dc:date>2011-03-31T07:45:33</dc:date> \n" \
"        <dc:description/> \n" \
"        <dc:source>https://openclipart.org/detail/130009/cookie-by-gnokii</dc:source> \n" \
"        <dc:creator> \n" \
"          <cc:Agent> \n" \
"            <dc:title>gnokii</dc:title> \n" \
"          </cc:Agent> \n" \
"        </dc:creator> \n" \
"        <dc:subject> \n" \
"          <rdf:Bag> \n" \
"            <rdf:li>bakery</rdf:li> \n" \
"            <rdf:li>baking</rdf:li> \n" \
"            <rdf:li>chocolate</rdf:li> \n" \
"            <rdf:li>cookie</rdf:li> \n" \
"            <rdf:li>food</rdf:li> \n" \
"          </rdf:Bag> \n" \
"        </dc:subject> \n" \
"      </cc:Work> \n" \
"      <cc:License rdf:about=\"http://creativecommons.org/licenses/publicdomain/\"> \n" \
"        <cc:permits rdf:resource=\"http://creativecommons.org/ns#Reproduction\"/> \n" \
"        <cc:permits rdf:resource=\"http://creativecommons.org/ns#Distribution\"/> \n" \
"        <cc:permits rdf:resource=\"http://creativecommons.org/ns#DerivativeWorks\"/> \n" \
"      </cc:License> \n" \
"    </rdf:RDF> \n" \
"  </metadata> \n" \
"</svg> \n" \
"\n"

#define SVGTECHNICAL "<?xml version=\"1.0\" encoding=\"UTF-8\"?> \n" \
"<!-- Generator: Adobe Illustrator 15.1.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  --> \n" \
"<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\"> \n" \
"<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\" width=\"800px\" height=\"571px\" viewBox=\"0 0 800 571\" enable-background=\"new 0 0 800 571\" xml:space=\"preserve\"> \n" \
"<g id=\"rendering_-_block\"> \n" \
"	<g id=\"XMLID_1_\" opacity=\"0.3\"> \n" \
"		<g> \n" \
"			<path fill=\"#FBB03B\" d=\"M437.33,246.5h5.17v15h-0.09H440.1c-2.84-1.44-4.319-3.23-4.97-5.08c0.75-0.67,1.2-1.51,1.2-2.42     c0-0.96-0.5-1.85-1.33-2.54C435.7,248.65,437.33,246.5,437.33,246.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M371.5,283.28v17.22H371h-3.5v-13.54c0.77,0.39,1.31,0.54,1.5,0.39c0.64-0.64,1.07-1.13,1.34-1.6     c0-0.01,0-0.01,0-0.01c0.14-0.23,0.24-0.46,0.3-0.7c0.17-0.65,0.09-1.38-0.13-2.48C370.83,282.82,371.16,283.06,371.5,283.28z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M422.33,246.5h15c0,0-1.63,2.15-2.33,4.96c-1.07-0.89-2.69-1.46-4.5-1.46c-2.05,0-3.86,0.73-4.89,1.83     C424.77,248.58,422.33,246.5,422.33,246.5z\"/> \n" \
"			<path fill=\"#666666\" d=\"M591.5,283v32.5h-4v-0.08V279C589.14,280.43,590.45,281.77,591.5,283z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M182.13,390.1c0.13,0.12,0.28,0.221,0.39,0.351c0.04,0.03,0.07,0.06,0.1,0.1     c0.02,0.021,0.04,0.03,0.05,0.05c0,0.011,0.01,0.011,0.02,0.021c0,0.01,0.01,0.03,0.02,0.04c0.03,0.03,0.06,0.07,0.08,0.109     c0.01,0.061,0.03,0.11,0.04,0.131c0.02,0.02,0.04,0.02,0.06,0.01c0.04,0.04,0.06,0.08,0.1,0.12v0.01     c0.02,0.03,0.05,0.06,0.07,0.1c0.01,0.011,0.02,0.011,0.01,0.021c0,0,0,0.01,0,0.02c0.02,0.08,0.03,0.19,0.04,0.32     c0,0,0,0,0.01,0c0.02,0,0.06-0.05,0.1-0.08c0.09,0.16,0.17,0.33,0.25,0.51c0,0.011,0.01,0.021,0.01,0.03     c0.01,0.021,0.02,0.04,0.02,0.06c0.03,0.12,0,0.24,0,0.36v0.01c0,0.11,0.19,0.221,0.22,0.33c0.01,0.011,0.01,0.021,0.01,0.03     s0.01,0.03,0.01,0.04v0.01c0.02,0.04,0.03,0.08,0.04,0.12c0,0.01,0,0.01,0,0.021c0.06,0.34,0.1,0.699,0.1,1.06     c0,0.79-0.18,1.53-0.5,2.2c0,0.01-0.01,0.01-0.01,0.01c0.01,0.01,0,0.01,0,0.01c-0.03,0.09-0.07,0.16-0.12,0.24     c-0.23,0.44-0.53,0.85-0.89,1.2c-0.11,0.109-0.23,0.22-0.35,0.33c-0.09,0.069-0.18,0.149-0.29,0.22     c-0.12,0.09-0.24,0.17-0.38,0.25c-0.01,0.01-0.02,0.01-0.03,0.021c-0.02,0.01-0.04,0.029-0.07,0.039     c-0.02,0.021-0.04,0.03-0.07,0.051c0,0-0.01,0-0.02,0.01c-0.08,0.04-0.16,0.08-0.25,0.12c-0.07,0.04-0.14,0.069-0.21,0.1     c-0.14,0.061-0.28,0.11-0.43,0.16c-0.01,0-0.02,0.01-0.04,0.01c-0.15,0.05-0.3,0.09-0.46,0.13c-0.01,0-0.03,0.011-0.04,0.011     c-0.1,0.02-0.2,0.04-0.3,0.05c-0.25,0.05-0.51,0.07-0.77,0.08c-0.01,0-0.01,0-0.02,0c-0.01,0-0.02,0-0.03,0     c-2.83-0.08-5.1-2.391-5.1-5.24c0-1.75,0.86-3.3,2.18-4.25c0.22-0.16,0.44-0.3,0.68-0.42c0.6-0.311,1.26-0.51,1.96-0.561     c0.14-0.01,0.29-0.02,0.43-0.02c0.16,0,0.32,0.01,0.48,0.03c0.13,0.01,0.27,0.029,0.4,0.06c0.04,0,0.08,0,0.12,0.021     c0.02,0,0.03,0,0.05,0.01c0.05,0,0.1,0.01,0.14,0.03c0.21,0.05,0.42,0.119,0.61,0.199c0.06,0.04,0.13,0.08,0.22,0.131     c0.1,0.039,0.21,0.09,0.31,0.13c0.02,0.01,0.03,0.029,0.05,0.029c0.06,0.061,0.13,0.101,0.19,0.11c0.01,0,0.01,0,0.01,0h0.01     c0.04,0.01,0.1,0.08,0.14,0.1c0,0-0.01-0.01,0-0.029c0.01,0,0.01,0.01,0.02,0.01v0.14c0,0.03,0.23,0.061,0.27,0.101     c0.11,0.08,0.21,0.16,0.32,0.25C182.1,390.08,182.12,390.09,182.13,390.1z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M586.67,286.33c0-4.69-5.42-8.79-6.1-9.28c-0.051-0.03-0.07-0.05-0.07-0.05v-45.5v-5h1.29H588     c0,0,3.67-0.11,3.67,5.56c0,5.66-3.67,7.44-3.67,7.44h-3.5c0,0,0,24.5,0,31.5c0,1,12.58,9.67,13.58,12s1.92,6.67,1.92,16.67     c-1.2,7.22-2.66,12.28-4.07,15.83h-0.43V292c0,0,0.79-3.37-4-9c-1.05-1.23-2.36-2.57-4-4v36.42H587     C587,315.42,586.67,291.33,586.67,286.33z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M435.13,256.42c0.65,1.85,2.13,3.64,4.97,5.08h-5.39h-4.21h-8.17c1.83-1.87,2.83-3.67,3.27-5.34     c1.03,1.11,2.841,1.84,4.9,1.84C432.39,258,434.07,257.39,435.13,256.42z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M581,342.5c0,0,0.17,9-2.67,12c6.67,0,46.67,0,46.67,0s5.5-0.83,5.5-7.5s0-143,0-143s-1-5.5-5.58-5.5     h-2.42c0,56.3,0,132.5,0,132.5s-2.5,11.5-12.5,11.5S581,342.5,581,342.5z M578.25,331.35c-2.92-2.85-7.58-3.31-7.92,0     c-0.19,1.9,1.689,2.381,3.34,2.45c0,0-4.65,1.94,0,4.97c-0.47,0.04-0.95,0.12-1.42,0.23c-2.74,0.66-1.92,2.67,0,4.12     s5.42-0.79,7.75-2.45c2.33-1.67,5.67-5.34,5.67-5.34S581.16,334.2,578.25,331.35z M326.5,198.5c-56.59,0-98.5,0-98.5,0     s-0.55,0.08-2.48,3.88c-0.43,0.85-1.02,2.17-2.02,3.72v0.02l-0.03-0.01l-4.5-2.22c0.01-0.02,0.01-0.04,0.01-0.04     c1.5-2.65,2.52-4.6,2.52-4.6s2.83-4.75,5.83-4.75h99.17h11h160h4h17h6h86c0-29.56,0-52.5,0-52.5s0.33-5.5-5.42-5.5     s-18.08,0-18.08,0s-3.83,4.33-5.33,5.83c-0.229,0.23-0.42,0.51-0.63,0.82c0.08-0.37,0.12-0.76,0.12-1.15     c0-2.42-1.57-4.48-3.76-5.2c0.279-2.94,0.6-7.17,0.6-10.97c-0.17-0.35-0.38-0.7-0.61-1.07c-0.109-0.19-0.229-0.37-0.359-0.56     c-0.221-0.31-0.45-0.64-0.69-0.97c-0.04-0.06-0.08-0.11-0.13-0.17c-0.15-0.2-0.3-0.39-0.45-0.59c-0.149-0.2-0.31-0.4-0.479-0.61     c-0.16-0.21-0.33-0.42-0.5-0.63c-0.03-0.05-0.07-0.11-0.12-0.16v-0.01c-0.2-0.25-0.4-0.5-0.61-0.75c-0.2-0.27-0.42-0.53-0.63-0.8     c-0.43-0.54-0.86-1.1-1.29-1.68c-0.68-0.89-1.36-1.86-2.01-2.86c4.24,6.08,8.33,7.07,9.38,6.07c-4.07-5.33-3.22-9.24-3.22-9.24     l0.16-0.06c0.689,1.72,4.649,10.76,11.89,10.76c8,0,22.67,0,22.67,0s11.5-0.17,11.5,18.5v53.5c2.29,0,3.5,0,3.5,0     s9.5,1.17,9.5,10.17s0,144.33,0,144.33s-0.17,10.5-8.83,10.5h-49.66c0.21-0.55,0.32-1.14,0.32-1.76c0-1.53-0.67-2.9-1.75-3.83     c0.13-0.12,0.26-0.23,0.37-0.351c0.229-0.22,0.439-0.439,0.609-0.659c0.15-0.17,0.271-0.341,0.391-0.511     c0-0.01,0.01-0.02,0.02-0.029c0.11-0.16,0.21-0.32,0.3-0.48c0.141-0.229,0.261-0.46,0.351-0.7c0.05-0.1,0.1-0.21,0.14-0.31     c0.05-0.13,0.09-0.26,0.13-0.38s0.07-0.23,0.101-0.34c0.09-0.33,0.149-0.66,0.189-0.98c0.021-0.12,0.03-0.24,0.04-0.36     c0.03-0.329,0.03-0.649,0.021-0.97c0-0.08,0-0.16-0.01-0.24c0-0.05-0.011-0.109-0.011-0.159c0-0.051-0.01-0.091-0.01-0.141     c-0.01-0.06-0.01-0.13-0.02-0.189c-0.011-0.16-0.03-0.311-0.061-0.46c-0.02-0.15-0.05-0.301-0.08-0.44     c-0.03-0.15-0.06-0.28-0.09-0.41c-0.05-0.189-0.1-0.37-0.15-0.54c-0.029-0.1-0.06-0.2-0.09-0.29c-0.01-0.02-0.01-0.029-0.02-0.04     c-0.021-0.08-0.05-0.149-0.08-0.22c-0.01-0.06-0.03-0.11-0.061-0.16c-0.069-0.189-0.13-0.34-0.18-0.43     c-0.01-0.03-0.02-0.05-0.03-0.07c-0.01-0.02-0.01-0.04-0.02-0.04c0,0-0.01,0-0.01,0.01c-0.011,0-0.011,0-0.011,0.011     c-0.159,0.18-1.01,1.12-2.59,2.21c-0.12,0.08-0.239,0.16-0.37,0.24c-0.6,0.399-1.3,0.8-2.1,1.189c-12.41-4-2.25-13-2.25-13     s-1.97,0.07-4.5,0.15v-6.32c20.4,0,41.5,0,41.5,0s3.5-1.17,3.5-5.17V198.5H593h-12.88H524.5h-6h-17h-4h-160H326.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M570,334.67c0,0-10.16,9,2.25,13c0.8-0.39,1.5-0.79,2.1-1.189c0.131-0.08,0.25-0.16,0.37-0.24     c1.58-1.09,2.431-2.03,2.59-2.21c0-0.011,0-0.011,0.011-0.011c0-0.01,0.01-0.01,0.01-0.01c0.01,0,0.01,0.021,0.02,0.04     c0.011,0.021,0.021,0.04,0.03,0.07c0.05,0.09,0.11,0.24,0.18,0.43c0.03,0.05,0.051,0.101,0.061,0.16     c0.03,0.07,0.06,0.14,0.08,0.22c0.01,0.011,0.01,0.021,0.02,0.04c0.03,0.09,0.061,0.19,0.09,0.29     c0.051,0.17,0.101,0.351,0.15,0.54c0.03,0.13,0.06,0.26,0.09,0.41c0.03,0.14,0.061,0.29,0.08,0.44     c0.03,0.149,0.05,0.3,0.061,0.46c0.01,0.06,0.01,0.13,0.02,0.189c0,0.05,0.01,0.09,0.01,0.141c0,0.05,0.011,0.109,0.011,0.159     c0.01,0.08,0.01,0.16,0.01,0.24c0.01,0.32,0.01,0.641-0.021,0.97c-0.01,0.12-0.02,0.24-0.04,0.36c-0.04,0.32-0.1,0.65-0.189,0.98     c-0.03,0.109-0.061,0.22-0.101,0.34s-0.08,0.25-0.13,0.38c-0.04,0.1-0.09,0.21-0.14,0.31c-0.09,0.24-0.21,0.471-0.351,0.7     c-0.149,0.25-0.31,0.51-0.51,0.76c-0.06,0.091-0.13,0.181-0.2,0.261c-0.18,0.22-0.39,0.439-0.609,0.659     c-0.11,0.12-0.24,0.23-0.37,0.351c-0.89-0.78-2.05-1.25-3.33-1.25c-2.65,0-4.83,2.03-5.05,4.62c-0.54,0.09-1.11,0.17-1.7,0.229     V334.82C568.03,334.74,570,334.67,570,334.67z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M183.42,391.23c-0.03,0.029-0.06,0.06-0.07,0.069c0.01,0,0.03,0,0.03-0.01c0,0,0.12,0,0.12-0.01     c0,0,0,0,0-0.011C183.5,391.26,183.46,391.24,183.42,391.23c0.03-0.021,0.06-0.051,0.07-0.051c0.01,0,0.01,0,0.01,0v-0.01     c0,0,0,0-0.01,0.01c-0.03,0-0.14,0-0.14,0.011c0,0-0.03,0-0.05,0.01c0.03,0.01,0.07,0.01,0.07,0.02     C183.38,391.22,183.4,391.23,183.42,391.23z M197,399.5h-18.37c0.04,0,0.08-0.12,0.12-0.12c0.51,0,0.98-0.18,1.44-0.34     c0.01,0,0.03-0.01,0.04-0.01c0.02,0,0.04,0,0.06-0.021c0.08-0.02,0.16-0.05,0.24-0.08c0.05-0.01,0.1-0.029,0.16-0.05     c0.01-0.01,0.02-0.01,0.03-0.02c0.12-0.04,0.23-0.091,0.34-0.16c0.09-0.03,0.17-0.07,0.25-0.13c0.03-0.011,0.05-0.03,0.07-0.04     h0.01c0.03-0.011,0.05-0.021,0.08-0.05c0.02-0.011,0.03-0.021,0.05-0.03c0.03-0.021,0.07-0.04,0.1-0.061     c0.01-0.01,0.02-0.01,0.03-0.02c0.04-0.03,0.08-0.061,0.12-0.09c0.17-0.11,0.33-0.24,0.48-0.38c0.29-0.24,0.54-0.53,0.75-0.841     c0.14-0.18,0.26-0.359,0.36-0.56c0.01-0.02,0.02-0.03,0.03-0.05c0.16-0.29,0.29-0.61,0.38-0.931c0.05-0.149,0.09-0.3,0.12-0.449     v-0.011c0.04-0.17,0.06-0.34,0.08-0.52S184,394.18,184,394c0-0.04,0-0.07-0.01-0.11c0.01-0.109,0-0.22-0.01-0.33     c-0.02-0.26-0.16-0.51-0.23-0.76h-0.01v-0.01c0-0.01-0.01-0.03-0.01-0.04s0-0.02-0.01-0.03c-0.03-0.16-0.08-0.319-0.14-0.47     c0.02-0.05,0.03-0.11,0.03-0.22c0.05,0.12,0.09,0.229,0.13,0.35c-0.04-0.12-0.08-0.24-0.12-0.36c0-0.01,0-0.02-0.01-0.02v-0.01     c0-0.01,0-0.01,0-0.021c0.01-0.04,0.01-0.08,0.01-0.13c0-0.04,0-0.09,0-0.149c0-0.021,0-0.051-0.01-0.07c0-0.04,0-0.08,0-0.12     h-0.01c-0.01,0-0.03,0-0.04-0.01c-0.02,0.01-0.03,0-0.05-0.01c0,0-0.01,0-0.01-0.011c0-0.01,0-0.01,0-0.01s0,0-0.01,0l-0.02-0.02     c-0.01,0-0.01-0.011-0.01-0.011c-0.01-0.01-0.02-0.02-0.02-0.04c0.03-0.01,0.06-0.02,0.06-0.029v-0.011c0,0-0.07-0.01-0.08-0.01     c0-0.01-0.05-0.01-0.08-0.03c-0.01,0.011-0.01,0-0.01,0c-0.01,0.021-0.02,0.021-0.02,0.021c-0.01-0.01-0.01-0.021-0.02-0.03     c-0.03-0.05-0.06-0.08-0.1-0.12c0,0,0-0.01-0.01,0c0,0,0-0.02-0.01-0.02c-0.01-0.01-0.01-0.021-0.02-0.03     c-0.01-0.01-0.01-0.02-0.02-0.02c0-0.011-0.01-0.021-0.02-0.03c-0.03-0.05-0.06-0.1-0.09-0.15c-0.02-0.029-0.03-0.05-0.04-0.05     c-0.03-0.05-0.06-0.1-0.1-0.14c-0.08-0.101-0.16-0.21-0.26-0.311v-0.01c-0.03-0.07-0.05-0.13-0.11-0.2     c0.01-0.02,0.02-0.02,0.01-0.029c-0.01-0.011,0.01-0.021,0-0.03c-0.02-0.021-0.02-0.05-0.02-0.09v-0.021v-0.01     c0-0.01,0-0.021-0.02-0.03c-0.08-0.14-0.07-0.3-0.18-0.399c-0.01-0.011,0.2-0.011,0.2-0.021v-0.09h-0.41h-0.01h-0.15h-0.01h-0.02     c0,0-0.06,0-0.11,0.01h-0.01l-0.01-0.01h-0.02l-0.03,0.01v-0.01h-0.04c0,0-0.01,0.01-0.01,0.02l-0.01,0.011v0.01     c-0.04,0.01-0.11,0.02-0.14,0.03h-0.01l-0.01-0.011v-0.81v-0.25h0.15c1.11,0,3.7-0.29,3.7-3.88c0-4.5-2.6-5.101-2.6-5.101     l-7.25-0.01l-3.5-0.01c0,0-5.72,0.75-5.72-6s5.72-7,5.72-7h3.5h8.5c0,0,1.5-1.5,1.5-4.75s-2.5-4.25-2.5-4.25h-7.5h-4.76     c0,0-4.46-0.88-4.46-6.62c0-5.76,4.72-6.38,4.72-6.38h4.5h8.5c0,0,0.04,0,0.05-0.01c0.02-0.01,0.09-0.04,0.13-0.08     c0.02-0.021,0.1-0.04,0.12-0.061c0.03-0.02,0.2-0.05,0.2-0.08v-0.01c0-0.05,0.02-0.109,0.04-0.18c0.02-0.05,0.05-0.11,0.08-0.18     c0.03-0.07,0.07-0.141,0.11-0.221c0.22-0.39,0.53-0.96,0.7-1.76c0.02-0.03,0.02-0.06,0.02-0.09v-0.01     c0.04-0.13,0.06-0.261,0.08-0.4c0.02-0.11,0.03-0.22,0.04-0.34c0.01-0.14-0.1-0.29-0.09-0.45c0.02-0.17,0.02-0.34,0.02-0.52V340     c0-0.19-0.01-0.37-0.04-0.54c-0.3-2.99-3.21-3.21-3.21-3.21l-6.75-0.2v0.45h-0.04l-0.93-0.48l0.93,0.03l-0.95-0.04l-0.99-0.51     h-0.02c0,0,0,0.48,0,0.49s0,0.01,0,0.02c-0.01,0.01,0,0.03-0.01,0.061c0,0.029-0.02,0.06-0.03,0.109     c-0.04,0.101-0.09,0.24-0.16,0.4c-0.08,0.17-0.19,0.36-0.32,0.56c-0.41,0.58-1.09,1.181-2.2,1.301     c-2.12,0.229-4.2-2.671-4.45-4.891c-0.01-0.149-0.02-0.28-0.02-0.42c0-0.11,0-0.22,0.02-0.34c0.13-1.57,0.93-3.521,2.36-4.56     c0.25-0.19,0.52-0.341,0.81-0.45c0.1-0.04,0.21-0.08,0.32-0.11c0.16-0.05,0.33-0.09,0.51-0.11c0.17-0.029,0.35-0.04,0.54-0.04     c2.78,0,2.88,1.98,2.88,1.98h1.75v1h10c0,0,7,1.5,7,8.75s-7,11.25-7,11.25h-10v1.36c4.02,0.01,10-0.11,10-0.11s7,1.5,7,10.75     s-8.5,11-8.5,11s8.5,1.3,8.5,8.26v5.74h4.5v1h-3c-0.69,0-1.32,0.28-1.77,0.73c-0.45,0.449-0.73,1.079-0.73,1.77     c0,1.38,1.12,2.5,2.5,2.5h3V399.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M156.69,299.5H157c0,0-0.12,0.83-0.12,2C156.78,300.78,156.72,300.12,156.69,299.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M165.11,317.4c1.29,0.72,3.03,1.26,5.39,1.529c1.16,0.141,2.47,0.2,3.95,0.19     c1.66-2.24,1.7-2.36,1.7-2.37l-0.19-9.23l2.07-0.02h14.47v23h-7h-10v-1V324c0,0-0.01-3.67-4.76-3.67c-1.43,0-3.62-0.82-6.01-2.28     L165.11,317.4z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M553.67,120.08c0.33-1.66-2.87-1.58-2.87-1.58h-0.05l-0.09-6h0.1c0,0,0.01,1.17,1.91,2     s3.5-0.83,5.33-4.83s1.83-6.67,2-11.67c0,0,1,6.5,0.5,16.5h-4v3v4v3v4v3v3h4v-3h2.5h0.5v3h4v-10v-10h-4c0-15.67,1.5-16,1.5-16     c-0.01,0.41,0,0.82,0.02,1.22c0,0.29,0.011,0.57,0.04,0.85c0.011,0.28,0.03,0.56,0.061,0.84c0.03,0.34,0.06,0.67,0.1,0.99     c0,0.01,0,0.02,0.011,0.02c0.01,0.13,0.029,0.25,0.039,0.37c0.011,0.02,0.011,0.03,0.011,0.05c0.109,0.78,0.26,1.53,0.43,2.26     c0.07,0.33,0.16,0.66,0.25,0.99c0.1,0.37,0.2,0.73,0.32,1.09c0.109,0.36,0.229,0.71,0.359,1.05c0.12,0.34,0.25,0.68,0.391,1.01     c0.56,1.38,1.21,2.67,1.91,3.88c0.01,0.01,0.02,0.03,0.029,0.04c0.07,0.13,0.15,0.26,0.23,0.39c0.02,0.05,0.05,0.09,0.08,0.13     v0.01c0.069,0.13,0.149,0.27,0.239,0.4c0.2,0.31,0.4,0.63,0.601,0.93c0.649,1,1.33,1.94,2.01,2.83c0.43,0.57,0.86,1.12,1.29,1.66     c0.21,0.27,0.43,0.53,0.63,0.8c0.2,0.25,0.4,0.5,0.61,0.75v0.01c0.05,0.05,0.09,0.11,0.12,0.16c0.17,0.21,0.34,0.42,0.5,0.63     c0.17,0.21,0.33,0.41,0.479,0.61c0.15,0.2,0.3,0.39,0.45,0.59c0.05,0.06,0.09,0.11,0.13,0.17c0.24,0.33,0.47,0.66,0.69,0.97     c0.13,0.19,0.25,0.37,0.359,0.56c0.23,0.37,0.44,0.72,0.61,1.07c0,3.8-0.32,8.03-0.6,10.97c-0.54-0.19-1.131-0.29-1.73-0.29     c-2.52,0-4.64,1.69-5.28,3.99H554.5H554h-0.31c0,0-1.551-0.77-2.931-2.06c-1.1-1.03-2.09-2.38-2.09-3.94     c0-1.87,0.9-3.22,1.85-4.58c0.82-1.18,1.66-2.38,1.98-3.92c-0.24-0.09-0.48-0.16-0.71-0.22c-0.22-0.06-0.44-0.1-0.66-0.14     c-0.1-0.01-0.2-0.02-0.3-0.03c-0.061-0.01-0.11-0.02-0.17-0.02l0.149-3.09h0.021c0.11,0,0.17,0,0.17,0     S553.33,121.75,553.67,120.08z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M164.72,318.04c-5.54-3.39-12.05-10.271-12.05-18.54h4.02c0.03,0.62,0.09,1.28,0.19,2     c-0.01,2.73,0.58,7.32,4.61,7.5c0,2.2-0.31,5.68,2.88,7.93c0.23,0.16,0.48,0.32,0.74,0.471l-0.38,0.649     C164.73,318.04,164.72,318.04,164.72,318.04z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M175.5,275.1v7.4l0.28,15.04l0.18,9.979l0.19,9.23c0,0.01-0.04,0.13-1.7,2.37     c-1.48,0.01-2.79-0.05-3.95-0.19c-2.36-0.27-4.1-0.81-5.39-1.529c-0.26-0.15-0.51-0.311-0.74-0.471     c-3.19-2.25-2.88-5.729-2.88-7.93c-4.03-0.18-4.62-4.77-4.61-7.5c0-1.17,0.12-2,0.12-2h-0.31c-0.14-3.12,0.56-4.95,0.56-4.95     c1.75-10.14,9.03-13.08,9.03-13.08l4.22,0.351v-5.69c0.01,0,0.02-0.01,0.03-0.01C172.07,275.69,173.72,275.34,175.5,275.1z\"/> \n" \
"			<path fill=\"#009245\" d=\"M182.25,336.47c0,0,2.83,0.12,3.21,2.99c0.03,0.17,0.04,0.35,0.04,0.54v0.11c0,0.18,0,0.35-0.02,0.52     c-0.01,0.16,0.1,0.311,0.09,0.45c-0.01,0.12-0.02,0.229-0.04,0.34c-0.02,0.14-0.05,0.271-0.08,0.4v0.01c0,0.03,0,0.06-0.02,0.09     c-0.2,0.78-0.49,1.35-0.7,1.76c-0.04,0.08-0.08,0.15-0.11,0.221c-0.03,0.069-0.06,0.13-0.08,0.18c-0.02,0.07-0.04,0.13-0.04,0.18     v0.01c0,0.03-0.17,0.061-0.2,0.08c-0.02,0.021-0.1,0.04-0.12,0.061c-0.04,0.04-0.11,0.07-0.13,0.08     c-0.01,0.01-0.05,0.01-0.05,0.01h-8.5v-8L182.25,336.47z\"/> \n" \
"			<path fill=\"#009245\" d=\"M185.35,384.62c0,3.59-2.59,3.88-3.7,3.88h-0.15c0,0.07-0.04,0.81-0.02,1.04     c-0.03-0.021-0.07-0.03-0.1-0.03c0-0.01-0.01-0.01-0.02-0.01c-0.11-0.08-0.24-0.14-0.36-0.2c-0.03-0.02-0.06-0.03-0.08-0.04     c-0.04-0.02-0.08-0.04-0.12-0.06c-0.12-0.061-0.24-0.11-0.36-0.16c-0.03-0.021-0.08-0.04-0.13-0.05     c-0.12-0.04-0.24-0.07-0.37-0.09c-0.04-0.021-0.09-0.03-0.14-0.03c-0.02-0.01-0.03-0.01-0.05-0.01     c-0.04-0.021-0.08-0.021-0.12-0.021c-0.13-0.03-0.27-0.05-0.4-0.06c-0.16-0.021-0.32-0.03-0.48-0.03c-0.14,0-0.29,0.01-0.43,0.02     c-0.72,0.04-1.37,0.24-1.96,0.561c-0.24,0.12-0.46,0.26-0.68,0.42l-0.18-0.25v-9.99l7.25,0.01     C182.75,379.52,185.35,380.12,185.35,384.62z\"/> \n" \
"			<path fill=\"#662D91\" d=\"M565,98.5c4.83,0.83,7.33,1,10.67,3.67l0.48-0.01l0.18,9.3c0,0,0.04,0.1,0.11,0.28l-0.16,0.06     c0,0-0.851,3.91,3.22,9.24c-1.05,1-5.14,0.01-9.38-6.07c-0.05-0.08-0.101-0.17-0.16-0.25c-0.15-0.24-0.3-0.5-0.44-0.72     c-0.079-0.13-0.159-0.5-0.229-0.5h-0.01c-0.07,0-0.15-0.14-0.221-0.28c-0.029-0.04-0.06-0.04-0.09-0.06     c-0.01-0.01-0.02-0.02-0.029-0.04c-0.7-1.21-1.351-2.5-1.91-3.88c-0.141-0.33-0.271-0.67-0.391-1.01     c-0.13-0.34-0.25-0.69-0.359-1.05c-0.11-0.36-0.221-0.72-0.32-1.09c-0.09-0.33-0.18-0.66-0.25-0.99     c-0.17-0.73-0.32-1.48-0.43-2.26c0-0.02,0-0.03-0.011-0.05c-0.01-0.12-0.029-0.24-0.039-0.37c-0.011,0-0.011-0.01-0.011-0.02     c-0.04-0.32-0.069-0.65-0.1-0.99c-0.03-0.28-0.05-0.56-0.061-0.84c-0.029-0.28-0.04-0.56-0.04-0.85     C565,99.32,564.99,98.91,565,98.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M422.33,246.5c0,0,2.439,2.08,3.28,5.33c-0.601,0.63-0.94,1.37-0.94,2.17c0,0.79,0.33,1.53,0.93,2.15     v0.01c-0.439,1.67-1.439,3.47-3.27,5.34h-3.83v-15H422.33z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M581.5,316.5h1.5l4-1.08h0.5v0.08h4h4h0.43c-2.89,7.27-5.6,8.17-5.6,8.17s-6-0.67-7,0.33     s-3.66,2.33-3.66,2.33s-3-0.66-8.34-2.33c-2,0.81-4.1,1.31-5.83,1.57v-9.07H581.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M595.55,210l-4.05,10.75c0,0-3,0.75-4,0s1.75-4.92,0-5.71s-1.8,3.47-4.17,2.71     c-0.51-0.16-1.33-0.5-2.29-0.93c-1.771-0.78-4.03-1.86-5.85-2.75c-1.82-0.88-3.19-1.57-3.19-1.57l3.25-6.25l3.5-5l2.67,1.24     l5.33,2.48l2.75,1.28c0,0-1.75,4.25,0,4.75s3.5-3,3.5-3C595.25,209,595.55,210,595.55,210z M583.78,210.86     c1.51-3.2-0.45-5.61-0.45-5.61s-2.74-1.07-4.73,2.67c-0.06,0.11-0.109,0.21-0.159,0.31c-1.65,3.5,1.56,4.77,1.56,4.77     s2.09,1.01,3.6-1.78c0.061-0.11,0.11-0.22,0.17-0.34C583.77,210.87,583.78,210.87,583.78,210.86z\"/> \n" \
"			<path fill=\"#666666\" d=\"M591.5,283c4.79,5.63,4,9,4,9v23.5h-4V283z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M580.12,198.5H593c-3.33,0-4.33,2.83-4.33,2.83s-0.8,1.48-1.92,3.64l-5.33-2.48     c0.09-0.2,0.19-0.35,0.22-0.46C582.21,200.6,580.6,198.95,580.12,198.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M587,315.42l-4,1.08h-1.5V307v-0.5h1.83c0,0-0.49-0.57-1.83-1.32c-0.02-0.01-0.04-0.02-0.07-0.04     l0.07-0.14v-8v-0.5h1.83c0,0-0.49-0.57-1.83-1.32c-0.02-0.01-0.04-0.02-0.07-0.04l0.07-0.14v-6v-3c0,0-0.33-3.95-3.1-7.78     c-0.19-0.26-0.381-0.52-0.591-0.77l2.69-0.45c0,0,0.02,0.02,0.07,0.05c0.68,0.49,6.1,4.59,6.1,9.28     C586.67,291.33,587,315.42,587,315.42z\"/> \n" \
"			<path fill=\"#8C6239\" d=\"M583.33,205.25c0,0,1.96,2.41,0.45,5.61c0,0.01-0.011,0.01-0.011,0.02c-0.06,0.12-0.109,0.23-0.17,0.34     c-1.51,2.79-3.6,1.78-3.6,1.78s-3.21-1.27-1.56-4.77c0.05-0.1,0.1-0.2,0.159-0.31C580.59,204.18,583.33,205.25,583.33,205.25z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M573.67,338.77c-4.65-3.029,0-4.97,0-4.97c-1.65-0.069-3.53-0.55-3.34-2.45c0.34-3.31,5-2.85,7.92,0     c2.91,2.851,7.42,3.98,7.42,3.98s-3.34,3.67-5.67,5.34c-2.33,1.66-5.83,3.9-7.75,2.45s-2.74-3.46,0-4.12     C572.72,338.89,573.2,338.81,573.67,338.77z\"/> \n" \
"			<path fill=\"#666666\" d=\"M583.33,296.5h-1.83h-16v-4.63c8.88,0.28,13.63,2.01,15.93,3.27c0.03,0.021,0.051,0.03,0.07,0.04     C582.84,295.93,583.33,296.5,583.33,296.5z\"/> \n" \
"			<path fill=\"#666666\" d=\"M583.33,306.5h-1.83h-16v-4.63c8.88,0.28,13.63,2.01,15.93,3.27c0.03,0.021,0.051,0.03,0.07,0.04     C582.84,305.93,583.33,306.5,583.33,306.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M579.67,221.33c2.33,0,2.12,5.06,2.12,5.06l-1.29-0.01l-18-0.18v-3.57c1.08-0.65,1.83-1.79,1.93-3.13     c1.561,0,6.91,0,7.82,0c0,0,1.27-2.39,2.93-5.41l0.011-0.02c1.819,0.89,4.079,1.97,5.85,2.75     C580.15,218.94,579.58,220.64,579.67,221.33z\"/> \n" \
"			<polygon fill=\"#009245\" points=\"581.5,307 581.5,316.5 565.5,316.5 565.5,306.5 581.5,306.5    \"/> \n" \
"			<path fill=\"#009245\" d=\"M581.5,297v8l-0.07,0.14c-2.3-1.26-7.05-2.989-15.93-3.27v-5.37h16V297z\"/> \n" \
"			<path fill=\"#009245\" d=\"M581.5,289v6l-0.07,0.14c-2.3-1.26-7.05-2.989-15.93-3.27v-3.37h-5v3.37     c-9.16,0.28-14.92,2.05-17.92,3.32L542.5,295v-8c0,0,1.33-16,19.54-16c8.25,0,13.02,3.08,15.77,6.45     c0.21,0.25,0.4,0.51,0.591,0.77c2.77,3.83,3.1,7.78,3.1,7.78V289z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M581.16,142c0,0.39-0.04,0.78-0.12,1.15c0,0.01,0,0.01-0.01,0.02c-0.53,2.47-2.73,4.32-5.36,4.32     c-0.57,0-1.12-0.09-1.64-0.25c-2.24-0.69-3.86-2.78-3.86-5.24c0-0.52,0.07-1.03,0.22-1.5c0.641-2.3,2.761-3.99,5.28-3.99     c0.6,0,1.19,0.1,1.73,0.29C579.59,137.52,581.16,139.58,581.16,142z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M580.5,231.5V277l-2.69,0.45c-2.75-3.37-7.52-6.45-15.77-6.45c-18.21,0-19.54,16-19.54,16v8l0.08,0.19     c-0.03,0.01-0.05,0.02-0.08,0.029c-1.71,0.721-2.5,1.28-2.5,1.28h-4.5v-9l1.58-1.5c0,0,0,0,0.01-0.01     c0.08-0.3,1.53-5.221,5.41-12.49c0-4.78,0-26.17,0-38.55c0.48-1.19,1.71-3.45,4.17-3.45c1.24,0,11.33,0,11.33,0h0.5h3.5h0.5H580     H580.5z\"/> \n" \
"			<polygon fill=\"#999999\" points=\"579.5,94.5 579.5,98.5 576.08,98.5 576,94.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M577.33,357.74c0,0.62-0.11,1.21-0.32,1.76c-0.71,1.94-2.569,3.32-4.76,3.32c-1.24,0-2.39-0.45-3.27-1.2     c-1.11-0.93-1.811-2.32-1.811-3.88c0-0.15,0.01-0.311,0.03-0.46c0.22-2.59,2.399-4.62,5.05-4.62c1.28,0,2.44,0.47,3.33,1.25     C576.66,354.84,577.33,356.21,577.33,357.74z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M563.5,128.5v3H563h-2.5v-7v-10C561,104.5,560,98,560,98c-4-0.5-9.32,4.5-9.32,4.5h-0.18v-0.01l0.07-2.41     l-0.24-5.58H576l0.08,4l0.07,3.66l-0.48,0.01c-3.34-2.67-5.84-2.84-10.67-3.67c0,0-1.5,0.33-1.5,16v3v4v3V128.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M574.03,147.24c-0.96,0.12-2.07,0.18-3.36,0.18c-9.67,0-8-1.92-15.34-1.92h-0.83V141v-0.5h15.89     c-0.149,0.47-0.22,0.98-0.22,1.5C570.17,144.46,571.79,146.55,574.03,147.24z\"/> \n" \
"			<polygon fill=\"#999999\" points=\"563.5,131.5 563.5,128.5 563.5,124.5 567,124.5 567.5,124.5 567.5,134.5 563.5,134.5    \"/> \n" \
"			<polygon fill=\"#999999\" points=\"563.5,121.5 563.5,117.5 563.5,114.5 567.5,114.5 567.5,124.5 567,124.5 563.5,124.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M567.2,357.28c-0.021,0.149-0.03,0.31-0.03,0.46c0,1.56,0.7,2.95,1.811,3.88     c-2.851,1.83-5.65,5.26-5.65,11.63c0,3.67-2.33,3.25-6.33,3.25s-98,0-98,0s-8.67-0.75-8.67-12.08c0-11.34-0.33-53.92-0.33-53.92     c1.73,0,3.56,0,5.5,0V364c0,0,0.5,7.5,7.5,7.5s92,0,92,0s3.67-2.5,3.67-4.83c0-0.939-0.91-2.84-2.3-4.93     c1.2-0.931,1.96-2.38,1.96-4c0-0.32-0.03-0.62-0.09-0.92c0.7,0.29,1.45,0.52,2.26,0.68v3h5v-2.99     C566.09,357.45,566.66,357.37,567.2,357.28z\"/> \n" \
"			<polygon fill=\"#B3B3B3\" points=\"565.5,325.57 565.5,328.5 565.5,334.82 565.5,357.51 565.5,360.5 560.5,360.5 560.5,357.5      560.5,343.12 560.5,334.95 560.5,328.5 560.5,325.75 560.5,316.5 560.5,306.5 560.5,301.87 560.5,296.5 560.5,291.87      560.5,288.5 565.5,288.5 565.5,291.87 565.5,296.5 565.5,301.87 565.5,306.5 565.5,316.5    \"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M564.43,219.5c-0.1,1.34-0.85,2.48-1.93,3.13v3.57v5.3H562h-3.5v-5.34v-3.37     c-1.23-0.62-2.1-1.85-2.22-3.29c-0.011-0.12-0.021-0.24-0.021-0.36c0-2.27,1.83-4.1,4.101-4.1c2.27,0,4.1,1.83,4.1,4.1     C564.46,219.26,564.45,219.38,564.43,219.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M560.5,343.12v14.38c-0.81-0.16-1.56-0.39-2.26-0.68c-0.431-2.37-2.5-4.16-4.99-4.16     c-0.07,0-0.15,0-0.22,0.01c-1.62-2.17-2.36-4.46-2.36-5.67C550.67,344.33,560.5,348.57,560.5,343.12z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M560.5,334.95v8.17c0-5.45-7.25-6.45-7.25-6.45s-2.62,2.15-3.25,4c0,0,0.3,3.93-6.68,3.93     c-0.221,0-0.431,0-0.641-0.01c-6.39-0.24-7.01-4.05-7.01-7.92c0-4,1.33-8.17,7.16-8.17c1.31,0,2.51,0.33,3.62,0.84     c0,0,0,0,0.01,0.01c1.07,0.79,2.2,1.53,3.31,2.061c0.011,0.02,0.03,0.03,0.04,0.03c2.29,1.729,4.311,3.56,6.521,3.56     C557.44,335,558.92,334.98,560.5,334.95z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M542.5,316.5h18v9.25c-4.23-0.42-6.66-2.08-6.66-2.08s-2.01,0.5-4.17,2.66     c1.19,0.76,2.13,1.479,2.82,2.17c1.43,1.43,1.74,2.71,0.84,3.83c-1.061,0.08-2.271-0.29-3.521-0.89     c-0.01,0-0.029-0.011-0.04-0.03c-1.039-0.771-2.13-1.521-3.31-2.061c-0.01-0.01-0.01-0.01-0.01-0.01     c-0.38-0.28-0.73-0.56-1.09-0.84c-2.471-1.99-4.36-4-4.36-4s-6,0-9.67,0c-3.66,0-4.33-14-4.33-14l2.46-1.19     c2.65,8.2,6.21,8.271,6.21,8.271l4.33-1.08H542.5z\"/> \n" \
"			<path fill=\"#666666\" d=\"M560.5,291.87v4.63h-18H540c0,0,0.79-0.56,2.5-1.28c0.03-0.01,0.05-0.02,0.08-0.029     C545.58,293.92,551.34,292.15,560.5,291.87z\"/> \n" \
"			<polygon fill=\"#009245\" points=\"560.5,306.5 560.5,316.5 542.5,316.5 542.5,307 542.5,306.5    \"/> \n" \
"			<path fill=\"#666666\" d=\"M560.5,301.87v4.63h-18H540c0,0,0.79-0.56,2.5-1.28c0.03-0.01,0.05-0.02,0.08-0.029     C545.58,303.92,551.34,302.15,560.5,301.87z\"/> \n" \
"			<path fill=\"#009245\" d=\"M560.5,296.5v5.37c-9.16,0.28-14.92,2.05-17.92,3.32L542.5,305v-8v-0.5H560.5z\"/> \n" \
"			<polygon fill=\"#999999\" points=\"556.5,131.5 556.5,128.5 556.5,124.5 560,124.5 560.5,124.5 560.5,131.5 560.5,134.5      556.5,134.5    \"/> \n" \
"			<polygon fill=\"#999999\" points=\"556.5,121.5 556.5,117.5 556.5,114.5 560.5,114.5 560.5,124.5 560,124.5 556.5,124.5    \"/> \n" \
"			<path fill=\"#662D91\" d=\"M560,98c-0.17,5-0.17,7.67-2,11.67s-3.43,5.66-5.33,4.83s-1.91-2-1.91-2h-0.1l-0.16-10h0.18     C550.68,102.5,556,97.5,560,98z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M558.5,222.79v3.37l-16-0.16l-1.98-0.39c2.671-3.82,6.48-6.11,6.48-6.11h9h0.28     C556.4,220.94,557.27,222.17,558.5,222.79z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M558.24,356.82c0.06,0.3,0.09,0.6,0.09,0.92c0,1.62-0.76,3.069-1.96,4c-0.86,0.68-1.94,1.08-3.12,1.08     c-2.8,0-5.08-2.28-5.08-5.08c0-1.3,0.49-2.5,1.3-3.391c0.88-0.989,2.15-1.619,3.561-1.68c0.069-0.01,0.149-0.01,0.22-0.01     C555.74,352.66,557.81,354.45,558.24,356.82z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M553.25,336.67c0,0,7.25,1,7.25,6.45s-9.83,1.21-9.83,3.88c0,1.21,0.74,3.5,2.36,5.67     c-1.41,0.061-2.681,0.69-3.561,1.68c-0.38-0.26-0.76-0.489-1.14-0.68c-3-1.67-3.33-4.34-3-9c-0.43-0.02-1.11-0.04-2.01-0.07     c6.979,0,6.68-3.93,6.68-3.93C550.63,338.82,553.25,336.67,553.25,336.67z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M554.5,141v4.5c-3.22,0-3.5,0-3.5,0l-0.13-5H551h2.69H554h0.5V141z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M553.69,140.5H551h-0.13h-3.7c0,0-6.84-1.5-6.84-7.83c0-6.34,7.17-6.67,7.17-6.67s1.34-0.58,3.16-0.41     c0.06,0,0.109,0.01,0.17,0.02c0.1,0.01,0.2,0.02,0.3,0.03c0.22,0.04,0.44,0.08,0.66,0.14c0.2,0.06,0.39,0.13,0.63,0.22     c-0.32,1.54-1.08,2.74-1.9,3.92c-0.949,1.36-1.85,2.71-1.85,4.58c0,1.56,0.99,2.91,2.09,3.94     C552.14,139.73,553.69,140.5,553.69,140.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M547.5,118.5h3.25h0.05c0,0,3.2-0.08,2.87,1.58c-0.34,1.67-2.67,2.42-2.67,2.42s-0.06,0-0.17,0h-0.021     H531.58c-5.76,0-7.08,7.5-7.08,7.5v64.5h-6v-65.17c0-9.66,9.5-10.83,9.5-10.83H547.5z\"/> \n" \
"			<polygon fill=\"#999999\" points=\"547.5,97.5 543.5,97.5 543.5,94.5 550.33,94.5 550.57,100.08 550.5,102.49 550.5,102.5      550.66,112.5 550.75,118.5 547.5,118.5 547.5,100    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M528,328.5h14.83c-5.83,0-7.16,4.17-7.16,8.17c0,3.87,0.62,7.68,7.01,7.92     c-12.43-0.2-56.93,0.08-56.93,0.08s-14.25,0-14.25-19c0-13,0-15.17,0-15.17c4.29,0,8.94,0,14,0v5H498c0,0,3-2,3-5     c0.82,0,1.66,0,2.5,0c0.17,0,0.33,0,0.5,0c0.33,0,0.67,0,1,0c0,0-1.67,8-6.33,8c-5,0-14.17,0-14.17,0v6.5c0,0,2.5,5.5,6.83,5.5     c5,0,24.67,0,24.67,0s3-0.75,3-5.08c0-4.34,0.33-14.92,0.33-14.92c1.689,0,3.42,0,5.17,0V325C524.5,325,526,329.5,528,328.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M542.5,305l0.08,0.19c-0.03,0.01-0.05,0.02-0.08,0.029c-1.71,0.721-2.5,1.28-2.5,1.28h2.5v0.5v9.5H540     l-4.33,1.08c0,0-3.56-0.07-6.21-8.271c-0.28-0.84-0.54-1.779-0.79-2.81l0.48-0.62c0.56,0.36,1.27,0.62,2.18,0.62     c2.91,0,4.17-2.5,4.17-2.5v-7.5h4.5h2.5v0.5V305z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M542.5,234.95c0,12.38,0,33.77,0,38.55c-3.88,7.27-5.33,12.19-5.41,12.49c0-0.04-0.14-0.221-1.42-0.99     c1.29-2.27,2-5.63,2.38-8.49c0.15-1.1,0.24-2.12,0.311-2.979c0.12-1.521,0.14-2.53,0.14-2.53v-31c0,0-3.27-0.24-5.32-2.38     c-0.01-0.02-0.02-0.03-0.04-0.05c-0.8-0.95-1.239-2.05-1.479-3.13c-0.01-0.02-0.01-0.04-0.01-0.06c-0.04-0.2-0.08-0.39-0.11-0.59     c0-0.01,0-0.02,0-0.02c0.02-0.14,0.04-0.28,0.04-0.42c0-6.14,4.75-6.96,8.42-6.96c0.17-0.27,0.34-0.53,0.52-0.78l1.98,0.39     C542.5,226,542.5,229.65,542.5,234.95z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M501.5,273.5h17h6H538l0.36,0.03c-0.07,0.859-0.16,1.88-0.311,2.979L538,276.5h-37c0,0,0,0-3.75,0H405     l-0.31-0.31l0.04-0.04l2.68-2.65h23.09h4.5h14.5h6h15h15h12H501.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M538,276.5l0.05,0.01c-0.38,2.86-1.09,6.221-2.38,8.49c1.28,0.77,1.42,0.95,1.42,0.99     c-0.01,0.01-0.01,0.01-0.01,0.01l-1.58,1.5c0,0-19.25,0.25-26.25-0.25S501,276.5,501,276.5H538z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M501.5,228.5h17h6h7.5c0,0-0.84,2.52-0.46,5.27c0,0,0,0.01,0,0.02c0.03,0.2,0.07,0.39,0.11,0.59     c0,0.02,0,0.04,0.01,0.06c0.2,1.33,0.76,2.35,1.479,3.13c0.021,0.02,0.03,0.03,0.04,0.05c0.61,0.73,1.42,1.38,2.49,1.88H524.5h-6     h-17h-4c-0.31,0-0.5,0-0.5,0H337.5h-11c-9.11,0-14.5,0-14.5,0s-4.5-0.5-4.5,5.17v28.83h-12V243c0,0,1.5-4.5-4.5-4.5s-65,0-65,0     s-7.28-0.83-7.28,8h-0.22v-12h-22v-3h0.5c0,0,0.17-2.36,0.49-4.56c0.03-0.15,0.05-0.3,0.07-0.44h21.43H219h5c0,0,0.67,2,3.33,2     c2.67,0,6.67,0,6.67,0h92.5h11h160H501.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M527.5,301.5v-11H507c0,0-9.75-2-9.75-14c3.75,0,3.75,0,3.75,0s1.25,10.25,8.25,10.75     s26.25,0.25,26.25,0.25v9v7.5c0,0-1.26,2.5-4.17,2.5c-0.91,0-1.62-0.26-2.18-0.62c-1.221-0.79-1.65-2.05-1.65-2.05v-0.33V301.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M529.46,309.31L527,310.5c-0.84,0-1.67,0-2.5,0c-1.75,0-3.48,0-5.17,0c-5.03,0-9.8,0-14.33,0     c-0.33,0-0.67,0-1,0c-0.17,0-0.33,0-0.5,0c-0.84,0-1.68,0-2.5,0c-5.55,0-10.7,0-15.5,0c-5.06,0-9.71,0-14,0c-6.02,0-11.32,0-16,0     c-1.94,0-3.77,0-5.5,0c-28.09,0-30.07,0-35.67,0c-8.66,0-6.67,6.09-6.67,6.09s6.33,0.76,6.33,6.76s-6.01,7.561-6.01,7.561     s-0.36,7.17-0.36,12.5c-2.32,3.149-4.43,6.14-6.29,8.939l-2.63-0.609c2.609-4.08,4.75-7.9,4.75-10.36     c0-2.04,0.05-13.06,0.05-25.38c0-0.03,0-0.06,0-0.09c0-9.58,4.5-9.41,4.5-9.41s60.37,0,95.75,0c1.2,0,2.36,0,3.5,0h0.01     c11.91,0,20.311,0,21.41,0C528.92,307.53,529.18,308.47,529.46,309.31z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M507.26,306.16v0.34h-0.01c-1.14,0-2.3,0-3.5,0v-0.33c0,0,3.25-4.67,8-4.67c4.16,0,13.49,0,15.75,0v2H527     c0,0-10.5,0-13.33,0C510.92,303.5,507.47,306.01,507.26,306.16z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M527.5,290.5v11c-2.26,0-11.59,0-15.75,0c-4.75,0-8,4.67-8,4.67v0.33c-35.38,0-95.75,0-95.75,0     s-4.5-0.17-4.5,9.41c0-17.78-0.29-38.22-0.29-38.22l1.48-1.5l0.31,0.31h92.25c0,12,9.75,14,9.75,14H527.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M524.5,239.5v34h-6c0,0,0-14.34,0-34H524.5z\"/> \n" \
"			<rect x=\"518.5\" y=\"198.5\" fill=\"#29ABE2\" width=\"6\" height=\"30\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M504,94.5l-2.5,2.92v97.08h-4V98c0,0-1.83-2.67-3.17-3.5C498.67,94.5,504,94.5,504,94.5z\"/> \n" \
"			<polygon fill=\"#29ABE2\" points=\"501.5,240 501.5,273.5 497.5,273.5 497.5,240 497.5,239.5 501.5,239.5    \"/> \n" \
"			<polygon fill=\"#29ABE2\" points=\"501.5,199 501.5,228.5 497.5,228.5 497.5,199 497.5,198.5 501.5,198.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M485.5,262v11.5h-15c0,0,0-7.5,0-9.5s-3.5-2.5-3.5-2.5s-4.33,0-7.67,0c-3.33,0-3.83,2.5-3.83,2.5v9.5h-6     c0,0,0-1.17,0-5.75c0-5.32-4.63-5.89-7.09-5.81v-0.44h0.09v-15c0,0,14.5,0.25,27.75,0.25S485.5,262,485.5,262z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M448.17,502.17c1.29,0,2.33,1.04,2.33,2.33s-1.04,2.33-2.33,2.33c-0.93,0-1.74-0.54-2.11-1.33h-5.35     c-0.1-0.65-0.21-1.32-0.33-2h5.68C446.43,502.71,447.24,502.17,448.17,502.17z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M452,532.06c0,3.671-5,7.44-5,7.44s-2.87,0-7.94,0c-0.279-5.43-2.159-38.97-5.18-53.66l3.17-0.63     c1.26,6.31,2.38,12.59,3.33,18.29c0.12,0.68,0.23,1.35,0.33,2v0.25c1.771,10.66,2.93,18.87,3.29,21.04     C447.33,526.79,452,528.39,452,532.06z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M442.5,265.33l-0.5,4.17c0,0-2.67,0-4.6,0c-1.931,0-2.69,1.31-2.69,1.31l0.29,2.69h-4.5V271     c0,0-2.17-0.67-2.17-3s2.17-3,2.17-3v-3v-0.5h4.21v0.5c0,2.67,2.69,3.67,2.69,3.67L442.5,265.33z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M439.06,539.5c-0.02,0-0.04,0-0.06,0c-21.23,0-80.68,0-128.98,0c0.3-3.43,3.92-44.46,9.98-66.17     c3.33-11.92,8.14-26.7,12.58-39.15l85.71,0.75c6.7,18.45,12.35,38.761,14.43,46.44c0.4,1.149,0.79,2.67,1.16,4.47     C436.9,500.53,438.78,534.07,439.06,539.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M425.37,434.99l1.3,0.01c0,0,5,0.33,5,4.25c0.33,4.92-1.34,7.08-4.67,9.42     c3.81,8.32,7.26,22.5,10.05,36.54l-3.17,0.63c-0.37-1.8-0.76-3.32-1.16-4.47c-2.08-7.68-7.729-27.99-14.43-46.44L425.37,434.99z\"/> \n" \
"			<path fill=\"#8C6239\" d=\"M435,251.46c0.83,0.69,1.33,1.58,1.33,2.54c0,0.91-0.45,1.75-1.2,2.42     C434.53,254.73,434.63,253,435,251.46z\"/> \n" \
"			<path fill=\"#8C6239\" d=\"M430.5,250c1.81,0,3.43,0.57,4.5,1.46c-0.37,1.54-0.47,3.27,0.13,4.96c-1.06,0.97-2.74,1.58-4.63,1.58     c-2.06,0-3.87-0.73-4.9-1.84v-0.01c0.42-1.58,0.341-3.04,0.011-4.32C426.64,250.73,428.45,250,430.5,250z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M427,428.28c0.56,3.529-0.54,5.58-1.63,6.71l-7.08-0.061c-4.05-11.16-8.49-21.64-12.76-28.239     c-9.67-20.171-17.271-31.931-17.271-37.101c0-2.64,4.5-8.84,8.57-14.99c0.63-0.96,1.26-1.92,1.87-2.859l2.63,0.609     c-0.63,0.931-1.22,1.841-1.78,2.73c-4.55,7.189-7.14,12.95-6.83,16.74c12.799,27,23.45,46.819,25.45,50.489     C420.83,422.31,426,421.94,427,428.28z\"/> \n" \
"			<path fill=\"#8C6239\" d=\"M425.61,251.83c0.33,1.28,0.409,2.74-0.011,4.32c-0.6-0.62-0.93-1.36-0.93-2.15     C424.67,253.2,425.01,252.46,425.61,251.83z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M407.41,273.5l-2.68,2.65l-0.04,0.04l-1.48,1.5h-3.71V275c0,0-2.35,1.54-5.32,3.5h-0.29     c-0.75,0.56-1.55,1.16-2.39,1.77c-0.04,0.03-0.09,0.061-0.14,0.091c-0.96,0.63-1.93,1.27-2.86,1.89c-1.5,0.99-2.9,1.92-4,2.66     c-0.89,0.6-1.6,1.08-2,1.359c-0.03,0.021-0.05,0.04-0.08,0.061c-1.69,1.21-2.73,0.14-2.78-1.8c-0.03-0.74,0.08-1.61,0.36-2.53     c0.23-0.46,2.11-2.54,4.89-5.5c1.58-1.68,3.45-3.64,5.46-5.74C400.36,260.35,414,246.5,414,246.5h4.5v15v1.17L407.41,273.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M346.5,329v-12.08l4,0.41l3.96,0.05l19.02,0.26L399.5,318v-40.31h3.71c0,0,0.29,20.439,0.29,38.22     c0,0.03,0,0.06,0,0.09c0,12.32-0.05,23.34-0.05,25.38c0,2.46-2.141,6.28-4.75,10.36c-0.61,0.939-1.24,1.899-1.87,2.859     c-4.07,6.15-8.57,12.351-8.57,14.99c0,5.17,7.6,16.93,17.271,37.101c4.27,6.6,8.71,17.079,12.76,28.239l-85.71-0.75     c3.99-11.22,7.69-20.54,9.75-24.18c3.05-5.39,9.56-18.03,13.85-26.28c0.34-0.649,0.66-1.279,0.97-1.87     c1.34-2.56,2.37-4.51,2.85-5.35c2-3.17,2.67-3.5,2.67-6s-3.25-7.5-4.25-9.5s-11.92-19-12.92-20.67V329H346.5z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M390.5,301.5v13h4v-13v-23h-0.32c2.97-1.96,5.32-3.5,5.32-3.5v2.69V318l-26.02-0.36l0.02-1.14h3v-40h8.39     c-2.78,2.96-4.66,5.04-4.89,5.5c-0.28,0.92-0.39,1.79-0.36,2.53c-0.37,0.26-0.75,0.529-1.14,0.77v16.2v13h4v-13v-15.23     c0.4-0.279,1.11-0.76,2-1.359v16.59v13h4v-13v-19.25c0.93-0.62,1.9-1.26,2.86-1.89c-0.28,0.21-0.57,0.42-0.86,0.63V301.5z\"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"394.5,301.5 394.5,314.5 390.5,314.5 390.5,301.5 394,301.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M394.5,278.5v23H394h-3.5v-20.51c0.29-0.21,0.58-0.42,0.86-0.63c0.05-0.03,0.1-0.061,0.14-0.091     c0.92-0.609,1.82-1.21,2.68-1.77H394.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M370,269.88l20.35,0.88c-2.01,2.101-3.88,4.061-5.46,5.74h-8.39v40h-3v-41H372l-1.74-5.22L370,269.88z\"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"388.5,301.5 388.5,314.5 384.5,314.5 384.5,301.5 388,301.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M388.5,282.25v19.25H388h-3.5v-16.59C385.6,284.17,387,283.24,388.5,282.25z\"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"382.5,301.5 382.5,314.5 378.5,314.5 378.5,301.5 382,301.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M382.5,286.27v15.23H382h-3.5v-16.2c0.39-0.24,0.77-0.51,1.14-0.77c0.05,1.939,1.09,3.01,2.78,1.8     C382.45,286.31,382.47,286.29,382.5,286.27z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M361.5,300.5v14h4v-14v-14.65c0.76,0.48,1.44,0.841,2,1.11v13.54v14h4v-14v-17.22     c-0.34-0.221-0.67-0.46-0.99-0.721c-0.05-0.25-0.11-0.52-0.18-0.81c-2.33-2.33-6.33-6.25-6.33-6.25h8h1.5v41l-0.02,1.14     l-19.02-0.26l-3.96-0.05V275c0,0,1.96,1.52,4.61,3.5h-0.61v22v14h4v-14v-19.26c0.99,0.72,2.01,1.33,3,2.01V300.5z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M346.5,316.5v0.42V329h-1c0-7.24,0-15,0-15s0-0.1,0-0.28v-0.22c0-0.62-0.15-2.81-1.76-4.37     c1.62,1.55,1.77,3.74,1.77,4.37h0.99c0-14,0-36.5,0-36.5v-0.5V274v-0.5c0-0.12,0-0.23,0-0.25c0-2.75,3.5-3.75,3.5-3.75     l19.94,0.38l2.06,5.62h-8c0,0,4,3.92,6.33,6.25c0.07,0.29,0.13,0.56,0.18,0.81c0.22,1.101,0.3,1.83,0.13,2.48     c-0.07,0.24-0.16,0.46-0.3,0.7c0,0,0,0,0,0.01c-0.28,0.46-0.71,0.95-1.34,1.58c-0.19,0.15-0.73-0.01-1.5-0.4v0.03     c-0.56-0.27-1.24-0.63-2-1.11v-0.06c-1.18-0.73-2.56-1.65-4-2.66v0.12c-0.99-0.68-2.01-1.29-3-2.01v-0.25     c-1.19-0.851-2.34-1.71-3.39-2.49c-2.65-1.98-4.61-3.5-4.61-3.5v42.33L346.5,316.5z\"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"371.5,300.5 371.5,314.5 367.5,314.5 367.5,300.5 371,300.5    \"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"365.5,300.5 365.5,314.5 361.5,314.5 361.5,300.5 365,300.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M365.5,285.85v14.65H365h-3.5v-17.25C362.94,284.26,364.32,285.12,365.5,285.85z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M326.5,309.5H326h-19h-11.5H226l2-2c0,0,69.19,0,98.5,0H339c2.29,0,3.77,0.7,4.74,1.63     c1.61,1.561,1.76,3.75,1.76,4.37v0.22c0,0.181,0,0.28,0,0.28s0,7.76,0,15v11.33c1,1.67,11.92,18.67,12.92,20.67s4.25,7,4.25,9.5     s-0.67,2.83-2.67,6c-0.48,0.84-1.51,2.79-2.85,5.35l-2.5-1.26c2.4-4.649,4.02-8.37,4.02-10.09c0-6-16.17-28.5-16.17-28.5v-13     c-15,0-16-10-16-10S326.5,315.5,326.5,309.5z M342.14,320.01l0.36-0.01v-4.33c0-5.67-3.5-6.17-3.5-6.17h-1.5v6.75     C339.75,318.88,341.44,319.74,342.14,320.01z\"/> \n" \
"			<polygon fill=\"#0071BC\" points=\"358.5,300.5 358.5,314.5 354.5,314.5 354.5,300.5 358,300.5    \"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M358.5,281.24v19.26H358h-3.5v-22h0.61c1.05,0.78,2.2,1.64,3.39,2.49V281.24z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M354.65,380.59l2.5,1.26c-0.31,0.591-0.63,1.221-0.97,1.87c-4.29,8.25-10.8,20.891-13.85,26.28     c-2.06,3.64-5.76,12.96-9.75,24.18c-4.44,12.45-9.25,27.23-12.58,39.15c-6.06,21.71-9.68,62.74-9.98,66.17c-1.12,0-2.24,0-3.35,0     c-0.09-4.64,0.01-8.54,0.27-12.07c0-0.01,0-0.02,0-0.029c0.67-9.391,2.36-16.181,4.06-27.32c2.33-15.33,8.67-39.75,10.67-45.41     c2-5.67-1.67-7.17-1.67-7.17s-7,0-14.75,0s-8.75-8.5-8.75-8.5c0-3.66,0-6.8,0-9.5v-11c0-5.83,0-6.85,0-9.5     c0-4.33-3.5-5.5-3.5-5.5h-9.5v-9c1.7,0,7.24,0,8.08,0c4.25,0,3.92-3.5,3.92-3.5v-81v-0.5H307c0,0-0.41,74.44-0.59,108.17     c-0.05,9.58-0.08,15.88-0.08,16.25c0,1.66,3,2.75,3,2.75s12-0.34,15.67-0.67c0.67-1.33-4.67-6.67-4.67-6.67L306.5,429v-11.33     c0,0,11.25,0.33,14.92,0.33c3.66,0,7.25,4,8.58,4s3.67-0.33,5-5.33c2.69-6.72,12.45-22.54,18.57-34.03     C353.94,381.94,354.3,381.26,354.65,380.59z\"/> \n" \
"			<polygon fill=\"#29ABE2\" points=\"350.5,317.33 346.5,316.92 346.5,316.5    \"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M346.5,277c0,0,0,22.5,0,36.5h-0.99c0-0.63-0.15-2.82-1.77-4.37c-0.97-0.93-2.45-1.63-4.74-1.63h-12.5     c-29.31,0-98.5,0-98.5,0l-2,2l-4.34,5.16L218.5,312v-35v-0.5h128V277z\"/> \n" \
"			<polygon fill=\"#C1272D\" points=\"337.5,273.5 346.5,273.5 346.5,274 346.5,276.5 218.5,276.5 218.5,273.5 295.5,273.5      307.5,273.5 326.5,273.5    \"/> \n" \
"			<polygon fill=\"#C1272D\" points=\"337.5,240 337.5,273.5 326.5,273.5 326.5,240 326.5,239.5 337.5,239.5    \"/> \n" \
"			<polygon fill=\"#C1272D\" points=\"337.5,199 337.5,228.5 326.5,228.5 326.5,199 326.5,198.5 337.5,198.5    \"/> \n" \
"			<path fill=\"#C1272D\" d=\"M243.5,133.5h77.25c13,0,16.75,13.5,16.75,13.5s0,20.64,0,47.5h-11v-46c0-3-4.5-4-4.5-4s-38.03,0-68,0     h-10.5H243h-3.5H239h-20.5c-2.5,0-3,2.19-3,2.19s-0.25,3.31-0.25,7.81c0,0.7-0.25,1.49-0.7,2.3l-4.05-2.3c0,0,0-0.75,0-2.75     c-4.19-1.33-8.29-1.89-12-2v-3.25h12c0,0,0-0.75,0-2.75c0-2.75-1.5-5.75-1.5-5.75c1.5-2.25,4-4.5,4-4.5s11.24,0,26.5,0H243.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M306.94,527.4c0,0.01,0,0.02,0,0.029c-0.26,3.53-0.36,7.431-0.27,12.07c-34.83,0-63.11,0-65.67,0     c-7,0-6.5-6.5-6.5-6.5s0-93.21,0-149.5h9c0,3.98,0,6.79,0,7.5c0,3.33,3.5,3.5,3.5,3.5h17h0.5v9H264c0,0-16.04,0-16.75,0     c-1.75,0-3.75,3.5-3.75,3.5s0,5.33,0,8s3.5,3.5,3.5,3.5h49.5v11c0,0-46.5,0-49,0s-4,3.5-4,3.5s0,87.67,0,93.5s6.5,6,6.5,6     s47.33,0,52.33,0c0.3-3.52,3.65-4.81,4.48-5.07c0.04-0.02,0.06-0.029,0.06-0.04L306.94,527.4z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M283.5,403.5v3h-19v-3v-9v-1h9h4h6v1V403.5z M279.5,403.5v-6h-10v6H279.5z\"/> \n" \
"			<polygon fill=\"#FBB03B\" points=\"282.5,385.5 282.5,388.5 277.5,388.5 277.5,393.5 273.5,393.5 273.5,388.5 264.5,388.5      264.5,385.5    \"/> \n" \
"			<rect x=\"269.5\" y=\"397.5\" fill=\"#A67C52\" width=\"10\" height=\"6\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M257.5,366.5v7h-2v10h-5v-10h-3h-4V372v-5c0-0.01,0-0.02,0-0.03v-0.47h4h3v-3h5v3H257.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M247.5,373.5v10h-4c0-2.85,0-9.5,0-9.5l-0.39-0.18c0.05-0.101,0.09-0.21,0.13-0.32h0.26H247.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M247.5,357.5v9h-4h-0.03c-0.11-1.04-0.58-1.98-1.29-2.68c-0.81-0.82-1.94-1.32-3.18-1.32     c-2.32,0-4.22,1.75-4.47,4h-4.03v-9h4h9H247.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M236.25,94.5c6.75,0,9.75,0,9.75,0s-1.5,1.25-2.5,2.75c0,1.19,0,31.93,0,36.25h-4V98     C239.5,98,238.75,96,236.25,94.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M243.5,374c0,0,0,6.65,0,9.5h-9c0-3.49,0-6.83,0-10h0.26c0.22,0.64,0.59,1.21,1.06,1.68     c0.81,0.82,1.94,1.32,3.18,1.32c1.84,0,3.42-1.1,4.11-2.68L243.5,374z\"/> \n" \
"			<path fill=\"#A67C52\" d=\"M243.5,367v5c0,0.53-0.09,1.03-0.26,1.5c-0.04,0.11-0.08,0.22-0.13,0.32c-0.69,1.58-2.27,2.68-4.11,2.68     c-1.24,0-2.37-0.5-3.18-1.32c-0.47-0.47-0.84-1.04-1.06-1.68c-0.17-0.47-0.26-0.97-0.26-1.5v-5c0-0.06,0-0.08,0-0.08     c0-0.14,0.01-0.29,0.03-0.42c0.25-2.25,2.15-4,4.47-4c1.24,0,2.37,0.5,3.18,1.32c0.71,0.699,1.18,1.64,1.29,2.68     c0.02,0.15,0.03,0.31,0.03,0.47C243.5,366.98,243.5,366.99,243.5,367z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M243.5,338c0,0,0,8.95,0,19.5h-9v-15.75c0.17-2.92-2.83-2.75-7.17-2.75c-1.66,2.33-10.33,5.5-10.33,5.5     h-0.5v-9h-0.75l-0.86,0.07l-0.39-5.07c1-1.26,0.48-6.83,2.25-6.83c0.66,0,1.44,0.11,2.13,0.29c0.04,0.01,0.07,0.021,0.11,0.03     c1.38,0.37,2.98,1.029,4.95,1.68c3,1,6.03,1.76,8.96,1.76C241.16,327.43,243.5,338,243.5,338z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M243.5,144.5V175c0,0-0.25,6.5-6.25,6.5s-82.25,0-82.25,0s-3.5,0.53-3.5,3.44v106.78     c0,2.58,1.46,2.78,1.61,2.78c0.01,0,0.01,0,0.01,0s0,0,0.01,0h0.16c0.17,0,1.81-0.05,3.96,0.05c0,0-0.7,1.83-0.56,4.95h-4.02H151     c-5.75,0-6.5-4.5-6.5-4.5s0-125,0-132s7.12-7.5,7.12-7.5l23.88,0.5c0,0,0-8.75,0-10.75c0.88-1.09,1.75-1.61,4.72-2.91l2.43,1.52     c-0.5,0.16-0.77,0.26-0.77,0.26l0.12,2.38h13.5v3.26c-8,0.25-13.62,2.36-13.62,2.36l0.12,2.38h13.5v1h3v-1h12l4.05,2.3     c-2.45,4.43-10.8,9.95-17.55,9.95c-8,0-11-4.25-11-4.25s-28.25,0-31,0c-3,0-3.5,3.5-3.5,3.5v8.96c0,2.68,3.5,2.54,3.5,2.54h81     c0,0,3.5-0.5,3.5-3.5c0-1.54,0-29,0-29v-0.5h3.5H243.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M230.5,366.5h4.03c-0.02,0.13-0.03,0.28-0.03,0.42c0,0,0,0.021,0,0.08v5c0,0.5,0,1,0,1.5h-4V366.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M234.5,373.5c0,3.17,0,6.51,0,10h-4v-10H234.5z\"/> \n" \
"			<path fill=\"#FBB03B\" d=\"M232,210c0.33,3,0.67,3.33-1.5,6.5s-2.83,4.5-5,4.5s-0.17-4.5-1.17-4.5s-4.83,3.17-4.83,3.17l-2.97-1.89     l-4.08-2.6l-3.42-2.18l2.55-5.58l4.34-5.04l3.04,1.5l0.01,0.01c0,0.06,0,0.18-0.01,0.19l4.51,2.42h0.03v-0.38l2.46,1.23     c1.31,2.1,0.58,4.06,0.2,4.77c-0.1,0.2-0.16,0.38-0.16,0.38h2C228,212.5,230.33,209,232,210z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M225.5,350.88c0,5.74-4.46,6.62-4.46,6.62h-4.54h-7.71c0,0-2.51,1-2.51,4.25s1.51,4.75,1.51,4.75h8.71     h3.29c0,0,5.71,0.25,5.71,7s-5.71,6-5.71,6l-3.29,0.01l-7.46,0.01c0,0-2.76,0.73-2.76,5.23s4.01,4,4.01,4l0.05,0.2     c-2.22,0.609-3.84,2.64-3.84,5.05c0,2.9,2.35,5.25,5.25,5.25c2.1,0,3.92-1.24,4.75-3.03V397c-1,1.25-3.5,2.5-3.5,2.5h-16v-6     c1.38,0,2.5-1.12,2.5-2.5s-1.12-2.5-2.5-2.5v-1h1.5v-6h0.06c0-7,8.5-8,8.5-8s-0.02,0-0.06-0.01c-0.76-0.181-8.44-2.2-8.44-10.99     c0-9.25,6.99-10.75,6.99-10.75s7.01,0.14,10.95,0.1c1.33-0.01,2.31-0.04,2.56-0.1c1-0.25,0-1.25,0-1.25h-2.56h-10.95     c0,0-6.99-4-6.99-11.25s6.74-8.75,6.74-8.75h9.2l0.39,5.07l-5.62,0.43c0,0-3.11,0.5-3.11,4s1.63,4.5,1.63,4.5h8.71h0.5h3.79     C220.79,344.5,225.5,345.12,225.5,350.88z\"/> \n" \
"			<path fill=\"#FCEE21\" d=\"M221.66,314.66l-4.64,5.52c-0.01-0.01-0.02-0.02-0.03-0.029c-1.57-1.42-3.49-2.15-3.49-2.15     s0-4.38,0-10.5v-3.39v-6.61v-3.27v-7.9c0-1.38-0.13-2.66-0.36-3.83c-0.69-3.52-2.34-6.11-4.39-8c-4.17-3.86-10.03-4.83-13-4.83     c-4.86,0-8.96,0.33-13.54,4.83h-6.71v0.6c-1.78,0.24-3.43,0.591-4.97,1.021L170.5,276v-34.91v-0.59h1v-6h25h22v12v27v3v0.5v35     L221.66,314.66z\"/> \n" \
"			<path fill=\"#009245\" d=\"M217.02,320.18c1.01,0.891,1.87,2.011,1.97,3.38l-0.11,0.4c-0.69-0.18-1.47-0.29-2.13-0.29     c-1.77,0-1.25,5.57-2.25,6.83h-9.2h-6.8v-23h15c0,6.12,0,10.5,0,10.5s1.92,0.73,3.49,2.15     C217,320.16,217.01,320.17,217.02,320.18z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M218.99,226.5h-21.43c0.01-0.02,0.01-0.04,0.01-0.05c0.12-0.75,0.26-1.47,0.43-2.03     c0.53-0.74,0.72-1.81,0.74-2.92c4.2,0,7.26,0,7.26,0s2.58-0.71,4.58-3.5c0.39-0.53,0.9-1.54,1.87-2.82l4.08,2.6     c-0.01,0.01-0.02,0.03-0.03,0.04v0.01c-1,1.14-1.05,1.87-1.05,1.87s-1.33,1.35,0.44,2.68c0.01,0,0.01,0.01,0.02,0.03     c0.08,0.06,0.17,0.13,0.26,0.2c0,0,0.01,0,0.01,0.01c1.37,1.19,2.42,3.26,2.73,3.77C218.95,226.46,218.98,226.5,218.99,226.5z\"/> \n" \
"			<path fill=\"#998675\" d=\"M216.88,125.5c0.26,3.06,0.26,3.06-2.88,5c0,0-1.18,0-3.25,0h-6.21c-1.76-3.36-3.77-6.77-6.04-7.88v-3.12     h7c0.53,0,1.03,0,1.5,0.01c1.76,0.01,3.15,0.04,4.3,0.17c1.89,0.18,3.13,0.59,4.26,1.44C217.56,122.62,216.88,125.5,216.88,125.5     z M216,125c0-2.9-2.35-5.25-5.25-5.25s-5.25,2.35-5.25,5.25s2.35,5.25,5.25,5.25S216,127.9,216,125z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M216.5,391.78v4.439c-0.83,1.79-2.65,3.03-4.75,3.03c-2.9,0-5.25-2.35-5.25-5.25     c0-2.41,1.62-4.44,3.84-5.05c0.45-0.13,0.92-0.2,1.41-0.2C213.85,388.75,215.67,389.99,216.5,391.78z\"/> \n" \
"			<path fill=\"#009245\" d=\"M216.5,379.51v12.271c-0.83-1.79-2.65-3.03-4.75-3.03c-0.49,0-0.96,0.07-1.41,0.2l-0.05-0.2     c0,0-4.01,0.5-4.01-4s2.76-5.23,2.76-5.23L216.5,379.51z\"/> \n" \
"			<path fill=\"#009245\" d=\"M216.5,357.5v9h-8.71c0,0-1.51-1.5-1.51-4.75s2.51-4.25,2.51-4.25H216.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M216.5,350.5v1.35c-3.94,0.04-10.95-0.1-10.95-0.1s-6.99,1.5-6.99,10.75h-0.06v-23.25h0.06     c0,7.25,6.99,11.25,6.99,11.25H216.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M216.5,335.5v9h-8.71c0,0-1.63-1-1.63-4.5s3.11-4,3.11-4l5.62-0.43l0.86-0.07H216.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M216,119.5h-9c0,0-2.07-10.62-8.5-12.08v-6.92v-5h11.17c0,0-0.29,5.49,0,12.07     C213.33,111.65,216,119.5,216,119.5z\"/> \n" \
"			<circle fill=\"#C1272D\" cx=\"210.75\" cy=\"125\" r=\"5.25\"/> \n" \
"			<path fill=\"#808080\" d=\"M213.5,304.11v3.39h-15v-5.85C203.1,301.79,208.21,302.47,213.5,304.11z\"/> \n" \
"			<path fill=\"#808080\" d=\"M213.5,294.23v3.27h-15v-5.75C203.11,291.9,208.21,292.6,213.5,294.23z\"/> \n" \
"			<path fill=\"#009245\" d=\"M213.5,297.5v6.61c-5.29-1.641-10.4-2.32-15-2.46v-4.15H213.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M213.5,286.33v7.9c-5.29-1.631-10.39-2.33-15-2.48v-4.25h-6v4.36c-8.69,0.56-14.5,2.77-14.5,2.77     l0.03,2.87l-2.25,0.04l-0.28-15.04v-7.4c2.02-0.279,4.19-0.43,6.53-0.43c0.06-0.06,0.12-0.12,0.18-0.17     c4.58-4.5,8.68-4.83,13.54-4.83c2.97,0,8.83,0.97,13,4.83c2.05,1.89,3.7,4.48,4.39,8C213.37,283.67,213.5,284.95,213.5,286.33z\"/> \n" \
"			<path fill=\"#4D4D4D\" d=\"M210.5,151.75c0,2,0,2.75,0,2.75h-12v-4.75C202.21,149.86,206.31,150.42,210.5,151.75z\"/> \n" \
"			<path fill=\"#4D4D4D\" d=\"M210.5,143.75c0,2,0,2.75,0,2.75h-12v-4.75C202.21,141.86,206.31,142.42,210.5,143.75z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M209,138c0,0,1.5,3,1.5,5.75c-4.19-1.33-8.29-1.89-12-2v-19.13c2.27,1.11,4.28,4.52,6.04,7.88     C206.28,133.83,207.76,137.1,209,138z\"/> \n" \
"			<path fill=\"#009245\" d=\"M207,373.49c0.04,0.01,0.06,0.01,0.06,0.01s-8.5,1-8.5,8h-0.06v-8h8.5V373.49z\"/> \n" \
"			<path fill=\"#009245\" d=\"M207,373.49v0.01h-8.5v-11h0.06C198.56,371.29,206.24,373.31,207,373.49z\"/> \n" \
"			<path fill=\"#1B1464\" d=\"M207,119.5v0.01c-0.47-0.01-0.97-0.01-1.5-0.01h-7v-12.08C204.93,108.88,207,119.5,207,119.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M198.5,330.5h6.8c0,0-6.74,1.5-6.74,8.75h-0.06V330.5z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M197,388.5c1.38,0,2.5,1.12,2.5,2.5s-1.12,2.5-2.5,2.5h-3c-1.38,0-2.5-1.12-2.5-2.5     c0-0.69,0.28-1.32,0.73-1.77c0.45-0.45,1.08-0.73,1.77-0.73H197z\"/> \n" \
"			<path fill=\"#808080\" d=\"M192.59,226.5l-0.02-0.06l-0.57-2.02c0,0-0.7-1.19-0.86-2.92c-0.14-1.41,0.09-3.2,1.36-5     c3.5,0,5.5,0,5.5,0s0.78,2.6,0.74,5c-0.02,1.11-0.21,2.18-0.74,2.92c-0.17,0.56-0.31,1.28-0.43,2.03c0,0.01,0,0.03-0.01,0.05     c-0.02,0.14-0.04,0.29-0.07,0.44c-0.38,2.2-0.99,4.56-0.99,4.56H194L192.59,226.5z\"/> \n" \
"			<polygon fill=\"#B3B3B3\" points=\"198.5,381.5 198.5,387.5 197,387.5 192.5,387.5 192.5,381.76 192.5,373.5 198.5,373.5    \"/> \n" \
"			<polygon fill=\"#B3B3B3\" points=\"198.5,362.5 198.5,373.5 192.5,373.5 192.5,362.5 192.5,339.25 192.5,330.5 198.5,330.5      198.5,339.25    \"/> \n" \
"			<rect x=\"192.5\" y=\"307.5\" fill=\"#B3B3B3\" width=\"6\" height=\"23\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M198.5,301.65v5.85h-6v-5.74C194.37,301.63,196.39,301.58,198.5,301.65z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M198.5,297.5v4.15c-2.11-0.07-4.13-0.021-6,0.109v-4.26H198.5z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M198.5,291.75v5.75h-6v-5.64C194.38,291.73,196.39,291.68,198.5,291.75z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M198.5,287.5v4.25c-2.11-0.07-4.12-0.02-6,0.11v-4.36H198.5z\"/> \n" \
"			<polygon fill=\"#B3B3B3\" points=\"198.5,119.5 198.5,122.62 198.5,141.75 198.5,146.5 198.5,149.75 198.5,154.5 195.5,154.5      195.5,149.76 195.5,146.5 195.5,141.76 195.5,122.69 195.5,119.5 195.5,107.41 195.5,100.5 198.5,100.5 198.5,107.42    \"/> \n" \
"			<path fill=\"#C1272D\" d=\"M198.5,95.5v5h-3v6.91c-6.53,1.39-8.62,11.59-8.62,11.59s-1.39,0.15-3.5,0.15c-1.06,0-2.3-0.04-3.63-0.15     c0,0,1.75-10,3.75-13V95.5H198.5z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M171.65,226.5h20.94l1.41,5h2.5v3h-25v6h-1v0.59h-0.04c0,0-8.25-0.69-7.92-8.36     c0.26-6,5.63-6.39,7.96-6.28c0,0.03,0,0.05,0,0.05c0.14,0,0.27,0,0.36,0c0.02,0,0.03,0,0.05,0     C171.1,226.5,171.35,226.5,171.65,226.5z\"/> \n" \
"			<path fill=\"#998675\" d=\"M195.5,119.5v3.19c-2.04,1.13-4.12,4.33-6.15,7.81h-5.6v-0.25c2.9,0,5.25-2.35,5.25-5.25     s-2.35-5.25-5.25-5.25v-0.25H195.5z\"/> \n" \
"			<path fill=\"#4D4D4D\" d=\"M195.5,149.76v4.74H182l-0.12-2.38C181.88,152.12,187.5,150.01,195.5,149.76z\"/> \n" \
"			<path fill=\"#4D4D4D\" d=\"M195.5,141.76v4.74H182l-0.12-2.38c0,0,0.27-0.1,0.77-0.26C184.45,143.29,189.25,141.96,195.5,141.76z\"/> \n" \
"			<path fill=\"#B3B3B3\" d=\"M195.5,122.69v19.07c-6.25,0.2-11.05,1.53-12.85,2.1l-2.43-1.52c0.42-0.19,0.88-0.39,1.4-0.61     c2.29-1.19,4.96-6.47,7.73-11.23C191.38,127.02,193.46,123.82,195.5,122.69z\"/> \n" \
"			<path fill=\"#1B1464\" d=\"M195.5,107.41v12.09h-11.75h-0.37v-0.35c2.11,0,3.5-0.15,3.5-0.15S188.97,108.8,195.5,107.41z\"/> \n" \
"			<path fill=\"#29ABE2\" d=\"M192.57,226.44l0.02,0.06h-20.94c-0.3,0-0.55,0-0.74,0c-0.02,0-0.03,0-0.05,0     c-0.11,0-0.23-0.05-0.36-0.05v-0.03c0-0.01,0-0.01,0-0.01c0.02-0.29,0.45-4.91,5.39-4.91h15.25c0.16,1.73,0.86,2.92,0.86,2.92     L192.57,226.44z\"/> \n" \
"			<path fill=\"#009245\" d=\"M192.5,373.5v8.26c0-6.96-8.5-8.26-8.5-8.26H192.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M192.5,362.5v11H184C184,373.5,192.5,371.75,192.5,362.5z\"/> \n" \
"			<path fill=\"#009245\" d=\"M192.5,339.25v23.25c0-9.25-7-10.75-7-10.75s-5.98,0.12-10,0.11v-1.36h10     C185.5,350.5,192.5,346.5,192.5,339.25z\"/> \n" \
"			<path fill=\"#009245\" d=\"M192.5,330.5v8.75c0-7.25-7-8.75-7-8.75H192.5z\"/> \n" \
"			<path fill=\"#808080\" d=\"M192.5,301.76v5.74h-14.47l-0.03-2.93C178,304.57,183.81,302.35,192.5,301.76z\"/> \n" \
"			<path fill=\"#009245\" d=\"M192.5,297.5v4.26c-8.69,0.59-14.5,2.811-14.5,2.811l0.03,2.93l-2.07,0.02l-0.18-9.979l2.25-0.04H192.5z\"/> \n" \
"			<path fill=\"#808080\" d=\"M192.5,291.86v5.64h-14.47l-0.03-2.87C178,294.63,183.81,292.42,192.5,291.86z\"/> \n" \
"			<circle fill=\"#C1272D\" cx=\"183.75\" cy=\"125\" r=\"5.25\"/> \n" \
"			<path fill=\"#009245\" d=\"M185.5,361.75c0,3.25-1.5,4.75-1.5,4.75h-8.5v-9h7.5C183,357.5,185.5,358.5,185.5,361.75z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M183.75,130.25v0.25H140.5c-4.75,0-4,5.5-4,5.5v219c0,0,0,25,0,29.75c1,4.25,4.5,4.75,4.5,4.75h34.5     l0.18,0.25c-1.32,0.95-2.18,2.5-2.18,4.25c0,2.85,2.27,5.16,5.1,5.24c-0.03,0.01-0.07,0.01-0.1,0.01v0.25h-39.75     c0,0-5-1.62-9.25-5.12s-3.75-9.63-3.75-9.63l-1.25-249c0,0,0.5-5.25,5.75-10.87c5.25-5.63,11.75-5.38,11.75-5.38s22.97,0,41.38,0     h0.37v0.25c-2.9,0-5.25,2.35-5.25,5.25S180.85,130.25,183.75,130.25z\"/> \n" \
"			<path fill=\"#C1272D\" d=\"M170.5,276.13v5.69l-4.22-0.351c0,0-7.28,2.94-9.03,13.08c-2.15-0.1-3.79-0.05-3.96-0.05h-0.16     C154.58,286.67,159.69,279.19,170.5,276.13z\"/> \n" \
"		</g> \n" \
"		<g> \n" \
"		</g> \n" \
"	</g> \n" \
"</g> \n" \
"<g id=\"lines\"> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216.88,125.5c0.26,3.06,0.26,3.06-2.88,5c0,0-1.18,0-3.25,0h-6.21   c-1.76-3.36-3.77-6.77-6.04-7.88v-3.12h7c0.53,0,1.03,0,1.5,0.01c1.76,0.01,3.15,0.04,4.3,0.17c1.89,0.18,3.13,0.59,4.26,1.44   C217.56,122.62,216.88,125.5,216.88,125.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M185.57,341.08c-0.01,0.12-0.02,0.229-0.04,0.34   c-0.23,1.4-0.83,2.22-0.99,2.66c-0.02,0.07-0.04,0.13-0.04,0.18v0.01c0,0.03-0.17,0.061-0.2,0.08c-0.02,0.021-0.1,0.04-0.12,0.061   c-0.04,0.04-0.11,0.07-0.13,0.08c-0.01,0.01-0.05,0.01-0.05,0.01h-8.5v-8.45l6.75,0.2c0,0,2.91,0.22,3.21,3.21   c0.03,0.17,0.04,0.35,0.04,0.54v0.11c0,0.18,0,0.35-0.02,0.52C185.47,340.79,185.58,340.94,185.57,341.08z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M185.5,361.75c0,3.25-1.5,4.75-1.5,4.75h-8.5v-9h7.5   C183,357.5,185.5,358.5,185.5,361.75z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M195.5,119.5v3.19c-2.04,1.13-4.12,4.33-6.15,7.81H140.5   c-4.75,0-4,5.5-4,5.5v219c0,0,0,25,0,29.75c1,4.25,4.5,4.75,4.5,4.75h34.5l0.18,0.25c0.22-0.16,0.44-0.3,0.68-0.42   c0.59-0.32,1.24-0.521,1.96-0.561c0.14-0.01,0.29-0.02,0.43-0.02c0.16,0,0.32,0.01,0.48,0.03c0.13,0.01,0.27,0.029,0.4,0.06   c0.04,0,0.08,0,0.12,0.021c0.02,0,0.03,0,0.05,0.01c0.05,0,0.1,0.01,0.14,0.03c0.21,0.05,0.42,0.119,0.61,0.199   c0.09,0.03,0.17,0.061,0.25,0.101c0.04,0.02,0.08,0.04,0.12,0.06c0.02,0.01,0.05,0.021,0.08,0.04c0.12,0.061,0.25,0.12,0.36,0.2   c0.01,0,0.02,0,0.02,0.01c0.04,0.021,0.08,0.04,0.12,0.07c0.05,0.03,0.1,0.06,0.14,0.09c0.02,0.01,0.03,0.021,0.04,0.03   c0,0.01,0.01,0.01,0.01,0.01c0.01,0,0.01,0.01,0.02,0.01c0.01,0.011,0.03,0.011,0.04,0.03c0.14,0.11,0.25,0.23,0.38,0.35   c0.13,0.12,0.28,0.221,0.39,0.351c0.04,0.03,0.07,0.06,0.1,0.1c0.02,0.021,0.04,0.03,0.05,0.05c0.01,0.021,0.03,0.04,0.04,0.061   c0.1,0.12,0.19,0.25,0.28,0.38c0.07,0.09,0.13,0.19,0.18,0.29c0.01,0.02,0.03,0.05,0.04,0.07c0.1,0.18,0.19,0.359,0.27,0.56   c0.26,0.62,0.4,1.32,0.4,2.04c0,2.86-2.31,5.18-5.25,5.24c-0.04,0.01-0.09,0.01-0.13,0.01v0.25h-39.75c0,0-5-1.62-9.25-5.12   s-3.75-9.63-3.75-9.63l-1.25-249c0,0,0.5-5.25,5.75-10.87c5.25-5.63,11.75-5.38,11.75-5.38s22.97,0,41.38,0H195.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M199.5,391c0,1.38-1.12,2.5-2.5,2.5h-3c-1.38,0-2.5-1.12-2.5-2.5   c0-0.69,0.28-1.32,0.73-1.77c0.45-0.45,1.08-0.73,1.77-0.73h3C198.38,388.5,199.5,389.62,199.5,391z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216.5,379.51v16.71c-0.83,1.79-2.65,3.03-4.75,3.03   c-2.9,0-5.25-2.35-5.25-5.25c0-2.41,1.62-4.44,3.84-5.05l-0.05-0.2c0,0-4.01,0.5-4.01-4s2.76-5.23,2.76-5.23L216.5,379.51z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M192.5,339.25v23.25c0-9.25-7-10.75-7-10.75s-5.98,0.12-10,0.11   v-1.36h10C185.5,350.5,192.5,346.5,192.5,339.25z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M192.5,362.5v19.26c0-6.96-8.5-8.26-8.5-8.26   S192.5,371.75,192.5,362.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M185.5,330.5h7v8.75C192.5,332,185.5,330.5,185.5,330.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216.5,350.5v1.35c-3.94,0.04-10.95-0.1-10.95-0.1   s-6.99,1.5-6.99,10.75c0,8.79,7.68,10.81,8.44,10.99c0.04,0.01,0.06,0.01,0.06,0.01s-8.5,1-8.5,8h-0.06v-51h6.8   c0,0-6.74,1.5-6.74,8.75s6.99,11.25,6.99,11.25H216.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216.5,335.5v9h-8.71c0,0-1.63-1-1.63-4.5s3.11-4,3.11-4l6.48-0.5   H216.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216.5,357.5v9h-8.71c0,0-1.51-1.5-1.51-4.75s2.51-4.25,2.51-4.25   H216.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M216,119.5h-9c0,0-2.07-10.62-8.5-12.08v-6.92h-3v6.91   c-6.53,1.39-8.62,11.59-8.62,11.59s-1.39,0.15-3.5,0.15c-1.06,0-2.3-0.04-3.63-0.15c0,0,1.75-10,3.75-13V95.5h26.17   c0,0-0.29,5.49,0,12.07C213.33,111.65,216,119.5,216,119.5z\"/> \n" \
"	<rect x=\"178.5\" y=\"93.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"36\" height=\"2\"/> \n" \
"	<rect x=\"195.5\" y=\"100.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"3\" height=\"54\"/> \n" \
"	<rect x=\"195.5\" y=\"154.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"3\" height=\"1\"/> \n" \
"	<circle fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" cx=\"210.75\" cy=\"125\" r=\"5.25\"/> \n" \
"	<circle fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" cx=\"183.75\" cy=\"125\" r=\"5.25\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M184,394c0,2.9-2.35,5.25-5.25,5.25c-0.04,0-0.08,0-0.12-0.01   c-2.84-0.061-5.13-2.38-5.13-5.24c0-1.75,0.86-3.3,2.18-4.25c0.22-0.16,0.44-0.3,0.68-0.42c0.6-0.311,1.26-0.51,1.96-0.561   c0.14-0.01,0.29-0.02,0.43-0.02c0.16,0,0.32,0.01,0.48,0.03c0.13,0.01,0.27,0.029,0.4,0.06c0.04,0,0.08,0,0.12,0.021   c0.02,0,0.03,0,0.05,0.01c0.05,0,0.1,0.01,0.14,0.03c0.13,0.02,0.25,0.05,0.37,0.09c0.05,0.01,0.1,0.029,0.13,0.05   c0.12,0.05,0.24,0.1,0.36,0.16c0.04,0.02,0.08,0.04,0.12,0.06c0.02,0.01,0.05,0.021,0.08,0.04c0.03,0.021,0.06,0.04,0.08,0.061   c0.08,0.069,0.16,0.13,0.24,0.14c0.01,0,0.01,0,0.01,0h0.01c0,0,0.01,0,0.02,0c0.01,0,0.02,0,0.02,0.01   c0.04,0,0.08,0.021,0.12,0.05c0.05,0.03,0.09,0.07,0.14,0.11c0.02,0.01,0.03,0.021,0.04,0.03c0,0.01,0.01,0.01,0.01,0.01   c0.01,0,0.01,0.01,0.02,0.01c0.01,0.011,0.03,0.011,0.04,0.03c0.02,0,0.03,0.01,0.05,0.02c0,0,0.01,0,0.01,0.011   c0.01,0,0.01,0,0.02,0.01c0.01,0,0.03,0.01,0.04,0.01c0.01,0,0.02,0.01,0.03,0.021l0.01,0.01c0.05,0.04,0.1-0.16,0.15-0.11   c0,0.01,0.01-0.22,0.02-0.22h0.01c0.03,1,0.05,0.29,0.08,0.319c0.06,0.04,0.11,0.221,0.16,0.271c0.06,0.04,0.11,0.15,0.17,0.199   c0.14,0.131,0.26,0.301,0.38,0.45c0.11,0.141,0.21,0.296,0.31,0.456c0.04,0.04,0.07,0.106,0.1,0.157   c0.04,0.08,0.09,0.153,0.12,0.233c0.01,0.01,0.01-0.213,0.02-0.203c0.06,0.12,0.12,0.117,0.17,0.117h0.01   c0.05,1-0.11,0.75-0.11,0.88v0.01c0,0.11,0.19,0.221,0.22,0.33c0.07,0.271,0.18,0.55,0.2,0.84C183.93,393.71,184,393.85,184,394z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M217,394c0,0.8-0.18,1.55-0.5,2.22c-0.83,1.79-2.65,3.03-4.75,3.03   c-2.9,0-5.25-2.35-5.25-5.25c0-2.41,1.62-4.44,3.84-5.05c0.45-0.13,0.92-0.2,1.41-0.2c2.1,0,3.92,1.24,4.75,3.03   C216.82,392.45,217,393.2,217,394z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M199.5,391c0,1.38-1.12,2.5-2.5,2.5h-3c-1.38,0-2.5-1.12-2.5-2.5   c0-0.69,0.28-1.32,0.73-1.77c0.45-0.45,1.08-0.73,1.77-0.73h3C198.38,388.5,199.5,389.62,199.5,391z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M172.98,337.14c-0.39,0.591-1.08,1.21-2.2,1.341   c-2.15,0.239-4.26-2.711-4.45-4.931c0.25,2.22,2.33,5.12,4.45,4.891C171.89,338.32,172.57,337.72,172.98,337.14z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M175.46,336.05l-0.93-0.03l-1.01-0.029c0-0.01,0-0.021,0-0.021   l0.99,0.04L175.46,336.05z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"175\" y1=\"373.5\" x2=\"172\" y2=\"373.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"219\" y1=\"373.5\" x2=\"216\" y2=\"373.5\"/> \n" \
"	<rect x=\"192.5\" y=\"287.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"6\" height=\"100\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"192\" y1=\"373.5\" x2=\"184\" y2=\"373.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"207\" y1=\"373.5\" x2=\"198\" y2=\"373.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M181.79,388.76c-0.03,0-0.06,0-0.08,0c-0.13,0-0.21-0.01-0.21-0.01\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"175\" y1=\"366.5\" x2=\"175\" y2=\"366.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"173.5\" y1=\"330\" x2=\"173.5\" y2=\"330\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M175.5,351.86c-1.79,0-3.19-0.04-3.5-0.11c-1-0.25,0-1.25,0-1.25h3\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M183.43,391.63c0,0,0-0.01-0.01-0.01v0.01l0.03,0.061   c0.01,0.01,0.01,0.02,0.01,0.029l0.07,0.12C183.5,391.77,183.46,391.7,183.43,391.63z M183.41,391.59   c-0.01-0.03-0.02-0.06-0.04-0.08c0-0.01-0.01-0.01-0.01-0.01c0-0.01,0-0.01,0-0.01c0-0.01,0-0.01-0.01-0.01   c0-0.011,0-0.011,0-0.011h-0.01c0.02,0.05,0.05,0.101,0.08,0.15c0-0.01,0-0.021,0-0.021C183.41,391.6,183.41,391.59,183.41,391.59z    M183.31,391.39c-0.01-0.01-0.01-0.02-0.02-0.029v-0.011c-0.01-0.01-0.01-0.01-0.02-0.02v-0.01l-0.01-0.011   c0-0.01-0.01-0.02-0.02-0.029v-0.011c-0.01,0-0.01-0.01-0.01-0.01c-0.01-0.02-0.02-0.029-0.03-0.04l-0.01-0.01v-0.01l-0.01-0.01   c-0.01,0-0.01-0.011-0.01-0.011c-0.1-0.149-0.24-0.279-0.34-0.41c0,0,0-0.01-0.01-0.01c-0.01-0.01-0.01-0.02-0.02-0.029   c0-0.021-0.01-0.011-0.01-0.011c-0.02-0.01-0.03-0.029-0.05-0.05c-0.02-0.02-0.04-0.03-0.05-0.05c0,0.01,0.01,0.03,0.02,0.04   c0.03,0.02,0.05,0.04,0.07,0.07c0.01,0.01,0.02,0.029,0.03,0.039c0.01,0.021,0.03,0.03,0.05,0.051c0.1,0.12,0.21,0.25,0.29,0.39   c0.04,0.04,0.09,0.1,0.12,0.15c0.02,0.04,0.04,0.069,0.07,0.109c0-0.02-0.01-0.04-0.02-0.06   C183.31,391.4,183.31,391.4,183.31,391.39z M183.74,392.38c-0.04-0.13-0.08-0.25-0.13-0.38c0.01,0.01,0.01,0.02,0,0.03   C183.66,392.15,183.7,392.26,183.74,392.38z M183.6,391.99l0.01,0.01v-0.01H183.6z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M195.5,141.76v4.74H182l-0.12-2.38c0,0,0.27-0.1,0.77-0.26   C184.45,143.29,189.25,141.96,195.5,141.76z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M210.5,143.75c0,2,0,2.75,0,2.75h-12v-4.75   C202.21,141.86,206.31,142.42,210.5,143.75z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M195.5,149.76v4.74H182l-0.12-2.38   C181.88,152.12,187.5,150.01,195.5,149.76z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M210.5,151.75c0,2,0,2.75,0,2.75h-12v-4.75   C202.21,149.86,206.31,150.42,210.5,151.75z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M178,294.63c0,0,5.81-2.21,14.5-2.77v5.64h-14.47L178,294.63z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M213.5,294.23v3.27h-15v-5.75   C203.11,291.9,208.21,292.6,213.5,294.23z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M178,304.57c0,0,5.81-2.221,14.5-2.811v5.74h-14.47L178,304.57z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M213.5,304.11v3.39h-15v-5.85   C203.1,301.79,208.21,302.47,213.5,304.11z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.5,134c0,0,0-35.47,0-36.75c1-1.5,2.5-2.75,2.5-2.75s-3,0-9.75,0   c2.5,1.5,3.25,3.5,3.25,3.5v36\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.47,366.5c0.02,0.16,0.03,0.33,0.03,0.5v-0.5H243.47z    M243.24,373.5h0.26V372C243.5,372.53,243.41,373.03,243.24,373.5z M234.5,367c0-0.06,0-0.08,0-0.08c0-0.14,0.01-0.29,0.03-0.42   h-4.03v7h4.26c-0.17-0.47-0.26-0.97-0.26-1.5V367z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M247.5,373.5v10h-17v-10h4.26c0.22,0.64,0.59,1.21,1.06,1.68   c0.81,0.82,1.94,1.32,3.18,1.32c1.84,0,3.42-1.1,4.11-2.68c0.05-0.101,0.09-0.21,0.13-0.32H247.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M247.5,357.5v9h-4.03c-0.11-1.04-0.58-1.98-1.29-2.68   c-0.81-0.82-1.94-1.32-3.18-1.32c-2.32,0-4.22,1.75-4.47,4h-4.03v-9H247.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M234.76,373.5h-4.26v-7h4.03c-0.02,0.13-0.03,0.28-0.03,0.42   c0,0,0,0.021,0,0.08v5C234.5,372.53,234.59,373.03,234.76,373.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.5,366.5v0.5c0-0.17-0.01-0.34-0.03-0.5H243.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.5,372v1.5h-0.26C243.41,373.03,243.5,372.53,243.5,372z\"/> \n" \
"	<polygon fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"282.5,385.5 282.5,388.5 277.5,388.5 277.5,393.5    273.5,393.5 273.5,388.5 264.5,388.5 264.5,385.5  \"/> \n" \
"	<rect x=\"269.5\" y=\"397.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"10\" height=\"6\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M264.5,393.5v13h19v-13H264.5z M269.5,403.5v-6h10v6H269.5z\"/> \n" \
"	<rect x=\"269.5\" y=\"397.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"10\" height=\"6\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"243.5\" y1=\"367\" x2=\"243.5\" y2=\"367\"/> \n" \
"	<polygon fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"257.5,366.5 257.5,373.5 255.5,373.5 255.5,383.5    250.5,383.5 250.5,373.5 243.5,373.5 243.5,366.5 250.5,366.5 250.5,363.5 255.5,363.5 255.5,366.5  \"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"326.5\" y1=\"199\" x2=\"326.5\" y2=\"229\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.5,384c0,0,0,6.29,0,7c0,3.33,3.5,3.5,3.5,3.5h17\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M354.65,380.59c-0.35,0.67-0.71,1.351-1.08,2.05   c-6.12,11.49-15.88,27.311-18.57,34.03c-1.33,5-3.67,5.33-5,5.33s-4.92-4-8.58-4c-3.67,0-14.92-0.33-14.92-0.33V429l13.83,0.33   c0,0,5.34,5.34,4.67,6.67c-3.67,0.33-15.67,0.67-15.67,0.67s-3-1.09-3-2.75c0-0.37,0.03-6.67,0.08-16.25   C306.59,383.94,307,309.5,307,309.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M295.5,310v81c0,0,0.33,3.5-3.92,3.5c-0.84,0-6.38,0-8.08,0   c-0.32,0-0.5,0-0.5,0\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"326.5\" y1=\"240\" x2=\"326.5\" y2=\"274\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"214.5\" y1=\"331\" x2=\"214.5\" y2=\"331\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M320.75,133.5H239.5c-15.26,0-26.5,0-26.5,0s-2.5,2.25-4,4.5   c-1.24-0.9-2.72-4.17-4.46-7.5c-1.76-3.36-3.77-6.77-6.04-7.88v19.13c3.71,0.11,7.81,0.67,12,2c0,2,0,2.75,0,2.75h-12v3.25   c3.71,0.11,7.81,0.67,12,2c0,2,0,2.75,0,2.75h-12v1h-3v-1H182l-0.12-2.38c0,0,5.62-2.11,13.62-2.36v-3.26H182l-0.12-2.38   c0,0,0.27-0.1,0.77-0.26l-2.43-1.52c-2.97,1.3-3.84,1.82-4.72,2.91c0,2,0,10.75,0,10.75l-23.88-0.5c0,0-7.12,0.5-7.12,7.5   s0,132,0,132s0.75,4.5,6.5,4.5h6c0,0-1.26,9.25,4.49,9.5c0,2.2-0.31,5.68,2.88,7.93c0.23,0.16,0.48,0.32,0.74,0.471   c1.93,1.069,4.85,1.76,9.34,1.72c1.66-2.24,1.7-2.36,1.7-2.37l-0.19-9.23l-0.46-25.02v-7.4c-1.78,0.24-3.43,0.591-4.97,1.021   c-0.01,0-0.02,0.01-0.03,0.01v5.69l-4.22-0.351c0,0-7.28,2.94-9.03,13.08c-2.15-0.1-3.79-0.05-3.96-0.05h-0.16   c-0.01,0-0.01,0-0.01,0s0,0-0.01,0c-0.15,0-1.61-0.2-1.61-2.78V184.94c0-2.91,3.5-3.44,3.5-3.44s76.25,0,82.25,0s6.25-6.5,6.25-6.5   v-30.5H254c29.97,0,68,0,68,0s4.5,1,4.5,4v46h11c0-26.86,0-47.5,0-47.5S333.75,133.5,320.75,133.5z M239.5,145c0,0,0,27.46,0,29   c0,3-3.5,3.5-3.5,3.5h-81c0,0-3.5,0.14-3.5-2.54V166c0,0,0.5-3.5,3.5-3.5c2.75,0,31,0,31,0s3,4.25,11,4.25s18.25-7.75,18.25-12.25   s0.25-7.81,0.25-7.81s0.5-2.19,3-2.19h21V145z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M195.5,122.69v19.07c-6.25,0.2-11.05,1.53-12.85,2.1l-2.43-1.52   c0.42-0.19,0.88-0.39,1.4-0.61c2.29-1.19,4.96-6.47,7.73-11.23C191.38,127.02,193.46,123.82,195.5,122.69z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"337.5\" y1=\"199\" x2=\"337.5\" y2=\"229\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M342.5,320.37c0,0-0.12-0.271-0.36-0.36\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"337.5\" y1=\"240\" x2=\"337.5\" y2=\"274\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M357.15,381.85c-0.31,0.591-0.63,1.221-0.97,1.87   c-4.29,8.25-10.8,20.891-13.85,26.28c-2.06,3.64-5.76,12.96-9.75,24.18c-4.44,12.45-9.25,27.23-12.58,39.15   c-6.06,21.71-9.68,62.74-9.98,66.17c-0.01,0.15-0.02,0.23-0.02,0.23\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M358.42,361c-1-2-11.92-19-12.92-20.67V329c0-7.24,0-15,0-15   s0-0.1,0-0.28v-0.22c0-1-0.38-6-6.5-6h-12.5c-29.31,0-98.5,0-98.5,0l-2,2h100.5c0,6,0,9.5,0,9.5s1,10,16,10v13   c0,0,16.17,22.5,16.17,28.5c0,1.72-1.62,5.44-4.02,10.09l2.5,1.26c1.34-2.56,2.37-4.51,2.85-5.35c2-3.17,2.67-3.5,2.67-6   S359.42,363,358.42,361z M342.5,320l-0.36,0.01c-0.7-0.27-2.39-1.13-4.64-3.76v-6.75h1.5c0,0,3.5,0.5,3.5,6.17V320z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M306.84,527.37c0,0,0.085,0.02-0.025,0.06   c-0.84,0.261-4.185,1.551-4.485,5.07c-5,0-52.33,0-52.33,0s-6.5-0.17-6.5-6s0-93.5,0-93.5s1.5-3.5,4-3.5s49,0,49,0v-11H247   c0,0-3.5-0.83-3.5-3.5s0-8,0-8s2-3.5,3.75-3.5c0.71,0,16.75,0,16.75,0\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M283,403.5h10c0,0,3.5,1.17,3.5,5.5c0,2.65,0,3.67,0,9.5v11   c0,2.7,0,5.84,0,9.5c0,0,1,8.5,8.75,8.5s14.75,0,14.75,0s3.67,1.5,1.67,7.17c-2,5.66-8.34,30.08-10.67,45.41   c-1.7,11.15-3.39,17.939-4.06,27.35c-0.26,3.53-0.36,7.431-0.27,12.07c1.11,0,2.23,0,3.35,0c48.3,0,107.75,0,128.98,0\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M332.58,434.18l94.09,0.82c0,0,5,0.33,5,4.25   c0.33,4.92-1.34,7.08-4.67,9.42c5.52,12.061,10.29,36.42,13.38,54.83\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M181.73,389.71l-0.01-0.01h-0.01c-0.01,0-0.01,0-0.02,0h-0.01   c0,0.01,0.01,0.01,0.01,0.01c0.01,0,0.01,0.01,0.02,0.01c0.01,0.011,0.03,0.011,0.04,0.03c0.01,0,0.01,0,0.02,0.01   c0.01,0,0.02,0,0.03,0.01C181.78,389.75,181.76,389.73,181.73,389.71z M181.75,389.63l-0.01-0.01c-0.01,0.01-0.02,0-0.02,0   c0.02,0.02,0.04,0.04,0.06,0.06h0.01c0.02-0.029,0.04-0.05,0.06-0.05C181.82,389.61,181.79,389.64,181.75,389.63z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-linecap=\"round\" stroke-linejoin=\"bevel\" stroke-miterlimit=\"10\" d=\"M232.9,327.43   c-2.93,0-5.96-0.76-8.96-1.76c-1.97-0.65-3.57-1.31-4.95-1.68c-0.04-0.01-0.07-0.021-0.11-0.03c-0.69-0.18-1.47-0.29-2.13-0.29   c-1.77,0-1.25,5.57-2.25,6.83h-9.2c0,0-6.74,1.5-6.74,8.75s6.99,11.25,6.99,11.25h13.51c0,0,1,1,0,1.25   c-0.25,0.06-1.23,0.09-2.56,0.1c-3.94,0.04-10.95-0.1-10.95-0.1s-6.99,1.5-6.99,10.75c0,8.79,7.68,10.81,8.44,10.99   c0.04,0.01,0.06,0.01,0.06,0.01s-8.5,1-8.5,8h-0.06v6h-6v-5.74c0-6.96-8.5-8.26-8.5-8.26s8.5-1.75,8.5-11s-7-10.75-7-10.75   s-5.98,0.12-10,0.11v-1.36h10c0,0,7-4,7-11.25s-7-8.75-7-8.75h-10v-1h-1.75c0,0-0.1-1.98-2.88-1.98c-0.19,0-0.37,0.011-0.54,0.04   c-0.18,0.021-0.35,0.061-0.51,0.11c-0.11,0.03-0.22,0.07-0.32,0.11c-0.29,0.109-0.56,0.26-0.81,0.45   c-1.43,1.039-2.23,2.989-2.36,4.56c-0.02,0.12-0.02,0.229-0.02,0.34c0,0.14,0.01,0.271,0.02,0.42c0.25,2.22,2.33,5.12,4.45,4.891   c1.11-0.12,1.79-0.721,2.2-1.301c0.13-0.199,0.24-0.39,0.32-0.56c0.07-0.16,0.12-0.3,0.16-0.4c0.01-0.05,0.03-0.08,0.03-0.109   c0.01-0.03,0-0.051,0.01-0.08c0-0.01,0-0.49,0.02-0.49l0.99,0.51l0.95,0.04l-0.93-0.03l0.93,0.48h0.04v-0.45l6.75,0.2   c0,0,2.91,0.22,3.21,3.21c0.03,0.17,0.04,0.35,0.04,0.54v0.11c0,0.18,0,0.35-0.02,0.52c-0.01,0.16,0.1,0.311,0.09,0.45   c-0.01,0.12-0.02,0.229-0.04,0.34c-0.02,0.14-0.04,0.28-0.08,0.41c0,0.03,0,0.06-0.02,0.09c-0.17,0.8-0.48,1.37-0.7,1.76   c-0.04,0.08-0.08,0.15-0.11,0.221c-0.03,0.069-0.06,0.13-0.08,0.18c-0.02,0.07-0.04,0.13-0.04,0.189c0,0.03-0.17,0.061-0.2,0.08   c-0.02,0.021-0.1,0.04-0.12,0.061c-0.04,0.04-0.11,0.07-0.13,0.08c-0.01,0.01-0.05,0.01-0.05,0.01h-13c0,0-4.72,0.62-4.72,6.38   c0,5.74,4.46,6.62,4.46,6.62H183c0,0,2.5,1,2.5,4.25s-1.5,4.75-1.5,4.75h-12c0,0-5.72,0.25-5.72,7s5.72,6,5.72,6l3.5,0.01   l7.25,0.01c0,0,2.6,0.601,2.6,5.101c0,3.59-2.59,3.88-3.7,3.88h-0.15c0,0,0,0.984,0,1.056c0,0.024,0.853-0.007,0.959,0.003   c-0.324,0.357-0.049,0.829,0.183,1.15c0.045,0.063,0.742,0.827,0.791,0.693c-0.285,0.788,0.488,1.399,0.488,2.157   c0,0.04,0.01,0.07,0.02,0.11c0.01,0.11,0.03,0.22,0.03,0.33c0,1.77-0.87,3.33-2.2,4.28c-0.09,0.08-0.2,0.149-0.3,0.2   c-0.03,0.029-0.05,0.039-0.09,0.05c-0.1,0.069-0.21,0.13-0.32,0.17c-0.24,0.12-0.5,0.229-0.77,0.31   c-0.02,0.021-0.04,0.021-0.06,0.021c-0.47,0.16-0.96,0.35-1.48,0.35c-0.04,0-0.08,0.12-0.12,0.12H213c0,0,2.5-1.25,3.5-2.5v-0.78   c-0.83,1.79-2.65,3.03-4.75,3.03c-2.9,0-5.25-2.35-5.25-5.25c0-2.41,1.62-4.44,3.84-5.05l-0.05-0.2c0,0-4.01,0.5-4.01-4   s2.76-5.23,2.76-5.23l7.46-0.01l3.29-0.01c0,0,5.71,0.75,5.71-6s-5.71-7-5.71-7h-12c0,0-1.51-1.5-1.51-4.75s2.51-4.25,2.51-4.25   h12.25c0,0,4.46-0.88,4.46-6.62c0-5.76-4.71-6.38-4.71-6.38H217c0,0,8.67-3.17,10.33-5.5c4.34,0,7.34-0.17,7.17,2.75v15.75h9   c0-10.55,0-19.5,0-19.5S241.16,327.43,232.9,327.43z M216.5,344.5h-8.71c0,0-1.63-1-1.63-4.5s3.11-4,3.11-4l6.48-0.5h0.75V344.5z    M181.7,389.53c0,0-0.02,0.01-0.04,0.01c0,0.02-0.01,0.04-0.02,0.03c-0.04-0.03-0.08,0-0.12,0c0.03-0.011,0.1-0.021,0.14-0.03   v-0.01l0.01-0.011l0.05-0.01l0.03-0.01h0.02l0.01,0.01C181.74,389.51,181.7,389.52,181.7,389.53z M183.5,391.28   c0,0.01-0.12,0.01-0.12,0.01c0,0.01-0.02,0.01-0.03,0.01c0.01-0.01,0.04-0.04,0.07-0.069c0.04,0.01,0.08,0.029,0.08,0.039   C183.5,391.28,183.5,391.28,183.5,391.28z M183.5,391.18c0,0,0,0-0.01,0c0.01-0.01,0.01-0.01,0.01-0.01V391.18z M197,393.5h-3   c-1.38,0-2.5-1.12-2.5-2.5c0-0.69,0.28-1.32,0.73-1.77c0.45-0.45,1.08-0.73,1.77-0.73h3c1.38,0,2.5,1.12,2.5,2.5   S198.38,393.5,197,393.5z M178.5,399.25v0.25h0.12C178.58,399.5,178.54,399.25,178.5,399.25z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M243.5,367v5c0,0.53-0.09,1.03-0.26,1.5   c-0.04,0.11-0.08,0.22-0.13,0.32c-0.69,1.58-2.27,2.68-4.11,2.68c-1.24,0-2.37-0.5-3.18-1.32c-0.47-0.47-0.84-1.04-1.06-1.68   c-0.17-0.47-0.26-0.97-0.26-1.5v-5c0-0.06,0-0.08,0-0.08c0-0.14,0.01-0.29,0.03-0.42c0.25-2.25,2.15-4,4.47-4   c1.24,0,2.37,0.5,3.18,1.32c0.71,0.699,1.18,1.64,1.29,2.68C243.49,366.66,243.5,366.83,243.5,367z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M234.5,367C234.5,366.83,234.5,367,234.5,367\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M234.5,374c0,0,0-1.5,0-2\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M440.71,506c1.771,10.66,2.93,18.745,3.29,20.915   c3.33,0,8,1.537,8,5.207c0,3.671-5,7.378-5,7.378s-2.87,0-7.94,0c-0.02,0-0.04,0-0.06,0c-21.23,0-80.68,0-128.98,0   c-1.12,0-2.24,0-3.35,0c-34.83,0-63.11,0-65.67,0c-7,0-6.5-6.5-6.5-6.5V384\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M358.5,281.24c0.99,0.72,2.01,1.325,3,2.015   c1.44,1.01,2.82,1.867,4,2.598c0.76,0.479,1.44,0.839,2,1.108c0.77,0.391,1.31,0.535,1.5,0.385c1.81-1.811,1.98-2.458,1.51-4.778   c-0.05-0.25-0.11-0.523-0.18-0.813C368,279.424,364,275.5,364,275.5h8l-1.739-5.218L370,269.875l-20-0.375c0,0-3.5,1-3.5,3.75   c0,0.06,0,0.75,0,0.75\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"346.5\" y1=\"340\" x2=\"346.5\" y2=\"314\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M439.1,540.25c0,0-0.01-0.26-0.04-0.75   c-0.319-6.1-2.64-47.63-6.34-58.13c-2.08-7.68-7.729-27.99-14.43-46.44c-4.05-11.16-8.49-21.64-12.76-28.239   c-9.67-20.171-17.271-31.931-17.271-37.101c0-2.64,4.5-8.84,8.57-14.99c0.63-0.96,1.26-1.92,1.87-2.859   c2.609-4.08,4.75-7.9,4.75-10.36c0-2.04,0.05-13.06,0.05-25.38c0-0.03,0-0.06,0-0.09c0-17.78-0.29-38.22-0.29-38.22l1.48-1.5   l0.04-0.04l2.68-2.65l11.09-10.83v-1.17v-15H414c0,0-13.64,13.85-23.65,24.26c-2.01,2.101-3.88,4.061-5.46,5.74   c-2.78,2.96-4.66,5.04-4.89,5.5c-0.28,0.92-0.39,1.79-0.36,2.53c0.05,1.939,1.09,3.01,2.78,1.8c0.03-0.021,0.05-0.04,0.08-0.061   c0.4-0.279,1.11-0.76,2-1.359c1.1-0.74,2.5-1.67,4-2.66c0.93-0.62,1.9-1.26,2.86-1.89c0.05-0.03,0.1-0.061,0.14-0.091   c0.92-0.609,1.82-1.21,2.68-1.77c2.97-1.96,5.32-3.5,5.32-3.5v43l-26.02-0.36l-19.02-0.26l-3.96-0.05V275c0,0,1.96,1.52,4.61,3.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M217.02,320.18c1.01,0.891,1.87,2.011,1.97,3.38   c0.01,0.091,0.01,0.19,0.01,0.28\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M170.5,276.13c-10.81,3.061-15.92,10.54-17.37,18.37\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M182.25,336.25l-6.75-0.2v0.45l6.75-0.03c0,0,2.83,0.12,3.21,2.99   C185.16,336.47,182.25,336.25,182.25,336.25z M182.75,379.52l-7.25-0.01v9.99l0.18,0.25c0.22-0.16,0.44-0.3,0.68-0.42   c0.59-0.32,1.24-0.521,1.96-0.561c0.14-0.01,0.29-0.02,0.43-0.02c0.16,0,0.32,0.01,0.48,0.03c0.13,0.01,0.27,0.029,0.4,0.06   c0.04,0,0.08,0,0.12,0.021c0.02,0,0.03,0,0.05,0.01c0.05,0,0.1,0.01,0.14,0.03c0.13,0.02,0.25,0.05,0.37,0.09   c0.05,0.01,0.1,0.029,0.13,0.05c0.04,0.02,0.08,0.04,0.11,0.06c0.06,0.04,0.13,0.08,0.22,0.131c0.1,0.039,0.21,0.09,0.31,0.13   c0.09,0.05,0.17,0.09,0.24,0.14c0.01,0,0.01,0,0.01,0h0.01c0.09,0.07,0.14,0.13,0.16,0.2v-1.2h0.15c1.11,0,3.7-0.29,3.7-3.88   C185.35,380.12,182.75,379.52,182.75,379.52z M174.51,336.01l0.02,0.01l0.93,0.03L174.51,336.01z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M189.35,130.5c-2.77,4.76-5.44,10.04-7.73,11.23   c-0.52,0.22-0.98,0.42-1.4,0.61c-2.97,1.3-3.84,1.82-4.72,2.91c0,2,0,10.75,0,10.75l-23.88-0.5c0,0-7.12,0.5-7.12,7.5s0,132,0,132   s0.75,4.5,6.5,4.5h1.67c0,8.27,6.51,15.15,12.05,18.54c0,0,0.01,0,0.01,0.01c2.39,1.46,4.58,2.28,6.01,2.28   c4.75,0,4.76,3.67,4.76,3.67v5.5h-1.75c0,0-0.1-1.98-2.88-1.98c-0.19,0-0.37,0.011-0.54,0.04c-0.18,0.021-0.35,0.061-0.51,0.11   c-0.11,0.03-0.22,0.07-0.32,0.11c-0.29,0.109-0.56,0.26-0.81,0.45c-1.46,1.02-2.27,2.989-2.36,4.56   c-0.02,0.12-0.02,0.229-0.02,0.34c0,0.14,0.01,0.271,0.02,0.42c0.25,2.22,2.33,5.12,4.45,4.891c1.11-0.12,1.79-0.721,2.2-1.301   c0.13-0.199,0.24-0.39,0.32-0.56c0.07-0.16,0.12-0.3,0.16-0.4c0.01-0.05,0.03-0.08,0.03-0.109c0.01-0.03,0-0.051,0.01-0.061   c0-0.01,0-0.01,0-0.02s0-0.49,0-0.49h0.02l0.99,0.51l0.02,0.01l0.93,0.48h0.04v8H171c0,0-4.72,0.62-4.72,6.38   c0,5.74,4.46,6.62,4.46,6.62h4.76v9H172c0,0-5.72,0.25-5.72,7s5.72,6,5.72,6l3.5,0.01v9.99H141c0,0-3.5-0.5-4.5-4.75   c0-4.75,0-29.75,0-29.75V136c0,0-0.75-5.5,4-5.5H189.35z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"217.02\" y1=\"320.18\" x2=\"217\" y2=\"320.2\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M213.5,286.33v7.9c-5.29-1.631-10.39-2.33-15-2.48v-4.25h-6v4.36   c-8.69,0.56-14.5,2.77-14.5,2.77l0.03,2.87h14.47v4.26c-8.69,0.59-14.5,2.811-14.5,2.811l0.03,2.93l-2.07,0.02l-0.46-25.02v-7.4   c2.02-0.279,4.19-0.43,6.53-0.43c0.06-0.06,0.12-0.12,0.18-0.17c4.58-4.5,8.68-4.83,13.54-4.83c2.97,0,8.83,0.97,13,4.83   c2.05,1.89,3.7,4.48,4.39,8C213.37,283.67,213.5,284.95,213.5,286.33z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M346.5,276.5v0.5c0,0,0,22.5,0,36.5h-0.99c0-1-0.39-6-6.51-6h-12.5   c-29.31,0-98.5,0-98.5,0l-2,2l-8.98,10.68c-0.01-0.01-0.02-0.02-0.03-0.029c-1.57-1.42-3.49-2.15-3.49-2.15s0-4.38,0-10.5v-21.17   c0-1.38-0.13-2.66-0.36-3.83c-0.69-3.52-2.34-6.11-4.39-8c-4.17-3.86-10.03-4.83-13-4.83c-4.86,0-8.96,0.33-13.54,4.83h-6.71v0.6   c-1.78,0.24-3.43,0.591-4.97,1.021L170.5,276v-35.5h1v-6h47v42H346.5z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"218.5\" y1=\"312\" x2=\"218.5\" y2=\"277\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M170.5,282v30\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M535.67,239.5H497.5c-0.31,0-0.5,0-0.5,0H326.5   c-9.11,0-14.5,0-14.5,0s-4.5-0.5-4.5,5.17v28.83h-12V243c0,0,1.5-4.5-4.5-4.5s-65,0-65,0s-7.28-0.83-7.28,8h-0.22v-12h-22v-3h0.5   c0,0,0.17-2.36,0.49-4.56c0.03-0.15,0.05-0.3,0.07-0.44H224c0,0,0.67,2,3.33,2c2.67,0,6.67,0,6.67,0h298c0,0-0.97,2.91-0.35,5.88   c0,0.02,0,0.04,0.01,0.06c0.2,1.33,0.76,2.35,1.479,3.13c0.021,0.02,0.03,0.03,0.04,0.05C533.79,238.35,534.6,239,535.67,239.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M197.49,226.94c-0.32,2.2-0.49,4.56-0.49,4.56h-0.5   C196.5,231.5,197.11,229.14,197.49,226.94z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M533.14,237.57c-0.8-0.95-1.239-2.05-1.479-3.13\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M193,226.5h-21.44c0,0-0.24,0-0.65,0c-0.02,0-0.03,0-0.05,0   c-0.11,0-0.23-0.05-0.36-0.05c-2.33-0.11-7.7,0.28-7.96,6.28c-0.33,7.67,7.915,8.36,7.915,8.36\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M182.21,274.5c-0.06,0.05-0.12,0.11-0.18,0.17   c-2.34,0-4.51,0.15-6.53,0.43v-0.6H182.21z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M198.74,221.5c-0.02,1.11-0.21,2.18-0.74,2.92   c-0.17,0.56-0.31,1.28-0.43,2.03c0,0.01,0,0.03-0.01,0.05c-0.02,0.14-0.04,0.29-0.07,0.44c-0.32,2.2-0.49,4.56-0.49,4.56h-3   l-1.41-5l-0.02-0.06l-0.57-2.02c0,0-0.7-1.19-0.86-2.92c-0.14-1.41,0.09-3.2,1.36-5c3.5,0,5.5,0,5.5,0S198.78,219.1,198.74,221.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M230.5,216.5c-2.17,3.17-2.83,4.5-5,4.5s-0.17-4.5-1.17-4.5   s-4.83,3.17-4.83,3.17l-2.97-1.89l-4.08-2.6l-3.42-2.18l2.55-5.58l4.34-5.04l3.04,1.5l0.01,0.01l4.5,2.22l0.03,0.01l2.46,1.23   c1.31,2.1,0.58,4.06,0.2,4.77c-0.1,0.2-0.16,0.38-0.16,0.38h2c0,0,2.33-3.5,4-2.5C232.33,213,232.67,213.33,230.5,216.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M218.91,226.39c-0.31-0.51-1.36-2.58-2.73-3.77   c0-0.01-0.01-0.01-0.01-0.01c-0.09-0.08-0.19-0.16-0.28-0.23c-1.77-1.33-0.44-2.68-0.44-2.68s0.05-0.73,1.05-1.87v-0.01   c0.01-0.01,0.02-0.03,0.03-0.04l-4.08-2.6c-0.97,1.28-1.48,2.29-1.87,2.82c-2,2.79-4.58,3.5-4.58,3.5s-3.06,0-7.26,0   c-0.02,1.11-0.21,2.18-0.74,2.92c-0.17,0.56-0.31,1.28-0.43,2.03c0,0.01,0,0.03-0.01,0.05h21.43   C218.98,226.5,218.95,226.46,218.91,226.39z M192.57,226.44l-0.57-2.02c0,0-0.7-1.19-0.86-2.92h-15.25c-4.94,0-5.37,4.62-5.39,4.91   c0,0,0,0,0,0.01v0.03c0,0.03,0,0.05,0,0.05h22.09L192.57,226.44z M578.25,331.35c-2.92-2.85-7.58-3.31-7.92,0   c-0.19,1.9,1.689,2.381,3.34,2.45c0,0-4.65,1.94,0,4.97c-0.47,0.04-0.95,0.12-1.42,0.23c-2.74,0.66-1.92,2.67,0,4.12   s5.42-0.79,7.75-2.45c2.33-1.67,5.67-5.34,5.67-5.34S581.16,334.2,578.25,331.35z M578.23,347.6c0-0.05-0.011-0.109-0.011-0.159   c0-0.051-0.01-0.091-0.01-0.141c-0.01-0.06-0.01-0.13-0.02-0.189c-0.011-0.16-0.03-0.311-0.061-0.46   c-0.02-0.15-0.05-0.301-0.08-0.44c-0.03-0.15-0.06-0.28-0.09-0.41c-0.05-0.189-0.1-0.37-0.15-0.54c-0.029-0.1-0.06-0.2-0.09-0.29   c-0.01-0.02-0.01-0.029-0.02-0.04c-0.021-0.08-0.05-0.149-0.08-0.22c-0.01-0.06-0.03-0.11-0.061-0.16   c-0.069-0.189-0.13-0.34-0.18-0.43c-0.01-0.03-0.02-0.05-0.03-0.07c-0.01-0.02-0.01-0.04-0.02-0.04c0,0-0.01,0-0.01,0.01   c-0.011,0-0.011,0-0.011,0.011c-0.159,0.18-1.01,1.12-2.59,2.21c-0.12,0.08-0.239,0.16-0.37,0.24c-0.6,0.399-1.3,0.8-2.1,1.189   c-12.41-4-2.25-13-2.25-13s-1.97,0.07-4.5,0.15v25.68h-5v-32h-8.01c1.43,1.43,1.74,2.71,0.84,3.83   c-1.061,0.08-2.271-0.29-3.521-0.89c-0.01,0-0.029-0.011-0.04-0.03c-1.039-0.771-2.13-1.521-3.31-2.061   c-0.01-0.01-0.01-0.01-0.01-0.01c-0.38-0.28-0.73-0.56-1.09-0.84H528c-2,1-3.5-3.5-3.5-3.5v-14.5h-5.17c0,0-0.33,10.58-0.33,14.92   c0,4.33-3,5.08-3,5.08s-19.67,0-24.67,0c-4.33,0-6.83-5.5-6.83-5.5v-6.5c0,0,9.17,0,14.17,0c4.66,0,6.33-8,6.33-8h-4c0,3-3,5-3,5   h-12.5v-5h-14c0,0,0,2.17,0,15.17c0,19,14.25,19,14.25,19s44.5-0.28,56.93-0.08c0.21,0.01,0.42,0.01,0.641,0.01   c0.899,0.03,1.58,0.051,2.01,0.07c-0.33,4.66,0,7.33,3,9c0.38,0.19,0.76,0.42,1.14,0.68c0.88-0.989,2.15-1.619,3.561-1.68   c0.069-0.01,0.149-0.01,0.22-0.01c2.49,0,4.56,1.79,4.99,4.16c0.06,0.3,0.09,0.6,0.09,0.92c0,1.62-0.76,3.069-1.96,4   c1.39,2.09,2.3,3.99,2.3,4.93c0,2.33-3.67,4.83-3.67,4.83s-85,0-92,0s-7.5-7.5-7.5-7.5v-53.5H450c0,0,0.33,42.58,0.33,53.92   c0,11.33,8.67,12.08,8.67,12.08s94,0,98,0s6.33,0.42,6.33-3.25c0-6.37,2.8-9.8,5.65-11.63c-1.11-0.93-1.811-2.32-1.811-3.88   c0-0.15,0.01-0.311,0.03-0.46c0.22-2.59,2.399-4.62,5.05-4.62c1.28,0,2.44,0.47,3.33,1.25c0.13-0.12,0.26-0.23,0.37-0.351   c0.22-0.22,0.43-0.439,0.609-0.659c0.28-0.33,0.511-0.681,0.71-1.021c0.141-0.229,0.261-0.46,0.351-0.7   c0.05-0.1,0.1-0.21,0.14-0.31c0.05-0.13,0.09-0.26,0.13-0.38s0.07-0.23,0.101-0.34c0.09-0.33,0.149-0.66,0.189-0.98   c0.021-0.12,0.03-0.24,0.04-0.36c0.03-0.329,0.03-0.649,0.021-0.97C578.24,347.76,578.24,347.68,578.23,347.6z M565,98.5   c4.83,0.83,7.33,1,10.67,3.67l0.48-0.01l-0.07-3.66l-0.08-4h-25.67l0.24,5.58l-0.07,2.41v0.01l0.16,10h0.1c0,0,0.01,1.17,1.91,2   s3.5-0.83,5.33-4.83s1.83-6.67,2-11.67c0,0,1,6.5,0.5,16.5h-4v20h4v-3h3v3h4v-20h-4C563.5,98.83,565,98.5,565,98.5z M223.47,206.11   l-4.5-2.22c0,0.06,0,0.18-0.01,0.19l4.51,2.42h0.03v-0.38L223.47,206.11z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M575.95,353.56c0.229-0.22,0.439-0.439,0.609-0.659   C576.38,353.12,576.17,353.34,575.95,353.56z M575.95,353.56c0.229-0.22,0.439-0.439,0.609-0.659   C576.38,353.12,576.17,353.34,575.95,353.56z M575.95,353.56c0.229-0.22,0.439-0.439,0.609-0.659   C576.38,353.12,576.17,353.34,575.95,353.56z M626,194.5c0,0-1.21,0-3.5,0V141c0-18.67-11.5-18.5-11.5-18.5s-14.67,0-22.67,0   c-7.24,0-11.2-9.04-11.89-10.76c-0.07-0.18-0.11-0.28-0.11-0.28l-0.18-9.3l-0.48,0.01c-3.34-2.67-5.84-2.84-10.67-3.67   c-0.01,0.41,0,0.82,0.02,1.22c0,0.29,0.021,0.57,0.04,0.85c0.011,0.28,0.03,0.56,0.061,0.84c0.03,0.34,0.06,0.67,0.1,0.99   c0,0.01,0,0.02,0.011,0.02c0.01,0.12,0.029,0.25,0.039,0.37c0.011,0.02,0.011,0.03,0.011,0.05c0.109,0.78,0.26,1.53,0.43,2.26   c0.08,0.34,0.16,0.67,0.25,0.99c0.1,0.37,0.21,0.73,0.32,1.09c0.109,0.36,0.229,0.71,0.359,1.05c0.12,0.34,0.25,0.68,0.391,1.01   c0.56,1.38,1.21,2.67,1.91,3.88c0.04,0.07,0.079,0.14,0.119,0.2c0.07,0.13,0.15,0.25,0.221,0.37c0.069,0.13,0.149,0.27,0.239,0.4   c0.2,0.31,0.4,0.63,0.601,0.93c0.649,1,1.33,1.94,2.01,2.83c0.43,0.57,0.87,1.13,1.29,1.67c0.42,0.53,0.84,1.05,1.24,1.55   c0.05,0.05,0.09,0.11,0.12,0.16c0.17,0.21,0.34,0.42,0.5,0.63c0.17,0.21,0.33,0.41,0.479,0.61c0.16,0.2,0.311,0.4,0.45,0.59   c0.05,0.06,0.09,0.11,0.13,0.17c0.24,0.33,0.47,0.66,0.69,0.97c0.13,0.19,0.25,0.37,0.359,0.56c0.23,0.37,0.44,0.72,0.61,1.07   c0,3.8-0.32,8.03-0.6,10.97c2.189,0.72,3.76,2.78,3.76,5.2c0,0.39-0.04,0.78-0.12,1.15c0.21-0.31,0.4-0.59,0.63-0.82   c1.5-1.5,5.33-5.83,5.33-5.83s12.33,0,18.08,0s5.42,5.5,5.42,5.5s0,22.94,0,52.5H227.33c-3,0-5.83,4.75-5.83,4.75   s-1.02,1.95-2.52,4.6c0,0,0,0.02-0.01,0.04l4.5,2.22l0.03,0.01v-0.02c1-1.55,1.59-2.87,2.02-3.72c1.93-3.8,2.48-3.88,2.48-3.88   s41.91,0,98.5,0h284v124.83c0,4-3.5,5.17-3.5,5.17s-21.1,0-41.5,0v6.32c2.53-0.08,4.5-0.15,4.5-0.15s-10.16,9,2.25,13   c0.8-0.39,1.5-0.79,2.1-1.189c0.131-0.08,0.25-0.16,0.37-0.24c1.58-1.09,2.431-2.03,2.59-2.21c0-0.011,0-0.011,0.011-0.011   c0-0.01,0.01-0.01,0.01-0.01c0.01,0,0.01,0.021,0.02,0.04c0.011,0.021,0.021,0.04,0.03,0.07c0.05,0.09,0.11,0.24,0.18,0.43   c0.03,0.05,0.051,0.101,0.061,0.16c0.03,0.07,0.06,0.14,0.08,0.22c0.01,0.011,0.01,0.021,0.02,0.04c0.03,0.09,0.061,0.19,0.09,0.29   c0.051,0.17,0.101,0.351,0.15,0.54c0.03,0.13,0.06,0.26,0.09,0.41c0.03,0.14,0.061,0.29,0.08,0.44c0.03,0.149,0.05,0.3,0.061,0.46   c0.01,0.06,0.01,0.13,0.02,0.189c0,0.05,0.01,0.09,0.01,0.141c0,0.05,0.011,0.109,0.011,0.159c0.01,0.08,0.01,0.16,0.01,0.24   c0.01,0.32,0.01,0.641-0.021,0.97c-0.01,0.12-0.02,0.24-0.04,0.36c-0.04,0.32-0.1,0.65-0.189,0.98   c-0.03,0.109-0.061,0.22-0.101,0.34s-0.08,0.25-0.13,0.38c-0.04,0.1-0.09,0.21-0.14,0.31c-0.09,0.24-0.21,0.471-0.351,0.7   c-0.09,0.16-0.189,0.32-0.3,0.48c-0.01,0.01-0.02,0.02-0.02,0.029c-0.12,0.17-0.24,0.341-0.391,0.511   c-0.18,0.22-0.39,0.439-0.609,0.659c-0.11,0.12-0.24,0.23-0.37,0.351c1.08,0.93,1.75,2.3,1.75,3.83c0,0.62-0.11,1.21-0.32,1.76   h49.66c8.66,0,8.83-10.5,8.83-10.5s0-135.33,0-144.33S626,194.5,626,194.5z M572.25,343.12c-1.92-1.45-2.74-3.46,0-4.12   c0.47-0.11,0.95-0.19,1.42-0.23c-4.65-3.029,0-4.97,0-4.97c-1.65-0.069-3.53-0.55-3.34-2.45c0.34-3.31,5-2.85,7.92,0   c2.91,2.851,7.42,3.98,7.42,3.98s-3.34,3.67-5.67,5.34C577.67,342.33,574.17,344.57,572.25,343.12z M630.5,347   c0,6.67-5.5,7.5-5.5,7.5s-40,0-46.67,0c2.84-3,2.67-12,2.67-12s19,0,29,0s12.5-11.5,12.5-11.5s0-76.2,0-132.5h2.42   c4.58,0,5.58,5.5,5.58,5.5S630.5,340.33,630.5,347z M575.95,353.56c0.229-0.22,0.439-0.439,0.609-0.659   C576.38,353.12,576.17,353.34,575.95,353.56z M575.95,353.56c0.229-0.22,0.439-0.439,0.609-0.659   C576.38,353.12,576.17,353.34,575.95,353.56z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M170,226.5c0,0,0.62,0,0.86,0c0.02,0,0.03,0,0.05,0   c2.06,0,11.33,0.02,21.41,0.02\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M215.89,222.38c0.01,0,0.01,0.01,0.02,0.03   c0.08,0.06,0.17,0.13,0.26,0.2c0,0,0.01,0,0.01,0.01c1.81,1.39,4.66,3.88,2.82,3.88\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M403.5,316c0-0.03,0-0.06,0-0.09c0-9.58,4.5-9.41,4.5-9.41   s60.37,0,95.75,0c1.2,0,2.36,0,3.5,0c11.91,0,20.32,0,21.42,0c0.25,1.03,0.51,1.97,0.79,2.81\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M565,316.5h16.5h1.5l4-1.08c0,0-0.33-24.09-0.33-29.09   c0-4.69-5.42-8.79-6.1-9.28c-0.051-0.03-0.07-0.05-0.07-0.05v-45.5v-5h1.29H588c0,0,3.67-0.11,3.67,5.56   c0,5.66-3.67,7.44-3.67,7.44h-3.5c0,0,0,24.5,0,31.5c0,1,12.58,9.67,13.58,12s1.92,6.67,1.92,16.67   c-1.2,7.22-2.66,12.28-4.07,15.83c-2.89,7.27-5.6,8.17-5.6,8.17s-6-0.67-7,0.33s-3.66,2.33-3.66,2.33s-3-0.66-8.34-2.33   c-2.1,0.85-4.3,1.36-6.08,1.61\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560.5,316.5v9.25c-4.23-0.42-6.66-2.08-6.66-2.08   s-2.01,0.5-4.17,2.66c1.19,0.76,2.13,1.479,2.82,2.17c1.43,1.43,1.74,2.71,0.84,3.83c-1.061,0.08-2.271-0.29-3.521-0.89   c-0.01,0-0.029-0.011-0.04-0.03c-1.039-0.771-2.13-1.521-3.31-2.061c-0.01-0.01-0.01-0.01-0.01-0.01   c-0.38-0.28-0.73-0.56-1.09-0.84c-2.471-1.99-4.36-4-4.36-4s-6,0-9.67,0c-3.66,0-4.33-14-4.33-14l2.46-1.19   c2.65,8.2,6.21,8.271,6.21,8.271l4.33-1.08H560.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M423.8,436.2c0,0,0.71-0.311,1.57-1.21   c1.09-1.13,2.189-3.181,1.63-6.71c-1-6.34-6.17-5.971-8.83-5.971c-2-3.67-12.65-23.489-25.45-50.489   c-0.31-3.79,2.28-9.551,6.83-16.74c0.56-0.89,1.15-1.8,1.78-2.73c1.86-2.8,3.97-5.79,6.29-8.939c0-5.33,0.36-12.5,0.36-12.5   s6.01-1.561,6.01-7.561s-6.33-6.76-6.33-6.76s-1.99-6.09,6.67-6.09c5.6,0,7.58,0,35.67,0c1.73,0,3.56,0,5.5,0c4.68,0,9.98,0,16,0   c4.29,0,8.94,0,14,0c4.8,0,9.95,0,15.5,0c0.82,0,1.66,0,2.5,0c0.17,0,0.33,0,0.5,0c0.33,0,0.67,0,1,0c4.53,0,9.3,0,14.33,0   c1.689,0,3.42,0,5.17,0c0.83,0,1.66,0,2.5,0\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M549.77,331.41c-1.109-0.53-2.239-1.271-3.31-2.061\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M558.33,357.74c0,1.62-0.76,3.069-1.96,4   c-0.86,0.68-1.94,1.08-3.12,1.08c-2.8,0-5.08-2.28-5.08-5.08c0-1.3,0.49-2.5,1.3-3.391c0.88-0.989,2.15-1.619,3.561-1.68   c0.069-0.01,0.149-0.01,0.22-0.01c2.49,0,4.56,1.79,4.99,4.16C558.3,357.12,558.33,357.42,558.33,357.74z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M577.33,357.74c0,0.62-0.11,1.21-0.32,1.76   c-0.71,1.94-2.569,3.32-4.76,3.32c-1.24,0-2.39-0.45-3.27-1.2c-1.11-0.93-1.811-2.32-1.811-3.88c0-0.15,0.01-0.311,0.03-0.46   c0.22-2.59,2.399-4.62,5.05-4.62c1.28,0,2.44,0.47,3.33,1.25C576.66,354.84,577.33,356.21,577.33,357.74z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560.5,291.87v4.63H540c0,0,0.79-0.56,2.5-1.28   C545.48,293.95,551.26,292.15,560.5,291.87z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M583.33,306.5H565.5v-4.63c8.97,0.28,13.72,2.04,16,3.31   C582.84,305.93,583.33,306.5,583.33,306.5z\"/> \n" \
"	<rect x=\"560.5\" y=\"288.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"5\" height=\"72\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560.5,334.95v8.17c0-5.45-7.25-6.45-7.25-6.45s-2.62,2.15-3.25,4   c0,0,0.3,3.93-6.68,3.93c-0.221,0-0.431,0-0.641-0.01c-6.39-0.24-7.01-4.05-7.01-7.92c0-4,1.33-8.17,7.16-8.17   c1.31,0,2.51,0.33,3.62,0.84c0,0,0,0,0.01,0.01c1.18,0.54,2.271,1.29,3.31,2.061c0.011,0.02,0.03,0.03,0.04,0.03   c2.29,1.729,4.311,3.56,6.521,3.56C557.44,335,558.92,334.98,560.5,334.95z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560.5,343.12v14.38c-0.81-0.16-1.56-0.39-2.26-0.68   c-0.431-2.37-2.5-4.16-4.99-4.16c-0.07,0-0.15,0-0.22,0.01c-1.62-2.17-2.36-4.46-2.36-5.67   C550.67,344.33,560.5,348.57,560.5,343.12z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M578.24,347.84c0.01,0.32,0.01,0.641-0.021,0.97   c-0.01,0.12-0.02,0.24-0.04,0.36c-0.04,0.32-0.1,0.65-0.189,0.98c-0.03,0.109-0.061,0.22-0.101,0.34s-0.08,0.25-0.13,0.38   c-0.04,0.1-0.09,0.21-0.14,0.31c-0.09,0.24-0.21,0.471-0.351,0.7c-0.09,0.16-0.189,0.32-0.3,0.48c-0.01,0.01-0.02,0.02-0.02,0.029   c-0.12,0.17-0.25,0.341-0.391,0.511c-0.17,0.22-0.38,0.439-0.609,0.659c-0.11,0.12-0.24,0.23-0.37,0.351   c-0.89-0.78-2.05-1.25-3.33-1.25c-2.65,0-4.83,2.03-5.05,4.62c-0.54,0.09-1.11,0.17-1.7,0.229V334.82c2.53-0.08,4.5-0.15,4.5-0.15   s-10.16,9,2.25,13c0.8-0.39,1.5-0.79,2.1-1.189c0.131-0.08,0.25-0.16,0.37-0.24c1.58-1.09,2.431-2.03,2.59-2.21   c0-0.011,0-0.011,0.011-0.011c0-0.01,0.01-0.01,0.01-0.01c0.01,0,0.01,0.021,0.02,0.04c0.011,0.021,0.021,0.04,0.03,0.07   c0.05,0.09,0.11,0.24,0.18,0.43c0.03,0.05,0.051,0.101,0.061,0.16c0.03,0.07,0.06,0.14,0.08,0.22c0.01,0.011,0.01,0.021,0.02,0.04   c0.03,0.09,0.061,0.19,0.09,0.29c0.051,0.17,0.101,0.351,0.15,0.54c0.03,0.13,0.06,0.26,0.09,0.41c0.03,0.14,0.061,0.29,0.08,0.44   c0.03,0.149,0.05,0.3,0.061,0.46c0.01,0.06,0.01,0.13,0.02,0.189c0,0.05,0.01,0.09,0.01,0.141c0,0.05,0.011,0.109,0.011,0.159   C578.24,347.68,578.24,347.76,578.24,347.84z\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"390.94,270.789 369.943,269.875 372,275.5 373.5,275.5    373.5,316.5 376.5,316.5 376.5,276.5 385,276.5  \"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M418.5,246.5v15h24v-15H418.5z M435.13,256.42   c-1.06,0.97-2.79,1.58-4.68,1.58c-2.03,0-3.891-0.71-4.9-1.79l-0.01-0.01c-0.021-0.01-0.03-0.03-0.04-0.04v-0.01   c-1-0.62-0.88-1.36-0.88-2.15c0-0.2,0.02-0.4,0.07-0.59c0.13-0.57,0.439-1.11,0.899-1.58c0.38-0.41,0.88-0.77,1.46-1.06   c0.2-0.1,0.4-0.19,0.61-0.27c0.84-0.32,1.8-0.48,2.83-0.48c1.81,0,3.43,0.48,4.5,1.48H435c0.1,0,0.2,0.15,0.29,0.25   c0.47,0.45,0.8,0.98,0.95,1.56c0.06,0.22,0.09,0.45,0.09,0.69C436.33,254.91,435.88,255.75,435.13,256.42z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M427.05,250.77c-0.569,0.3-1.06,0.65-1.439,1.06   c-0.45,0.47-0.78,1.01-0.92,1.58c0.13-0.57,0.439-1.11,0.899-1.58C425.97,251.42,426.47,251.06,427.05,250.77z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M425.59,251.83c0.38-0.41,0.88-0.77,1.46-1.06   c-0.569,0.3-1.06,0.65-1.439,1.06c-0.45,0.47-0.78,1.01-0.92,1.58C424.82,252.84,425.13,252.3,425.59,251.83z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M434.81,251.5h-0.31v-0.03C434.62,251.48,434.72,251.49,434.81,251.5   z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M436.33,254c0,0.91-0.45,1.75-1.2,2.42   c-1.06,0.97-2.79,1.58-4.68,1.58c-2.03,0-3.891-0.71-4.9-1.79l-0.01-0.01c-0.021-0.01-0.03-0.03-0.04-0.04v-0.01   c-1-0.62-0.88-1.36-0.88-2.15c0-0.2,0.02-0.4,0.07-0.59c0.14-0.57,0.47-1.11,0.92-1.58c0.38-0.41,0.87-0.76,1.439-1.06   c0.2-0.1,0.4-0.19,0.61-0.27c0.84-0.32,1.8-0.48,2.83-0.48c1.81,0,3.43,0.48,4.5,1.48h-0.181c-0.09-0.01-0.189-0.02-0.31-0.03v0.03   h0.31c0.08,0.01,0.141,0.02,0.181,0.03c0.279,0.06-0.021,0.13,0.05,0.2c0.46,0.46,0.92,0.99,1.08,1.57   C436.17,253.52,436.33,253.76,436.33,254z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M425.59,251.83c0.38-0.41,0.88-0.77,1.46-1.06   c-0.569,0.3-1.06,0.65-1.439,1.06c-0.45,0.47-0.78,1.01-0.92,1.58C424.82,252.84,425.13,252.3,425.59,251.83z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M434.81,251.5h-0.31v-0.03C434.62,251.48,434.72,251.49,434.81,251.5   z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M435,251.46c0,0.01-0.01,0.03-0.01,0.04s0,0.02,0,0.03\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M430.5,262v3c0,0-2.167,0.667-2.167,3s2.167,3,2.167,3v2.5h4.5   l-0.294-2.688c0,0,0.768-1.312,2.697-1.312s4.597,0,4.597,0l0.5-4.167l-5.097,0.333c0,0-2.697-1-2.697-3.667\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M440.918,262.083c0,0,8.582-1.583,8.582,5.667c0,4.584,0,5.75,0,5.75   h6V264c0,0,0.5-2.5,3.833-2.5s7.667,0,7.667,0s3.5,0.5,3.5,2.5s0,9.5,0,9.5h15V262c0,0-2-15.25-15.25-15.25s-27.75-0.25-27.75-0.25   \"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M581.04,216.82c-0.89,2.12-1.46,3.82-1.37,4.51   c2.33,0,2.12,5.06,2.12,5.06l-1.29-0.01l-18-0.18\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M558.5,226.16l-16-0.16c0,0,0,3.65,0,8.95c0,12.38,0,33.77,0,38.55   c-3.88,7.27-5.33,12.19-5.41,12.49\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M593,198.5c-3.33,0-4.33,2.83-4.33,2.83s-0.8,1.48-1.92,3.64\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M537.08,286c0,0,0,0,0.01-0.01c0-0.04-0.14-0.221-1.42-0.99   c1.29-2.27,2-5.63,2.38-8.49c0.15-1.1,0.24-2.12,0.311-2.979c0.12-1.521,0.14-2.53,0.14-2.53v-31c0,0-3.27-0.24-5.32-2.38\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M579.99,198.39c0,0,0.05,0.04,0.13,0.11   c0.479,0.45,2.09,2.1,1.52,3.53c-0.029,0.11-0.13,0.26-0.22,0.46\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M556,219.5h-9c0,0-4.33,2.61-7,6.89c-3.67,0-8.42,0.82-8.42,6.96   c0,0.36-0.121,0.7-0.07,1.03\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M564,219.5c0,0,7.18,0,8.25,0c0,0,1.27-2.39,2.93-5.41   c0-0.01-0.204-0.01-0.204-0.02\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"562\" y1=\"231.5\" x2=\"580\" y2=\"231.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M558,231.5c0,0-10.09,0-11.33,0c-2.46,0-3.689,2.26-4.17,3.45   c-0.17,0.43-0.5,0.72-0.5,0.72\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M564.46,219.14c0,0.12-0.01,0.24-0.03,0.36   c-0.1,1.34-0.85,2.48-1.93,3.13v8.87h-4v-8.71c-1.23-0.62-2.1-1.85-2.22-3.29c-0.011-0.12-0.021-0.24-0.021-0.36   c0-2.27,1.83-4.1,4.101-4.1C562.63,215.04,564.46,216.87,564.46,219.14z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M573.67,338.77c2.34-0.229,4.58,0.23,4.58,0.23\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M573.67,333.8c1.23,0.05,2.33-0.13,2.33-0.13s2.5,0,2.25,1.66\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560.5,301.87v4.63H540c0,0,0.79-0.56,2.5-1.28   C545.48,303.95,551.26,302.15,560.5,301.87z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"542.5\" y1=\"305\" x2=\"542.5\" y2=\"297\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"542.5,307 542.5,316.5 542.5,317  \"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M583.33,296.5H565.5v-4.63c8.97,0.28,13.72,2.04,16,3.31   C582.84,295.93,583.33,296.5,583.33,296.5z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"581.5\" y1=\"305\" x2=\"581.5\" y2=\"297\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"581.5,307 581.5,316.5 581.5,317  \"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M581.5,295v-6v-3c0,0-0.33-3.95-3.1-7.78   c-0.19-0.26-0.381-0.52-0.591-0.77c-2.75-3.37-7.52-6.45-15.77-6.45c-18.21,0-19.54,16-19.54,16v8\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M587.5,279v36.5h8V292C595.5,292,596.667,287,587.5,279z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"591.5\" y1=\"283\" x2=\"591.5\" y2=\"316\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"407\" y1=\"273.5\" x2=\"538\" y2=\"273.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"538\" y1=\"276.5\" x2=\"405\" y2=\"276.5\"/> \n" \
"	<rect x=\"218.5\" y=\"273.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"128\" height=\"3\"/> \n" \
"	<path opacity=\"0.3\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M503.75,306.166c0,0,3.25-4.666,8-4.666   s16.25,0,16.25,0\"/> \n" \
"	<path opacity=\"0.3\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M527.5,290.5H507c0,0-9.75-2-9.75-14   c3.75,0,3.75,0,3.75,0s1.25,10.25,8.25,10.75s26.25,0.25,26.25,0.25V304c0,0-1.261,2.5-4.172,2.5s-3.828-2.667-3.828-2.667V290.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M593,208c0,0-1.75,3.5-3.5,3s0-4.75,0-4.75l-2.75-1.28l-5.33-2.48   l-2.67-1.24l-3.5,5L572,212.5c0,0,1.37,0.69,3.19,1.57c1.819,0.89,4.079,1.97,5.85,2.75c0.96,0.43,1.78,0.77,2.29,0.93   c2.37,0.76,2.42-3.5,4.17-2.71s-1,4.96,0,5.71s4,0,4,0l4.05-10.75C595.55,210,595.25,209,593,208z M583.77,210.88   c-0.06,0.12-0.109,0.23-0.17,0.34c-1.51,2.79-3.6,1.78-3.6,1.78s-3.21-1.27-1.56-4.77c0.05-0.1,0.1-0.2,0.159-0.31   c1.99-3.74,4.73-2.67,4.73-2.67s1.96,2.41,0.45,5.61C583.78,210.87,583.77,210.87,583.77,210.88z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M583.78,210.86c0,0.01-0.011,0.01-0.011,0.02   c-0.06,0.12-0.109,0.23-0.17,0.34c-1.51,2.79-3.6,1.78-3.6,1.78s-3.21-1.27-1.56-4.77c0.05-0.1,0.1-0.2,0.159-0.31   c1.99-3.74,4.73-2.67,4.73-2.67S585.29,207.66,583.78,210.86z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M583.78,210.86c0,0.01-0.011,0.01-0.011,0.02   c-0.06,0.12-0.109,0.23-0.17,0.34c-1.51,2.79-3.6,1.78-3.6,1.78s-3.21-1.27-1.56-4.77c0.05-0.1,0.1-0.2,0.159-0.31   c1.99-3.74,4.73-2.67,4.73-2.67S585.29,207.66,583.78,210.86z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M358.5,280.99v33.51h-4v-36h0.61   C356.16,279.28,357.31,280.14,358.5,280.99z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M390.5,280.99v33.51h4v-36h-0.61   C392.84,279.28,391.69,280.14,390.5,280.99z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M388.5,282.25v32.25h-4v-29.59C385.6,284.17,387,283.24,388.5,282.25   z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M382.5,286.27v28.23h-4v-29.2c0.39-0.24,0.77-0.51,1.14-0.77   c0.05,1.939,1.09,3.01,2.78,1.8C382.45,286.31,382.47,286.29,382.5,286.27z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M365.5,285.79v28.71h-4v-31.37   C362.94,284.14,364.32,285.06,365.5,285.79z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M371.5,283.28v31.22h-4v-27.57c0.77,0.391,1.31,0.551,1.5,0.4   c1.81-1.811,1.98-2.45,1.51-4.771C370.83,282.82,371.16,283.06,371.5,283.28z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M497.5,195V98c0,0-1.83-2.67-3.17-3.5c4.34,0,9.67,0,9.67,0   l-2.5,2.92V195\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"501.5,274 501.5,273.5 501.5,240  \"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"501.5\" y1=\"229\" x2=\"501.5\" y2=\"199\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"497.5,274 497.5,273.5 497.5,240  \"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"497.5\" y1=\"229\" x2=\"497.5\" y2=\"199\"/> \n" \
"	<rect x=\"518.5\" y=\"198.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"6\" height=\"30\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M518.5,239.5h6v34h-6C518.5,273.5,518.5,259.16,518.5,239.5z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M553.67,120.08c-0.34,1.67-2.67,2.42-2.67,2.42s-0.06,0-0.17,0   h-19.25c-5.76,0-7.08,7.5-7.08,7.5v64.5h-6v-65.17c0-9.66,9.5-10.83,9.5-10.83h22.8C550.8,118.5,554,118.42,553.67,120.08z\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M581.16,142c0,0.39-0.04,0.78-0.12,1.15c0,0.01,0,0.01-0.01,0.02   c-0.53,2.47-2.73,4.32-5.36,4.32c-0.57,0-1.12-0.09-1.64-0.25c-2.24-0.69-3.86-2.78-3.86-5.24c0-0.52,0.07-1.03,0.22-1.5   c0.641-2.3,2.761-3.99,5.28-3.99c0.6,0,1.19,0.1,1.73,0.29C579.59,137.52,581.16,139.58,581.16,142z\"/> \n" \
"	<rect x=\"556.5\" y=\"114.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"4\" height=\"20\"/> \n" \
"	<rect x=\"563.5\" y=\"114.5\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"4\" height=\"20\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"556\" y1=\"117.5\" x2=\"560\" y2=\"117.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"556\" y1=\"121.5\" x2=\"560\" y2=\"121.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"556\" y1=\"124.5\" x2=\"560\" y2=\"124.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"556\" y1=\"128.5\" x2=\"560\" y2=\"128.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"556\" y1=\"131.5\" x2=\"560\" y2=\"131.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"563\" y1=\"117.5\" x2=\"567\" y2=\"117.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"563\" y1=\"121.5\" x2=\"567\" y2=\"121.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"563\" y1=\"124.5\" x2=\"567\" y2=\"124.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"563\" y1=\"128.5\" x2=\"567\" y2=\"128.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"567\" y1=\"131.5\" x2=\"563\" y2=\"131.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M578,125.83c0,3.8-0.32,8.03-0.6,10.97   c-0.54-0.19-1.131-0.29-1.73-0.29c-2.52,0-4.64,1.69-5.28,3.99H553.69c0,0-1.551-0.77-2.931-2.06c-1.1-1.03-2.09-2.38-2.09-3.94   c0-1.87,0.9-3.22,1.85-4.58c0.82-1.18,1.66-2.38,1.98-3.92c-0.24-0.09-0.48-0.16-0.71-0.22c-0.22-0.06-0.44-0.1-0.66-0.14   c-0.1-0.01-0.2-0.02-0.3-0.03c-0.061-0.01-0.11-0.02-0.17-0.02l0.149-3.09h0.021c0.11,0,0.17,0,0.17,0s2.33-0.75,2.67-2.42   c0.33-1.66-2.87-1.58-2.87-1.58h-0.05l-0.09-6h0.1c0,0,0.01,1.17,1.91,2s3.5-0.83,5.33-4.83s1.83-6.67,2-11.67c0,0,1,6.5,0.5,16.5   h-4v20h4v-3h3v3h4v-20h-4c0-15.67,1.5-16,1.5-16c-0.01,0.41,0,0.82,0.02,1.22c0,0.29,0.011,0.57,0.04,0.85   c0.011,0.28,0.03,0.56,0.061,0.84c0.03,0.34,0.06,0.67,0.1,0.99c0,0.01,0,0.02,0.011,0.02c0.01,0.13,0.029,0.25,0.039,0.37   c0.011,0.02,0.011,0.03,0.011,0.05c0.109,0.78,0.26,1.53,0.43,2.26c0.07,0.33,0.16,0.66,0.25,0.99c0.1,0.37,0.2,0.73,0.32,1.09   c0.109,0.36,0.229,0.71,0.359,1.05c0.12,0.34,0.25,0.68,0.391,1.01c0.56,1.38,1.21,2.67,1.91,3.88   c0.04,0.07,0.079,0.045,0.119,0.104c0.07,0.131,0.15,0.275,0.221,0.275h0.01c0.07,0,0.15,0.365,0.229,0.495   c0.19,0.31,0.391,0.678,0.601,0.978c0.649,1,1.33,1.963,2.01,2.854c0.43,0.58,0.86,1.142,1.29,1.682   c0.42,0.53,0.84,1.056,1.24,1.556c0.05,0.05,0.09,0.113,0.12,0.163c0.17,0.21,0.34,0.421,0.5,0.631   c0.17,0.21,0.33,0.411,0.479,0.611c0.15,0.199,0.3,0.39,0.45,0.59c0.05,0.06,0.09,0.11,0.13,0.17c0.24,0.33,0.47,0.66,0.69,0.97   c0.13,0.19,0.25,0.37,0.359,0.56C577.62,125.13,577.83,125.48,578,125.83z\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"576,98.5 576.08,98.5 579.5,98.5 579.5,94.5 576,94.5    550.33,94.5 543.5,94.5 543.5,97.5 547.5,97.5 547.5,119  \"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M574.03,147.24c-0.96,0.12-2.07,0.18-3.36,0.18   c-9.67,0-8-1.92-15.34-1.92h-0.83c-3.22,0-3.5,0-3.5,0l-0.13-5h-3.7c0,0-6.84-1.5-6.84-7.83c0-6.34,7.17-6.67,7.17-6.67   s1.34-0.58,3.16-0.41c0.06,0,0.109,0.01,0.17,0.02c0.1,0.01,0.2,0.02,0.3,0.03c0.22,0.04,0.44,0.08,0.66,0.14   c0.2,0.06,0.39,0.13,0.63,0.22c-0.32,1.54-1.08,2.74-1.9,3.92c-0.949,1.36-1.85,2.71-1.85,4.58c0,1.56,0.99,2.91,2.09,3.94   c1.38,1.29,2.931,2.06,2.931,2.06h16.699c-0.149,0.47-0.22,0.98-0.22,1.5C570.17,144.46,571.79,146.55,574.03,147.24z\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" points=\"551,140.5 551,140.5 554,140.5  \"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"547.5\" y1=\"126\" x2=\"547.5\" y2=\"123\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M560,98c-4-0.5-9.32,4.5-9.32,4.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"554.5\" y1=\"141\" x2=\"554.5\" y2=\"146\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"354\" y1=\"300.5\" x2=\"358\" y2=\"300.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"361\" y1=\"300.5\" x2=\"365\" y2=\"300.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"367\" y1=\"300.5\" x2=\"371\" y2=\"300.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"378\" y1=\"301.5\" x2=\"382\" y2=\"301.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"384\" y1=\"301.5\" x2=\"388\" y2=\"301.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"390\" y1=\"301.5\" x2=\"394\" y2=\"301.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M450.5,504.5c0,1.29-1.04,2.33-2.33,2.33   c-0.93,0-1.74-0.54-2.11-1.33h-5.35c-0.1-0.65-0.21-1.32-0.33-2h5.68c0.37-0.79,1.181-1.33,2.11-1.33   C449.46,502.17,450.5,503.21,450.5,504.5z\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"243\" y1=\"144.5\" x2=\"239\" y2=\"144.5\"/> \n" \
"	<path opacity=\"0.3\" fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M507.25,306.167c0,0,3.584-2.667,6.417-2.667   s13.333,0,13.333,0\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"326\" y1=\"309.5\" x2=\"337\" y2=\"309.5\"/> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M576.28,111.798c0,0-0.847,3.915,3.22,9.244   c-1.153,1.087-5.941-0.187-10.562-7.923\"/> \n" \
"	<line fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"547.5\" y1=\"100\" x2=\"547.5\" y2=\"95\"/> \n" \
"	<line fill=\"#B3B3B3\" stroke=\"#000000\" stroke-miterlimit=\"10\" x1=\"209\" y1=\"138\" x2=\"210.5\" y2=\"143.75\"/> \n" \
"</g> \n" \
"<g id=\"arrows\"> \n" \
"	<g> \n" \
"		<line fill=\"#C1272D\" x1=\"130\" y1=\"163\" x2=\"130\" y2=\"185\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"130.5\" y1=\"163\" x2=\"130.5\" y2=\"180\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M130.5,185c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C133.065,179.273,131.447,182.444,130.5,185z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#C1272D\" x1=\"197\" y1=\"65\" x2=\"197\" y2=\"87\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"197.5\" y1=\"65\" x2=\"197.5\" y2=\"82\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M197.5,87c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C200.065,81.273,198.447,84.444,197.5,87z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"563.5\" y1=\"65\" x2=\"563.5\" y2=\"82\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M563.5,87c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C566.065,81.273,564.447,84.444,563.5,87z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"616.5\" y1=\"152\" x2=\"616.5\" y2=\"169\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M616.5,174c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C619.065,168.273,617.447,171.444,616.5,174z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"616.5\" y1=\"251\" x2=\"616.5\" y2=\"268\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M616.5,273c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C619.065,267.273,617.447,270.444,616.5,273z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#C1272D\" x1=\"130\" y1=\"318\" x2=\"130\" y2=\"340\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"130.5\" y1=\"318\" x2=\"130.5\" y2=\"335\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M130.5,340c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C133.065,334.273,131.447,337.444,130.5,340z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"445.5\" y1=\"327\" x2=\"445.5\" y2=\"344\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M445.5,349c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C448.065,343.273,446.447,346.444,445.5,349z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"238.5\" y1=\"434\" x2=\"238.5\" y2=\"451\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M238.5,456c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C241.065,450.273,239.447,453.444,238.5,456z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"300.5\" y1=\"384\" x2=\"300.5\" y2=\"367\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M300.5,362c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C297.935,367.727,299.553,364.556,300.5,362z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"641.5\" y1=\"307\" x2=\"641.5\" y2=\"290\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M641.5,285c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C638.935,290.727,640.553,287.556,641.5,285z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"493.5\" y1=\"267\" x2=\"493.5\" y2=\"250\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M493.5,245c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C490.935,250.727,492.553,247.556,493.5,245z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"499.5\" y1=\"84\" x2=\"499.5\" y2=\"67\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M499.5,62c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C496.935,67.727,498.553,64.556,499.5,62z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"241.5\" y1=\"85\" x2=\"241.5\" y2=\"68\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M241.5,63c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C238.935,68.727,240.553,65.556,241.5,63z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"331.5\" y1=\"269\" x2=\"331.5\" y2=\"252\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M331.5,247c0.948,2.556,2.566,5.727,4.28,7.692l-4.28-1.548l-4.279,1.548      C328.935,252.727,330.553,249.556,331.5,247z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"148.5\" y1=\"220\" x2=\"148.5\" y2=\"237\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M148.5,242c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C151.065,236.273,149.447,239.444,148.5,242z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"300\" y1=\"139.5\" x2=\"284\" y2=\"139.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M278.5,139c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C284.227,141.565,281.056,139.947,278.5,139z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"275\" y1=\"234.5\" x2=\"259\" y2=\"234.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M253.5,234c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C259.227,236.565,256.056,234.947,253.5,234z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"482\" y1=\"288\" x2=\"460\" y2=\"288\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"482\" y1=\"288.5\" x2=\"466\" y2=\"288.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M460.5,288c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C466.227,290.565,463.056,288.947,460.5,288z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"365\" y1=\"406\" x2=\"365\" y2=\"428\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"365.5\" y1=\"406\" x2=\"365.5\" y2=\"423\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M365.5,427.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C368.065,422.272,366.447,425.443,365.5,427.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"374\" y1=\"406\" x2=\"374\" y2=\"428\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"374.5\" y1=\"406\" x2=\"374.5\" y2=\"423\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M374.5,427.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C377.065,422.272,375.447,425.443,374.5,427.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"384\" y1=\"406\" x2=\"384\" y2=\"428\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"384.5\" y1=\"406\" x2=\"384.5\" y2=\"423\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M384.5,427.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C387.065,422.272,385.447,425.443,384.5,427.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"365\" y1=\"327\" x2=\"365\" y2=\"349\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"365.5\" y1=\"327\" x2=\"365.5\" y2=\"344\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M365.5,348.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C368.065,343.272,366.447,346.443,365.5,348.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"374\" y1=\"327\" x2=\"374\" y2=\"349\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"374.5\" y1=\"327\" x2=\"374.5\" y2=\"344\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M374.5,348.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C377.065,343.272,375.447,346.443,374.5,348.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"384\" y1=\"327\" x2=\"384\" y2=\"349\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"384.5\" y1=\"327\" x2=\"384.5\" y2=\"344\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M384.5,348.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C387.065,343.272,385.447,346.443,384.5,348.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"365\" y1=\"504\" x2=\"365\" y2=\"526\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"365.5\" y1=\"504\" x2=\"365.5\" y2=\"521\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M365.5,525.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C368.065,520.272,366.447,523.443,365.5,525.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"374\" y1=\"504\" x2=\"374\" y2=\"526\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"374.5\" y1=\"504\" x2=\"374.5\" y2=\"521\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M374.5,525.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C377.065,520.272,375.447,523.443,374.5,525.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"384\" y1=\"504\" x2=\"384\" y2=\"526\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"384.5\" y1=\"504\" x2=\"384.5\" y2=\"521\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M384.5,525.999c-0.948-2.556-2.566-5.727-4.28-7.692l4.28,1.548l4.279-1.548      C387.065,520.272,385.447,523.443,384.5,525.999z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"564\" y1=\"188.5\" x2=\"548\" y2=\"188.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M542.5,188c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C548.227,190.565,545.056,188.947,542.5,188z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"429\" y1=\"188.5\" x2=\"413\" y2=\"188.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M407.5,188c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C413.227,190.565,410.056,188.947,407.5,188z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"470\" y1=\"253.5\" x2=\"454\" y2=\"253.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M448.5,253c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C454.227,255.565,451.056,253.947,448.5,253z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			 \n" \
"				<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"412.278\" y1=\"256.221\" x2=\"400.562\" y2=\"267.937\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M396.722,271.777c1.137-2.478,2.235-5.864,2.413-8.466l1.932,4.122l4.121,1.931      C402.585,269.542,399.199,270.64,396.722,271.777z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"315\" y1=\"188.5\" x2=\"299\" y2=\"188.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M293.5,188c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C299.227,190.565,296.056,188.947,293.5,188z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"482\" y1=\"298\" x2=\"460\" y2=\"298\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"482\" y1=\"298.5\" x2=\"466\" y2=\"298.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M460.5,298c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C466.227,300.565,463.056,298.947,460.5,298z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"515\" y1=\"336.5\" x2=\"499\" y2=\"336.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M493.5,336c2.556-0.948,5.727-2.566,7.692-4.28l-1.548,4.28l1.548,4.279      C499.227,338.565,496.056,336.947,493.5,336z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"367\" y1=\"234.5\" x2=\"384\" y2=\"234.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M389.499,234c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C383.772,231.435,386.943,233.053,389.499,234z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"236\" y1=\"286\" x2=\"258\" y2=\"286\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"236\" y1=\"286.5\" x2=\"253\" y2=\"286.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M258.499,286c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C252.772,283.435,255.943,285.053,258.499,286z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#FCEE21\" x1=\"236\" y1=\"297\" x2=\"258\" y2=\"297\"/> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#FBB03B\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"236\" y1=\"297.5\" x2=\"253\" y2=\"297.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#FBB03B\" d=\"M258.499,297c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C252.772,294.435,255.943,296.053,258.499,297z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"493\" y1=\"384.5\" x2=\"510\" y2=\"384.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M515.499,384c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C509.772,381.435,512.943,383.053,515.499,384z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"242\" y1=\"423.5\" x2=\"259\" y2=\"423.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M264.499,423c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C258.772,420.435,261.943,422.053,264.499,423z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<line fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" x1=\"242\" y1=\"400.5\" x2=\"259\" y2=\"400.5\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M264.499,400c-2.556,0.948-5.727,2.566-7.692,4.28l1.548-4.28l-1.548-4.279      C258.772,397.435,261.943,399.053,264.499,400z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#0071BC\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M616.5,320.203c0,0,0.345,10.954-6.86,14.614\"/> \n" \
"			<g> \n" \
"				<path fill=\"#0071BC\" d=\"M604.33,335.992c2.255-1.532,4.947-3.861,6.446-5.995l-0.48,4.526l2.526,3.785      C610.504,337.114,607.038,336.301,604.33,335.992z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M159.663,296.5c0,0,1.063-4.648,3.017-7.76\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M166.282,286c-1.151,1.959-2.347,4.674-2.714,6.815l-1.254-3.579l-3.253-1.948      C161.232,287.359,164.132,286.734,166.282,286z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M334.5,403.5c0,0,0-5.114,4.996-13.469\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M342.5,385.5c-0.596,2.66-0.966,6.201-0.598,8.783l-2.748-3.63l-4.432-1.031      C337.23,388.906,340.313,387.128,342.5,385.5z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M304.5,499c0,0-0.39-9.365,3.656-21.891\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M310,472c0.034,2.726,0.492,6.257,1.446,8.684l-3.511-2.896l-4.551,0.02      C305.659,476.531,308.249,474.089,310,472z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M415.49,403.5c0,0,0-5.114-4.996-13.469\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M407.49,385.5c2.188,1.627,5.271,3.406,7.778,4.122l-4.433,1.031l-2.747,3.629      C408.457,391.7,408.087,388.16,407.49,385.5z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M446.49,498c0,0,0.391-9.365-3.655-21.891\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M440.99,471c1.752,2.089,4.342,4.531,6.617,5.807l-4.552-0.02l-3.511,2.896      C440.499,477.256,440.957,473.726,440.99,471z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"	<g> \n" \
"		<g> \n" \
"			<path fill=\"none\" stroke=\"#C1272D\" stroke-width=\"3\" stroke-miterlimit=\"10\" d=\"M201.667,340.929c0,0-0.316-10.126,18.956-8.16\"/> \n" \
"			<g> \n" \
"				<path fill=\"#C1272D\" d=\"M226,333.55c-2.66,0.596-6.02,1.772-8.198,3.207l2.11-4.033l-0.959-4.449      C220.67,330.237,223.595,332.268,226,333.55z\"/> \n" \
"			</g> \n" \
"		</g> \n" \
"	</g> \n" \
"</g> \n" \
"<g id=\"annotations\"> \n" \
"	<line fill=\"none\" stroke=\"#808080\" stroke-width=\"0.5\" stroke-miterlimit=\"10\" x1=\"106.995\" y1=\"63\" x2=\"181.875\" y2=\"122.25\"/> \n" \
"	<rect x=\"33.333\" y=\"42\" fill=\"none\" width=\"73.662\" height=\"48\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 33.3335 50.376)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Low pressure </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">fuel </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">turbopump</tspan></text> \n" \
"	<rect x=\"163.667\" y=\"52\" fill=\"none\" width=\"64.667\" height=\"48\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 163.6665 60.376)\" font-family=\"'LinLibertine'\" font-size=\"12\">Fuel inlet</text> \n" \
"	<rect x=\"232.243\" y=\"20.286\" fill=\"none\" width=\"75.333\" height=\"48\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 232.2427 28.6616)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">GH2 pressure </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">outlet to </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">external tank</tspan></text> \n" \
"	<rect x=\"27.333\" y=\"119.5\" fill=\"none\" width=\"79.662\" height=\"48\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 27.3335 127.876)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Fuel preburner </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">OX valve</tspan></text> \n" \
"	<rect x=\"257.172\" y=\"153\" fill=\"none\" width=\"49.828\" height=\"27.25\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 257.1719 161.376)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Hot gas </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">manifold</tspan></text> \n" \
"	<rect x=\"345.029\" y=\"150\" fill=\"none\" width=\"49.828\" height=\"27.25\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 345.0293 158.376)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Main </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">injector</tspan></text> \n" \
"	<rect x=\"410.503\" y=\"103.875\" fill=\"none\" width=\"49.828\" height=\"40.241\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 410.5029 112.251)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Main </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">oxidizer </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">valve</tspan></text> \n" \
"	<rect x=\"438.311\" y=\"21.88\" fill=\"none\" width=\"94.378\" height=\"40.241\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 438.3105 30.2559)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">GO2 pressurant </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">outlet to external </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">tank</tspan></text> \n" \
"	<rect x=\"11.334\" y=\"177.25\" fill=\"none\" width=\"79.662\" height=\"27.858\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 11.334 185.626)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Fuel preburner </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">injector</tspan></text> \n" \
"	<rect x=\"14.667\" y=\"245.57\" fill=\"none\" width=\"79.662\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 14.6675 253.9463)\" font-family=\"'LinLibertine'\" font-size=\"12\">Fuel preburner</text> \n" \
"	<rect x=\"12.334\" y=\"338.383\" fill=\"none\" width=\"79.662\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 12.334 346.7588)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">High pressure </tspan><tspan x=\"0\" y=\"14.399\" font-family=\"'LinLibertine'\" font-size=\"12\">fuel turbopump</tspan></text> \n" \
"	<rect x=\"497.67\" y=\"415.404\" fill=\"none\" width=\"90.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 497.6699 423.7803)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Main combustion </tspan><tspan x=\"0\" y=\"14.399\" font-family=\"'LinLibertine'\" font-size=\"12\">chamber</tspan></text> \n" \
"	<rect x=\"707.419\" y=\"447.571\" fill=\"none\" width=\"35.913\" height=\"10.5\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 707.4189 455.9473)\" font-family=\"'LinLibertine'\" font-size=\"12\">Fuel</text> \n" \
"	<rect x=\"707.419\" y=\"474.75\" fill=\"none\" width=\"45.748\" height=\"10.5\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 707.4189 483.126)\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidant</text> \n" \
"	<rect x=\"707.419\" y=\"502.25\" fill=\"none\" width=\"58.415\" height=\"10.5\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 707.4189 510.626)\" font-family=\"'LinLibertine'\" font-size=\"12\">Hot gases</text> \n" \
"	<rect x=\"707.419\" y=\"522.875\" fill=\"none\" width=\"64.619\" height=\"26.25\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 707.4189 531.251)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Combustion </tspan><tspan x=\"0\" y=\"14.399\" font-family=\"'LinLibertine'\" font-size=\"12\">zone</tspan></text> \n" \
"	<rect x=\"682.17\" y=\"371.65\" fill=\"none\" width=\"102.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 682.1699 380.0264)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">High pressure </tspan><tspan x=\"0\" y=\"14.399\" font-family=\"'LinLibertine'\" font-size=\"12\">oxidizer turbopump</tspan></text> \n" \
"	<rect x=\"673.503\" y=\"422.271\" fill=\"none\" width=\"102.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 673.5029 432.043)\" font-family=\"'LinLibertineB'\" font-size=\"14\">Legend</text> \n" \
"	<rect x=\"682.17\" y=\"313.071\" fill=\"none\" width=\"102.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 682.1699 321.4473)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidizer heat </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">exchanger</tspan></text> \n" \
"	<rect x=\"681.17\" y=\"256.071\" fill=\"none\" width=\"102.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 681.1699 264.4473)\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidizer preburner</text> \n" \
"	<rect x=\"681.17\" y=\"203.341\" fill=\"none\" width=\"102.161\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 681.1699 211.7173)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidizer preburner</tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">OX valve</tspan></text> \n" \
"	<rect x=\"681.17\" y=\"131.286\" fill=\"none\" width=\"75.33\" height=\"41.429\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 681.1699 139.6616)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidizer </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">preburner </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">injector</tspan></text> \n" \
"	<rect x=\"681.17\" y=\"55.286\" fill=\"none\" width=\"75.33\" height=\"41.429\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 681.1699 63.6616)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Low pressure </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">oxidizer </tspan><tspan x=\"0\" y=\"28.8\" font-family=\"'LinLibertine'\" font-size=\"12\">turbopump</tspan></text> \n" \
"	<rect x=\"548.005\" y=\"49.571\" fill=\"none\" width=\"75.33\" height=\"11.429\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 548.0049 57.9473)\" font-family=\"'LinLibertine'\" font-size=\"12\">Oxidizer inlet</text> \n" \
"	<rect x=\"495.836\" y=\"517.857\" fill=\"none\" width=\"79.661\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 495.8359 526.2334)\" font-family=\"'LinLibertine'\" font-size=\"12\">Nozzle</text> \n" \
"	<rect x=\"93.329\" y=\"431.393\" fill=\"none\" width=\"79.662\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 93.3291 439.7686)\" font-family=\"'LinLibertine'\" font-size=\"12\">Main fuel valve</text> \n" \
"	<rect x=\"88.164\" y=\"476.071\" fill=\"none\" width=\"79.662\" height=\"27.857\"/> \n" \
"	<text transform=\"matrix(1 0 0 1 88.1641 484.4473)\"><tspan x=\"0\" y=\"0\" font-family=\"'LinLibertine'\" font-size=\"12\">Chamber </tspan><tspan x=\"0\" y=\"14.4\" font-family=\"'LinLibertine'\" font-size=\"12\">coolant valve</tspan></text> \n" \
"	<polyline fill=\"none\" stroke=\"#808080\" stroke-width=\"0.5\" stroke-miterlimit=\"10\" points=\"97.666,144.116 115,143.5    209.029,203.341  \"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"100,191.5 114,191.5 170.745,220  \"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"100\" y1=\"254.5\" x2=\"182\" y2=\"254.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"100\" y1=\"352.5\" x2=\"160\" y2=\"352.5\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"178,436.5 206,436.5 230.5,387.5  \"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"163,490.5 186,490.5 263.499,408.429  \"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"493.499\" y1=\"522.661\" x2=\"459.5\" y2=\"506.83\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"492,429.5 473,429.5 378,341.658  \"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"676,385.5 647,385.5 584.354,343.588  \"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-width=\"0.5\" stroke-miterlimit=\"10\" x1=\"673.662\" y1=\"324.5\" x2=\"604.33\" y2=\"307\"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"676\" y1=\"262.5\" x2=\"570\" y2=\"262.5\"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"674\" y1=\"215.5\" x2=\"600\" y2=\"215.5\"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"673.57,146.744 654.857,146.125 550.5,211.167 550.5,216     \"/> \n" \
"	<polyline fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" points=\"674,65.5 654,65.5 583.334,114.708  \"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"279.5\" y1=\"181\" x2=\"279.5\" y2=\"293\"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"358\" y1=\"181\" x2=\"358.5\" y2=\"274\"/> \n" \
"	<line fill=\"none\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"430.5\" y1=\"150\" x2=\"430.5\" y2=\"246\"/> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"175.5\" y1=\"226\" x2=\"175.5\" y2=\"235\"/> \n" \
"		<rect x=\"174.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"179.5\" y1=\"226\" x2=\"179.5\" y2=\"235\"/> \n" \
"		<rect x=\"178.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"187.5\" y1=\"226\" x2=\"187.5\" y2=\"235\"/> \n" \
"		<rect x=\"186.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"183.5\" y1=\"226\" x2=\"183.5\" y2=\"235\"/> \n" \
"		<rect x=\"182.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"202.5\" y1=\"226\" x2=\"202.5\" y2=\"235\"/> \n" \
"		<rect x=\"201.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"206.5\" y1=\"226\" x2=\"206.5\" y2=\"235\"/> \n" \
"		<rect x=\"205.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"210.5\" y1=\"226\" x2=\"210.5\" y2=\"235\"/> \n" \
"		<rect x=\"209.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"214.5\" y1=\"226\" x2=\"214.5\" y2=\"235\"/> \n" \
"		<rect x=\"213.5\" y=\"226.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"353.5\" y1=\"312\" x2=\"353.5\" y2=\"321\"/> \n" \
"		<rect x=\"352.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"357.5\" y1=\"312\" x2=\"357.5\" y2=\"321\"/> \n" \
"		<rect x=\"356.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"365.5\" y1=\"312\" x2=\"365.5\" y2=\"321\"/> \n" \
"		<rect x=\"364.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"361.5\" y1=\"312\" x2=\"361.5\" y2=\"321\"/> \n" \
"		<rect x=\"360.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"370.5\" y1=\"312\" x2=\"370.5\" y2=\"321\"/> \n" \
"		<rect x=\"369.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"374.5\" y1=\"312\" x2=\"374.5\" y2=\"321\"/> \n" \
"		<rect x=\"373.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"382.5\" y1=\"312\" x2=\"382.5\" y2=\"321\"/> \n" \
"		<rect x=\"381.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"386.5\" y1=\"312\" x2=\"386.5\" y2=\"321\"/> \n" \
"		<rect x=\"385.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"390.5\" y1=\"312\" x2=\"390.5\" y2=\"321\"/> \n" \
"		<rect x=\"389.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"394.5\" y1=\"312\" x2=\"394.5\" y2=\"321\"/> \n" \
"		<rect x=\"393.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"378.5\" y1=\"312\" x2=\"378.5\" y2=\"321\"/> \n" \
"		<rect x=\"377.5\" y=\"312.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"544.5\" y1=\"224\" x2=\"544.5\" y2=\"233\"/> \n" \
"		<rect x=\"543.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"548.5\" y1=\"224\" x2=\"548.5\" y2=\"233\"/> \n" \
"		<rect x=\"547.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"556.5\" y1=\"224\" x2=\"556.5\" y2=\"233\"/> \n" \
"		<rect x=\"555.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"552.5\" y1=\"224\" x2=\"552.5\" y2=\"233\"/> \n" \
"		<rect x=\"551.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"565.5\" y1=\"224\" x2=\"565.5\" y2=\"233\"/> \n" \
"		<rect x=\"564.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"569.5\" y1=\"224\" x2=\"569.5\" y2=\"233\"/> \n" \
"		<rect x=\"568.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"577.5\" y1=\"224\" x2=\"577.5\" y2=\"233\"/> \n" \
"		<rect x=\"576.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" x1=\"573.5\" y1=\"224\" x2=\"573.5\" y2=\"233\"/> \n" \
"		<rect x=\"572.5\" y=\"224.5\" fill=\"#93278F\" stroke=\"#F2F2F2\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<path fill=\"none\" stroke=\"#000000\" stroke-miterlimit=\"10\" d=\"M783.5,543.187c0,6.94-3.847,12.313-9.079,12.313H670.976   c-5.233,0-9.476-5.373-9.476-12.313V427.969c0-6.94,4.242-12.469,9.476-12.469h103.445c5.232,0,9.079,5.528,9.079,12.469V543.187z\"/> \n" \
"	<rect x=\"677.5\" y=\"442.5\" fill=\"#C1272D\" fill-opacity=\"0.3\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"20\" height=\"20\"/> \n" \
"	<rect x=\"677.5\" y=\"469.5\" fill=\"#29ABE2\" fill-opacity=\"0.3\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"20\" height=\"20\"/> \n" \
"	<rect x=\"677.5\" y=\"497.5\" fill=\"#FCEE21\" fill-opacity=\"0.3\" stroke=\"#000000\" stroke-miterlimit=\"10\" width=\"20\" height=\"20\"/> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"681.5\" y1=\"527\" x2=\"681.5\" y2=\"536\"/> \n" \
"		<rect x=\"680.5\" y=\"527.5\" fill=\"#93278F\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"685.5\" y1=\"527\" x2=\"685.5\" y2=\"536\"/> \n" \
"		<rect x=\"684.5\" y=\"527.5\" fill=\"#93278F\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"693.5\" y1=\"527\" x2=\"693.5\" y2=\"536\"/> \n" \
"		<rect x=\"692.5\" y=\"527.5\" fill=\"#93278F\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"	<g> \n" \
"		<line fill=\"#ED1C24\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" x1=\"689.5\" y1=\"527\" x2=\"689.5\" y2=\"536\"/> \n" \
"		<rect x=\"688.5\" y=\"527.5\" fill=\"#93278F\" stroke=\"#B3B3B3\" stroke-miterlimit=\"10\" width=\"2\" height=\"9\"/> \n" \
"	</g> \n" \
"</g> \n" \
"</svg> \n" \
"\n"

#define STYLESHEET                                                       \
                                                                         \
"body {\n" \
"  font-family: Verdana, Arial, Helvetica, sans-serif;\n" \
"  font-size: 90%;  \n" \
"  color: #333333;\n" \
"  margin: 2px;\n" \
"  padding: 2px;\n" \
"}\n" \
"\n" \
"#header {\n" \
"    font-size: 90%;\n" \
"    background-color: #eef;\n" \
"    border: 1px solid #aaa;\n" \
"    font-family: Verdana, Arial, Helvetica, sans-serif;\n" \
"    top: 0;\n" \
"    left: 0;\n" \
"    position: fixed;\n" \
"    width: 100%;\n" \
"    padding: 5px;\n" \
"    margin-bottom:20px;\n" \
"}\n" \
"#header input {\n" \
"    margin:0px;\n" \
"    padding: 0;\n" \
"    background-color: White;\n" \
"    border: 1px solid #aaaaaa;\n" \
"    font-size: 90%;\n" \
"}\n" \
"\n" \
"#footer {\n" \
"    font-size: 10px;\n" \
"    color: #ddd;\n" \
"    margin-top:40px;\n" \
"    width: 100%;\n" \
"    text-align: center;\n" \
"}\n" \
"table.wikitable { background-color: #fff; border: 1px solid #aaa; }\n" \
"table.wikitable td { background-color: #fff; border: 1px solid #aaa; }\n" \
"\n" \
"pre {\n" \
"    font-family: monospace;\n" \
"    background-color: #eee;\n" \
"    padding: 2px;\n" \
"    padding-left: 10px;\n" \
"    margin-left: 20px;\n" \
"    margin-right: 20px;\n" \
"}\n" \
"\n" \
"hr {\n" \
" height: 1px;\n" \
" color: #aaaaaa;\n" \
" background-color: #aaaaaa;\n" \
" border: 0;\n" \
" margin: 0.2em 5px 0.2em 5px;\n" \
"}\n" \
"\n" \
"form {\n" \
"    border: none;\n" \
"    margin: 0;\n" \
"}\n" \
"\n" \
"textarea {\n" \
"    border: 1px solid #aaaaaa;\n" \
"    color: Black;\n" \
"    background-color: white;\n" \
"    width: 100%;\n" \
"    padding: 0.1em;\n" \
"    overflow: auto;\n" \
"}\n" \
"\n" \
"input {\n" \
"    margin-top:1px;\n" \
"    padding: 0 0.4em !important;\n" \
"    background-color: White;\n" \
"    border: 1px solid #aaaaaa;\n" \
"}\n" \
"\n" \
"a, ulink{\n" \
"   color: #333;\n" \
"   text-decoration:none;\n" \
"   border-bottom: 1px #333 dotted;\n" \
"   display: inline;\n" \
" }\n" \
"\n" \
"a:hover {\n" \
"   color: #333;\n" \
"   text-decoration: None;\n" \
"   border-bottom: 1px #000 solid;\n" \
"   }\n" \
"\n" \
"a:visited {\n" \
"   color: #333;\n" \
"}\n" \
"\n" \
"#wrapper {\n" \
"text-align:left;\n" \
"margin:0 auto;\n" \
"display: inline-block;\n" \
"min-height:10px;\n" \
"border:1px solid #ccc;\n" \
"padding:5px;\n" \
"}\n" \
"\n" \
"#myvar {\n" \
"border:1px solid #ccc;\n" \
"background:#f2f2f2;\n" \
"padding:5px;\n" \
"}\n" \
".toc { \n" \
"background-color: #eff;\n" \
"border: 1px dotted #aaa;\n" \
"margin: 5em;\n" \
"}\n" \
"h1 { \n" \
"	text-align : center; \n" \
"} \n" \
" \n" \
"h3, h4, h5 { \n" \
"	margin-left: 1em; \n" \
"} \n" \
"\n" 


/* use xxd -i favicon.png to generate 
 * png favicon is ok with Firefox >=1.0, Chrome, Opera >=7.0, Safari >=4.0
 * png favicon is ok with IE >= 11 */
#define FAVICONDATAMAX 1024 //enough memory to load favicon.ico file (wiki_init() in wiki.c)
unsigned char FaviconData[FAVICONDATAMAX+1] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
  0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
  0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08, 0x64,
  0x88, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b,
  0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00,
  0x00, 0x1d, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e,
  0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69,
  0x74, 0x68, 0x20, 0x54, 0x68, 0x65, 0x20, 0x47, 0x49, 0x4d, 0x50, 0xef,
  0x64, 0x25, 0x6e, 0x00, 0x00, 0x00, 0x70, 0x49, 0x44, 0x41, 0x54, 0x38,
  0x8d, 0xc5, 0x52, 0xc1, 0x11, 0x80, 0x30, 0x08, 0x33, 0x9c, 0x13, 0x74,
  0xff, 0x19, 0xbb, 0x02, 0xbe, 0xea, 0x21, 0x26, 0xa0, 0xe7, 0xc3, 0x7c,
  0x5a, 0x52, 0x9a, 0xd2, 0x00, 0xa6, 0xbb, 0x6f, 0x1f, 0xb0, 0x33, 0x72,
  0x00, 0xe7, 0x7e, 0x36, 0xfa, 0x37, 0x81, 0x01, 0xd0, 0x4b, 0x8a, 0x37,
  0xf5, 0x72, 0x86, 0xaa, 0xc4, 0x28, 0x4b, 0xa0, 0xc4, 0x2f, 0x02, 0xdd,
  0x7f, 0x19, 0xc0, 0xba, 0x90, 0x4d, 0xac, 0x4c, 0xa5, 0x02, 0x6f, 0xf0,
  0xd8, 0x83, 0x52, 0x20, 0x1b, 0xb4, 0xe2, 0x6e, 0x6d, 0x2b, 0x50, 0xa6,
  0x46, 0xbe, 0x9c, 0x83, 0x18, 0xc7, 0x41, 0xa2, 0x15, 0xac, 0x04, 0xd5,
  0x6f, 0x75, 0x66, 0x31, 0xa1, 0x2a, 0x5b, 0xe1, 0xff, 0x36, 0x1e, 0x5a,
  0xb4, 0x3a, 0x45, 0x1e, 0x2f, 0xe4, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x49,
  0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};
unsigned int FaviconDataLen = 247;

#endif

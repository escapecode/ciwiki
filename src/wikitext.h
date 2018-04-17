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
"<a href='Create' title='Create a new wiki page by title. [alt-c]' accesskey='c'>Add</a> | \n"    \
"<a href='WikiHelp' title='Get help on wiki usage and formatting.'>Help</a>  \n"    \
"<input type='text' name='expr' size='15' placeholder='search for word(s)' title='Enter text to search for and press return.' /> </td>\n"  \
"</tr>\n"                                                                \
"</table>\n"                                                             \
"</form>\n"                                                              \
"</div>\n"                                                               \
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
"<a href='Create' title='Create a new wiki page by title. [alt-c]' accesskey='c'>New</a> | \n"                                         \
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
"<p><a href='NewAccount'>New user? Please create a new account.</a></p>\n" \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n"                                                                 \
"<td align='right'>User name:</td>"                                      \
"<td align='left'><input type='text' name='username' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>Password:</td>"                                       \
"<td align='left'><input type='password' name='password' /></td>\n"        \
"</tr><tr>\n"                                                           \
"<td></td><td align='left'><input type='submit' value='Login' /></td>\n" \
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
"<p>Please choose your user name, your password and enter a valid email address.<br>" \
"You will receive your validation code on your email</p>\n" \
"<form method=POST action='Login'>\n"                                  \
"<table border='0' width='100%%'>\n"                                      \
"<tr>\n" \
"<td align='right'>User name:</td>"                                      \
"<td align='left'><input type='text' name='username' /></td>\n"         \
"</tr><tr>\n"                                                           \
"<td align='right'>Password:</td>"                                       \
"<td align='left'><input type='text' name='password' /></td>\n"        \
"</tr><tr>\n"                                                           \
"<td align='right'>Your Email:</td>"                                     \
"<td align='left'><input type='text' name='email' /></td>\n"  \
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
"Please refer to Github to see a list of development contributers. \n" \
"=Quick Overview \n"                                                    \
"===Creating Webpages Quickly and Easily \n" \
"!CiWiki allows you to type in short lines of text to automatically format a page. \n" \
"For example, you can do something as easy like typing /!youtube=link / to have a Youtube video appear on your page. \n" \
"===Finding a !CiWiki page \n" \
"In the upper right is a search box.  Any word(s) entered will be searched for amongst all of the text of all of the pages\n" \
"\n"                                                                     \
"To search through the page titles only, click on the /Index/ link on the top menu. \n" \
"Since all of the /Page/ titles are visible, you can than use your browser's built in search, keys (e.g. <ctrl><f>) \n"           \
"\n"                                                                     \
"Use the WikiSandbox to practice formatting.\n"                         \
"=Using Key Tags to Format Articles \n"                                                                     \
"==Headings \n" \
"An /=/ character creates headings.  The number of /=/ represents the heading level \n"                                                    \
"The formatting for the area you are reading now uses the following headings \n" \
" =Formatting\n"                                                   \
" ==Headings\n"                                        \
" ==Horizontal line\n"                                        \
"==Horizonal line\n"                                                 \
" -- will create a horizontal line\n"                                                                 \
"--\n"                                                                 \
"==Text \n" \
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
"===Quotation \n" \
"Indented quotatiopjns begin with ' \n"                                             \
"\n"                                                                     \
" 'I had a monumental idea this morning, but I didn't like it\n"         \
"'I had a monumental idea this morning, but I didn't like it \n"          \
"===Keywords\n" \
" use /`/ to make a keyword\n" \
" There is a `keyword` in this line.\n" \
"There is a `keyword` in this line.\n" \
"\n" \
"===Color \n"                                                                 \
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
"h1 { \n" \
"	text-align : center; \n" \
"} \n" \
" \n" \
"h2, h3, h4, h5 { \n" \
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

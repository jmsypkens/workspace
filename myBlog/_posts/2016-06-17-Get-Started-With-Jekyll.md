---
layout: post
title:  Getting Started with Jekyll 
date:   2016-06-17 00:01:00 +0000
categories: html, jekyll
comments: true 
---

### Getting Started With Jekyll 

##### By: Jerry Sypkens

I learned how to use Jekyll to create my own blog out of frustration with 
third party blogs. I like Jekyll because it allows you to blog like a programmer.
Essetially, once you have everything set up you can use Github as a CMS to upload 
new post and edit pages on your new blog. 

+ Setting Up Jekyll:    
    + I use [Cloud 9](c9.io) to make this blog with Jekyll.
    + Using the terminal, install jekyll. 
    + Create a new blog site, you can use your own name in place of 'my-awesome-site'.
    + use 'jekyll serve' to run a server of your compiled site.
    + If you are using C9, you will get an error to add your port "--host $IP --port $PORT" 
    + Using '--watch' automatically regenerates your pages upon saved changes. 
    + [More Documentation on Jekyll](https://jekyllrb.com/docs/usage/ "Jekyll Documentation")
        
```bash
    $ gem install jekyll
    $ jekyll new my-awesome-site
    $ cd my-awesome-site
    $ jekyll serve --host $IP --port $PORT --watch
```
    
+ Directory Structure:
    + Once you install Jekyll and create a new site, your directory of folders should look something like this:

```
.
├── _config.yml
├── _drafts
|   ├── begin-with-the-crazy-ideas.textile
|   └── on-simplicity-in-technology.markdown
├── _includes
|   ├── footer.html
|   └── header.html
├── _layouts
|   ├── default.html
|   └── post.html
├── _posts
|   ├── 2007-10-29-why-every-programmer-should-play-nethack.textile
|   └── 2009-04-26-barcamp-boston-4-roundup.textile
├── _data
|   └── members.yml
├── _site
├── .jekyll-metadata
└── index.html
```


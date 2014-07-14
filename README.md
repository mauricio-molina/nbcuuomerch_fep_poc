nbcuuomerch_fep_poc
===================
#Frontend Prototyper
For documentation on installing the dependencies (Bundler and Node), consult either of these docs:
* https://github.com/e2tha-e/frontend-prototyper-poc/blob/master/README.md
* https://github.com/NBCUOTS/Publisher7_nbcuuomerch/wiki/Frontend-Prototyper

Or just install Bundler with Gem, Node with your preferred OS-specific package manager (Aptitude, Homebrew, etc.), and Grunt with NPM. Then, just...
###Launch Grunt with Bundler
```bash
$ cd nbcuuomerch_fep_poc/patternlab-php/source
$ bundle exec grunt
```
###Launch Pattern Lab in browser
* In a file browser, navigate to frontend-prototyper-poc/patternlab-php/public
* Double-click index.html

Grunt should be running the watching and auto-reloading tasks. Changes to the code should be immediately viewable in the browser on save. Make all your changes in frontend-prototyper-poc/patternlab-php/source. **DO NOT HACK CORE!**
###Inflate Drupal instance
There is a vanilla Drupal instance in backend/publisher_placeholder/docroot. Inflate this the normal way, and point a local URL to the docroot.
###FEP HTML Scraper
Create a symbolic link in the document root of your backend webapp to fep-html-scraper.php. Git ignore this link.

Use this tool to scrape and import the HTML outputted by the backend of your webapp. Your webapp should be installed into the backend directory of Frontend Prototyper. From there, your webapp should be served by your web server. Enter the URL of the backend page you wish to prototype and submit. If the output looks correct, enter a filename and submit. This scraper will save the HTML to a Mustache template of that name in Pattern Lab. Be sure your template directory is writable by your web server! To access that template in Pattern Lab, navigate to that filename in the Pages menu of the toolbar.

Use the usual http:// scheme instead of Pattern Lab's file:// scheme to load this scraper in a browser.
###Workflow
* Enter the URL of the backend page you wish to style into the Scraper.
* Submit the HTML to be ingested into Pattern Lab.
* Navigate to the template generated within Pattern Lab.
* Style the template.
* Add js to the template if required.
* The compiled css, raw js, and minified js will be copied to the backend in the background.
* JSHint will be running in the tab where Grunt is running. You can use this to debug your js.

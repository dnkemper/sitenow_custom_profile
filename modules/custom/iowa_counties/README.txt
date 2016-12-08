-- SUMMARY --

The Iowa Counties module is a Drupal feature that creates a 'Counties'
vocabulary. It then imports all 99 Iowa counties as taxonomy terms in that
vocabuary via the included XML file.


-- REQUIREMENTS --

* Ctools - http://drupal.org/project/ctools
* Features - http://drupal.org/project/features
* Feeds - http://drupal.org/project/feeds
* Feeds XPath Parser - http://drupal.org/project/feeds_xpathparser


-- INSTALLATION --

* Install as usual, see
  http://drupal.org/documentation/install/modules-themes/modules-7


-- USAGE --

* Navigate to http://example.com/import and click the Iowa Counties Feed
  importer.

* No configuration is necessary as the URL of the XML file is populated
  automagically and cannot be changed.

The feed will import once. The importer can be disabled after the initial import
since it's highly unlikely that this feed will need to be updated any time soon.


-- SUPPORT --

Current maintainers:
* Brandon Neil (bneil) - https://drupal.org/user/586386

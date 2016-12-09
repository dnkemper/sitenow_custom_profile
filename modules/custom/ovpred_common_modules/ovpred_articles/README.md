# OVPRED Articles
Provides a standard set of news functionality for the OVPRED sites. Supports
articles created locally (original content or a repost from an external source)
and imported content from IowaNow (which may be original content or a repost
from an external source). Users can override the image that is imported.
Articles from IowaNow or an external source link directly to that source. Also
provides OVPRED List view mode, an image style for use in the Teaser view
mode, and a vocabulary for tags.

## OVPRED Article Views
Provides four views for articles, an page of Teaser view mode with 'Month Year'
 block for filtering articles; a pane of Teaser view mode (user can configured
the number of articles that are included, filter for 'Promote to Front', and/or
filter by tag); and pane of the OVPRED List view mode with the same options as
Teaser pane; and a RSS feed located at /news.xml.

## OVPRED Article Feeds
Provides one feed importer for articles from IowaNow.


## Notes
* The Article feature may be overridden if you have view modes in your site that
 have not had OVPRED Article content type excluded.
* There may be a namespace collision with the label for an older news content
type. You will need to rename you older content type and should also remove
permissions to create that content type.

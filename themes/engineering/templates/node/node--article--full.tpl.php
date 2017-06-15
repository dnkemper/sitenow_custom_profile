<?php

/**
 * @file
 * Radix theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
hide($content['comments']);
hide($content['links']);
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-meta">
    <span><?php print render($content['article_post_date']); ?></span>
    <?php if (isset($content['field_primary_department'])): ?>
      <span class="sepearator">|</span>
      <span><?php print render($content['field_primary_department']); ?></span>
    <?php endif; ?>
  </div>

  <div class="row">
    <div class="col-md-8">
      <div class="content"<?php print $content_attributes; ?>>
        <div class="author-info">
          <?php print render($content['field_author']); ?>
          <?php print render($content['field_article_source']); ?>
        </div>
        <?php print render($content['body']); ?>
      </div>
    </div>
    <div class="col-md-4">
      <?php print render($content['field_image']); ?>
      <?php print render($content['field_image_caption']); ?>
    </div>
  </div>

</article>

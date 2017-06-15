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
  <?php print render($content['field_image']); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if (!$page && !empty($title)): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php print render($content['field_honor_note']); ?>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php print render($content); ?>
  </div>

</article>

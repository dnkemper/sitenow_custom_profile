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
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($content['field_image']);?>
  <?php print render($content['field_external_image']); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if (!$page && !empty($title)): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

    <?php print render($content['links']); ?>
    <?php print render($content['comments']); ?>
  </div>

</article>

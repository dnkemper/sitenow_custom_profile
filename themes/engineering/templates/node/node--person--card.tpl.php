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
      <?php print render($content['person_main_title']); ?>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div class="btn-group" role="group">
      <?php print render($content['field_email']); ?>
      <?php print render($content['field_phone']); ?>
      <?php print render($content['field_office']); ?>
      <a href="<?php print $node_url; ?>" class="btn btn-primary"><i class="fa fa-user" aria-hidden="true"></i></a>
    </div>

    <?php print render($content); ?>

  </div>

</article>

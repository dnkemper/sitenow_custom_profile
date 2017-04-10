<?php

/**
 * @file
 * OVPRED article tags template.
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <span class="field__label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</span>
  <?php endif; ?>
  <span class="field__items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item) : ?>
      <span class="field__item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
        <?php
          print render($item);
          // Add comma if not last item.
          if ($delta < (count($items) - 1)) {
            print ',';
          }
        ?>
      </span>
    <?php endforeach; ?>
  </span>
</div>

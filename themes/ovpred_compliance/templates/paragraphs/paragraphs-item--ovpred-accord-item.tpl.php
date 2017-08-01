<?php

/**
 * @file
 * Theme implementation for a single paragraph accordion item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="accordion-item">
  <div class="accordion-heading" role="tab" id="accord-header-id-<?php print $id; ?>">
    <div class="accordion-title">
      <a role="button" data-toggle="collapse" data-parent="#accordion" href="#accord-content-id-<?php print $id; ?>" aria-expanded="false" aria-controls="accord-content-id-<?php print $id; ?>">
        <?php print render($content['field_para_title']); ?>
      </a>
    </div>
  </div>
  <div id="accord-content-id-<?php print $id; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="accord-header-id-<?php print $id; ?>">
    <div class="accordion-body">
      <?php print render($content['field_para_body']); ?>
    </div>
  </div>
</div>

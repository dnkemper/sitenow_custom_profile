<?php

/**
 * @file
 * Default simple view template to display a group of summary lines.
 *
 * This wraps items in a span if set to inline, or a div if not.
 *
 * @ingroup views_templates
 */
?>
<div class="btn-group btn-group-sm" role="group" aria-label="...">
<?php foreach ($rows as $id => $row): ?>
  <?php if ($row->count > 0): ?>
      <a href="<?php print $row->url; ?>" class="<?php print $row_classes[$id]; ?>" data-toggle="tooltip" data-placement="bottom" title="<?php print $row->count; ?>"><?php print $row->link; ?></a>
  <?php else: ?>
    <span class="btn btn-default" disabled="disabled"><?php print $row->link; ?></span>
  <?php endif; ?>
<?php endforeach; ?>
</div>

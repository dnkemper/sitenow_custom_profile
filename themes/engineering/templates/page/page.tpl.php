<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>

<header id="header" class="header page-header" role="header">
  <div class="container-smooth">
    <nav class="header-navbar" role="navigation">
      <!-- Branding -->
      <?php if ($logo || $site_name || $site_slogan): ?>
        <a href="<?php print $front_page; ?>" class="navbar-branding" rel="home" title="<?php print t('Home'); ?>">
          <?php if ($logo): ?>
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" id="site-logo" class="site-logo" />
          <?php endif; ?>
          <?php if ($site_name): ?>
            <h1 class="site-name"><?php print $site_name; ?></h1>
          <?php endif; ?>
          <?php if ($site_slogan): ?>
            <span class="site-slogan"><?php print $site_slogan; ?></span>
          <?php endif; ?>
        </a>
      <?php endif; ?>
      <?php if ($page['main_nav']): ?>
        <?php print render($page['main_nav']); ?>
      <?php endif; ?>
    </nav><!-- /.navbar -->

    <?php if ($breadcrumb || $title || !empty($tabs) || $action_links || $messages || $page['header']): ?>
      <div class="main-header">
        <?php if ($action_links): ?>
          <ul id="action-items" class="action-links alert alert-info">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
        <?php if ($messages): ?>
          <div id="messages" class="messages">
            <?php print $messages; ?>
          </div>
        <?php endif; ?>
        <?php if ($tabs): ?>
          <div id="primary-tabs" class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

  </div> <!-- /.container-smooth -->
</header>

<div class="page-title-breadcrumbs <?php print $page_title_type_classes; ?>">
  <?php if ($page_title_type == 'hero'): ?>
    <div class="pos-abs bg-img opacity-7"></div>
    <div class="pos-abs pattern-overlay dots opacity-9"></div>
  <?php endif; ?>
  <div class="container-smooth">
    <div>
      <?php if ($breadcrumb): ?>
        <div id="breadcrumbs" class="breadcrumbs">
          <?php print $breadcrumb; ?>
        </div>
      <?php endif; ?>
      <?php if ($title): ?>
        <h1 id="page-title" class="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php if ($page['header']): ?>
        <?php print render($page['header']); ?>
      <?php endif; ?>
    </div>
  </div>
</div>

<div id="main-wrapper">
  <div id="main" class="main" role="main">
    <div class="<?php print $content_classes; ?>">
      <div class="row">
        <?php print render($page['content']); ?>
        <?php print render($page['sidebar']); ?>
      </div>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->



<footer id="footer" class="footer" role="footer">
  <div class="container-smooth">
    <?php if ($page['footer']): ?>
      <?php print render($page['footer']); ?>
    <?php endif; ?>
    <?php print theme('engineering_shared_footer_block'); ?>
  </div>
</footer>

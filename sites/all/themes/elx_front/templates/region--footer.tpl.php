<?php
/**
 * @file
 * Returns the HTML for the footer region.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728140
 */
?>
<?php if ($content): ?>
  <footer class="footer <?php print $classes; ?>" role="contentinfo">
    <div class="layout-center">
    <?php print $content; ?>
    </div>
  </footer>
<?php endif; ?>

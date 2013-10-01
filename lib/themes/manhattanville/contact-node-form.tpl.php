<?php
?>

<fieldset>
<?php print drupal_render($form['field_name']); ?>
<?php print drupal_render($form['field_email']); ?>
</fieldset>

  <?php hide($form['field_name']); ?>
  <?php hide($form['field_email']); ?>



  <?php print drupal_render_children($form); ?>

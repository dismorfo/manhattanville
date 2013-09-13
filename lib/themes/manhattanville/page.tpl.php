<div class="page">
  <div class="pure-g top">
    <div class="pure-u-1-2">
      <div class="pane left">
      </div>
    </div>
    <div class="pure-u-1-2">
      <div class="pane right">
      </div>
    </div>
  </div>
  <div class="pure-g banner">
    <div class="pure-u-1">
      <div class="l-box"></div>
    </div>
  </div>
  
  <div class="pure-g nav">
    <div class="pure-u-1">
      <div class="pure-menu pure-menu-open pure-menu-horizontal">
        <?php print render($main_menu_tree); ?>
      </div>
    </div>
  </div>
  
  <div class="pure-g">
  	<div class="pure-u-1">
      <?php print render($primary_local_tasks); ?>  		
      <?php if ($messages): ?>
        <div id="console" class="clearfix"><?php print $messages; ?></div>
      <?php endif; ?>
      <?php if ($page['help']): ?>
        <div id="help">
          <?php print render($page['help']); ?>
        </div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
   </div>
  </div>

  <div id="page"  class="pure-g">
    <?php if (isset($active_menu_tree)) : ?>
      <div class="pure-u-1-3">
        <div class="secondary menu"><?php print render($active_menu_tree); ?></div>
     </div>
    <?php endif; ?>
    <div class="pure-u-<?php print (isset($active_menu_tree)) ? '2-3' : '1' ?>">
      <div id="content" class="clearfix">
        <div class="element-invisible"><a id="main-content"></a></div>
          <?php print render($page['content']); ?>
     </div>
  </div>

  <div id="footer">
    <?php print $feed_icons; ?>
  </div>  
  
</div>
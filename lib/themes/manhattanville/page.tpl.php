<div class="main">
  <?php // dpm() ?>
  <div class="pure-g top">
    <div class="pure-u-1">
      <div class="pure-g columbia">
        <div class="pure-u-1-2">
          <div class="pane left">
          </div>
        </div>
        <div class="pure-u-1-2">
          <div class="pane right">
            <?php print render($manhattanville_search_widget) ?>
          </div>
        </div>
      </div>
      <div class="pure-g brand">
        <div class="pure-u">
          <div class="pane site-logo">
            <h1 class="element-invisible"><?php print $site_name ?></h1>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="banner"></div>
  <div class="pure-g nav">
    <div class="pure-u-1">
      <div class="pure-menu pure-menu-open pure-menu-horizontal">
        <?php print render($main_menu_tree); ?>
      </div>
    </div>
  </div>
  <div class="pure-g">
  	<div class="pure-u-1">
      <?php if ($tabs): ?>
          <?php print render($tabs); ?>    
      <?php endif; ?>  		
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
  <div class="pure-g page">
    <?php if (isset($active_menu_tree)) : ?>
      <div class="pure-u secondary">
        <div class="pure-menu pure-menu-open"><?php print render($active_menu_tree); ?></div>
     </div>
    <?php endif; ?>
    <div class="pure-u body">
      <div id="content">
        <div class="element-invisible"><a id="main-content"></a></div>
        <?php if (isset($trail_title)) : ?>
          <h2 class="title"><?php print $trail_title ?></h2>
        <?php endif; ?>
        <?php print render($page['content']); ?>
      </div>
    </div>
  </div>
  <div class="pure-g footer">
  	<div class="pure-u-1">
      <div class="content">
      	<div class="pure-menu pure-menu-open pure-menu-horizontal">
      	  <?php print render($footer_menu_tree); ?>
      	</div>
      	<?php print render($footer_message); ?>
        <?php print $feed_icons; ?>
      </div>  
    </div>
  </div>
  
</div>